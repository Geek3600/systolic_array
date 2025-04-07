
`timescale 1ns/1ns
`include "config.v"
module relu (
	input clk,
	input rst,
    input relu_en,
    input [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] in,
    output [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] out
);

    genvar i;
    generate
        for (i = 0 ; i < `ARRAYWIDTH; i = i + 1) begin: relu
            relu_pe u_relu_pe (
                .clk(clk),
                .rst(rst),
                .relu_en(relu_en),
                .in(in[(i+1)*`OUTPUT_BUF_DATASIZE-1:i*`OUTPUT_BUF_DATASIZE]),
                .out(out[(i+1)*`OUTPUT_BUF_DATASIZE-1:i*`OUTPUT_BUF_DATASIZE])
            );
        end
    endgenerate

endmodule

