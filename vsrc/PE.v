`include "vsrc/config.v"
module PE (
	input clk,
	input rst,

	input  write_weight_en,
	input  [`DATASIZE-1:0] in_up_weight,
	output reg [`DATASIZE-1:0] out_down_weight,

	input  [`DATASIZE*2-1:0] in_up_psum,
	output reg [`DATASIZE*2-1:0] out_down_psum,

	input  [`DATASIZE-1:0] in_left_act,
	output reg [`DATASIZE-1:0] out_right_act
);

	reg [`DATASIZE-1:0] weight;
	
	// 寄存weight
	always @(posedge clk) begin
		if (rst) weight <= 0;
		else if (write_weight_en) weight <= in_up_weight;
		else weight <= weight;
	end

	// out_right_act输出
	always @(posedge clk) begin
		if (rst) out_right_act <= 0;
		else if (write_weight_en) out_right_act <= 0;
		else out_right_act <= in_left_act;
	end
	
	// out_down_psum输出
	always @(posedge clk) begin
		if (rst) out_down_psum <= 0;
		else if (write_weight_en) out_down_psum <= 0;
		else out_down_psum <= in_up_psum + weight * in_left_act;
	end

	// out_down_weight输出
	always @(posedge clk) begin
		if (rst) out_down_weight <= 0;
		else if (write_weight_en) out_down_weight <= in_up_weight;
		else out_down_weight <= 0;
	end

endmodule
