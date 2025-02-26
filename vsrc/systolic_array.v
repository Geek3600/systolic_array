`include "vsrc/config.v"
module systolic_array (
	input  clk,
	input  rst,
	input  write_weight_en,
	input  [`DATASIZE*`ARRAYWIDTH-1:0]    in_up_weight,
	input  [`DATASIZE*`ARRAYHEIGHT-1:0]   in_left_act,
	output [2*`ARRAYWIDTH*`DATASIZE-1:0]  out_sum
);

	wire [2*`ARRAYHEIGHT*`ARRAYWIDTH*`DATASIZE-1:0] out_down_psum;
	wire [`ARRAYHEIGHT*`ARRAYWIDTH*`DATASIZE-1:0] out_down_weight;
	genvar i;
	generate 
		for (i = 0; i < `ARRAYHEIGHT; i = i + 1) begin: pe_array
			if (i == 0) begin 
				PE_row pe_row(
					.clk(clk),
					.rst(rst),
					.write_weight_en(write_weight_en),
					.in_up_weight(in_up_weight),
					.out_down_weight(out_down_weight[`DATASIZE*`ARRAYWIDTH-1:0]),
					.in_up_psum({2*`DATASIZE*`ARRAYWIDTH{1'b0}}),
					.out_down_psum(out_down_psum[2*`DATASIZE*`ARRAYWIDTH-1:0]),
					.in_left_act(in_left_act[`DATASIZE-1:0])
				);
			end
			else begin
				PE_row pe_row(
					.clk(clk),
					.rst(rst),
					.write_weight_en(write_weight_en),
					.in_up_weight(out_down_weight[i*`DATASIZE*`ARRAYWIDTH-1:(i-1)*`DATASIZE*`ARRAYWIDTH]),
					.out_down_weight(out_down_weight[(i+1)*`DATASIZE*`ARRAYWIDTH-1:i*`DATASIZE*`ARRAYWIDTH]),
					.in_up_psum(out_down_psum[i*2*`DATASIZE*`ARRAYWIDTH-1:(i-1)*2*`DATASIZE*`ARRAYWIDTH]),
					.out_down_psum(out_down_psum[(i+1)*2*`DATASIZE*`ARRAYWIDTH-1:i*2*`DATASIZE*`ARRAYWIDTH]),
					.in_left_act(in_left_act[(i+1)*`DATASIZE-1:i*`DATASIZE])
				);
			end
		end
	endgenerate
	assign out_sum = out_down_psum[2*`ARRAYHEIGHT*`DATASIZE*`ARRAYWIDTH-1:(`ARRAYHEIGHT-1)*2*`DATASIZE*`ARRAYWIDTH];
endmodule
