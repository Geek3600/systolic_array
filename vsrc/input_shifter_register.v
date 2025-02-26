`include "vsrc/config.v"
module input_shifter_register #(
	parameter DELAY_NUM = 0
)(
	input clk,
	input rst,
	input load_en,
	input out_en,
	input [`DATASIZE-1:0] in,
	output [`DATASIZE-1:0] out
);
	reg [(2*`ARRAYWIDTH-1)*`DATASIZE-1:0] mem; 
	always @(posedge clk) begin
		if (rst) mem <= 0;
		else if (load_en) mem <= {{(`ARRAYWIDTH-1-DELAY_NUM)*`DATASIZE{1'b0}},
			                      in,
			mem[(`ARRAYWIDTH+DELAY_NUM)*`DATASIZE-1:`DATASIZE]};
		else if (out_en) mem <= {{`DATASIZE{1'b0}},mem[(2*`ARRAYWIDTH-1)*`DATASIZE-1:`DATASIZE]};
		else mem <= mem;
	end

	assign out = (out_en) ? mem[`DATASIZE-1:0] : 0;
endmodule
