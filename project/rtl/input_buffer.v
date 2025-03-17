`timescale 1ns/1ns
//`include "config.v"
module input_buffer (
	input clk,
	input rst,
	input load_en,
	input out_en,
	input  [`ARRAYWIDTH*`DATASIZE-1:0] in_act,
	output [`ARRAYWIDTH*`DATASIZE-1:0] out_act
);
	
	genvar i;
	generate
		for (i = 0; i < `ARRAYWIDTH; i = i + 1) begin: input_fifo
			input_shifter_register #(i) 
			u_in_shft_reg (
				.clk(clk),
				.rst(rst),
				.load_en(load_en),
				.out_en(out_en),
				.in(in_act[(i+1)*`DATASIZE-1:i*`DATASIZE]),
				.out(out_act[(i+1)*`DATASIZE-1:i*`DATASIZE])
			);
		end
	endgenerate
endmodule
