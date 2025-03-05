
`timescale 1ns/1ns
`include "config.v"
module relu_pe (
	input clk,
	input rst,
    input [`OUTPUT_BUF_DATASIZE-1:0] in,
    output reg [`OUTPUT_BUF_DATASIZE-1:0] out 
);

    always @(posedge clk) begin
        if (rst) out <= 0;
        else if (in[`OUTPUT_BUF_DATASIZE-1] == 1) out <= 0;
        else out <= in;
    end

endmodule

