/* set associative cache 
address format : index [57:4] set index [3:0]

*/


module Icache(
	
	// core interface
	input clk
,	input reset
,	input req
,	output reqack
,	input [ADDR_WIDTH-1:0] line_addr
,	output [DATA_WIDTH-1:0] data_out
,	output task_comp
,	input [3:0] set_index


	// arbiter interface

,	output bus_req
,	input bus_reqack
,	output [ADDR_WIDTH-1:0] bus_req_addr	
,	input [DATA_WIDTH-1:0] bus_data_in
,	input bus_task_comp


);

	localparam ACT_ADDR_WIDTH = 64;
	localparam ADDR_WIDTH = 64-6;
	localparam DATA_WIDTH = 512;
	localparam TAG_WIDTH =  54;
	localparam log_num_rows = 9;
	localparam log_num_sets = 4;
	localparam WORD_SIZE = 512;
	localparam INDEX_WIDTH = 9;




	// DATA SRAM variables
        
   
	logic [DATA_WIDTH-1:0] data_r;
	logic  [DATA_WIDTH/WORD_SIZE-1:0] data_en;
   	logic [DATA_WIDTH-1:0] data_w;
	
	
	
	// TAG SRAM variables

	logic [TAG_WIDTH-1:0] tag_r;
	logic [TAG_WIDTH-1:0] tag_w;
	logic tag_en;
	

	// STATE SRAM variables

	logic  state_r;
	logic  state_w;
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
	//logic [log_num_sets-1:0] set_index;
	logic [4:0] set_counter;


	/*verilator lint_off UNOPTFLAT */	logic [4:0] check_counter;  /*verilator lint_on UNOPTFLAT */
	

	SRAM #(DATA_WIDTH,log_num_rows,WORD_SIZE) data(.clk(clk),.reset(reset),.readAddr(index),.readData(data_r),.writeAddr(index),.writeData(data_w),.writeEnable(data_en));
	
	SRAM #(TAG_WIDTH,log_num_rows,TAG_WIDTH) tag(.clk(clk),.reset(reset),.readAddr(index),.writeAddr(index),.readData(tag_r),.writeData(tag_w),.writeEnable(tag_en));
	
	SRAM #(2,log_num_rows,2) state(.clk(clk),.reset(reset),.readAddr(index),.readData(state_r),.writeAddr(index),.writeData(state_w),.writeEnable(state_en));

	SRAM #(32, log_num_rows, 32) age(.clk(clk),.reset(reset),.readAddr(index),.readData(age_r),.writeAddr(index),.writeData(age_w),.writeEnable(data_en));



	enum {idle,compare,cache_miss,LRU, cache_miss_wait} cache_state;


/* verilator lint_off ALWCOMBORDER */ 

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




/* verilator lint_on ALWCOMBORDER */ 	









	always_ff @(negedge clk) begin
		
		if (reset) begin
			
			// handle this
		

		end else if (cache_state == idle) begin 
			
			if (req) begin
				//$display("%x",line_addr);
				reqack <= 1;
				cache_state <= compare;
				set_counter <= 5'b0;
				data_out <= 0;
				task_comp <= 0;
				hit <= 0;
					
			end			
			
			end else if (cache_state == compare) begin
				
				if (tag_r == line_addr[57:4] && state_r) begin
					
					cache_state <= LRU;
					hit <= 1;
					data_out <= data_r;
					data_en <= data_en ^ data_en;
					state_en <= 0;
					tag_en <= 0;
					//$display("[cache_hit] %x",data_out);

				end else begin


					if (set_counter < 5'b11111) begin
												
						if (age_r > max_age) begin
							
							set_counter <= set_counter + 1;
									
								
						end else begin
							set_counter <= set_counter + 1;
						end
					end else begin
						hit <= 0;	
						cache_state <= cache_miss;
						bus_req <= 1;
						bus_req_addr <= line_addr; 
				 	end	 		

				end
			
			end else if (cache_state == cache_miss) begin

				
				
				if (bus_reqack) begin
					bus_req <= 0;
					
				end
			
				if (bus_task_comp) begin
					tag_en <= 1;
					tag_w <= line_addr[57:4];
					state_en <= 1;
					state_w <= 1;
					data_en <= ~(data_en ^ data_en);			// HACK: XORing with itself to get all 0s.	
					data_w <= bus_data_in;
					cache_state <= cache_miss_wait;
					
				end 


			end else if (cache_state == cache_miss_wait) begin

				tag_en <= 0;
				state_en <= 0;
				data_en <= data_en ^ data_en;
				cache_state <= compare;
			



				

		end else if (cache_state == LRU) begin
			
			if (update_done) begin
				//$display("[cache] data_out :%x",data_out);
				task_comp <= 1;
				cache_state <= idle;
				reqack <= 0;
				
			end
					
		end

end		

endmodule


