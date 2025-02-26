`include "vsrc/config.v"
module PE_row (
	input clk,
	input rst,

	input  write_weight_en,
	input  [`DATASIZE*`ARRAYWIDTH-1:0] in_up_weight,
	output [`DATASIZE*`ARRAYWIDTH-1:0] out_down_weight,

	input      [2*`DATASIZE*`ARRAYWIDTH-1:0] in_up_psum,
	output [2*`DATASIZE*`ARRAYWIDTH-1:0] out_down_psum,

	input  [`DATASIZE-1:0] in_left_act
);

	wire [`ARRAYWIDTH*`DATASIZE-1:0] out_right_act;
	genvar i;
	generate 
		for (i = 0; i < `ARRAYWIDTH; i = i + 1) begin: pe_row
			if (i == 0) begin 
				PE u_pe(
					.clk(clk),
					.rst(rst),
					.write_weight_en(write_weight_en),
					.in_up_weight(in_up_weight[`DATASIZE-1:0]),
					.out_down_weight(out_down_weight[`DATASIZE-1:0]),
					.in_up_psum(in_up_psum[2*`DATASIZE-1:0]),
					.out_down_psum(out_down_psum[2*`DATASIZE-1:0]),
					.in_left_act(in_left_act),
					.out_right_act(out_right_act[`DATASIZE-1:0])
				);
			end
			else begin
				PE u_pe(
					.clk(clk),
					.rst(rst),
					.write_weight_en(write_weight_en),
					.in_up_weight(in_up_weight[(i+1)*`DATASIZE-1:i*`DATASIZE]),
					.out_down_weight(out_down_weight[(i+1)*`DATASIZE-1:i*`DATASIZE]),
					.in_up_psum(in_up_psum[2*(i+1)*`DATASIZE-1:2*i*`DATASIZE]),
					.out_down_psum(out_down_psum[2*(i+1)*`DATASIZE-1:2*i*`DATASIZE]),
					.in_left_act(out_right_act[i*`DATASIZE-1:(i-1)*`DATASIZE]),
					.out_right_act(out_right_act[(i+1)*`DATASIZE-1:i*`DATASIZE])
				);
			end
		end
	endgenerate

endmodule
