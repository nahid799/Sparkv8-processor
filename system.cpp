#include <sys/mman.h>

#include <sys/types.h>

#include <unistd.h>

#include <string.h>

#include <gelf.h>

#include <libelf.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <assert.h>

#include <stdlib.h>

#include <iostream>

#include <arpa/inet.h>

#include <ncurses.h>

#include "system.h"

#include "syscall.h"

#include "Vtop_top.h"

#include "sl.h"



using namespace std;



/**

 * Bus request tag fields

 */

enum {

    READ   = 0b1,

    WRITE  = 0b0,

    MEMORY = 0b0001,

    MMIO   = 0b0011,

    PORT   = 0b0100,

    IRQ    = 0b1110

};



#ifndef be32toh

#define be32toh(x)      ((u_int32_t)ntohl((u_int32_t)(x)))

#endif



static __inline__ u_int64_t cse502_be64toh(u_int64_t __x) { return (((u_int64_t)be32toh(__x & (u_int64_t)0xFFFFFFFFULL)) << 32) | ((u_int64_t)be32toh((__x & (u_int64_t)0xFFFFFFFF00000000ULL) >> 32)); }



/** Current simulation time */

uint64_t main_time = 0;

const int ps_per_clock = 500;

double sc_time_stamp() {

    return main_time;

}



System::System(Vtop* top, unsigned ramsize, const char* ramelf, int ps_per_clock)

    : top(top), ramsize(ramsize), max_elf_addr(0), show_console(false), rx_count(0)

{

    ram = (char*) malloc(ramsize);

    assert(ram);

    

    // load the program image

    if (ramelf) top->entry = load_elf(ramelf);



    // create the dram simulator

    dramsim = DRAMSim::getMemorySystemInstance("DDR2_micron_16M_8b_x8_sg3E.ini", "system.ini", "../dramsim2", "dram_result", ramsize / MEGA);

    DRAMSim::TransactionCompleteCB *read_cb = new DRAMSim::Callback<System, void, unsigned, uint64_t, uint64_t>(this, &System::dram_read_complete);

    DRAMSim::TransactionCompleteCB *write_cb = new DRAMSim::Callback<System, void, unsigned, uint64_t, uint64_t>(this, &System::dram_write_complete);

    dramsim->RegisterCallbacks(read_cb, NULL, NULL);

    dramsim->setCPUClockSpeed(1000ULL*1000*1000*1000/ps_per_clock);

}



System::~System() {

    free(ram);

    

    if (show_console) {

        sleep(2);

        endwin();

    }

}



void System::console() {

    show_console = true;

    if (show_console) {

        initscr();

        start_color();

        noecho();

        cbreak();

        timeout(0);

    }

}



void System::tick(int clk) {

    

    if (top->reset && top->reqcyc) {

        cerr << "Sending a request on RESET. Ignoring..." << endl;

        return;

    }

    

    if (!clk) {

        if (top->reqcyc) {

            // hack: blocks ACK if /any/ memory channel can't accept transaction

            top->reqack = dramsim->willAcceptTransaction();            

            // if trnasfer is in progress, can't change mind about willAcceptTransaction()

            assert(!rx_count || top->reqack); 

        }

        return;

    }



    if (main_time % (ps_per_clock * 1000) == 0) {

        int ch = getch();

        if (ch != ERR) {

            if (!(interrupts & (1<<IRQ_KBD))) {

                interrupts |= (1<<IRQ_KBD);

                tx_queue.push_back(make_pair(IRQ_KBD,(int)IRQ));

                keys.push(ch);

            }

        }

    }



    dramsim->update();    

    if (!tx_queue.empty() && top->respack) tx_queue.pop_front();

    if (!tx_queue.empty()) {

        top->respcyc = 1;

        top->resp = tx_queue.begin()->first;

        top->resptag = tx_queue.begin()->second;

        //cerr << "responding data " << top->resp << " on tag " << std::hex << top->resptag << endl;

    } else {

        top->respcyc = 0;

        top->resp = 0xaaaaaaaaaaaaaaaaULL;

        top->resptag = 0xaaaa;

    }



    if (top->reqcyc) {

        cmd = (top->reqtag >> 8) & 0xf;

        if (rx_count) {

            switch(cmd) {

            case MEMORY:

                *((uint64_t*)(&ram[((xfer_addr&(~63))+((xfer_addr + ((8-rx_count)*8))&63))])) = cse502_be64toh(top->req);    // critical word first

                break;

            case MMIO:

                assert(xfer_addr < ramsize);

                *((uint64_t*)(&ram[xfer_addr])) = top->req;

                if (show_console)

                    if ((xfer_addr - 0xb8000) < 80*25*2) {

                        int screenpos = xfer_addr - 0xb8000;

                        for(int shift = 0; shift < 8; shift += 2) {

                            int val = (cse502_be64toh(top->req) >> (8*shift)) & 0xffff;

                            //cerr << "val=" << std::hex << val << endl;

                            attron(val & ~0xff);

                            mvaddch(screenpos / 160, screenpos % 160 + shift/2, val & 0xff );

                        }

                        refresh();

                    }

                break;

            }

            --rx_count;

            return;

        }

                

        bool isWrite = ((top->reqtag >> 12) & 1) == WRITE;

        if (cmd == MEMORY && isWrite)

            rx_count = 8;

        else if (cmd == MMIO && isWrite)

            rx_count = 1;

        else

            rx_count = 0;

            

        switch(cmd) {

        case MEMORY:

            xfer_addr = top->req;

            assert(!(xfer_addr & 7));

            if (addr_to_tag.find(xfer_addr)!=addr_to_tag.end()) {

               // cerr << "Access for " << std::hex << xfer_addr << " already outstanding. Ignoring..." << endl;

            } else {

                assert(

                    dramsim->addTransaction(isWrite, xfer_addr)

                );

                //cerr << "add transaction " << std::hex << xfer_addr << " on tag " << top->reqtag << endl;

                if (!isWrite) addr_to_tag[xfer_addr] = top->reqtag;

            }

            break;



        case MMIO:

            xfer_addr = top->req;

            assert(!(xfer_addr & 7));

            if (!isWrite) tx_queue.push_back(make_pair(*((uint64_t*)(&ram[xfer_addr])),top->reqtag)); // hack - real I/O takes time

            break;



        default:

            assert(0);

        };

    }

    else {

        top->reqack = 0;

        rx_count = 0;

    }

}



