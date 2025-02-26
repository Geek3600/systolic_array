`include "vsrc/config.v"
module output_buffer (
	input clk,
	input rst,
	input load_en,
	input out_en,
	input  [2*`ARRAYWIDTH*`DATASIZE-1:0] in_res,
	output [2*`ARRAYWIDTH*`DATASIZE-1:0] out_res
);
	


	reg [`ARRAYWIDTH-1:0] load_ena;
	wire load_full;

	assign load_full = load_ena[`ARRAYWIDTH-1];
	always @(posedge clk) begin
		if (rst) load_ena <= 1;
		else if (load_en && ~load_full) load_ena <= {load_ena[`ARRAYWIDTH-2:0], 1'b1};
		else load_ena <= {load_ena[`ARRAYWIDTH-2:0], 1'b0};
	end

	genvar i;
	generate 
		for (i = 0; i < `ARRAYWIDTH; i = i + 1) begin
			shifter_register u_shifter_register (
				.clk(clk),
				.rst(rst),
				.load_en(load_ena[i]),
				.out_en(out_en),
				.in(in_res[2*(i+1)*`DATASIZE-1:2*i*`DATASIZE]),
				.out(out_res[2*(i+1)*`DATASIZE-1:2*i*`DATASIZE])
			);
		end
	endgenerate

endmodule

