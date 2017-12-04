module InstructionFetch(
SysBus.Top bus
)


reg PC[63:0] = 0;
logic c_ack;
logic c_data_out[31:0];

CacheInterface cif(); 
DirectMap Icache(.cif(cif),.bus(bus)); 



always_comb begin
	assign cif.req = 1;
	assign cif.read_write_n = 1;
	assign cif.line_addr = PC[63:6];
	assign cif.data_in = 0;
	assign cif.word_select = PC[5:2];
	assign c_ack = cif.ack;
	assign c_data_out = cif.data_out;
	if c_ack == 1 begin
		cif.req = 0;
		$display("Data out = %x",c_data_out);
		PC = PC + 1;
	end
end 
end module





