// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vtop::traceInit, &Vtop::traceFull, &Vtop::traceChg, this);
}
void Vtop::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vtop* t=(Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vtop::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop* t=(Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vtop::traceInitThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vtop::traceFullThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtop::traceInitThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declQuad (c+417,"entry",-1,63,0);
	vcdp->declBit  (c+419,"reset",-1);
	vcdp->declBit  (c+420,"clk",-1);
	vcdp->declQuad (c+421,"req",-1,63,0);
	vcdp->declBus  (c+423,"reqtag",-1,12,0);
	vcdp->declQuad (c+424,"resp",-1,63,0);
	vcdp->declBus  (c+426,"resptag",-1,12,0);
	vcdp->declBit  (c+427,"reqcyc",-1);
	vcdp->declBit  (c+428,"respcyc",-1);
	vcdp->declBit  (c+429,"reqack",-1);
	vcdp->declBit  (c+430,"respack",-1);
	vcdp->declBus  (c+431,"v DATA_WIDTH",-1,31,0);
	vcdp->declBus  (c+432,"v TAG_WIDTH",-1,31,0);
	vcdp->declQuad (c+417,"v entry",-1,63,0);
	vcdp->declBit  (c+419,"v reset",-1);
	vcdp->declBit  (c+420,"v clk",-1);
	vcdp->declQuad (c+189,"v req",-1,63,0);
	vcdp->declBus  (c+191,"v reqtag",-1,12,0);
	vcdp->declQuad (c+424,"v resp",-1,63,0);
	vcdp->declBus  (c+426,"v resptag",-1,12,0);
	vcdp->declBit  (c+192,"v reqcyc",-1);
	vcdp->declBit  (c+428,"v respcyc",-1);
	vcdp->declBit  (c+429,"v reqack",-1);
	vcdp->declBit  (c+2,"v respack",-1);
	// Tracing: v uncore_bus__Viftop // Ignored: Verilator trace_off at top.sv:15
	vcdp->declQuad (c+417,"v core entry",-1,63,0);
	// Tracing: v core bus // Ignored: Unsupported: data type at Core.sv:6
	vcdp->declBus  (c+384,"v core fetch_state",-1,31,0);
	vcdp->declQuad (c+385,"v core fetch_rip",-1,63,0);
	vcdp->declQuad (c+387,"v core decode_rip",-1,63,0);
	vcdp->declBus  (c+389,"v core fetch_skip",-1,5,0);
	vcdp->declBus  (c+402,"v core fetch_offset",-1,6,0);
	vcdp->declBus  (c+390,"v core decode_offset",-1,6,0);
	vcdp->declBus  (c+433,"v core prev_fetch_offset",-1,6,0);
	vcdp->declBus  (c+82,"v core fetch_offset_temp",-1,6,0);
	vcdp->declBus  (c+83,"v core decode_offset_temp",-1,6,0);
	vcdp->declArray(c+107,"v core decode_buffer",-1,0,1023);
	vcdp->declBit  (c+401,"v core send_fetch_req",-1);
	vcdp->declBus  (c+431,"v core ACT_ADDR_WIDTH",-1,31,0);
	vcdp->declBus  (c+434,"v core ADDR_WIDTH",-1,31,0);
	vcdp->declBus  (c+435,"v core DATA_WIDTH",-1,31,0);
	vcdp->declBus  (c+436,"v core WORD_SIZE",-1,31,0);
	vcdp->declBus  (c+403,"v core reg_used",-1,31,0);
	vcdp->declBus  (c+68,"v core psr",-1,31,0);
	vcdp->declBus  (c+404,"v core wim",-1,31,0);
	// Tracing: v core regs // Ignored: Wide memory > --trace-max-array ents at Core.sv:44
	vcdp->declBus  (c+69,"v core cwp",-1,31,0);
	vcdp->declBus  (c+70,"v core oreg_start",-1,31,0);
	vcdp->declBit  (c+72,"v core N",-1);
	vcdp->declBit  (c+73,"v core Z",-1);
	vcdp->declBit  (c+74,"v core C",-1);
	vcdp->declBit  (c+75,"v core V",-1);
	vcdp->declBit  (c+268,"v core icache_bus_req",-1);
	vcdp->declBit  (c+193,"v core icache_bus_reqack",-1);
	vcdp->declBit  (c+269,"v core dcache_bus_req",-1);
	vcdp->declBit  (c+318,"v core dcache_bus_reqack",-1);
	vcdp->declBit  (c+270,"v core dcache_bus_rw",-1);
	vcdp->declArray(c+271,"v core dcache_bus_data_out",-1,511,0);
	vcdp->declArray(c+52,"v core dcache_bus_data_in",-1,511,0);
	vcdp->declQuad (c+287,"v core dcache_bus_line_addr",-1,57,0);
	vcdp->declArray(c+20,"v core icache_bus_data_out",-1,511,0);
	vcdp->declBit  (c+194,"v core icache_bus_task_comp",-1);
	vcdp->declBit  (c+319,"v core dcache_bus_task_comp",-1);
	vcdp->declBit  (c+162,"v core icache_comp",-1);
	vcdp->declBit  (c+195,"v core icache_req",-1);
	vcdp->declQuad (c+391,"v core icache_line_addr",-1,57,0);
	vcdp->declBus  (c+139,"v core icache_set_index",-1,3,0);
	vcdp->declArray(c+163,"v core icache_data_out",-1,511,0);
	vcdp->declBit  (c+320,"v core dcache_req",-1);
	vcdp->declQuad (c+321,"v core dcache_line_addr",-1,57,0);
	vcdp->declBit  (c+355,"v core dcache_reqack",-1);
	vcdp->declBit  (c+323,"v core dcache_rw",-1);
	vcdp->declBus  (c+289,"v core dcache_data_out",-1,31,0);
	vcdp->declBus  (c+324,"v core dcache_data_in",-1,31,0);
	vcdp->declBit  (c+356,"v core dcache_comp",-1);
	vcdp->declBus  (c+325,"v core dcache_word_select",-1,3,0);
	vcdp->declBus  (c+326,"v core dcache_set_index",-1,3,0);
	vcdp->declBit  (c+140,"v core branch_flag",-1);
	vcdp->declArray(c+141,"v core temp",-1,511,0);
	vcdp->declBus  (c+157,"v core word_counter",-1,31,0);
	vcdp->declArray(c+405,"v core decoded_val",-1,151,0);
	vcdp->declBit  (c+17,"v core fetch_offset_wrap",-1);
	vcdp->declBit  (c+18,"v core decode_offset_wrap",-1);
	vcdp->declBit  (c+393,"v core branch_taken",-1);
	vcdp->declBit  (c+410,"v core decode_ack",-1);
	vcdp->declBit  (c+19,"v core can_decode",-1);
	vcdp->declBus  (c+437,"v core bytes_decoded_this_cycle",-1,3,0);
	vcdp->declBit  (c+394,"v core alu_working",-1);
	vcdp->declBus  (c+357,"v core rd",-1,31,0);
	vcdp->declBus  (c+358,"v core destination",-1,31,0);
	vcdp->declBus  (c+84,"v core alu_val",-1,31,0);
	vcdp->declBit  (c+395,"v core go_to_sys",-1);
	vcdp->declBus  (c+359,"v core op",-1,1,0);
	vcdp->declBit  (c+158,"v core go_to_call",-1);
	vcdp->declQuad (c+360,"v core new_fetch_rip",-1,57,0);
	vcdp->declBit  (c+362,"v core branch_taken_ch",-1);
	vcdp->declBit  (c+396,"v core go_to_mem",-1);
	vcdp->declBit  (c+397,"v core go_to_nonsense",-1);
	vcdp->declBit  (c+398,"v core go_to_branch",-1);
	vcdp->declBit  (c+399,"v core go_to_save",-1);
	vcdp->declBit  (c+161,"v core alu_req",-1);
	vcdp->declBit  (c+159,"v core alu_reqack",-1);
	vcdp->declBus  (c+363,"v core source1",-1,31,0);
	vcdp->declBus  (c+364,"v core source2",-1,31,0);
	vcdp->declBus  (c+365,"v core op3",-1,5,0);
	vcdp->declBit  (c+327,"v core go_to_memory",-1);
	vcdp->declBus  (c+85,"v core alu_val_temp",-1,31,0);
	vcdp->declBit  (c+160,"v core ready_for_wb",-1);
	vcdp->declBit  (c+400,"v core go_to_wb",-1);
	vcdp->declBus  (c+328,"v core byte_select",-1,1,0);
	vcdp->declBit  (c+329,"v core byte_access",-1);
	vcdp->declBus  (c+330,"v core mem_state",-1,31,0);
	vcdp->declBit  (c+179,"v core icache_reqack",-1);
	vcdp->declBit  (c+86,"v core alu_busy",-1);
	vcdp->declBit  (c+87,"v core alu_done",-1);
	vcdp->declBit  (c+88,"v core Y",-1);
	vcdp->declBit  (c+89,"v core tag_overflow",-1);
	vcdp->declBit  (c+90,"v core trap",-1);
	vcdp->declBus  (c+411,"v core unnamedblk1 i",-1,31,0);
	vcdp->declBus  (c+412,"v core unnamedblk1 unnamedblk2 j",-1,31,0);
	vcdp->declBit  (c+420,"v core IC clk",-1);
	vcdp->declBit  (c+419,"v core IC reset",-1);
	vcdp->declBit  (c+195,"v core IC req",-1);
	vcdp->declBit  (c+179,"v core IC reqack",-1);
	vcdp->declQuad (c+391,"v core IC line_addr",-1,57,0);
	vcdp->declArray(c+163,"v core IC data_out",-1,511,0);
	vcdp->declBit  (c+162,"v core IC task_comp",-1);
	vcdp->declBus  (c+139,"v core IC set_index",-1,3,0);
	vcdp->declBit  (c+268,"v core IC bus_req",-1);
	vcdp->declBit  (c+193,"v core IC bus_reqack",-1);
	vcdp->declQuad (c+391,"v core IC bus_req_addr",-1,57,0);
	vcdp->declArray(c+20,"v core IC bus_data_in",-1,511,0);
	vcdp->declBit  (c+194,"v core IC bus_task_comp",-1);
	vcdp->declBus  (c+431,"v core IC ACT_ADDR_WIDTH",-1,31,0);
	vcdp->declBus  (c+434,"v core IC ADDR_WIDTH",-1,31,0);
	vcdp->declBus  (c+435,"v core IC DATA_WIDTH",-1,31,0);
	vcdp->declBus  (c+438,"v core IC TAG_WIDTH",-1,31,0);
	vcdp->declBus  (c+439,"v core IC log_num_rows",-1,31,0);
	vcdp->declBus  (c+440,"v core IC log_num_sets",-1,31,0);
	vcdp->declBus  (c+435,"v core IC WORD_SIZE",-1,31,0);
	vcdp->declBus  (c+439,"v core IC INDEX_WIDTH",-1,31,0);
	vcdp->declArray(c+196,"v core IC data_r",-1,511,0);
	vcdp->declBus  (c+290,"v core IC data_en",-1,0,0);
	vcdp->declArray(c+291,"v core IC data_w",-1,511,0);
	vcdp->declQuad (c+212,"v core IC tag_r",-1,53,0);
	vcdp->declQuad (c+180,"v core IC tag_w",-1,53,0);
	vcdp->declBit  (c+182,"v core IC tag_en",-1);
	vcdp->declBit  (c+214,"v core IC state_r",-1);
	vcdp->declBit  (c+183,"v core IC state_w",-1);
	vcdp->declBit  (c+184,"v core IC state_en",-1);
	vcdp->declBus  (c+215,"v core IC age_r",-1,31,0);
	vcdp->declBus  (c+3,"v core IC age_w",-1,31,0);
	vcdp->declBit  (c+4,"v core IC age_en",-1);
	vcdp->declBit  (c+185,"v core IC hit",-1);
	vcdp->declBit  (c+5,"v core IC update_done",-1);
	vcdp->declBus  (c+6,"v core IC index",-1,8,0);
	vcdp->declBus  (c+7,"v core IC max_index",-1,8,0);
	vcdp->declBus  (c+8,"v core IC max_age",-1,31,0);
	vcdp->declBus  (c+186,"v core IC set_counter",-1,4,0);
	vcdp->declBus  (c+9,"v core IC check_counter",-1,4,0);
	vcdp->declBus  (c+187,"v core IC cache_state",-1,31,0);
	vcdp->declBit  (c+420,"v core IC data clk",-1);
	vcdp->declBit  (c+419,"v core IC data reset",-1);
	vcdp->declBus  (c+6,"v core IC data readAddr",-1,8,0);
	vcdp->declArray(c+196,"v core IC data readData",-1,511,0);
	vcdp->declBus  (c+6,"v core IC data writeAddr",-1,8,0);
	vcdp->declArray(c+291,"v core IC data writeData",-1,511,0);
	vcdp->declBus  (c+290,"v core IC data writeEnable",-1,0,0);
	vcdp->declBus  (c+435,"v core IC data WIDTH",-1,31,0);
	vcdp->declBus  (c+439,"v core IC data LOG_NUM_ROWS",-1,31,0);
	vcdp->declBus  (c+435,"v core IC data WORD_SIZE",-1,31,0);
	vcdp->declBus  (c+435,"v core IC data NUM_ROWS",-1,31,0);
	// Tracing: v core IC data mem // Ignored: Wide memory > --trace-max-array ents at SRAM.sv:15
	vcdp->declBus  (c+216,"v core IC data i",-1,31,0);
	vcdp->declBit  (c+420,"v core IC tag clk",-1);
	vcdp->declBit  (c+419,"v core IC tag reset",-1);
	vcdp->declBus  (c+6,"v core IC tag readAddr",-1,8,0);
	vcdp->declQuad (c+212,"v core IC tag readData",-1,53,0);
	vcdp->declBus  (c+6,"v core IC tag writeAddr",-1,8,0);
	vcdp->declQuad (c+180,"v core IC tag writeData",-1,53,0);
	vcdp->declBus  (c+182,"v core IC tag writeEnable",-1,0,0);
	vcdp->declBus  (c+438,"v core IC tag WIDTH",-1,31,0);
	vcdp->declBus  (c+439,"v core IC tag LOG_NUM_ROWS",-1,31,0);
	vcdp->declBus  (c+438,"v core IC tag WORD_SIZE",-1,31,0);
	vcdp->declBus  (c+435,"v core IC tag NUM_ROWS",-1,31,0);
	// Tracing: v core IC tag mem // Ignored: Wide memory > --trace-max-array ents at SRAM.sv:15
	vcdp->declBus  (c+91,"v core IC tag i",-1,31,0);
	vcdp->declBit  (c+420,"v core IC state clk",-1);
	vcdp->declBit  (c+419,"v core IC state reset",-1);
	vcdp->declBus  (c+6,"v core IC state readAddr",-1,8,0);
	vcdp->declBus  (c+214,"v core IC state readData",-1,1,0);
	vcdp->declBus  (c+6,"v core IC state writeAddr",-1,8,0);
	vcdp->declBus  (c+188,"v core IC state writeData",-1,1,0);
	vcdp->declBus  (c+184,"v core IC state writeEnable",-1,0,0);
	vcdp->declBus  (c+441,"v core IC state WIDTH",-1,31,0);
	vcdp->declBus  (c+439,"v core IC state LOG_NUM_ROWS",-1,31,0);
	vcdp->declBus  (c+441,"v core IC state WORD_SIZE",-1,31,0);
	vcdp->declBus  (c+435,"v core IC state NUM_ROWS",-1,31,0);
	// Tracing: v core IC state mem // Ignored: Wide memory > --trace-max-array ents at SRAM.sv:15
	vcdp->declBus  (c+92,"v core IC state i",-1,31,0);
	vcdp->declBit  (c+420,"v core IC age clk",-1);
	vcdp->declBit  (c+419,"v core IC age reset",-1);
	vcdp->declBus  (c+6,"v core IC age readAddr",-1,8,0);
	vcdp->declBus  (c+215,"v core IC age readData",-1,31,0);
	vcdp->declBus  (c+6,"v core IC age writeAddr",-1,8,0);
	vcdp->declBus  (c+3,"v core IC age writeData",-1,31,0);
	vcdp->declBus  (c+290,"v core IC age writeEnable",-1,0,0);
	vcdp->declBus  (c+436,"v core IC age WIDTH",-1,31,0);
	vcdp->declBus  (c+439,"v core IC age LOG_NUM_ROWS",-1,31,0);
	vcdp->declBus  (c+436,"v core IC age WORD_SIZE",-1,31,0);
	vcdp->declBus  (c+435,"v core IC age NUM_ROWS",-1,31,0);
	// Tracing: v core IC age mem // Ignored: Wide memory > --trace-max-array ents at SRAM.sv:15
	vcdp->declBus  (c+217,"v core IC age i",-1,31,0);
	vcdp->declBit  (c+420,"v core DC clk",-1);
	vcdp->declBit  (c+419,"v core DC reset",-1);
	vcdp->declBit  (c+320,"v core DC req",-1);
	vcdp->declBit  (c+355,"v core DC reqack",-1);
	vcdp->declQuad (c+331,"v core DC line_addr",-1,63,0);
	vcdp->declBit  (c+323,"v core DC rw",-1);
	vcdp->declBus  (c+289,"v core DC data_out",-1,31,0);
	vcdp->declBit  (c+356,"v core DC task_comp",-1);
	vcdp->declBus  (c+324,"v core DC data_in",-1,31,0);
	vcdp->declBus  (c+325,"v core DC word_select",-1,3,0);
	vcdp->declBus  (c+326,"v core DC set_index",-1,3,0);
	vcdp->declBus  (c+328,"v core DC byte_selected",-1,1,0);
	vcdp->declBit  (c+329,"v core DC byte_access",-1);
	vcdp->declBit  (c+269,"v core DC bus_req",-1);
	vcdp->declBit  (c+318,"v core DC bus_reqack",-1);
	vcdp->declBit  (c+270,"v core DC bus_req_rw",-1);
	vcdp->declQuad (c+287,"v core DC bus_req_addr",-1,63,0);
	vcdp->declArray(c+52,"v core DC bus_data_in",-1,511,0);
	vcdp->declArray(c+271,"v core DC bus_data_out",-1,511,0);
	vcdp->declBit  (c+319,"v core DC bus_task_comp",-1);
	vcdp->declBus  (c+431,"v core DC ACT_ADDR_WIDTH",-1,31,0);
	vcdp->declBus  (c+434,"v core DC ADDR_WIDTH",-1,31,0);
	vcdp->declBus  (c+435,"v core DC DATA_WIDTH",-1,31,0);
	vcdp->declBus  (c+438,"v core DC TAG_WIDTH",-1,31,0);
	vcdp->declBus  (c+439,"v core DC log_num_rows",-1,31,0);
	vcdp->declBus  (c+440,"v core DC log_num_sets",-1,31,0);
	vcdp->declBus  (c+439,"v core DC INDEX_WIDTH",-1,31,0);
	vcdp->declBus  (c+436,"v core DC WORD_SIZE",-1,31,0);
	vcdp->declArray(c+333,"v core DC data_r",-1,511,0);
	vcdp->declBus  (c+366,"v core DC data_en",-1,15,0);
	vcdp->declArray(c+367,"v core DC data_w",-1,511,0);
	vcdp->declQuad (c+349,"v core DC tag_r",-1,53,0);
	vcdp->declQuad (c+307,"v core DC tag_w",-1,53,0);
	vcdp->declBit  (c+309,"v core DC tag_en",-1);
	vcdp->declBus  (c+351,"v core DC state_r",-1,1,0);
	vcdp->declBus  (c+310,"v core DC state_w",-1,1,0);
	vcdp->declBit  (c+311,"v core DC state_en",-1);
	vcdp->declBus  (c+352,"v core DC age_r",-1,31,0);
	vcdp->declBus  (c+10,"v core DC age_w",-1,31,0);
	vcdp->declBit  (c+11,"v core DC age_en",-1);
	vcdp->declBit  (c+312,"v core DC hit",-1);
	vcdp->declBit  (c+12,"v core DC update_done",-1);
	vcdp->declBus  (c+13,"v core DC index",-1,8,0);
	vcdp->declBus  (c+14,"v core DC max_index",-1,8,0);
	vcdp->declBus  (c+15,"v core DC max_age",-1,31,0);
	vcdp->declBus  (c+313,"v core DC set_counter",-1,4,0);
	vcdp->declBus  (c+16,"v core DC check_counter",-1,4,0);
	vcdp->declBus  (c+314,"v core DC counter",-1,31,0);
	vcdp->declBus  (c+315,"v core DC cache_state",-1,31,0);
	vcdp->declBit  (c+420,"v core DC data clk",-1);
	vcdp->declBit  (c+419,"v core DC data reset",-1);
	vcdp->declBus  (c+13,"v core DC data readAddr",-1,8,0);
	vcdp->declArray(c+333,"v core DC data readData",-1,511,0);
	vcdp->declBus  (c+13,"v core DC data writeAddr",-1,8,0);
	vcdp->declArray(c+367,"v core DC data writeData",-1,511,0);
	vcdp->declBus  (c+366,"v core DC data writeEnable",-1,15,0);
	vcdp->declBus  (c+435,"v core DC data WIDTH",-1,31,0);
	vcdp->declBus  (c+439,"v core DC data LOG_NUM_ROWS",-1,31,0);
	vcdp->declBus  (c+436,"v core DC data WORD_SIZE",-1,31,0);
	vcdp->declBus  (c+435,"v core DC data NUM_ROWS",-1,31,0);
	// Tracing: v core DC data mem // Ignored: Wide memory > --trace-max-array ents at SRAM.sv:15
	vcdp->declBus  (c+353,"v core DC data i",-1,31,0);
	vcdp->declBit  (c+420,"v core DC tag clk",-1);
	vcdp->declBit  (c+419,"v core DC tag reset",-1);
	vcdp->declBus  (c+13,"v core DC tag readAddr",-1,8,0);
	vcdp->declQuad (c+349,"v core DC tag readData",-1,53,0);
	vcdp->declBus  (c+13,"v core DC tag writeAddr",-1,8,0);
	vcdp->declQuad (c+307,"v core DC tag writeData",-1,53,0);
	vcdp->declBus  (c+309,"v core DC tag writeEnable",-1,0,0);
	vcdp->declBus  (c+438,"v core DC tag WIDTH",-1,31,0);
	vcdp->declBus  (c+439,"v core DC tag LOG_NUM_ROWS",-1,31,0);
	vcdp->declBus  (c+438,"v core DC tag WORD_SIZE",-1,31,0);
	vcdp->declBus  (c+435,"v core DC tag NUM_ROWS",-1,31,0);
	// Tracing: v core DC tag mem // Ignored: Wide memory > --trace-max-array ents at SRAM.sv:15
	vcdp->declBus  (c+93,"v core DC tag i",-1,31,0);
	vcdp->declBit  (c+420,"v core DC state clk",-1);
	vcdp->declBit  (c+419,"v core DC state reset",-1);
	vcdp->declBus  (c+13,"v core DC state readAddr",-1,8,0);
	vcdp->declBus  (c+351,"v core DC state readData",-1,1,0);
	vcdp->declBus  (c+13,"v core DC state writeAddr",-1,8,0);
	vcdp->declBus  (c+310,"v core DC state writeData",-1,1,0);
	vcdp->declBus  (c+311,"v core DC state writeEnable",-1,0,0);
	vcdp->declBus  (c+441,"v core DC state WIDTH",-1,31,0);
	vcdp->declBus  (c+439,"v core DC state LOG_NUM_ROWS",-1,31,0);
	vcdp->declBus  (c+441,"v core DC state WORD_SIZE",-1,31,0);
	vcdp->declBus  (c+435,"v core DC state NUM_ROWS",-1,31,0);
	// Tracing: v core DC state mem // Ignored: Wide memory > --trace-max-array ents at SRAM.sv:15
	vcdp->declBus  (c+94,"v core DC state i",-1,31,0);
	vcdp->declBit  (c+420,"v core DC age clk",-1);
	vcdp->declBit  (c+419,"v core DC age reset",-1);
	vcdp->declBus  (c+13,"v core DC age readAddr",-1,8,0);
	vcdp->declBus  (c+352,"v core DC age readData",-1,31,0);
	vcdp->declBus  (c+13,"v core DC age writeAddr",-1,8,0);
	vcdp->declBus  (c+10,"v core DC age writeData",-1,31,0);
	vcdp->declBus  (c+383,"v core DC age writeEnable",-1,0,0);
	vcdp->declBus  (c+436,"v core DC age WIDTH",-1,31,0);
	vcdp->declBus  (c+439,"v core DC age LOG_NUM_ROWS",-1,31,0);
	vcdp->declBus  (c+436,"v core DC age WORD_SIZE",-1,31,0);
	vcdp->declBus  (c+435,"v core DC age NUM_ROWS",-1,31,0);
	// Tracing: v core DC age mem // Ignored: Wide memory > --trace-max-array ents at SRAM.sv:15
	vcdp->declBus  (c+354,"v core DC age i",-1,31,0);
	vcdp->declBit  (c+19,"v core decode req",-1);
	vcdp->declBit  (c+410,"v core decode reqack",-1);
	vcdp->declBit  (c+420,"v core decode clk",-1);
	vcdp->declBus  (c+71,"v core decode dec_inst",-1,31,0);
	vcdp->declArray(c+405,"v core decode decoded",-1,151,0);
	vcdp->declBit  (c+413,"v core decode done",-1);
	vcdp->declArray(c+76,"v core decode temp_dec",-1,151,0);
	vcdp->declBit  (c+81,"v core decode comb_done",-1);
	vcdp->declBus  (c+414,"v core decode decode_state",-1,31,0);
	vcdp->declBus  (c+415,"v core alu op",-1,1,0);
	vcdp->declBus  (c+416,"v core alu op3",-1,5,0);
	vcdp->declBus  (c+363,"v core alu operand1",-1,31,0);
	vcdp->declBus  (c+364,"v core alu operand2",-1,31,0);
	vcdp->declBit  (c+420,"v core alu clk",-1);
	vcdp->declBit  (c+161,"v core alu req",-1);
	vcdp->declBit  (c+159,"v core alu reqack",-1);
	vcdp->declBit  (c+86,"v core alu busy",-1);
	vcdp->declBit  (c+87,"v core alu done",-1);
	vcdp->declBus  (c+88,"v core alu Y",-1,31,0);
	vcdp->declBus  (c+84,"v core alu val",-1,31,0);
	vcdp->declBit  (c+89,"v core alu tag_overflow",-1);
	vcdp->declBit  (c+90,"v core alu trap",-1);
	vcdp->declBit  (c+95,"v core alu N",-1);
	vcdp->declBit  (c+96,"v core alu Z",-1);
	vcdp->declBit  (c+97,"v core alu V",-1);
	vcdp->declBit  (c+98,"v core alu C",-1);
	vcdp->declBus  (c+99,"v core alu shcnt",-1,4,0);
	vcdp->declQuad (c+100,"v core alu temp_64",-1,63,0);
	vcdp->declBit  (c+102,"v core alu temp",-1);
	vcdp->declBus  (c+103,"v core alu pivot",-1,31,0);
	vcdp->declQuad (c+104,"v core alu product",-1,63,0);
	vcdp->declBus  (c+106,"v core alu ALU_state",-1,31,0);
	// Tracing: v core Arbiter bus // Ignored: Unsupported: data type at arbiter.sv:4
	vcdp->declBit  (c+268,"v core Arbiter icache_req",-1);
	vcdp->declQuad (c+391,"v core Arbiter icache_line_addr",-1,57,0);
	vcdp->declBit  (c+193,"v core Arbiter icache_reqack",-1);
	vcdp->declArray(c+20,"v core Arbiter icache_data_out",-1,511,0);
	vcdp->declBit  (c+194,"v core Arbiter icache_comp",-1);
	vcdp->declBit  (c+269,"v core Arbiter dcache_req",-1);
	vcdp->declQuad (c+316,"v core Arbiter dcache_line_addr",-1,63,0);
	vcdp->declBit  (c+318,"v core Arbiter dcache_reqack",-1);
	vcdp->declBit  (c+270,"v core Arbiter dcache_rw",-1);
	vcdp->declArray(c+52,"v core Arbiter dcache_data_out",-1,511,0);
	vcdp->declArray(c+271,"v core Arbiter dcache_data_in",-1,511,0);
	vcdp->declBit  (c+319,"v core Arbiter dcache_comp",-1);
	vcdp->declBus  (c+431,"v core Arbiter ACT_ADDR_WIDTH",-1,31,0);
	vcdp->declBus  (c+435,"v core Arbiter DATA_WIDTH",-1,31,0);
	vcdp->declBus  (c+431,"v core Arbiter LINE_WIDTH",-1,31,0);
	vcdp->declBus  (c+434,"v core Arbiter ADDR_WIDTH",-1,31,0);
	vcdp->declArray(c+218,"v core Arbiter dcache_r",-1,511,0);
	vcdp->declArray(c+36,"v core Arbiter dcache_w",-1,511,0);
	vcdp->declArray(c+234,"v core Arbiter icache_r",-1,511,0);
	vcdp->declArray(c+250,"v core Arbiter buffer",-1,511,0);
	vcdp->declBus  (c+266,"v core Arbiter counter",-1,31,0);
	vcdp->declBus  (c+1,"v core Arbiter conversion_done",-1,31,0);
	vcdp->declBus  (c+267,"v core Arbiter state",-1,31,0);
	vcdp->declBus  (c+442,"v core Arbiter unnamedblk1 j",-1,31,0);
	vcdp->declBus  (c+443,"v core Arbiter unnamedblk1 unnamedblk2 i",-1,31,0);
	vcdp->declBus  (c+442,"v core Arbiter unnamedblk3 j",-1,31,0);
	vcdp->declBus  (c+443,"v core Arbiter unnamedblk3 unnamedblk4 i",-1,31,0);
	vcdp->declBus  (c+442,"v core Arbiter unnamedblk5 j",-1,31,0);
	vcdp->declBus  (c+443,"v core Arbiter unnamedblk5 unnamedblk6 i",-1,31,0);
	vcdp->declBus  (c+431,"v uncore_bus DATA_WIDTH",-1,31,0);
	vcdp->declBus  (c+432,"v uncore_bus TAG_WIDTH",-1,31,0);
	vcdp->declBit  (c+419,"v uncore_bus reset",-1);
	vcdp->declBit  (c+420,"v uncore_bus clk",-1);
	vcdp->declBus  (c+444,"v uncore_bus READ",-1,0,0);
	vcdp->declBus  (c+445,"v uncore_bus WRITE",-1,0,0);
	vcdp->declBus  (c+446,"v uncore_bus MEMORY",-1,3,0);
	vcdp->declQuad (c+189,"v uncore_bus req",-1,63,0);
	vcdp->declBus  (c+191,"v uncore_bus reqtag",-1,12,0);
	vcdp->declQuad (c+424,"v uncore_bus resp",-1,63,0);
	vcdp->declBus  (c+426,"v uncore_bus resptag",-1,12,0);
	vcdp->declBit  (c+192,"v uncore_bus reqcyc",-1);
	vcdp->declBit  (c+428,"v uncore_bus respcyc",-1);
	vcdp->declBit  (c+429,"v uncore_bus reqack",-1);
	vcdp->declBit  (c+2,"v uncore_bus respack",-1);
    }
}

