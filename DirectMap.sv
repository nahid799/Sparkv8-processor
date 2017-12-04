/* SET ASSOCIATIVE CACHE
ADDR FORMAT : tag[57:4] Set[3:0]
State [dirty, valid]

*/

module DirectMap(

/Actual Interface with Core
        input req;
        output ack;
        input [ADDR_WIDTH-1:0] line_addr;
        input [LOG_WORDS_PER_LINE-1:0] word_select;
        output [WORD_SIZE_BITS-1:0] data_out;


        /* JUST FOR TESTING */

 //       CacheInterface.Bottom cif,
        SysBus.Top bus

);





        // GLOBAL PARAMATERS FOR CACHE //

        parameter ADDR_WIDTH = 64-6;
        parameter LOG_WORDS_PER_LINE = 4;
        parameter WORD_SIZE_BITS = 32;
        parameter LOG_NUM_LINES = 9;
        parameter LOG_NUM_SETS = 4;


        // LOCAL PARAMETERS FOR CACHE //

        localparam  NUM_SETS = 2**LOG_NUM_SETS;
        localparam LOG_NUM_LINES_PER_SET = LOG_NUM_LINES - LOG_NUM_SETS;
        localparam NUM_LINES_PER_SET = 2**LOG_NUM_LINES_PER_SET;
        localparam NUM_LINES = 2**LOG_NUM_LINES;
        localparam WORDS_PER_LINE  = 2**LOG_WORDS_PER_LINE;
        localparam DATA_WIDTH = WORD_SIZE_BITS * WORDS_PER_LINE;
        localparam TAG_WIDTH = ADDR_WIDTH - (LOG_NUM_SETS + LOG_WORDS_PER_LINE);
        localparam INDEX_WIDTH = LOG_NUM_LINES;
	



        // INITIALIZATION FOR DATA_SRAM //

        logic [DATA_WIDTH-1:0] data_rd;
        logic [DATA_WIDTH-1:0] check_data;
        logic [DATA_WIDTH-1:0] data_wr;
        logic [WORDS_PER_LINE-1:0] data_en;

        // INITIALIZATION FOR STATE_SRAM //

        logic [1:0] state_rd;
        logic [1:0] state_wr;
        logic [1:0] state_en;

        // INITIALIZATION FOR TAG_SRAM //

        logic [TAG_WIDTH-1:0] tag_rd;
        logic [TAG_WIDTH-1:0] tag_wr;
        logic tag_en;

        // INITIALIZATION FOR AGE_SRAM //

        logic [LOG_NUM_LINES_PER_SET-1:0] age_rd;
        logic [LOG_NUM_LINES_PER_SET-1:0] check_age;
        logic [LOG_NUM_LINES_PER_SET-1:0] temp;
        logic [LOG_NUM_LINES_PER_SET-1:0] age_wr;
        logic age_en;

        // CACHE RELATED CALCULATIONS

        logic [INDEX_WIDTH-1:0] index;   // USE THIS INDEX NUMBER TO ACCESS A CACHE LINE
        logic [LOG_NUM_SETS-1:0] set_index;
        logic [INDEX_WIDTH-1:0] max_index;


        // auxiliary counters

        integer rounds;
        integer read_counter;
        integer write_counter;
        logic [LOG_NUM_LINES_PER_SET-1:0] set_counter;
        
        logic read;
		logic write;
        // support variables

        logic hit;
        logic dirty;
        integer max_age;
	logic flag;

        SRAM # (DATA_WIDTH,LOG_NUM_LINES,WORD_SIZE_BITS) data_SRAM(.clk(bus.clk), .reset(bus.reset), .readAddr(index), .readData(data_rd), .writeAddr(index), .writeData(data_wr), .writeEnable(data_en));
        SRAM #(TAG_WIDTH,LOG_NUM_LINES,TAG_WIDTH) tag_SRAM (.clk(bus.clk), .reset(bus.reset), .readAddr(index), .readData(tag_rd), .writeAddr(index), .writeData(tag_wr),.writeEnable(tag_en));
        SRAM #(2,LOG_NUM_LINES,2) state_SRAM (.clk(bus.clk), .reset(bus.reset), .readAddr(index), .readData(state_rd),.writeAddr(index), .writeData(state_wr),.writeEnable(state_en));
        SRAM #(LOG_NUM_LINES_PER_SET,LOG_NUM_LINES,LOG_NUM_LINES_PER_SET) age_SRAM (.clk(bus.clk), .reset(bus.reset), .readAddr(index), .readData(age_rd),.writeAddr(index), .writeData(age_wr),.writeEnable(age_en));


        enum {idle, compare_set, compare_tag, retrieve_from_memory, reading_from_memory, write_back_to_memory, writing_to_memory,cache_hit, cache_miss, update_age, wait_state} cache_state;


        always_comb begin
                if (cache_state == idle) begin
                       // do nothing

                end else if (cache_state == compare_set) begin
                        set_index = cif.line_addr[LOG_NUM_SETS-1:0];
                        index = {cif.line_addr[LOG_NUM_SETS-1:0],5'b0};
                        bus.respack = 1'b0;
               
		 end else if (cache_state == compare_tag) begin
			if (tag_rd == cif.line_addr[ADDR_WIDTH-1:LOG_NUM_SETS] && state_rd[0]) begin
				index = max_index;
			end else begin
				index = {set_index,set_counter};
			end		       
			

                end else if (cache_state == cache_miss) begin
                       index = max_index;

                end else if (cache_state == cache_hit) begin
			
                        if (cif.read_write_n) begin
                                
                                $display("[cache_hit] : data read from : %x", index);
                                $display("[cache_hit] : data read : %x", data_rd);
                        end else begin
                                
                                
				$display("[cache_hit] max index : %b", max_index);
                                $display("[cache_hit] data written to : %b", index);
                                $display("[cache_hit] data written :%x", cif.data_in);
                        end

                end else if ( cache_state == retrieve_from_memory) begin


                end else if (cache_state == reading_from_memory) begin
                        if (bus.respcyc)  begin
                                bus.respack = 1;
                                read = 1'b1;
                               

                        end else begin
                                read = 1'b0;
                        end

                end else if (cache_state == write_back_to_memory) begin

				// do nothing

                end else if (cache_state == writing_to_memory) begin
						
							
                end else if (cache_state == update_age) begin
			if (bus.respcyc) begin
				bus.respack = 1;
			end			
			
                        if (set_counter == 5'b11111) begin
                                index = {set_index, max_index};
                        end else begin
                                index = {set_index, set_counter};
                        end

              end		
        end


        always_ff @(posedge bus.clk) begin

                if (bus.reset) begin
                        cif.ack <= 0;
                        cif.data_out <= 0;
                        cache_state <= idle;

                end else if (cif.req) begin
                         if (cache_state == idle) begin
                                cache_state <= compare_set;
                                cif.data_out <= 0;
                                cif.ack <= 0;
				flag <= 0;
				max_index <= {cif.line_addr[LOG_NUM_SETS-1:0],5'b0};
				$display("[idle] bus response cyc : %b", bus.respcyc);
                                 $display("[idle]: index : %b", index);
                                 $display("[idle]: state_rd is %x", state_rd);
                                 $display("[idle]: tag_rd is %x", tag_rd);
                                 $display("[idle]: data_rd is %x", data_rd);
                                 $display("[idle]: line_addr is %x", cif.line_addr);

                          end else if (cache_state == compare_set) begin
                                set_counter <= 5'b0;
                                cache_state <= compare_tag;
                                $display("[compare_set]: line_addr is %x", cif.line_addr);
                                read_counter <= 0;
				
				$display("[compare_set] bus response cyc : %b", bus.respcyc);

                          end else if (cache_state == compare_tag) begin
				
                                //$display("[compare_tag]: set_index is %b" ,set_index);
                                if (set_counter < 5'b11111) begin
                                        $display("[compare_tag] index : %b", index);
					$display("[compare_tag] tag : %x", tag_rd);
                                        if (tag_rd == cif.line_addr[ADDR_WIDTH-1:LOG_NUM_SETS] && state_rd[0]) begin
                                                hit <= 1;
                                                cache_state <= cache_hit;
						
						$display("[cache_hit] index is : %b", index);
                                                $display("[compare_tag]: Cache hit");

                                        end else begin
							$display("[compare_tag] : age %b", age_rd);
							$display("[compare_tag] : index %b", index);
							if (read_counter == 0) begin
								read_counter <= read_counter + 1;
							end else if (read_counter == 1) begin
								if (age_rd > max_age) begin
                             	   					max_age <= age_rd;
                                  					max_index <= index;
									$display("[compare_tag] max index : %b", index);
								end 
								read_counter <= read_counter + 1;
							end else begin
								set_counter <= set_counter + 5'b00001;
								read_counter <= 0;	
                                              		end

                                       			
					end
                                end else begin
                                        $display("max index: %b", max_index);
                                        cache_state <= cache_miss;
                                        read_counter <= 0;
                                end
                        end else if (cache_state == cache_miss) begin

                                        $display("[cache_miss] : max index selected : %b", max_index);
                                        $display("[cache_miss] : state : %b", state_rd);
                                        if (read_counter == 1) begin
                                                if (state_rd[0] && state_rd[1]) begin
                                                        dirty <= 1;
                                                        $display("[cache_miss]: Cache line dirty");
                                                        cache_state <= write_back_to_memory;
                                                end else begin
                                                        dirty <= 0;
                                                        $display("[cache_miss]: cache line invalid");
                                                        cache_state <= retrieve_from_memory;
                                                end
                                        end else begin
                                                read_counter <= read_counter + 1;

                                        end


                        end else if(cache_state == cache_hit) begin
                                $display("[cache_hit] %x", data_rd);
				$display("[cache_hit] bus response cyc : %b", bus.respcyc);
                                if (cif.read_write_n) begin
					
                                        cif.data_out <= data_rd[cif.word_select];
                                        cache_state <= update_age;
                                        set_counter <= 5'b0;
                                        read_counter <= 0;
                                        write_counter <= 0;
                                end else begin
					
                                        state_en <= 2'b11;
                                        state_wr <= 2'b11;
                                        data_en[cif.word_select] <= 1;;
					data_wr[0+32*cif.word_select +: 32] <= cif.data_in;
					cache_state <= update_age;
                                        set_counter <= 5'b0;
                                        write_counter <= 0;
                                        read_counter <= 0;
                                end

                        end else if (cache_state == retrieve_from_memory) begin

                                $display("[retrieve_from_memory]: cache line selected : %b", index);

                                tag_en <= 1'b1;
                                tag_wr <= cif.line_addr[ADDR_WIDTH-1:LOG_NUM_SETS];
                                state_en <= 2'b01;
                                state_wr <= 2'b01;
                                data_en <= ~(data_en^data_en);
                                rounds <= 3'b0;
                                bus.reqcyc <= 1'b1;
                                bus.req <= {cif.line_addr, 6'b0};
                                bus.reqtag <= 13'h1100;
								
                                cache_state <= reading_from_memory;


                      end else if (cache_state == reading_from_memory) begin
                                //$display("[reading_from_memory] bus request : %x",bus.req);
				tag_en <= 1'b0;
                                if (rounds < 'd8) begin
                                        if(read) begin
 						data_wr[0 + rounds*64 +: 64] <= bus.resp;
                                                rounds <= rounds + 1;
                                                bus.reqcyc <= 0;
                                                $display("[reading_from_memory] bus response %x", bus.resp);
                                        end
                                end else begin
                                        data_en <= data_en^data_en;
                                        cache_state <= compare_set;
					flag <= 1;
                                end

                    end else if (cache_state == write_back_to_memory) begin

                                rounds <= 3'b0;
                                $display("[write_back_to_memory] cache line selected: %x", index);
                                bus.reqcyc <= 1'b1;
                                bus.req <= {tag_rd,set_index, 6'b0};
                                bus.reqtag <= 13'h0100;
				cache_state <= writing_to_memory;


                  end else if (cache_state == writing_to_memory) begin
			
				//$display("[writing_to_memory] bus response cyc : %b", bus.respcyc);
				//$display("[writing_to_memory] bus response : %x",bus.resp);
                                //$display("[writing_to_memory] bus request : %x",bus.req);
                                if (rounds < 'd8) begin
					
					rounds <= rounds + 1;
					bus.req <= data_rd[0+rounds*64 +: 64];
					

                                end else begin
                                         bus.reqcyc <= 1'b0;
                                         state_wr <= 2'b00;
					 state_en <= 1'b1;
					cache_state <= compare_set;
					 flag <= 1;
                                end
								
								
								
				

                end else if (cache_state == update_age) begin
			               
			 data_en[cif.word_select] <= 1;
                        state_en <= 2'b00;
                        if (set_counter < 5'b11111) begin
                                if (read_counter == 0) begin
                                        write_counter <= 0;
                                        read_counter <= 1;
                                end else if (read_counter >0 && write_counter == 0) begin
                                        temp <= age_rd;
                                        $display("[update_age] index read from :%b" ,index);
                                        write_counter <= write_counter+1;
                                end else if (write_counter == 1) begin
                                        if (index == max_index) begin
                                                temp <= 5'b0;
                                                $display("[update_age] setting to zero %b", index);
                                        end else begin
                                                temp <= 5'b0 ;
                                                $display("[update_age] value of temp read stage : %d" , temp);
                                                $display("[update_age] incrementing age read stage %b", index);
                                        end
                                        write_counter <= write_counter + 1;
                                end else if (write_counter == 2) begin
                                        age_en <= 1;
                                        age_wr <= temp;
                                        $display("[update_age] value of temp write stage : %d" , temp);
                                        $display("[update_age] incrementing age write stage %b", index);

                                        write_counter <= write_counter + 1;

                                end else if (write_counter == 3) begin
                                        set_counter <= set_counter + 5'b00001;
                                        write_counter <= write_counter + 1;
                                        age_en <= 0;
                                end else begin
                                        write_counter <= 0;
                                        temp <= 5'b0;
                                end
                        end else begin
				cache_state <= wait_state;
                                $display("[update_age]: nothing more to do, going to idle");
			end 
                       
			end else if (cache_state == wait_state) begin 
				cif.ack <= 1'b1;
                                cache_state <= idle;
				
			
           end			
      end  
end
endmodule


