`timescale 1ns/1ns
module output_buffer (
	input clk,
	input rst,
	input load_en,
	input out_en,
	input  [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] in_res,
	output [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] out_res
);
	
	reg [`ARRAYWIDTH-1:0] load_ena;
	wire load_full;
	wire  [`ARRAYWIDTH-1:0] load_ena_d;
	reg [7:0] cnt;


	always @(posedge clk) begin
		if (rst) cnt <= `DSP_DELAY;
		else if (load_en) begin
			if (cnt == 1) cnt <= `DSP_DELAY;
			else cnt <= cnt - 1;
		end
		else cnt <= cnt;
	end

	assign load_full = load_ena[`ARRAYWIDTH-1];
	always @(posedge clk) begin
		if (rst) load_ena <= 1;
		else if (load_en && ~load_full) begin
			if (cnt == `DSP_DELAY) load_ena <= {load_ena[`ARRAYWIDTH-2:0], 1'b1};
			else load_ena <= load_ena;
		end
		else begin
			if (cnt == `DSP_DELAY) load_ena <= {load_ena[`ARRAYWIDTH-2:0], 1'b0};
			else load_ena <= load_ena;
		end
	end

	assign load_ena_d = (load_en && (cnt == `DSP_DELAY)) ? load_ena : 0;


	genvar i;
	generate 
		for (i = 0; i < `ARRAYWIDTH; i = i + 1) begin: output_fifo
			shifter_register u_shifter_register (
				.clk(clk),
				.rst(rst),
				.load_en(load_ena_d[i]),
				.out_en(out_en),
				.in( in_res[(i+1)*`OUTPUT_BUF_DATASIZE-1:i*`OUTPUT_BUF_DATASIZE]),
				.out(out_res[(i+1)*`OUTPUT_BUF_DATASIZE-1:i*`OUTPUT_BUF_DATASIZE])
			);
		end
	endgenerate

endmodule

