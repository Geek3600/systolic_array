`include "vsrc/config.v"
module dsp(
	input clk,
	input [`DATASIZE-1:0] A,
	input [`DATASIZE-1:0] B,
	input [`OUTPUT_BUF_DATASIZE-2:0] C,
	output reg [`OUTPUT_BUF_DATASIZE-1:0] P
);
	
	reg [`DATASIZE-1:0] A1;
	reg [`DATASIZE-1:0] A2;
	reg [`DATASIZE-1:0] A3;
	reg [`DATASIZE-1:0] B1;
	reg [`DATASIZE-1:0] B2;
	reg [`DATASIZE-1:0] B3;
	reg [`OUTPUT_BUF_DATASIZE-2:0] C1;
	reg [`OUTPUT_BUF_DATASIZE-2:0] C2;
	reg [`OUTPUT_BUF_DATASIZE-2:0] C3;

	always@(posedge clk) begin
		A1 <= A;	
		A2 <= A1;
		A3 <= A2;

		B1 <= B;
		B2 <= B1;
		B3 <= B2;
		
		C1 <= C;
		C2 <= C1;
		C3 <= C2;
		P <= A3 * B3 + C3;
	end
endmodule
