	module arbiter(
	

		/* verilator lint_off UNDRIVEN */ /* verilator lint_off UNUSED */ Sysbus bus, 
	
		input icache_req
	,	input[ADDR_WIDTH-1:0] icache_line_addr
	,	output icache_reqack
	,	output[DATA_WIDTH-1:0] icache_data_out
	,	output icache_comp


	,	input dcache_req
	,	input [ACT_ADDR_WIDTH-1:0] dcache_line_addr
	,	output dcache_reqack
	,	input dcache_rw
	,	output [DATA_WIDTH-1:0] dcache_data_out
	,	input [DATA_WIDTH-1:0] dcache_data_in
	,	output dcache_comp
	);

		localparam ACT_ADDR_WIDTH = 64;
		localparam DATA_WIDTH = 512;
		localparam LINE_WIDTH = 64;
		localparam ADDR_WIDTH = 64-6;
	
		/*verilator lint_off UNUSED */
		logic [DATA_WIDTH-1:0] dcache_r;
		logic [DATA_WIDTH-1:0] dcache_w;
		/*verilator lint_off UNUSED */
	
		logic [DATA_WIDTH-1:0] icache_r;	

		logic [DATA_WIDTH-1:0] buffer;
		
		integer counter;
		integer conversion_done;
		enum {idle,icache_init,dcache_init,icache_read, dcache_read, dcache_write, icache_complete,dcache_complete,icache_read_wait} state;


		/* byte level conversion block
		eah cache line is 64 bits long...
		*/


	
		always_comb begin
		icache_data_out = 0;
		conversion_done = 0;
		for (int j = 0; j < DATA_WIDTH; j = j+LINE_WIDTH) begin 
			for (int i = 0; i < LINE_WIDTH/8; i++) begin
				icache_data_out[j+i*8 +: 8] = icache_r[j+i*8 +: 8];
				//icache_data_out[j+i*8 +: 8] = icache_r[LINE_WIDTH+j-(i+1)*8 +: 8];
			

				
			end 	 
		end
		conversion_done = 1;
	end

	/*----------------------------------------------------*/
		always_comb begin
		conversion_done = 0;
		dcache_data_out = 0;
		for (int j = 0; j < DATA_WIDTH; j = j+LINE_WIDTH) begin 
			for (int i = 0; i < LINE_WIDTH/8; i++) begin
				dcache_data_out[j+i*8 +: 8] = dcache_r[j+i*8 +: 8];
				//dcache_data_out[0+i*8 +: 8] = dcache_r[LINE_WIDTH-j-(i+1)*8 +: 8];
			

				
				
				
			end 	 
		end
		conversion_done = 1;
	end
	
	/*----------------------------------------------------*/	

		always_comb begin
		conversion_done = 0;
		for (int j = 0; j < DATA_WIDTH; j = j+LINE_WIDTH) begin 
			for (int i = 0; i < LINE_WIDTH/8; i++) begin
				
				dcache_w[0+i*8 +: 8] = dcache_data_in[LINE_WIDTH-j-(i+1)*8 +: 8];
				
			end 	 
		end
		conversion_done = 1;
	end

	/*----------------------------------------------------*/			

		
	
		assign bus.respack = bus.respcyc;


		


	always_ff @(posedge bus.clk) begin
	
		if (bus.reset) begin
			state <= idle;
			icache_comp <= 0;
			dcache_comp <= 0;
					
		end else if (state == idle) begin
			bus.req <= 0;
			bus.reqcyc <= 0;
			bus.reqtag <= 0;
			buffer <= 0;
			icache_comp <= 0;
			dcache_comp <= 0;
		

			if (icache_req && !dcache_req) begin            // always give preference to data cache
				state <= icache_init;
				icache_reqack <= 1;
				bus.reqcyc <= 1;
				bus.req <= {icache_line_addr,6'b0};
				bus.reqtag <= {bus.READ,bus.MEMORY,8'b0};
			end else if(dcache_req) begin
				//$display("arbiter:%x",dcache_line_addr);
				state <= dcache_init;
				dcache_reqack <= 1;
				if (dcache_rw) begin
					bus.reqcyc <= 1;
					bus.reqtag <= {bus.READ,bus.MEMORY,8'b0};
					bus.req <= dcache_line_addr;
					state <= dcache_init;
					counter <= 0;	
				end else begin
					bus.reqcyc <= 1;
					bus.reqtag <= {bus.WRITE,bus.MEMORY,8'b0};
					bus.req <= dcache_line_addr;
					state <= dcache_init;
					counter<= 0;
				end
				
			end

		end else if (state == icache_init) begin
			if (!bus.reqack) begin
				// 				wait here....nothing to do
			end else begin
				state <= icache_read;
				bus.reqcyc <= 0;
				counter <= 0;
				bus.req <= 0;
				bus.reqtag <= 0;
			end




		end else if (state == dcache_init) begin
			

			if (!bus.reqack) begin
				// 			wait here......nothing to do

			end else begin
				bus.reqcyc <= 0;
				bus.req <= 0;
				bus.reqtag <= 0;
				if (dcache_rw) begin

					state <= dcache_read;
					counter <= 0;
				end else begin

					state <= dcache_write;
					counter <= 0;
				end
			end


		end else if (state == icache_read) begin
			if (bus.respcyc) begin					
				counter <= counter + 1;
				bus.reqcyc <= 0;
				buffer[0 + counter*64 +: 64] <= bus.resp;
								
			end else if (counter > 0) begin
				state <= icache_complete;
			end		
			



		end else if (state == dcache_read) begin
				if (bus.respcyc) begin
					
					buffer[0+counter*64 +: 64] <= bus.resp;
					counter <= counter + 1;
					bus.reqcyc <= 0;
			
				end else if (counter > 0) begin
					state <= dcache_complete;
							
				end

		end else if (state == dcache_write) begin
				if (bus.resptag[12] == bus.WRITE) begin
					if (counter < 8) begin
						bus.req <= dcache_w[0+64*counter +: 64];
						counter <= counter+1;
					end else begin
						bus.reqcyc <= 0;
						state <= dcache_complete;
					end
				end 

		end else if (state == icache_complete) begin
				
					state <= idle;
				
					//$display("arbiter : %x", buffer);
					icache_comp <= 1;
					icache_r <= buffer;
					icache_reqack <= 0;
				//$display("[cache]:[%x]", buffer);
				
		end else if (state == dcache_complete) begin
			if (dcache_rw) begin
				state <= idle;
				dcache_comp <= 1;
				dcache_r <= buffer;
				dcache_reqack <= 0;
				//$display("[cache]:[%x]", buffer);			
			end else begin
				dcache_reqack <= 0;
				dcache_comp <= 1;
				
			end
								
		end

	end					
				 
	
	endmodule		


