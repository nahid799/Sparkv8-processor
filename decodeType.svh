`ifndef _MICRO_OP_SVH_
`define _MICRO_OP_SVH_
typedef struct packed {
	logic[1:0] op;
	logic[5:0] op3;
	logic[2:0] op2;	
	logic[4:0] rd;
	logic[4:0] rs1;
	logic[4:0] rs2;
	logic[12:0] simm13;
	logic[29:0] disp30;
	logic[21:0] disp22;
	logic[21:0] imm22;
	logic a;
	logic i;
	logic[3:0] cond;
	logic[32:0] value;	
} decodeFields;

`endif
