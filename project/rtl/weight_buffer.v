`timescale 1ns/1ns
//`include "config.v"
module weight_buffer (
	input clk,
	input rst,
	input load_en,
	input out_en,
	input  [`ARRAYWIDTH*`DATASIZE-1:0] in_weight,
	output [`ARRAYWIDTH*`DATASIZE-1:0] out_weight
);
	genvar i;
	generate
		for (i = 0; i < `ARRAYWIDTH; i = i + 1) begin: weight_fifo
			weight_shifter_register u_weight_shifter_register (
					.clk(clk),
					.rst(rst),
					.load_en(load_en),
					.out_en(out_en),
					.in(in_weight[(i+1)*`DATASIZE-1:i*`DATASIZE]),
					.out(out_weight[(i+1)*`DATASIZE-1:i*`DATASIZE])
			);
		end
	endgenerate
endmodule