void Vtop::traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlSymsp->TOP__v__core__Arbiter.__PVT__conversion_done),32);
	vcdp->fullBit  (c+2,(vlSymsp->TOP__v__uncore_bus.__PVT__respack));
	vcdp->fullBus  (c+3,(vlSymsp->TOP__v__core.__PVT__IC__DOT__age_w),32);
	vcdp->fullBit  (c+4,(vlSymsp->TOP__v__core.__PVT__IC__DOT__age_en));
	vcdp->fullBit  (c+5,(vlSymsp->TOP__v__core.__PVT__IC__DOT__update_done));
	vcdp->fullBus  (c+7,(vlSymsp->TOP__v__core.__PVT__IC__DOT__max_index),9);
	vcdp->fullBus  (c+8,(vlSymsp->TOP__v__core.__PVT__IC__DOT__max_age),32);
	vcdp->fullBus  (c+9,(vlSymsp->TOP__v__core.__PVT__IC__DOT__check_counter),5);
	vcdp->fullBus  (c+6,(vlSymsp->TOP__v__core.__PVT__IC__DOT__index),9);
	vcdp->fullBus  (c+10,(vlSymsp->TOP__v__core.__PVT__DC__DOT__age_w),32);
	vcdp->fullBit  (c+11,(vlSymsp->TOP__v__core.__PVT__DC__DOT__age_en));
	vcdp->fullBit  (c+12,(vlSymsp->TOP__v__core.__PVT__DC__DOT__update_done));
	vcdp->fullBus  (c+14,(vlSymsp->TOP__v__core.__PVT__DC__DOT__max_index),9);
	vcdp->fullBus  (c+15,(vlSymsp->TOP__v__core.__PVT__DC__DOT__max_age),32);
	vcdp->fullBus  (c+16,(vlSymsp->TOP__v__core.__PVT__DC__DOT__check_counter),5);
	vcdp->fullBus  (c+13,(vlSymsp->TOP__v__core.__PVT__DC__DOT__index),9);
	vcdp->fullBit  (c+17,(vlSymsp->TOP__v__core.__PVT__fetch_offset_wrap));
	vcdp->fullBit  (c+18,(vlSymsp->TOP__v__core.__PVT__decode_offset_wrap));
	vcdp->fullBit  (c+19,(vlSymsp->TOP__v__core.__PVT__can_decode));
	vcdp->fullArray(c+20,(vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out),512);
	vcdp->fullArray(c+36,(vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w),512);
	vcdp->fullArray(c+52,(vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out),512);
	vcdp->fullBus  (c+68,(vlSymsp->TOP__v__core.__PVT__psr),32);
	vcdp->fullBus  (c+69,((0x1fU & vlSymsp->TOP__v__core.__PVT__psr)),32);
	vcdp->fullBus  (c+70,(((IData)(8U) + (0x1f0U 
					      & (vlSymsp->TOP__v__core.__PVT__psr 
						 << 4U)))),32);
	vcdp->fullBus  (c+71,(vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst),32);
	vcdp->fullBit  (c+72,(vlSymsp->TOP__v__core.__PVT__N));
	vcdp->fullBit  (c+73,(vlSymsp->TOP__v__core.__PVT__Z));
	vcdp->fullBit  (c+74,(vlSymsp->TOP__v__core.__PVT__C));
	vcdp->fullBit  (c+75,(vlSymsp->TOP__v__core.__PVT__V));
	vcdp->fullArray(c+76,(vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec),152);
	vcdp->fullBit  (c+81,(vlSymsp->TOP__v__core.__PVT__decode__DOT__comb_done));
	vcdp->fullBus  (c+82,(vlSymsp->TOP__v__core.__PVT__fetch_offset_temp),7);
	vcdp->fullBus  (c+83,(vlSymsp->TOP__v__core.__PVT__decode_offset_temp),7);
	vcdp->fullBus  (c+84,(vlSymsp->TOP__v__core.__PVT__alu_val),32);
	vcdp->fullBus  (c+85,(vlSymsp->TOP__v__core.__PVT__alu_val_temp),32);
	vcdp->fullBit  (c+86,(vlSymsp->TOP__v__core.__PVT__alu_busy));
	vcdp->fullBit  (c+87,(vlSymsp->TOP__v__core.__PVT__alu_done));
	vcdp->fullBit  (c+88,(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber15));
	vcdp->fullBit  (c+89,(vlSymsp->TOP__v__core.__PVT__tag_overflow));
	vcdp->fullBit  (c+90,(vlSymsp->TOP__v__core.__PVT__trap));
	vcdp->fullBus  (c+91,(vlSymsp->TOP__v__core.__PVT__IC__DOT__tag__DOT__i),32);
	vcdp->fullBus  (c+92,(vlSymsp->TOP__v__core.__PVT__IC__DOT__state__DOT__i),32);
	vcdp->fullBus  (c+93,(vlSymsp->TOP__v__core.__PVT__DC__DOT__tag__DOT__i),32);
	vcdp->fullBus  (c+94,(vlSymsp->TOP__v__core.__PVT__DC__DOT__state__DOT__i),32);
	vcdp->fullBit  (c+95,(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11));
	vcdp->fullBit  (c+96,(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12));
	vcdp->fullBit  (c+97,(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13));
	vcdp->fullBit  (c+98,(vlSymsp->TOP__v__core.__Vcellout__alu__C));
	vcdp->fullBus  (c+99,(vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt),5);
	vcdp->fullQuad (c+100,(vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64),64);
	vcdp->fullBit  (c+102,(vlSymsp->TOP__v__core.__PVT__alu__DOT__temp));
	vcdp->fullBus  (c+103,(vlSymsp->TOP__v__core.__PVT__alu__DOT__pivot),32);
	vcdp->fullQuad (c+104,(vlSymsp->TOP__v__core.__PVT__alu__DOT__product),64);
	vcdp->fullBus  (c+106,(vlSymsp->TOP__v__core.__PVT__alu__DOT__ALU_state),32);
	vcdp->fullArray(c+107,(vlSymsp->TOP__v__core.__PVT__decode_buffer),1024);
	vcdp->fullBus  (c+139,(vlSymsp->TOP__v__core.__PVT__icache_set_index),4);
	vcdp->fullBit  (c+140,(vlSymsp->TOP__v__core.__PVT__branch_flag));
	vcdp->fullArray(c+141,(vlSymsp->TOP__v__core.__PVT__temp),512);
	vcdp->fullBus  (c+157,(vlSymsp->TOP__v__core.__PVT__word_counter),32);
	vcdp->fullBit  (c+158,(vlSymsp->TOP__v__core.__PVT__go_to_call));
	vcdp->fullBit  (c+159,(vlSymsp->TOP__v__core.__PVT__alu_reqack));
	vcdp->fullBit  (c+160,(vlSymsp->TOP__v__core.__PVT__ready_for_wb));
	vcdp->fullBit  (c+161,(vlSymsp->TOP__v__core.__PVT__alu_req));
	vcdp->fullBit  (c+162,(vlSymsp->TOP__v__core.__PVT__icache_comp));
	vcdp->fullArray(c+163,(vlSymsp->TOP__v__core.__PVT__icache_data_out),512);
	vcdp->fullBit  (c+179,(vlSymsp->TOP__v__core.__PVT__icache_reqack));
	vcdp->fullQuad (c+180,(vlSymsp->TOP__v__core.__PVT__IC__DOT__tag_w),54);
	vcdp->fullBit  (c+182,(vlSymsp->TOP__v__core.__PVT__IC__DOT__tag_en));
	vcdp->fullBit  (c+183,(vlSymsp->TOP__v__core.__PVT__IC__DOT__state_w));
	vcdp->fullBit  (c+184,(vlSymsp->TOP__v__core.__PVT__IC__DOT__state_en));
	vcdp->fullBit  (c+185,(vlSymsp->TOP__v__core.__PVT__IC__DOT__hit));
	vcdp->fullBus  (c+186,(vlSymsp->TOP__v__core.__PVT__IC__DOT__set_counter),5);
	vcdp->fullBus  (c+187,(vlSymsp->TOP__v__core.__PVT__IC__DOT__cache_state),32);
	vcdp->fullBus  (c+188,(vlSymsp->TOP__v__core.__PVT__IC__DOT__state_w),2);
	vcdp->fullQuad (c+189,(vlSymsp->TOP__v__uncore_bus.__PVT__req),64);
	vcdp->fullBus  (c+191,(vlSymsp->TOP__v__uncore_bus.__PVT__reqtag),13);
	vcdp->fullBit  (c+192,(vlSymsp->TOP__v__uncore_bus.__PVT__reqcyc));
	vcdp->fullBit  (c+195,(vlSymsp->TOP__v__core.__PVT__icache_req));
	vcdp->fullArray(c+196,(vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r),512);
	vcdp->fullQuad (c+212,(vlSymsp->TOP__v__core.__PVT__IC__DOT__tag_r),54);
	vcdp->fullBit  (c+214,(vlSymsp->TOP__v__core.IC__DOT____Vcellout__state__readData));
	vcdp->fullBus  (c+215,(vlSymsp->TOP__v__core.__PVT__IC__DOT__age_r),32);
	vcdp->fullBus  (c+216,(vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i),32);
	vcdp->fullBus  (c+217,(vlSymsp->TOP__v__core.__PVT__IC__DOT__age__DOT__i),32);
	vcdp->fullBit  (c+193,(vlSymsp->TOP__v__core__Arbiter.__PVT__icache_reqack));
	vcdp->fullBit  (c+194,(vlSymsp->TOP__v__core__Arbiter.__PVT__icache_comp));
	vcdp->fullArray(c+218,(vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r),512);
	vcdp->fullArray(c+234,(vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r),512);
	vcdp->fullArray(c+250,(vlSymsp->TOP__v__core__Arbiter.__PVT__buffer),512);
	vcdp->fullBus  (c+266,(vlSymsp->TOP__v__core__Arbiter.__PVT__counter),32);
	vcdp->fullBus  (c+267,(vlSymsp->TOP__v__core__Arbiter.__PVT__state),32);
	vcdp->fullQuad (c+287,(vlSymsp->TOP__v__core.__Vcellout__DC__bus_req_addr),58);
	vcdp->fullBus  (c+289,(vlSymsp->TOP__v__core.__PVT__dcache_data_out),32);
	vcdp->fullArray(c+291,(vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w),512);
	vcdp->fullBus  (c+290,(vlSymsp->TOP__v__core.__PVT__IC__DOT__data_en),1);
	vcdp->fullQuad (c+307,(vlSymsp->TOP__v__core.__PVT__DC__DOT__tag_w),54);
	vcdp->fullBit  (c+309,(vlSymsp->TOP__v__core.__PVT__DC__DOT__tag_en));
	vcdp->fullBus  (c+310,(vlSymsp->TOP__v__core.__PVT__DC__DOT__state_w),2);
	vcdp->fullBit  (c+311,(vlSymsp->TOP__v__core.__PVT__DC__DOT__state_en));
	vcdp->fullBit  (c+312,(vlSymsp->TOP__v__core.__PVT__DC__DOT__hit));
	vcdp->fullBus  (c+313,(vlSymsp->TOP__v__core.__PVT__DC__DOT__set_counter),5);
	vcdp->fullBus  (c+314,(vlSymsp->TOP__v__core.__PVT__DC__DOT__counter),32);
	vcdp->fullBus  (c+315,(vlSymsp->TOP__v__core.__PVT__DC__DOT__cache_state),32);
	vcdp->fullBit  (c+268,(vlSymsp->TOP__v__core.__PVT__icache_bus_req));
	vcdp->fullBit  (c+269,(vlSymsp->TOP__v__core.__PVT__dcache_bus_req));
	vcdp->fullQuad (c+316,(vlSymsp->TOP__v__core.__Vcellout__DC__bus_req_addr),64);
	vcdp->fullBit  (c+270,(vlSymsp->TOP__v__core.__PVT__dcache_bus_rw));
	vcdp->fullArray(c+271,(vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out),512);
	vcdp->fullBit  (c+320,(vlSymsp->TOP__v__core.__PVT__dcache_req));
	vcdp->fullQuad (c+321,(vlSymsp->TOP__v__core.__PVT__dcache_line_addr),58);
	vcdp->fullBit  (c+323,(vlSymsp->TOP__v__core.__PVT__dcache_rw));
	vcdp->fullBus  (c+324,(vlSymsp->TOP__v__core.__PVT__dcache_data_in),32);
	vcdp->fullBus  (c+325,(vlSymsp->TOP__v__core.__PVT__dcache_word_select),4);
	vcdp->fullBus  (c+326,(vlSymsp->TOP__v__core.__PVT__dcache_set_index),4);
	vcdp->fullBit  (c+327,(vlSymsp->TOP__v__core.__PVT__go_to_memory));
	vcdp->fullBus  (c+328,(vlSymsp->TOP__v__core.__PVT__byte_select),2);
	vcdp->fullBit  (c+329,(vlSymsp->TOP__v__core.__PVT__byte_access));
	vcdp->fullBus  (c+330,(vlSymsp->TOP__v__core.__PVT__mem_state),32);
	vcdp->fullQuad (c+331,(vlSymsp->TOP__v__core.__PVT__dcache_line_addr),64);
	vcdp->fullArray(c+333,(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r),512);
	vcdp->fullQuad (c+349,(vlSymsp->TOP__v__core.__PVT__DC__DOT__tag_r),54);
	vcdp->fullBus  (c+351,(vlSymsp->TOP__v__core.__PVT__DC__DOT__state_r),2);
	vcdp->fullBus  (c+352,(vlSymsp->TOP__v__core.__PVT__DC__DOT__age_r),32);
	vcdp->fullBus  (c+353,(vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i),32);
	vcdp->fullBus  (c+354,(vlSymsp->TOP__v__core.__PVT__DC__DOT__age__DOT__i),32);
	vcdp->fullBit  (c+318,(vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_reqack));
	vcdp->fullBit  (c+319,(vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_comp));
	vcdp->fullBit  (c+355,(vlSymsp->TOP__v__core.__PVT__dcache_reqack));
	vcdp->fullBit  (c+356,(vlSymsp->TOP__v__core.__PVT__dcache_comp));
	vcdp->fullBus  (c+357,(vlSymsp->TOP__v__core.__PVT__rd),32);
	vcdp->fullBus  (c+358,(vlSymsp->TOP__v__core.__PVT__destination),32);
	vcdp->fullBus  (c+359,(vlSymsp->TOP__v__core.__PVT__op),2);
	vcdp->fullQuad (c+360,(vlSymsp->TOP__v__core.__PVT__new_fetch_rip),58);
	vcdp->fullBit  (c+362,(vlSymsp->TOP__v__core.__PVT__branch_taken_ch));
	vcdp->fullBus  (c+363,(vlSymsp->TOP__v__core.__PVT__source1),32);
	vcdp->fullBus  (c+364,(vlSymsp->TOP__v__core.__PVT__source2),32);
	vcdp->fullBus  (c+365,(vlSymsp->TOP__v__core.__PVT__op3),6);
	vcdp->fullBus  (c+366,(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en),16);
	vcdp->fullArray(c+367,(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w),512);
	vcdp->fullBus  (c+383,((1U & (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en))),1);
	vcdp->fullBus  (c+384,(vlSymsp->TOP__v__core.__PVT__fetch_state),32);
	vcdp->fullQuad (c+385,(vlSymsp->TOP__v__core.__PVT__fetch_rip),64);
	vcdp->fullQuad (c+387,(vlSymsp->TOP__v__core.__PVT__decode_rip),64);
	vcdp->fullBus  (c+389,(vlSymsp->TOP__v__core.__PVT__fetch_skip),6);
	vcdp->fullBus  (c+390,(vlSymsp->TOP__v__core.__PVT__decode_offset),7);
	vcdp->fullBit  (c+393,(vlSymsp->TOP__v__core.__PVT__branch_taken));
	vcdp->fullBit  (c+394,(vlSymsp->TOP__v__core.__PVT__alu_working));
	vcdp->fullBit  (c+395,(vlSymsp->TOP__v__core.__PVT__go_to_sys));
	vcdp->fullBit  (c+396,(vlSymsp->TOP__v__core.__PVT__go_to_mem));
	vcdp->fullBit  (c+397,(vlSymsp->TOP__v__core.__PVT__go_to_nonsense));
	vcdp->fullBit  (c+398,(vlSymsp->TOP__v__core.__PVT__go_to_branch));
	vcdp->fullBit  (c+399,(vlSymsp->TOP__v__core.__PVT__go_to_save));
	vcdp->fullBit  (c+400,(vlSymsp->TOP__v__core.__PVT__go_to_wb));
	vcdp->fullQuad (c+391,(vlSymsp->TOP__v__core.__PVT__icache_line_addr),58);
	vcdp->fullBit  (c+401,(((0U == vlSymsp->TOP__v__core.__PVT__fetch_state) 
				& (0x20U > (0x7fU & 
					    ((IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset) 
					     - (IData)(vlSymsp->TOP__v__core.__PVT__decode_offset)))))));
	vcdp->fullBus  (c+402,(vlSymsp->TOP__v__core.__PVT__fetch_offset),7);
	vcdp->fullBus  (c+403,(vlSymsp->TOP__v__core.__PVT__reg_used),32);
	vcdp->fullBus  (c+404,(vlSymsp->TOP__v__core.__PVT__wim),32);
	vcdp->fullArray(c+405,(vlSymsp->TOP__v__core.__PVT__decoded_val),152);
	vcdp->fullBit  (c+410,(vlSymsp->TOP__v__core.__PVT__decode_ack));
	vcdp->fullBus  (c+411,(vlSymsp->TOP__v__core.__PVT__unnamedblk1__DOT__i),32);
	vcdp->fullBus  (c+412,(vlSymsp->TOP__v__core.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
	vcdp->fullBit  (c+413,(vlSymsp->TOP__v__core.__PVT__decode__DOT__done));
	vcdp->fullBus  (c+414,(vlSymsp->TOP__v__core.__PVT__decode__DOT__decode_state),32);
	vcdp->fullBus  (c+415,((3U & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
				      >> 0x16U))),2);
	vcdp->fullBus  (c+416,((0x3fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					 >> 0x10U))),6);
	vcdp->fullQuad (c+421,(vlTOPp->req),64);
	vcdp->fullBus  (c+423,(vlTOPp->reqtag),13);
	vcdp->fullBit  (c+427,(vlTOPp->reqcyc));
	vcdp->fullBit  (c+430,(vlTOPp->respack));
	vcdp->fullQuad (c+417,(vlTOPp->entry),64);
	vcdp->fullBit  (c+419,(vlTOPp->reset));
	vcdp->fullBit  (c+420,(vlTOPp->clk));
	vcdp->fullQuad (c+424,(vlTOPp->resp),64);
	vcdp->fullBus  (c+426,(vlTOPp->resptag),13);
	vcdp->fullBit  (c+428,(vlTOPp->respcyc));
	vcdp->fullBit  (c+429,(vlTOPp->reqack));
	vcdp->fullBus  (c+432,(0xdU),32);
	vcdp->fullBus  (c+433,(vlSymsp->TOP__v__core.__PVT__prev_fetch_offset),7);
	vcdp->fullBus  (c+437,(vlSymsp->TOP__v__core.__PVT__bytes_decoded_this_cycle),4);
	vcdp->fullBus  (c+440,(4U),32);
	vcdp->fullBus  (c+438,(0x36U),32);
	vcdp->fullBus  (c+441,(2U),32);
	vcdp->fullBus  (c+439,(9U),32);
	vcdp->fullBus  (c+436,(0x20U),32);
	vcdp->fullBus  (c+435,(0x200U),32);
	vcdp->fullBus  (c+434,(0x3aU),32);
	vcdp->fullBus  (c+442,(0x200U),32);
	vcdp->fullBus  (c+443,(8U),32);
	vcdp->fullBus  (c+431,(0x40U),32);
	vcdp->fullBus  (c+444,(1U),1);
	vcdp->fullBus  (c+445,(0U),1);
	vcdp->fullBus  (c+446,(1U),4);
    }
}
