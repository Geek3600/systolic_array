`include "vsrc/config.v"
module top(
	input  clk,
	input rst,
	input input_buffer_load_en,
	input input_buffer_out_en,
	input weight_buffer_load_en,
	input weight_buffer_out_en,
	input output_buffer_load_en,
	input output_buffer_out_en,
	input  write_weight_en,
	input  [`ARRAYWIDTH*`DATASIZE-1:0] in_act,
	input  [`ARRAYWIDTH*`DATASIZE-1:0] in_weight,
	output [2*`ARRAYWIDTH*`DATASIZE-1:0] out_res
);
	wire [`ARRAYWIDTH*`DATASIZE-1:0] out_act;
	wire [`ARRAYWIDTH*`DATASIZE-1:0] out_weight;
	wire [2*`ARRAYWIDTH*`DATASIZE-1:0] out_sum;
	input_buffer u_input_buffer(
		.clk(clk),
		.rst(rst),
		.load_en(input_buffer_load_en),
		.out_en(input_buffer_out_en),
		.in_act(in_act),
		.out_act(out_act)
	);
	systolic_array u_systolic_array(
		.clk(clk),
		.rst(rst),
		.write_weight_en(write_weight_en),
		.in_up_weight(out_weight),
		.in_left_act(out_act),
		.out_sum(out_sum)
	);
	weight_buffer u_weight_buffer(
		.clk(clk),
		.rst(rst),
		.load_en(weight_buffer_load_en),
		.out_en(weight_buffer_out_en),
		.in_weight(in_weight),
		.out_weight(out_weight)
	);
	output_buffer u_output_buffer(
		.clk(clk),
		.rst(rst),
		.load_en(output_buffer_load_en),
		.out_en(output_buffer_out_en),
		.in_res(out_sum),
		.out_res(out_res)
	);
endmodule
