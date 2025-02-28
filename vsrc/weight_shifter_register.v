module weight_shifter_register (
	input clk,
	input rst,
	input load_en,
	input out_en,
	input [`DATASIZE-1:0] in,
	output [`DATASIZE-1:0] out
);
	reg [`ARRAYHEIGHT*`DATASIZE-1:0] mem; 
	always @(posedge clk) begin
		if (rst) mem <= 0;
		else if (load_en) mem <= {mem[(`ARRAYHEIGHT-1)*`DATASIZE-1:0],in};
		else if (out_en) mem <= {{`DATASIZE{1'b0}}, mem[`ARRAYHEIGHT*`DATASIZE-1:`DATASIZE]};
		else mem <= mem;
	end
	assign out = (out_en) ? mem[`DATASIZE-1:0] : 0;
endmodule
