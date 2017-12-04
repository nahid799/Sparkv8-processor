module top #(DATA_WIDTH = 64, TAG_WIDTH = 13) (
	input[63:0] entry
,	input reset
,	input clk
,	output[DATA_WIDTH-1:0] req
,	output[TAG_WIDTH-1:0] reqtag
,	input[DATA_WIDTH-1:0] resp
,	input[TAG_WIDTH-1:0] resptag
,	output reqcyc
,	input respcyc
,	input reqack
,	output respack
);

	Sysbus #(DATA_WIDTH, TAG_WIDTH) uncore_bus(.reset(reset), .clk(clk));
	Core core(.entry(entry), .bus(uncore_bus));

	// bus plumbing - just to take the bus signals to the module ports
	assign req = uncore_bus.req;
	assign reqtag = uncore_bus.reqtag;
	assign reqcyc = uncore_bus.reqcyc;
	assign respack = uncore_bus.respack;
	assign uncore_bus.respcyc = respcyc;
	assign uncore_bus.reqack = reqack;
    assign uncore_bus.resp = resp;
	assign uncore_bus.resptag = resptag;

	initial begin
		$display("Initializing top, entry point = 0x%x", entry);
	end
endmodule
