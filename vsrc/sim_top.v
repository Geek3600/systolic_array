`include "vsrc/config.v"
module sim_top(
	input  clk,
	input rst,
	input load_en,
	input out_en,
	// input  [`ARRAYWIDTH*`DATASIZE-1:0] in_act,
	// output [`ARRAYWIDTH*`DATASIZE-1:0] out_act
	input  [`ARRAYWIDTH*`DATASIZE-1:0] in_weight,
	output [`ARRAYWIDTH*`DATASIZE-1:0] out_weight
	// input  write_weight_en,
	// input  [`DATASIZE*`ARRAYWIDTH-1:0]    in_up_weight,
	// input  [`DATASIZE*`ARRAYHEIGHT-1:0]   in_left_act,
	// output [2*`ARRAYWIDTH*`DATASIZE-1:0]  out_sum
	// input  load_en,
	// input out_en,
	// input [1:0] load_index,
	// input [1:0] output_index,
	// input  [`ARRAYWIDTH*`DATASIZE-1:0] in_weight,
	// output [`ARRAYWIDTH*`DATASIZE-1:0] out_weight
	// input  [2*`ARRAYWIDTH*`DATASIZE-1:0] in_res,
	// output [2*`ARRAYWIDTH*`DATASIZE-1:0] out_res
	// input [31:0]  in_act0,
	// input [31:0]  in_act1,
	// input [31:0]  in_act2,
	// input [31:0]  in_act3,
	// output [7:0] out_act0,
	// output [7:0] out_act1,
	// output [7:0] out_act2,
	// output [7:0] out_act3
);
	// PE pe0(
		// .clk(clk),
		// .rst(rst),
		// .write_weight_en(write_weight_en),
		// .in_up_weight(in_up_weight),
		// .out_down_weight(out_down_weight),
		// .in_up_psum(in_up_psum),
		// .out_down_psum(out_down_psum),
		// .in_left_act(in_left_act),
		// .out_right_act(out_right_act)
	// );
	// PE_row pe_row0(
		// .clk(clk),
		// .rst(rst),
		// .write_weight_en(write_weight_en),

		// .in_up_weight(in_up_weight),
		// .out_down_weight(out_down_weight),
		// .in_up_psum(in_up_psum),
		// .out_down_psum(out_down_psum),
		// .in_left_act(in_left_act)
	// );
		// systolic_array u_systolic_array (
			// .clk(clk),
			// .rst(rst),
			// .write_weight_en(write_weight_en),

			// .in_up_weight(in_up_weight),
			// .in_left_act(in_left_act),
			// .out_sum(out_sum)
		// );
	// input_buffer #(0) u_input_buffer0
	// (
			// .clk(clk),
			// .rst(rst),
			// .load_en(load_en),
			// .in_act(in_act0),
			// .out_act(out_act0)
	// );
	// input_buffer #(1) u_input_buffer1 
	// (
			// .clk(clk),
			// .rst(rst),
			// .load_en(load_en),
			// .in_act(in_act1),
			// .out_act(out_act1)
	// );
	// input_buffer #(2) u_input_buffer2 
	// (
			// .clk(clk),
			// .rst(rst),
			// .load_en(load_en),
			// .in_act(in_act2),
			// .out_act(out_act2)
	// );
	// input_buffer #(3) u_input_buffer3 
	// (
			// .clk(clk),
			// .rst(rst),
			// .load_en(load_en),
			// .in_act(in_act3),
			// .out_act(out_act3)
	// );
	weight_buffer u_weight_buffer (
		.clk(clk),
		.rst(rst),
		.load_en(load_en),
		.out_en(out_en),
		.in_weight(in_weight),
		.out_weight(out_weight)
	);
	// output_buffer u_output_buffer (
			// .clk(clk),
			// .rst(rst),
			// .load_en(load_en),
			// .out_en(out_en),
			// .in_res(in_res),
			// .out_res(out_res)
	// );
	// input_buffer u_input_buffer (
		// .clk(clk),
		// .rst(rst),
		// .load_en(load_en),
		// .out_en(out_en),
		// .in_act(in_act),
		// .out_act(out_act)
	// );
endmodule
