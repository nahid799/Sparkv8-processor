interface Sysbus #(DATA_WIDTH = 64, TAG_WIDTH = 1) (
	input reset
,	input clk
);

parameter
	READ = 1'b1
,	WRITE = 1'b0
,	MEMORY = 4'b0001;

	wire[DATA_WIDTH-1:0] req;
	wire[TAG_WIDTH-1:0] reqtag;
	wire[DATA_WIDTH-1:0] resp;
	wire[TAG_WIDTH-1:0] resptag;
	wire reqcyc;
	wire respcyc;
	wire reqack;
	wire respack;
	
	modport Top (	
		input reset
	,	input clk
	,	output req
	,	output reqtag
	,	input resp
	,	input resptag
	,	output reqcyc
	,	input respcyc
	,	input reqack
	,	output respack
	);

	modport Bottom (
		input reset
	,	input clk
	,	input req
	,	input reqtag
	,	output resp
	,	output resptag
	,	input reqcyc
	,	output respcyc
	,	output reqack
	,	input respack
	);

endinterface

