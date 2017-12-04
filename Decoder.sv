`include "decodeType.svh"

module Decoder (
	input req
,	output reqack
,	input clk
,	input[31:0] dec_inst
,	output decodeFields decoded

);



logic done;
decodeFields temp_dec;
logic comb_done;

enum {idle,decoding,dec_done} decode_state;

always_comb begin
	if (decode_state == decoding) begin
		comb_done = 0;	
		temp_dec.op= dec_inst[31:30];
		temp_dec.op3 = dec_inst[24:19];
		temp_dec.op2 = dec_inst[24:22] ;
	
		temp_dec.rd = dec_inst[29:25];
		temp_dec.rs1 = dec_inst[18:14];
		temp_dec.rs2 = dec_inst[4:0];
	
		temp_dec.simm13 = dec_inst[12:0];
		temp_dec.disp30 = dec_inst[29:0];
		temp_dec.disp22 = dec_inst[21:0];
		temp_dec.imm22 = dec_inst[30:21];
	
		temp_dec.a = dec_inst[29];
		temp_dec.i = dec_inst[13];
		temp_dec.cond = dec_inst[28:25];
		if (temp_dec.op == 2'b00) begin
			if (temp_dec.op2 == 3'b100) begin
				temp_dec.value = { dec_inst[21:0], 10'b0000000000 };
			end else if (temp_dec.op2 == 3'b010) begin
				temp_dec.value = { {10{dec_inst[21]}}, dec_inst[21:0] };
			end
		
		end else if (temp_dec.op == 2'b01) begin  
			temp_dec.value = {dec_inst[29:0],2'b00};
		end else if (temp_dec.op == 2'b10) begin
			temp_dec.value = { {19{dec_inst[12]}}, dec_inst[12:0] };
		end else if (temp_dec.op == 2'b11) begin 
			temp_dec.value = { {19{dec_inst[12]}}, dec_inst[12:0] };
		end
		comb_done = 1;
	end
end


always @(posedge clk) begin

	if (decode_state == idle) begin
		done <= 0;
		reqack <= 0;
		if (req) begin
			decode_state <= decoding;
		end	
	
	end else if (decode_state == decoding) begin
		if (comb_done) begin
			decode_state <= dec_done;		
		end	

	end else if (decode_state == dec_done) begin
		reqack <= 1;
		decoded<=temp_dec;
		decode_state <= idle;
	end
		
end		


endmodule

