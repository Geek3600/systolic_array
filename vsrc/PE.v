`include "vsrc/config.v"
module PE (
	input clk,
	input rst,

	input  write_weight_en,
	input  [`DATASIZE-1:0] in_up_weight,
	output reg [`DATASIZE-1:0] out_down_weight,

	input  [`OUTPUT_BUF_DATASIZE-1:0] in_up_psum,
	output  [`OUTPUT_BUF_DATASIZE-1:0] out_down_psum,

	input  [`DATASIZE-1:0] in_left_act,
	output reg [`DATASIZE-1:0] out_right_act
);

	wire [`DATASIZE-1:0] weight_q;
	reg [`DATASIZE-1:0] weight;
	
	// 寄存weight
	always @(posedge clk) begin
		if (rst) weight <= 0;
		else if (write_weight_en) weight <= in_up_weight;
		else weight <= weight;
	end

	// // out_right_act输出
	// always @(posedge clk) begin
		// if (rst) out_right_act <= 0;
		// else if (write_weight_en) out_right_act <= 0;
		// else out_right_act <= in_left_act;
	// end
	
	// // out_down_psum输出
	// always @(posedge clk) begin
		// if (rst) out_down_psum <= 0;
		// else if (write_weight_en) out_down_psum <= 0;
		// else out_down_psum <= in_up_psum + weight * in_left_act;
	// end

	// out_down_weight输出
	always @(posedge clk) begin
		if (rst) out_down_weight <= 0;
		else if (write_weight_en) out_down_weight <= in_up_weight;
		else out_down_weight <= 0;
	end
	reg [`DATASIZE-1:0] in_left_act_1d;
	reg [`DATASIZE-1:0] in_left_act_2d;
	reg [`DATASIZE-1:0] in_left_act_3d;
	// out_right_act输出
	always @(posedge clk) begin
		if (rst) out_right_act <= 0;
		else if (write_weight_en) out_right_act <= 0;
		else out_right_act <= in_left_act_3d;
	end

	always @(posedge clk) begin
		if (rst) begin
		    in_left_act_1d <= 0;
		    in_left_act_2d <= 0;
		    in_left_act_3d <= 0;
		end
		else if (write_weight_en)  begin
			in_left_act_1d <= 0;
			in_left_act_2d <= 0;
			in_left_act_3d <= 0;
		end
		else  begin
			in_left_act_1d <= in_left_act;
			in_left_act_2d <= in_left_act_1d;
			in_left_act_3d <= in_left_act_2d;
		end
	end

	assign weight_q = weight;

	dsp u_dsp (
		.clk(clk),  // input wire CLK
		.A(in_left_act),      // input wire [7 : 0] A
		.B(weight_q),      // input wire [7 : 0] B
		.C(in_up_psum[`OUTPUT_BUF_DATASIZE-2:0]),      // input wire [30 : 0] C
		.P(out_down_psum)      // output wire [31 : 0] P
		);

endmodule
