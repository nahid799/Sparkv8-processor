`include "decodeType.svh"

module Core (

    input[63:0] entry
,    /* verilator lint_off UNDRIVEN */ /* verilator lint_off UNUSED */  Sysbus bus /* verilator lint_on UNUSED */ /* verilator lint_on UNDRIVEN */
);
    import "DPI-C" function int
    syscall_cse502(input int g1, input int o0, input int o1, input int o2, input int o3, input int o4, input int o5);

   /*verilator lint_off MULTIDRIVEN */ enum { fetch_idle, fetch_waiting, fetch_comp,fetch_active } fetch_state; /*verilator lint_on MULTIDRIVEN */
    /*verilator lint_off MULTIDRIVEN*/ /*verilator lint_off UNUSED */ logic [63:0] fetch_rip,decode_rip; /* verilator lint_on UNUSED */
    logic [5:0] fetch_skip;
    logic [6:0] fetch_offset, decode_offset,prev_fetch_offset,fetch_offset_temp,decode_offset_temp;
    	
    logic [0:2*64*8-1] decode_buffer; // NOTE: buffer bits are left-to-right in increasing order
   
    /*verilator lint_on MULTIDRIVEN*/
    logic send_fetch_req;
    always_comb begin
        if (fetch_state != fetch_idle) begin
            send_fetch_req = 0; // hack: in theory, we could try to send another request at this point
        //end else if (bus.reqack) begin
            //send_fetch_req = 0; // hack: still idle, but already got ack (in theory, we could try to send another request as early as this)

        end else begin
            send_fetch_req = (fetch_offset - decode_offset < 7'd32);
        end
    end

    parameter ACT_ADDR_WIDTH = 64;
    parameter ADDR_WIDTH = 64-6;
    parameter DATA_WIDTH = 512;
    parameter WORD_SIZE = 32;
   



/* ------------------------ reg declaration -----------------------*/
/* verilator lint_off MULTIDRIVEN */
    logic[31:0] reg_used;
    logic[31:0] psr;
    logic[31:0] wim;
    logic[31:0] regs[518-1:0];
    assign regs[get_index(0)] = 32'b0;

    assign N = psr[23];
    assign Z = psr[22];
    assign V = psr[21];
    assign C = psr[20];


    
    always_ff @ (posedge bus.clk) begin
        if (bus.reset) begin
            for (int i=1; i<518; i=i+12)
		for (int j =i;j<i+12;j++)
                    regs[j] <= 0;
 
   
            reg_used <= 0;
            wim[31] <= 1'b1;
            psr = {27'b0,5'b11110};
            regs[get_index(14)] <= 2**30 - 2**22;
        end
    end
   
    logic[31:0] cwp;
    logic[31:0] oreg_start;
    assign cwp = {27'b0, psr[4:0]};
    assign oreg_start = cwp*16+8;
   
    logic N,Z,C,V;

    assign N = psr[23];
    assign Z = psr[22];
    assign V = psr[21];
    assign C = psr[20];   
         
   



/* verilator lint_on MULTIDRIVEN */







    // arbiter variables


    logic icache_bus_req;
    logic icache_bus_reqack;

    logic dcache_bus_req;
    logic dcache_bus_reqack;
    logic dcache_bus_rw;   
   

    logic [DATA_WIDTH-1:0] dcache_bus_data_out;
    logic [DATA_WIDTH-1:0] dcache_bus_data_in;
    logic [ADDR_WIDTH-1:0] dcache_bus_line_addr;       
   
    logic [DATA_WIDTH-1:0] icache_bus_data_out;
   
    logic icache_bus_task_comp;
    logic dcache_bus_task_comp;   


/* verilator lint_off MULTIDRIVEN */

    // Icache variables

    logic icache_comp;
    logic icache_req;
    logic [ADDR_WIDTH-1:0] icache_line_addr;
    logic [3:0] icache_set_index;
    logic [DATA_WIDTH-1:0] icache_data_out;


   
   
/* verilator lint_on MULTIDRIVEN */   

/* verilator lint_off UNDRIVEN */ /* verilator lint_off UNUSED */
   
    // Dcache variables
    logic dcache_req;
    logic [ADDR_WIDTH-1:0] dcache_line_addr;
    logic dcache_reqack;
    logic dcache_rw;
    logic [WORD_SIZE-1:0] dcache_data_out;
    logic [WORD_SIZE-1:0] dcache_data_in;
    logic dcache_comp;
    logic [3:0] dcache_word_select;
    logic [3:0] dcache_set_index;	




   
/* verilator lint_on UNDRIVEN */ /* verilator lint_on UNUSED */

       

    Icache  IC(.clk(bus.clk),.reset(bus.reset),.req(icache_req),.reqack(icache_reqack),.line_addr(icache_line_addr),.data_out(icache_data_out),.set_index(icache_set_index),.task_comp(icache_comp),icache_bus_req,icache_bus_reqack,icache_line_addr,icache_bus_data_out,icache_bus_task_comp);

    Dcache DC(.clk(bus.clk),.reset(bus.reset),.req(dcache_req),.reqack(dcache_reqack),.line_addr(dcache_line_addr),.rw(dcache_rw),.data_out(dcache_data_out),.data_in(dcache_data_in),.task_comp(dcache_comp),.bus_req(dcache_bus_req),.bus_reqack(dcache_bus_reqack),.bus_req_rw(dcache_bus_rw),.bus_req_addr(dcache_bus_line_addr),.bus_data_in(dcache_bus_data_in),.bus_data_out(dcache_bus_data_out),
    .bus_task_comp(dcache_bus_task_comp),.word_select(dcache_word_select),.set_index(dcache_set_index),.byte_selected(byte_select),.byte_access(byte_access));
   
   
    arbiter Arbiter(bus,icache_bus_req,icache_line_addr,icache_bus_reqack,icache_bus_data_out,icache_bus_task_comp,dcache_bus_req,dcache_bus_line_addr,dcache_bus_reqack,dcache_bus_rw,dcache_bus_data_in,dcache_bus_data_out,dcache_bus_task_comp);
   
       
    /* verilator lint_off MULTIDRIVEN */ logic branch_flag; /* verilator lint_on MULTIDRIVEN */

    logic [DATA_WIDTH-1:0] temp;
    int word_counter;

   


    assign bus.respack = bus.respcyc; // always able to accept response

    // logic to read responses from bus
    // and put them in the decode buffer
    always @(posedge bus.clk) begin
       
        // bus.reset?
        if (bus.reset) begin
            fetch_state <= fetch_idle;
           fetch_rip  <= entry ;
            decode_rip <= entry;
            fetch_skip <= entry[5:0];
            fetch_offset <= 0;
            decode_offset <= 0;
            alu_working <= 0;
	    branch_flag <= 0;           
        end
       
        // !bus.reset
        else begin
            if (branch_taken && !branch_taken_ch && !branch_flag) begin
                fetch_state <=fetch_idle;
		icache_req <= 0; 
		can_decode = 0;
		branch_flag <= 1;
		//decode_rip <= fetch_rip;
		fetch_skip <= new_fetch_rip[5:0];
		icache_line_addr <= {32'b0,fetch_rip[31:6]};
		 icache_set_index <= fetch_rip[9:6];
		if (new_fetch_rip[3:0] == 4'b0000 || new_fetch_rip[3:0] == 4'b1000) begin
			decode_offset <= fetch_offset;
		end else begin
			//$display("I am here");
			decode_offset <= fetch_offset + 4;
		end
		//$display("branch has been taken .. going to idle");
		
            end
            //$display("%b",icache_comp);
            if (fetch_state == fetch_idle) begin
                icache_set_index <= fetch_rip[9:6];
                word_counter <= 0;
                icache_req <= (send_fetch_req || branch_taken);
                icache_line_addr <= {32'b0,fetch_rip[31:6]};
              //$display("IF fetch rip %x", fetch_rip);
                
                //$display("[fetch_idle] icache_line_addr: %x",{fetch_rip[63:6],6'b0});
                               
                if (icache_req) begin
                    //$display("IF fetch rip %x", fetch_rip);
                    fetch_state <= fetch_waiting;
                end

            // response ready?
            end else if (fetch_state == fetch_waiting) begin
                if (icache_reqack) begin
                    word_counter <= 0;
                    icache_req <= 0;
                    assert(!send_fetch_req) else $fatal;
                   
                end
               
                if (icache_comp) begin
                   
                    fetch_state <= fetch_comp;
                    //$display("[Core] data_out :%x", icache_data_out);
                    temp <= icache_data_out;       
                end
            end else if (fetch_state == fetch_comp) begin
               
                   
                               
                 if (fetch_skip > 8 || fetch_skip == 8) begin
                    fetch_skip <= fetch_skip - 8;
                    word_counter <= word_counter + 1;
                
		 end else if (fetch_skip> 0 && fetch_skip < 8) begin
                    fetch_skip <= 0;
                    //word_counter <= word_counter + 1;
                    //$display("fetch_skip %d", fetch_skip);   
	
                end else if (fetch_skip == 0) begin
                    if (word_counter < 8) begin
                       
			
			//$display("fetching from memory");
                        decode_buffer[fetch_offset*8 +: 64] <= temp[511+(word_counter+1)*64 -: 64];
                        fetch_offset <= fetch_offset + 8;
                        word_counter <= word_counter + 1;
                        //$display("fill at %d: %x [%x]", fetch_offset, temp[511 +(word_counter+1)*64 -: 64],decode_buffer);
                    end else begin
                           
                        fetch_state <= fetch_active;
		
		//	if (!branch_taken) begin
	                 	fetch_rip<= fetch_rip + 64;
			        fetch_skip <= 0;
		//	end
			
		
                        word_counter <= 0;
                                       
                                   
                    end
                end
            end else if (fetch_state == fetch_active) begin
                   // $display("fetch_offset,decode_offset: %d %d",fetch_offset,decode_offset);
                    fetch_state <= fetch_idle;	
			branch_taken <= 0;
         		branch_flag <= 0;
            end
        end
       
    end
   
    //--------------------------------------------------------------------- DECODER----------------------------------------------------- //
       
    decodeFields decoded_val;   //// DEFINITION
    
    /* verilator lint_off UNOPTFLAT */ logic fetch_offset_wrap,decode_offset_wrap; /*verilator lint_on UNOPTFLAT */

   
    /* verilator lint_off MULTIDRIVEN */    logic branch_taken; /* verilator lint_on MULTIDRIVEN */   

     logic decode_ack;   
    Decoder decode(.clk(bus.clk),.dec_inst(decode_buffer[decode_offset *8 +:32]),.decoded(decoded_val),.req(can_decode),.reqack(decode_ack));
   
    //$display(" %x",decode_buffer);
    //decoder Decoder(clk,decode_buffer[0:3],output decodeFields decoded);

   
    // NOTE: buffer bits are left-to-right in increasing order
    //wire [0:(128+15)*8-1] decode_bytes_repeated = { decode_buffer, decode_buffer[0:15*8-1] };
        //wire [0:15*8-1] decode_bytes = decode_bytes_repeated[decode_offset*8 +: 15*8]; 
 
    // can decode if there is an instruction (4-bytes) in the decode buffer

    logic can_decode;

    always @(posedge bus.clk) begin
        fetch_offset_temp <= fetch_offset;
        if (fetch_offset_temp > fetch_offset) begin
            fetch_offset_wrap = 1;
            //$display(" I have wrapped");
	
   	 end
 end	
    always @(posedge bus.clk) begin

	decode_offset_temp <= decode_offset;

	 if (decode_offset_temp > decode_offset) begin
            decode_offset_wrap = 1;
            //$display(" I have wrapped");
	
         end
     end	

    always_comb begin  
        if ((fetch_offset - decode_offset) > 32'd4 && (decode_offset < fetch_offset || decode_offset == fetch_offset) && !alu_working && !branch_taken) begin
        //  if ((((fetch_offset - decode_offset + 128)%128) > 4) && !alu_working && !branch_taken) begin
		  can_decode = 1;
		  fetch_offset_wrap =0;
		  decode_offset_wrap =0; 
	end else if (fetch_offset_wrap && (decode_offset > fetch_offset) && !alu_working && !branch_taken) begin
		can_decode = 1;	
		
		
		
            //$display(" I am setting can_decode to 1 because %x", (fetch_offset - decode_offset));
   //     end else if (fetch_offset_wrap && (decode_offset > fetch_offset) && !branch_taken) begin
     //       can_decode = 1;
        
	
		   
        end else begin
           
            can_decode = 0;
           
        end
    end   

    logic[3:0] bytes_decoded_this_cycle;
   
    always @(posedge bus.clk) begin
           
        if (decode_ack) begin : decode_block
            if (decode_buffer[decode_offset*8 +: 512] == 0 && fetch_state == fetch_idle && !branch_taken) begin
                           
            end
            else begin
                                   
                    //bytes_decoded_this_cycle <= 4'b0100;
                    
                
            end
	end
    end
   	
    always @(posedge bus.clk) begin
        if (bus.reset) begin
            decode_offset <= 0;
            decode_buffer <= 0;
        end
        else begin
            if (decode_ack) begin
               
                //$display("instruction decoded %x" ,decode_buffer[decode_offset*8 +: 32]);
                //$display("decode_rip : %x", decode_rip);
                //$display("fetch_offset decode_offset %d %d", fetch_offset,decode_offset);
		decode_offset <= decode_offset + 4'b0100; 		
		
                //$display("op: %b op2: %b op3: %b",decoded_val.op,decoded_val.op2,decoded_val.op3);
                //$display("rd: %b rs1: %b rs2: %b",decoded_val.rd,decoded_val.rs1,decoded_val.rs2);
                //$display("sim13: %b disp30: %b disp22: %b imm22: %b",decoded_val.simm13,decoded_val.disp30,decoded_val.disp22,decoded_val.imm22);
                //$display("a: %b i: %b cond: %b",decoded_val.a,decoded_val.i,decoded_val.cond);
                //$display("Add: %x Y: %x",val,Y);
                //$display("[decoder]: %b", send_fetch_req);
                //$display("[decoder] fetch_offset, decode_offset: %d %d", fetch_offset,decode_offset);
                //$display("[decoder] %d %d",fetch_state, bus.reqack);
            end
        end
    end
    //logic [31:0] operand1 = 32'hffffffff;
    //logic [31:0] operand2 = 32'h80000000;
    //logic [5:0] op3 = 6'b001010;
    //ALU alu(val,op3,operand1,operand2,bus.clk,N,Z,V,C,Y,tag_overflow,trap);





   



    //-------------------------checking for dependencies-------------------------------//
    function logic reg_conflict(/* verilator lint_off UNUSED */ decodeFields check_val /* verilator lint_off UNUSED */);
        if (reg_used[check_val.rd] != 0)
            return 1;

        if (reg_used[check_val.rs1] != 0)
            return 1;
               
        if (reg_used[check_val.rs2] != 0)
            return 1;
        return 0;
    endfunction
   
    function logic [31:0] get_index(logic[4:0] index);
        if (index < 8)
            return {27'b0 , index};
        else
            return oreg_start + {27'b0, index} - 8;   
    endfunction


    function logic [31:0] reg_win(logic[4:0] index, logic[4:0] win);
        logic[31:0] cwpt;
        logic[31:0] oregt;

        cwpt = {27'b0, win};
        oregt = cwpt*16+8;

        if (index < 8)
            return {27'b0 , index};
        else
            return oregt + {27'b0, index} - 8;   
    endfunction
   
   
    /// OPERAND FETCH

   
   
   
   
   



/*======================================== EXECUTION =================================*/

    /* verilator lint_off MULTIDRIVEN */
   
    logic alu_working;
    logic [31:0] rd;
    logic [31:0] destination;
    logic [31:0] alu_val;
    logic go_to_sys;
    logic [1:0] op;   
    logic go_to_call;
    logic [ADDR_WIDTH-1:0] new_fetch_rip;
    logic branch_taken_ch;
    logic go_to_mem;   
    logic go_to_nonsense;
    logic go_to_branch;
    logic go_to_save;       

    /* verilator lint_on MULTIDRIVEN */

    function logic branch_eval(logic [3:0] cond,logic N,logic Z,logic C,logic V);

             if (cond == 4'b1001 && !Z) begin
                return 1;
            end else if (cond == 4'b0001 && Z) begin
                return 1;
            end else if (cond == 4'b1010 && !(Z||(N^V))) begin
                return 1;
            end else if (cond == 4'b0010 && (Z||(N^V))) begin
                return 1;
            end else if (cond == 4'b1011 && !(N^V)) begin
                return 1;
            end else if (cond == 4'b0011 && (N^V)) begin
                return 1;
            end else if (cond == 4'b1100 && !(C||Z)) begin
                return 1;
            end else if (cond == 4'b0100 && (C||Z)) begin
                return 1;
            end else if (cond == 4'b1101 && !(C)) begin
                return 1;
            end else if (cond == 4'b0101 && C) begin
                return 1;
            end else if (cond == 4'b1110 && !(N)) begin
                return 1;
            end else if (cond == 4'b0110 && N) begin
                return 1;
            end else if (cond == 4'b1111 && !V) begin
                return 1;
            end else if (cond == 4'b0111 && V) begin
                return 1;
            end else begin
                return 0;

            end
    endfunction
           
           
   
           
           
           
           
             
   

    always @(negedge bus.clk) begin
		
        if (decode_ack && !alu_working) begin
	    alu_working <= 1;	
	    if (branch_taken_ch) begin
		can_decode = 0;
		branch_taken_ch <= 0;
		icache_line_addr <= {32'b0,new_fetch_rip[31:6]};
                //$display("new_fetch_rip %x", new_fetch_rip);
                //$display("decode_rip %x", decode_rip);
                fetch_rip <= new_fetch_rip;
		fetch_skip <= new_fetch_rip[5:0];
                decode_rip <= new_fetch_rip;
		branch_taken <= 1;
		fetch_state <= fetch_idle;			
	     
	    end
            
            if(decoded_val.op==2'b10 && decoded_val.op3==6'b111100) begin
                go_to_save <= 1;
                
                    /* SAVE */
                psr[4:0] = psr[4:0] -1 ;
                if ((wim & (2**(psr[4:0]))) != 0) begin
                        /* error */
                $display("save error wim %b psr %b", wim,psr[4:0]);
                end else begin
		    if (!branch_taken_ch) begin	
		   	 decode_rip <= decode_rip + 4;
		    end	
                    //$display("can decode: %b", can_decode);
                    if (decoded_val.i == 0) begin
                        regs[reg_win(decoded_val.rd, psr[4:0])] <= regs[get_index(decoded_val.rs1)] + regs[get_index(decoded_val.rs2)] ;
                    	//psr[4:0]= psr[4:0]-1;
		    end else begin
                        regs[reg_win(decoded_val.rd, psr[4:0])] <= regs[get_index(decoded_val.rs1)] + decoded_val.value ;
			//psr[4:0]= psr[4:0]-1;   
                    end               
                end

            end else if(decoded_val.op==2'b10 && decoded_val.op3==6'b111101) begin
                /* RESTORE */
	
		go_to_save <= 1;
                psr[4:0] = psr[4:0] +1 ;
                if ((wim & (2**(psr[4:0]))) != 0) begin
                    /* error */
                $display("restore error wim %b psr %b",wim,psr[4:0]);
                end else begin
		    if (!branch_taken_ch) begin
		    	decode_rip <= decode_rip + 4;
		    end	
		    //$display("this is a restore");
                    if (decoded_val.i == 0) begin
                        regs[reg_win(decoded_val.rd, psr[4:0])] <= regs[get_index(decoded_val.rs1)] + regs[get_index(decoded_val.rs2)] ;
			//psr[4:0]=psr[4:0]+1;
                    end else begin
                        regs[reg_win(decoded_val.rd, psr[4:0])] <= regs[get_index(decoded_val.rs1)] + decoded_val.value ;
			//psr[4:0]=psr[4:0]+1;   
                    end               
                end
   
           
           
            end else if (decoded_val.op == 2'b00 && decoded_val.op2==3'b010) begin
                /* Branch */
           
                //$display(" this is a branch");
		                
		

                if (decoded_val.cond == 4'b1000)  begin
                        /* BRANCH ALWAYS */
                    if (decoded_val.a == 0) begin
                        new_fetch_rip <= {32'b0,decode_rip[31:0] + 4*decoded_val.value};
                        branch_taken_ch <= 1;
                        //prev_fetch_offset <= fetch_offset;
                       	decode_rip <= decode_rip + 4;
			go_to_nonsense <= 1;
            
                       // $display("unconditional branch taken");
                        //$display("[Ubranch] decode_rip decoded val %x %x",decode_rip,decoded_val.value);
                    end else begin
                        //$display("unconditional branch taken");
                        new_fetch_rip <={32'b0,decode_rip[31:0] + 4*decoded_val.value} ;
			decode_offset <= fetch_offset;
                        branch_taken <= 1;
			can_decode = 0;
			go_to_branch <= 1;
                    end
               
                end else if (decoded_val.cond == 4'b0000) begin
                        /* BRANCH NEVER */
                    decode_rip <= decode_rip + 4;
                    //new_fetch_rip <= fetch_rip + 64;
                    if (decoded_val.a == 0) begin
                        // do nothing
                    end else begin
                        decode_offset <= decode_offset + 4;
                    end
               	    go_to_branch <= 1;
			
                end else begin
                    //$display("result of eval : %d", branch_eval(decoded_val.cond,N,Z,C,V));
                    if (branch_eval(decoded_val.cond,N,Z,C,V)) begin
                        
                       // $display("decode_rip %x", decode_rip);
                       //$display("conditional branch taken");
                        new_fetch_rip <= {32'b0,decode_rip[31:0] + 4*decoded_val.value};
                        branch_taken_ch <= 1;
			decode_rip <= decode_rip + 4;
		
              	
                    end else begin
                        //new_fetch_rip <= fetch_rip + 64;
                        decode_rip <= decode_rip + 4;
                        if (decoded_val.a) begin
                            decode_offset <= decode_offset + 4;
                        end else begin
                            // do nothing
                       
                        end
                    end
		go_to_branch <= 1;
                end

            end else if (decoded_val.op == 2'b01) begin
                    /* CALL */
           
                go_to_nonsense <= 1;
                //$display("[CALL] displacement decode_rip %x %x", 4*decoded_val.disp30, decode_rip);
                new_fetch_rip <= {32'b0,(decode_rip[31:0] + 4*{2'b00,decoded_val.disp30})};
                branch_taken_ch <= 1;
		
              	decode_rip <= decode_rip + 4;
		   
	
		regs[get_index(15)] <= decode_rip;
                //$display("call branch taken");
                //decode_offset <= fetch_offset;
		//can_decode = 0;


            end else if (decoded_val.op == 2'b10 && decoded_val.cond == 4'b1000 && decoded_val.op3==6'b111010) begin
                    /* TRAP */
		
		 if (!branch_taken_ch) begin
                    	decode_rip <= decode_rip + 4;
		    end
                
		
			
               	 regs[get_index(8)] <= syscall_cse502(regs[get_index(1)],regs[get_index(8)],regs[get_index(9)],regs[get_index(10)],regs[get_index(11)],regs[get_index(12)],regs[get_index(13)]);        	go_to_sys <= 1;
		
                //$display("val at syscall %x %x %x %x", regs[get_index(1)],regs[get_index(8)],regs[get_index(9)],regs[get_index(10)]);
                //new_fetch_rip <= fetch_rip + 64;
               
            end else if (decoded_val.op == 2'b10 && decoded_val.op3 == 6'b111000 && decoded_val.i == 0) begin
                        /* JMPL */
		regs[get_index(decoded_val.rd)] <= decode_rip;
		//$display("value before jumpl %x %x",regs[get_index(decoded_val.rs1)],regs[get_index(decoded_val.rs1)]);	
                new_fetch_rip <= {32'b0,(regs[get_index(decoded_val.rs1)] + regs[get_index(decoded_val.rs2)])};
                branch_taken_ch <= 1;
                //$display("jmpl branch taken");
        	decode_rip <= decode_rip + 4;        
		go_to_nonsense <= 1;

	   end else if (decoded_val.op == 2'b10 && decoded_val.op3 == 6'b111000 && decoded_val.i == 1) begin
                        /* JMPL */
		regs[get_index(decoded_val.rd)] <= decode_rip;
		//$display("value before jumpl %x",regs[get_index(decoded_val.rs1)]);	
                new_fetch_rip <= {32'b0,(regs[get_index(decoded_val.rs1)] + decoded_val.value)};
                branch_taken_ch <= 1;
                //$display("jmpl branch taken");
                go_to_nonsense <= 1;
		decode_rip <= decode_rip + 4;	
		


            end else if((decoded_val.op == 2'b10) &&  decoded_val.i==1) begin
                        /* ARITHMETIC OPERATION IMMEDIATE */
		    go_to_wb <= 1;
                    source2 <= decoded_val.value;
                    //new_fetch_rip <= fetch_rip+64;
                    alu_req <= 1;   
                    source1 <= regs[get_index(decoded_val.rs1)];
                    rd <= (decoded_val.rd);           
                    op3 <= decoded_val.op3;
                    op <= decoded_val.op;
                    if (!branch_taken_ch) begin
                    	decode_rip <= decode_rip + 4;
		    end
                    //$display("[ARITHMETIC I] decode_rip : %x", decode_rip);
               
            end else if ((decoded_val.op == 2'b10) &&  decoded_val.i==0) begin
                    /* ARITHMETIC OPERATION FROM REG */
		    go_to_wb <= 1;
                    source2 <= regs[get_index(decoded_val.rs2)];
                    //new_fetch_rip <= fetch_rip+64;
                    alu_req <= 1;   
		
                    source1 <= regs[get_index(decoded_val.rs1)];
                    rd <= (decoded_val.rd);           
                    op3 <= decoded_val.op3;
                    op <= decoded_val.op;
		    if (!branch_taken_ch) begin
                    	decode_rip <= decode_rip + 4;
		    end   
                    //$display("[ARITHMETIC] decode_rip : %x", decode_rip);   

            end else if(decoded_val.op==2'b00 && decoded_val.op2==3'b100) begin
                    /* SETHI OPERATION */
		    go_to_wb <= 1;
                    source1 <= decoded_val.value;
                    //$display("[Decoder] sethi %x", decoded_val.value);
                    //new_fetch_rip <= fetch_rip+64;
                    alu_req <= 1;  
		     
                    rd <= (decoded_val.rd);           
                    op3 <= decoded_val.op3;
                    op <= decoded_val.op;
                    if (!branch_taken_ch) begin
                    	decode_rip <= decode_rip + 4;
		    end

	    end else if (decoded_val.op == 2'b11) begin

			// LOAD/STORE 

		if (!branch_taken_ch) begin
                    	decode_rip <= decode_rip + 4;
		    end
	 	
		
		 rd <= (decoded_val.rd);           
                 op3 <= decoded_val.op3;
                 op <= decoded_val.op;
		 go_to_mem <= 1;
		 	
			
		 //$display("[EXE] store_val %x", regs[get_index(decoded_val.rd)]);
		 if (decoded_val.i == 0) begin
 			destination = regs[get_index(decoded_val.rs2)] +  regs[get_index(decoded_val.rs1)];
		end else begin
			 destination = decoded_val.value + regs[get_index(decoded_val.rs1)];
		end

			 
			


            end else begin
                    //new_fetch_rip <= fetch_rip + 64;
                    go_to_nonsense <= 1;
		    
                    //$display("I am here");
            end     
         
        end   
    end


   
    /* verilator lint_off MULTIDRIVEN */

    logic alu_req;
    logic alu_reqack;
       
    /* verilator lint_on MULTIDRIVEN */

    logic [31:0] source1;
    logic [31:0] source2;
    logic [5:0] op3;
   

    ALU alu(alu_val,decoded_val.op,decoded_val.op3,source1,source2,bus.clk,alu_req,alu_reqack,alu_busy,alu_done,psr[23],psr[22],psr[21],.C(psr[20]),Y,tag_overflow,trap);
   
/*====================================================================================================================*/


/*================================================MEMORY =============================================================*/   
   
    logic go_to_memory;
    logic [31:0] alu_val_temp;
    logic ready_for_wb;
    /*verilator lint_off MULTIDRIVEN */logic go_to_wb; /*verilator lint_on MULTIDRIVEN */

    logic [1:0] byte_select;
    logic byte_access;		


    enum {idle,waiting} mem_state;
       
    always @(posedge bus.clk) begin
        if (alu_reqack) begin
            alu_req <= 0;
            //$display(" I am closing req for alu");       
        end
	
	if (alu_done) begin
		ready_for_wb <= 1;
		//$display("alu is done %x", alu_val);
		alu_val_temp = alu_val;
	end

    end

   always @(posedge bus.clk) begin 	   
        if (go_to_mem) begin
            
	   		
          
            if(mem_state == idle) begin
                 
               // $display("alu val : %x",alu_val);
                 if (op == 2'b11 && (op3 < 4 || op3 == 6'b001001 || op3 == 6'b001010)) begin
                    mem_state <= waiting;
                   
                    dcache_req <= 1;
                    dcache_rw <= 1;
                    //$display("[MEM] line_addr_load %x",{32'b0,alu_val[31:6],6'b0});
                    dcache_line_addr <= {32'b0,destination[31:6],6'b0};
		    if (destination[2] == 0) begin 
			byte_select <= destination[1:0];
                    	dcache_word_select <=  (destination[5:2] + 1);
		    end else begin
			byte_select <= destination[1:0];
			dcache_word_select <=  (destination[5:2] - 1);
		    end 		
               	    dcache_set_index <= destination[9:6];
			
					
		
		
                end else if (op == 2'b11 && op3 > 3 && op3 < 7) begin
                    mem_state <= waiting;
                    
                    dcache_req <= 1;
                    dcache_rw <= 0;
		
                    //$display("[MEM] line_addr_store %x", {32'b0,destination[31:6],6'b0});
                    //$display("[MEM] store_val %x", regs[get_index(decoded_val.rd)]);
                    dcache_line_addr <= {32'b0,destination[31:6],6'b0};
		     dcache_set_index <= destination[9:6];		
		    
	
		    if (destination[2] == 0) begin 
			 dcache_word_select <= (destination[5:2] + 1);
		    end else begin
			dcache_word_select <= (destination[5:2] - 1);
		    end 
			                   
		   
		   		
		
		    if (op3 == 6'b000100) begin 			
			
                   	 dcache_data_in <= regs[get_index(rd)];
			 byte_access <= 0;

		    end else if (op3 == 6'b000101) begin

			dcache_data_in <= {24'b0,regs[get_index(rd)][8:0]};
			byte_access <= 1;	
			byte_select <= destination[1:0];

		    
		    end	else if (op3 == 6'b000110) begin
			
			dcache_data_in <= {16'b0,regs[get_index(rd)][15:0]};

		    end

				
               end     	       
                
      	  
            end else if (mem_state == waiting) begin
               	
                if (dcache_reqack) begin
                    dcache_req <= 0;
                end               
                if (dcache_comp) begin
                   // $display("dcache_comp");       
                    mem_state <= idle;
		    go_to_memory <= 1;
		    go_to_mem <= 0;
                end
            end
 	end
       
    end

/*=================================================================================*/

/* ========================= WRITE BACK ========================================= */

   

// Handle program counter here.

    always @(posedge bus.clk) begin
        if (go_to_memory) begin
          	
           
          
                if (op3 == 6'b000000) begin
			// LD
                regs[get_index(rd)] <= dcache_data_out;
		//$display("LD : %x ",dcache_data_out);
		end else if(op3 == 6'b000001) begin
				// LDUB 
			// $display("LDUB : %x ",dcache_data_out);
			regs[get_index(rd)] <= {24'b0,dcache_data_out[8*(byte_select) +: 8]};	
			 	
		end else if (op3 == 6'b000010) begin
				// LDUH

			regs[get_index(rd)] <= {16'b0,dcache_data_out[16*byte_select[1] +: 16]};
			 //$display("LDUH : %x ",dcache_data_out);
		end else if (op3 == 6'b001001) begin
				// LDSB		
			 //$display("LDSB : %x ",dcache_data_out);
			regs[get_index(rd)] <= {{24{dcache_data_out[8*(byte_select)+7]}},dcache_data_out[8*(byte_select) +: 8]};
	
		end else if (op3 == 6'b001010) begin
			 //$display("LD : %x ",dcache_data_out);	
			regs[get_index(rd)] <= {{16{dcache_data_out[16*byte_select[1] + 16]}},dcache_data_out[16*byte_select[1] +: 16]};



                end else if ( op3 >3 && op3 < 7) begin
                        // do nothing

                   // $display("I am here_store");
                   //$display("data_out_store %x",dcache_data_out);
                end
               
                alu_working <= 0;
                go_to_memory <= 0;
               
           
       
        end else if (go_to_wb && ready_for_wb) begin
            //fetch_rip <= new_fetch_rip;
	    ready_for_wb <= 0;	
            regs[get_index(rd)] <= alu_val_temp;
            //$display("output %x", alu_val_temp);
            alu_working <= 0;
            go_to_wb <= 0;
           
        end else if (go_to_sys) begin
            //fetch_rip <= new_fetch_rip;
            go_to_sys <= 0;
            alu_working <= 0;
            //$display("SYS CALL");
       
        end else if (go_to_call) begin
            alu_working <= 0;
           
           // $display("[call] new_fetch_rip %x", new_fetch_rip);
            //$display("[call] new_fetch_skip %d", new_fetch_rip[5:0]);
            fetch_rip <= new_fetch_rip;
	/*    if (new_fetch_rip[3:0] == 4'b0000 || new_fetch_rip[3:0] == 4'b1000) begin
			decode_offset <= decode_offset;
		end else begin
		$display("I am here");
			decode_offset <= decode_offset + 4;
	end
*/		 
 	    icache_line_addr <= {32'b0,new_fetch_rip[31:6]};
            fetch_skip <= new_fetch_rip[5:0];
            go_to_call <= 0;
            decode_rip <= new_fetch_rip;
       
        end else if (go_to_nonsense) begin
            alu_working <= 0;
            //fetch_rip <= new_fetch_rip;
            go_to_nonsense <= 0;
       
        end else if (go_to_branch) begin
           
            alu_working <= 0;
            if (branch_taken) begin
		icache_line_addr <= {32'b0,new_fetch_rip[31:6]};
                //$display("new_fetch_rip %x", new_fetch_rip);
                //$display("decode_rip %x", decode_rip);
                fetch_rip <= new_fetch_rip;
		fetch_skip <= new_fetch_rip[5:0];
                decode_rip <= new_fetch_rip;
/*		
		if (new_fetch_rip[3:0] == 4'b0000 || new_fetch_rip[3:0] == 4'b1000) begin
			decode_offset <= decode_offset;
		end else begin
			$display("I am here");
			decode_offset <= decode_offset + 4;
		end
*/
            end	

            go_to_branch <= 0;
           
        end else if (go_to_save) begin
            alu_working <= 0;
            go_to_save <= 0;
       
	end          
           

    end


//----------------------------------------------debug regs---------------------------------------------

/*	always @(posedge bus.clk) begin
		if (can_decode) begin
			//$display("SP = %x", regs[get_index(14)]);
			//$display("loaded data %x", regs[get_index(rd)]);
			$display("psr %b", psr);
			$display("decoded: %x ",decode_buffer[decode_offset *8 +:32]);			
			$display("g00  = %x", regs[get_index(0)]);
			$display("g01  = %x", regs[get_index(1)]);
			$display("g02  = %x", regs[get_index(2)]);
			$display("g03  = %x", regs[get_index(3)]);
			$display("g04  = %x", regs[get_index(4)]);
			$display("g05  = %x", regs[get_index(5)]);
			$display("g06  = %x", regs[get_index(6)]);
			$display("g07  = %x", regs[get_index(7)]);
			$display("o00  = %x", regs[get_index(8)]);
			$display("o01  = %x", regs[get_index(9)]);
			$display("o02  = %x", regs[get_index(10)]);
			$display("o03  = %x", regs[get_index(11)]);
			$display("o04  = %x", regs[get_index(12)]);
			$display("o05  = %x", regs[get_index(13)]);
			$display("o06  = %x", regs[get_index(14)]);
			$display("o07  = %x", regs[get_index(15)]);
			$display("l00  = %x", regs[get_index(16)]);
			$display("l01  = %x", regs[get_index(17)]);
			$display("l02  = %x", regs[get_index(18)]);
			$display("l03  = %x", regs[get_index(19)]);
			$display("l04  = %x", regs[get_index(20)]);
			$display("l05  = %x", regs[get_index(21)]);
			$display("l06  = %x", regs[get_index(22)]);
			$display("l07  = %x", regs[get_index(23)]);
			$display("i00  = %x", regs[get_index(24)]);
			$display("i01  = %x", regs[get_index(25)]);
			$display("i02  = %x", regs[get_index(26)]);
			$display("i03  = %x", regs[get_index(27)]);
			$display("i04  = %x", regs[get_index(28)]);
			$display("i05  = %x", regs[get_index(29)]);
			$display("i06  = %x", regs[get_index(30)]);
			$display("i07  = %x", regs[get_index(31)]);
			$display("\n\n");
		end
	end
*/
//-----------------------------------------------------------------------------------------------------


/*==============================================================================================*/
   

/*
       
    // cse502 : Use the following as a guide to print the Register File contents.
    final begin
        //$display("SP = %x", regs[get_index(14)]);
        //$display("loaded data %x", regs[get_index(rd)]);
        //$display("fetch_offset,decode_offset can_decode branch_taken alu_working send_fetch_req: %x %x %b %b %b %b %b",fetch_offset,decode_offset,can_decode,branch_taken,alu_working,decode_ack,alu_done);
        $display("psr %b", psr);
	$display("decoded: %x ",decode_buffer[decode_offset *8 +:32]);			
	$display("g00  = %x", regs[get_index(0)]);
	$display("g01  = %x", regs[get_index(1)]);
	$display("g02  = %x", regs[get_index(2)]);
	$display("g03  = %x", regs[get_index(3)]);
	$display("g04  = %x", regs[get_index(4)]);
	$display("g05  = %x", regs[get_index(5)]);
	$display("g06  = %x", regs[get_index(6)]);
	$display("g07  = %x", regs[get_index(7)]);
	$display("o00  = %x", regs[get_index(8)]);
	$display("o01  = %x", regs[get_index(9)]);
	$display("o02  = %x", regs[get_index(10)]);
	$display("o03  = %x", regs[get_index(11)]);
	$display("o04  = %x", regs[get_index(12)]);
	$display("o05  = %x", regs[get_index(13)]);
	$display("o06  = %x", regs[get_index(14)]);
	$display("o07  = %x", regs[get_index(15)]);
	$display("l00  = %x", regs[get_index(16)]);
	$display("l01  = %x", regs[get_index(17)]);
	$display("l02  = %x", regs[get_index(18)]);
	$display("l03  = %x", regs[get_index(19)]);
	$display("l04  = %x", regs[get_index(20)]);
	$display("l05  = %x", regs[get_index(21)]);
	$display("l06  = %x", regs[get_index(22)]);
	$display("l07  = %x", regs[get_index(23)]);
	$display("i00  = %x", regs[get_index(24)]);
	$display("i01  = %x", regs[get_index(25)]);
	$display("i02  = %x", regs[get_index(26)]);
	$display("i03  = %x", regs[get_index(27)]);
	$display("i04  = %x", regs[get_index(28)]);
	$display("i05  = %x", regs[get_index(29)]);
	$display("i06  = %x", regs[get_index(30)]);
	$display("i07  = %x", regs[get_index(31)]);
	$display("\n\n");
    end

*/
endmodule


