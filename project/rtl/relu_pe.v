
`timescale 1ns/1ns
//`include "config.v"
module relu_pe (
	input clk,
	input rst,
    input relu_en,
    input [`OUTPUT_BUF_DATASIZE-1:0] in,
    output reg [`OUTPUT_BUF_DATASIZE-1:0] out 
);

    always @(posedge clk) begin
        if (rst) out <= 0;
        else if (relu_en == 1) begin
            if (in[`OUTPUT_BUF_DATASIZE-1] == 1) out <= 0; // x < 0, y = 0
            else out <= in; // x > 0, y = x
        end 
        else out <= 0;
    end

endmodule