void System::dram_read_complete(unsigned id, uint64_t address, uint64_t clock_cycle) {

    

    map<uint64_t, int>::iterator tag = addr_to_tag.find(address);

    assert(tag != addr_to_tag.end());

    

    for(int i = 0; i < 64; i += 8) {

        //cerr << "fill data from " << std::hex << (address+(i&63)) <<  ": " << tx_queue.rbegin()->first << " on tag " << tag->second << endl;

        tx_queue.push_back(make_pair(cse502_be64toh(*((uint64_t*)(&ram[((address&(~63))+((address+i)&63))]))),tag->second));

    }

    addr_to_tag.erase(tag);

}



void System::dram_write_complete(unsigned id, uint64_t address, uint64_t clock_cycle) {

}



uint64_t System::load_elf(const char* filename) {

    

    // check libelf version

    if (elf_version(EV_CURRENT) == EV_NONE) {

        cerr << "ELF binary out of date" << endl;

        exit(-1);

    }



    // open the elf file

    int fileDescriptor = open(filename, O_RDONLY);

    assert(fileDescriptor != -1);

        

    // start reading the file

    Elf* elf = elf_begin(fileDescriptor, ELF_C_READ, NULL);

    if (NULL == elf) {

        cerr << "Could not initialize the ELF data structures" << endl;

        exit(-1);

    }



    if (elf_kind(elf) != ELF_K_ELF) {

        cerr << "Not an ELF object: " << filename << endl;

        exit(-1);

    }



    // get the elf header

    GElf_Ehdr elf_header;

    gelf_getehdr(elf, &elf_header);

    

    // get program headers

    size_t phnum = elf_header.e_phnum;

    

    // iterate over program headers

    for (unsigned header = 0; header < phnum; header++) {

        

        // get the header data

        GElf_Phdr phdr;

        gelf_getphdr(elf, header, &phdr);

        

        if (PT_LOAD == phdr.p_type) {

            if ((phdr.p_vaddr + phdr.p_memsz) > ramsize) {

                cerr << "Not enough 'physical' ram" << endl;

                exit(-1);

            }

            

            // initialize the memory segment to zero

            memset(ram + phdr.p_vaddr, 0, phdr.p_memsz);

            

            // copy segment content from file to memory

            off_t off = lseek(fileDescriptor, phdr.p_offset, SEEK_SET);

            assert(-1 != off);

            

            size_t len = read(fileDescriptor, (void*)(ram + phdr.p_vaddr), phdr.p_filesz);

            assert(len == phdr.p_filesz);

            

            if (max_elf_addr < (phdr.p_vaddr + phdr.p_filesz))

                max_elf_addr = (phdr.p_vaddr + phdr.p_filesz);



            cerr << "Loaded ELF header #" << header << "."

                 << " offset: "   << phdr.p_offset

                 << " filesize: " << phdr.p_filesz

                 << " memsize: "  << phdr.p_memsz

                 << " vaddr: "    << phdr.p_vaddr

                 << " paddr: "    << phdr.p_paddr

                 << " align: "    << phdr.p_align

                 << endl;

        }

        else if (phdr.p_type == PT_GNU_STACK) {

            // do nothing

        } else if (phdr.p_type == 0x4) {

            // do nothing

        } else {

            cerr << "Unexpected ELF header " << phdr.p_type << endl;

            exit(-1);

        }

    }

    

    // page-align max_elf_addr

    max_elf_addr = ((max_elf_addr + 4095) / 4096) * 4096;

    

    // finalize

    close(fileDescriptor);

    return elf_header.e_entry;

}



/////////////////////////////////////////////////////////////////////////////////

// system call stub

/////////////////////////////////////////////////////////////////////////////////



extern "C" {

    
int32_t Endianswap(int32_t z);


int32_t syscall_cse502(int32_t g1, int32_t o0, int32_t o1, int32_t o2, int32_t o3, int32_t o4, int32_t o5) {



    // NOTE: sl-syscall expects its arguments in little-endian (host machine) format.

    // if you need to convert from big-endian to little-endian, this is the place to 

    // do it.

    // ....

    // FIXME: provide conversion stub here



/*
g1=Endianswap(g1);


o0=Endianswap(o0);

o1=Endianswap(o1);

o2=Endianswap(o2);

o3=Endianswap(o3);

o4=Endianswap(o4);

o5=Endianswap(o5);

*/
//cerr << "system output" << g1;




//cerr<<"g1: "<<g1<<endl<<"o0 "<<std::hex<<o0<<endl<<"o1 "<<std::hex<<o1<<endl<<"o2 "<<o2<<endl<<"o3 "<<o3<<endl<<"o4 "<< o4<<endl<<"o5 "<<o5<<endl;
    return sl_syscall(g1, o0, o1, o2, o3, o4, o5, 0, 0);




}



int32_t Endianswap(int32_t z){

int32_t swapped = ((z>>24)&0xff) | ((z<<8)&0xff0000) |  ((z>>8)&0xff00) |  ((z<<24)&0xff000000);

return swapped;

}



}


