`include "vsrc/config.v"
module shifter_register(
	input clk,
	input rst,
	input load_en,
	input out_en,
	input [2*`DATASIZE-1:0] in,
	output [2*`DATASIZE-1:0] out
);
	reg [2*`ARRAYHEIGHT*`DATASIZE-1:0]mem;
	always @(posedge clk) begin
		if (rst) mem <= 0;
		else if (load_en) mem <= {in, mem[2*`ARRAYHEIGHT*`DATASIZE-1:2*`DATASIZE]};
		else if (out_en) mem <= {{2*`DATASIZE{1'b0}}, mem[2*`ARRAYHEIGHT*`DATASIZE-1:2*`DATASIZE]};
		else mem <= mem;
	end

	assign out = (out_en) ? mem[2*`DATASIZE-1:0] : 0;
endmodule
