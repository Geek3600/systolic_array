`timescale 1ns/1ns
`include "config.v"
module output_shifter_register(
	input clk,
	input rst,
	input load_en,
	input load_clear,
	input out_en,

	// 只有这两个信号会影响acc_mem中的值
	input acc_enable, 
	input acc_clear,   

	input [`OUTPUT_BUF_DATASIZE-1:0] in,
	output [`OUTPUT_BUF_DATASIZE-1:0] out
);
	reg [`ARRAYHEIGHT*`OUTPUT_BUF_DATASIZE-1:0] mem;
	reg [`ARRAYHEIGHT*`OUTPUT_BUF_DATASIZE-1:0] acc_mem;
	reg [`OUTPUT_INDEX:0] depth;

	always @(posedge clk) begin
		if (rst) mem <= 0;
		else if (depth < `ARRAYHEIGHT - 1) mem <= {in, mem[`ARRAYHEIGHT*`OUTPUT_BUF_DATASIZE-1:`OUTPUT_BUF_DATASIZE]};
		else mem <= mem;
	end

	always @(posedge clk) begin
		if (rst) depth <= 0;
		else if (load_clear) depth <= 0;
		else if (load_en) begin
			if (depth < `ARRAYHEIGHT) depth <= depth + 1;
			else depth <= depth;
		end
		else depth <= depth;
	end

	generate
		genvar i;
		for (i = 0; i < `ARRAYHEIGHT; i = i + 1) begin: acc
			always @(posedge clk) begin
				if (rst) begin
					acc_mem[(i+1)*`OUTPUT_BUF_DATASIZE-1:i*`OUTPUT_BUF_DATASIZE] <= 0;
				end
				else if (acc_enable) begin
					acc_mem[(i+1)*`OUTPUT_BUF_DATASIZE-1:i*`OUTPUT_BUF_DATASIZE] <= acc_mem[(i+1)*`OUTPUT_BUF_DATASIZE-1:i*`OUTPUT_BUF_DATASIZE] + mem[(i+1)*`OUTPUT_BUF_DATASIZE-1:i*`OUTPUT_BUF_DATASIZE];
				end
				else if (acc_clear) begin // 轮到下一分块计算，需要清空累加寄存器
					acc_mem[(i+1)*`OUTPUT_BUF_DATASIZE-1:i*`OUTPUT_BUF_DATASIZE] <= 0;
				end
				// else if (out_en) begin
				// 	acc_mem <= {{`OUTPUT_BUF_DATASIZE{1'b0}}, acc_mem[`ARRAYHEIGHT*`OUTPUT_BUF_DATASIZE-1:`OUTPUT_BUF_DATASIZE]};
				// end
				else begin // 其他时间保持原值
					acc_mem[(i+1)*`OUTPUT_BUF_DATASIZE-1:i*`OUTPUT_BUF_DATASIZE] <= acc_mem[(i+1)*`OUTPUT_BUF_DATASIZE-1:i*`OUTPUT_BUF_DATASIZE];
				end
			end
		end
	endgenerate
	assign out = acc_mem[`ARRAYHEIGHT*`OUTPUT_BUF_DATASIZE-1:(`ARRAYHEIGHT-1)*`OUTPUT_BUF_DATASIZE];
	

endmodule
