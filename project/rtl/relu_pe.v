
`timescale 1ns/1ns
`include "config.v"
module relu_pe (
	input clk,
	input rst,
    input relu_en,
    input [`OUTPUT_BUF_DATASIZE-1:0] in,
    output reg [`OUTPUT_BUF_DATASIZE-1:0] out 
);

    assign out = (!relu_en) ? in : (in[`OUTPUT_BUF_DATASIZE-1] == 1) ? 0 : in;
    
endmodule

