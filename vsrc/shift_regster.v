`timescale 1ns/1ns
module shifter_register(
	input clk,
	input rst,
	input load_en,
	input out_en,
	input [`OUTPUT_BUF_DATASIZE-1:0] in,
	output [`OUTPUT_BUF_DATASIZE-1:0] out
);
	reg [`ARRAYHEIGHT*`OUTPUT_BUF_DATASIZE-1:0]mem;
	always @(posedge clk) begin
		if (rst) mem <= 0;
		else if (load_en) mem <= {in, mem[`ARRAYHEIGHT*`OUTPUT_BUF_DATASIZE-1:`OUTPUT_BUF_DATASIZE]};
		else if (out_en) mem <= {{`OUTPUT_BUF_DATASIZE{1'b0}}, mem[`ARRAYHEIGHT*`OUTPUT_BUF_DATASIZE-1:`OUTPUT_BUF_DATASIZE]};
		else mem <= mem;
	end

	assign out = (out_en) ? mem[`OUTPUT_BUF_DATASIZE-1:0] : 0;
endmodule
