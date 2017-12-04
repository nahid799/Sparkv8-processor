module Dcache (

// core interface
	input clk
,	input reset
,	input req
,	output reqack
,	input [ACT_ADDR_WIDTH-1:0] line_addr
,	input rw
,	output [WORD_SIZE-1:0] data_out
,	output task_comp
,	input [WORD_SIZE-1:0] data_in
,	input [3:0] word_select
,	input [3:0] set_index
,	input [1:0] byte_selected
,	input byte_access
	// arbiter interface

,	output bus_req
,	input bus_reqack
,	output bus_req_rw
,	output [ACT_ADDR_WIDTH-1:0] bus_req_addr	
,	input [DATA_WIDTH-1:0] bus_data_in
,	output [DATA_WIDTH-1:0] bus_data_out	
,	input bus_task_comp
);



	localparam ACT_ADDR_WIDTH = 64;
	localparam ADDR_WIDTH = 64-6;
	localparam DATA_WIDTH = 512;
	localparam TAG_WIDTH =  54;
	localparam log_num_rows = 9;
	localparam log_num_sets = 4;
	localparam INDEX_WIDTH = 9;
	localparam WORD_SIZE = 32;


	

	// DATA SRAM variables
        
   
	logic [DATA_WIDTH-1:0] data_r;
	logic  [DATA_WIDTH/WORD_SIZE-1:0] data_en;
   	logic [DATA_WIDTH-1:0] data_w;
	
	
	
	// TAG SRAM variables

	logic [TAG_WIDTH-1:0] tag_r;
	logic [TAG_WIDTH-1:0] tag_w;
	logic tag_en;
	

	// STATE SRAM variables

	logic  [1:0] state_r;
	logic  [1:0] state_w;
	logic state_en;        // write both bits of state together	


	// AGE SRAM variables


	logic [31:0] age_r;
	logic [31:0] age_w;
	/*verilator lint_off UNUSED */ logic age_en;	/*verilator lint_on UNUSED */



	// random variables 

	logic hit;
	logic update_done;
	logic [INDEX_WIDTH-1:0] index;
	logic [INDEX_WIDTH-1:0] max_index;
	logic [31:0] max_age;
	logic [log_num_sets-1:0] set_index;
	logic [4:0] set_counter;


	/*verilator lint_off UNOPTFLAT */	logic [4:0] check_counter;  /*verilator lint_on UNOPTFLAT */
	

	SRAM #(DATA_WIDTH,log_num_rows,WORD_SIZE) data(.clk(clk),.reset(reset),.readAddr(index),.readData(data_r),.writeAddr(index),.writeData(data_w),.writeEnable(data_en));
	
	SRAM #(TAG_WIDTH,log_num_rows,TAG_WIDTH) tag(.clk(clk),.reset(reset),.readAddr(index),.writeAddr(index),.readData(tag_r),.writeData(tag_w),.writeEnable(tag_en));
	
	SRAM #(2,log_num_rows,2) state(.clk(clk),.reset(reset),.readAddr(index),.readData(state_r),.writeAddr(index),.writeData(state_w),.writeEnable(state_en));

	SRAM #(32, log_num_rows, 32) age(.clk(clk),.reset(reset),.readAddr(index),.readData(age_r),.writeAddr(index),.writeData(age_w),.writeEnable(data_en));




	integer counter;


	enum {idle,compare,allocate_line,write_back,LRU,wait_state,cache_miss_wait} cache_state;



	
	always_comb begin

		if (cache_state == idle) begin
			max_index = {line_addr[3:0],5'b0};
			update_done = 0;
			max_age = 0;
		end else if (cache_state == compare) begin
			index = {set_index,set_counter};
			if (!hit) begin
				if (age_r > max_age) begin
					max_index = index;
				end
			end else begin
				max_index = index;	
			end

		end else if (cache_state == LRU) begin
		
		
			while(check_counter <5'b11111) begin
				index = {set_index,check_counter};
				age_en = 1;
				if (index == max_index) begin
					age_w = 0;
				end else begin
					age_w = age_r + 1;
				end
				age_en = 0;
				check_counter = check_counter + 1;
			end

		update_done = 1;
		end
	end





	always_ff @(negedge clk) begin
		
		if (reset) begin
			
			// handle this

		end else if(cache_state == idle) begin
			if (req) begin
				
				reqack <= 1;
				cache_state <= compare;
				
				set_counter <= 5'b0;
				task_comp <= 0;
				hit <= 0;
			end		

			end else if (cache_state == compare) begin
			
				if (tag_r == line_addr[57:4] && state_r) begin
					
					if(rw) begin
						//$display("cache_hit");
						cache_state <= LRU;
						hit <= 1;
						//$display("word select: %d",word_select);
						//$display("dcache hit data read load: %x", data_r);
						//$display("data out from cache %x", data_r[0 + 32*(word_select) +: 32]);
						data_out <= data_r[0 + 32*(word_select) +: 32];
						data_en <= data_en ^ data_en;
						state_en <= 0;
						tag_en <= 0;
					end else begin
						cache_state <= wait_state;
						hit <= 1;
						data_en[word_select] <= 1;
						//$display("dcache hit data write store %x", data_in);
						//$display("dcache hit data read store: %x", data_r);
						if (byte_access) begin
							if (byte_selected == 0) begin
								data_w[0 + word_select*32 +: 32] <= {data_r[0 + word_select*32 + 24 +: 24],data_in[0 +: 8]};
								//$display("byte selected 0");
							end else if (byte_selected == 1) begin
								//$display("byte selected 1");
								data_w[0 + word_select*32 +: 32] <= {data_r[0 + word_select*32 + 16 +: 16],data_in[0 +: 8],data_r[0 + word_select*32+: 8]};
				
							end else if (byte_selected == 2) begin
								//$display("byte selected 2");
								data_w[0 + word_select*32 +: 32] <= {data_r[0 + word_select*32 + 24 +: 8],data_in[0 +: 8],data_r[0 + word_select*32 +:16]};

							end else begin
								//$display("byte selected 3");	
								data_w[0 + word_select*32 +: 32] <= {data_in[0+:8],data_r[0 + word_select*32 +: 24]};
					
					
							end
						end else begin
							data_w[0 + word_select*32 +: 32] <= data_in;
						end
							
						state_en <= 0;
						tag_en <= 0;
						counter <= 1;	
					end
				end else begin


					if (set_counter < 5'b11111) begin
												
						if (age_r > max_age) begin
							
							set_counter <= set_counter + 1;
									
								
						end else begin
							set_counter <= set_counter + 1;
						end
					end else begin
						hit <= 0;
						if (state_r == 2'b11) begin				// cache line dirty
							cache_state <=  write_back;
							bus_req <= 1;
							bus_req_addr <= tag_r;
							bus_req_rw <= 0;
						end else begin
							cache_state <= allocate_line;
							bus_req <= 1;
							bus_req_addr <= line_addr;
							bus_req_rw <= 1;
						end	

						
						
				 	end	 		

				end

			end else if(cache_state==wait_state) begin
				

				if (counter < 6) begin	
					// $display("data write is %x",data_w);
					counter <= counter + 1;
				end else begin
					cache_state <= LRU;
				end
		
						
			end else if (cache_state == allocate_line) begin
					
									
					if (bus_reqack) begin
						bus_req <= 0;
						
					end
			
					if (bus_task_comp) begin
						tag_en <= 1;
						tag_w <= line_addr[57:4];
						state_en <= 1;
						state_w <= 2'b10;
						data_en <= ~(data_en ^ data_en);			// HACK: XORing with itself to get all 0s.				
						data_w <= bus_data_in;
						cache_state <= cache_miss_wait;
						//$display("bus_task_comp");
						//$display("[dcache] %x",bus_data_in);
					end 
				
			end else if (cache_state == cache_miss_wait) begin
				tag_en <= 0;
				state_en <= 0;
				data_en <= data_en ^ data_en;
				cache_state <= compare;	

			end else if (cache_state == write_back) begin
				
				if (bus_reqack) begin
					bus_req <= 0;					
					bus_data_out <= data_r;

				end

				if (bus_task_comp) begin
					state_en <= 1;
					state_w <= 2'b00;
					cache_state <= compare;
					
				end 
			



			end else if (cache_state == LRU) begin
				//$display("dcache store %x",data_w);				
				if (update_done) begin
					task_comp <= 1;
					cache_state <= idle;
					reqack <= 0;
					
				end
					
			end

end		

endmodule

