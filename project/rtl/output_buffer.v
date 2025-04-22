`timescale 1ns/1ns
`include "config.v"
module output_buffer (
	input clk,
	input rst,
	input load_en,
	input out_en,
	input load_clear,
	input acc_enable,
	input acc_clear,
	input  [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] in_res,
	output [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] out_res
);
	
	reg [`ARRAYWIDTH-1:0] load_ena;

	reg [2:0] cnt_dsp_delay;

	always @(posedge clk) begin
		if (rst) cnt_dsp_delay <= `DSP_DELAY;
		else if (load_clear) cnt_dsp_delay <= `DSP_DELAY;
		else if (load_en) begin
			if (cnt_dsp_delay == 1) cnt_dsp_delay <= `DSP_DELAY;
			else cnt_dsp_delay <= cnt_dsp_delay - 1;
		end
		else cnt_dsp_delay <= cnt_dsp_delay;
	end

	always @(posedge clk) begin
		if (rst) load_ena <= 0;
		else if (load_clear) load_ena <= 0;
		else if (load_en && cnt_dsp_delay == `DSP_DELAY) load_ena <= {load_ena[`ARRAYWIDTH-2:0], 1'b1};
		else load_ena <= load_ena;
	end

	genvar i;
	generate 
		for (i = 0; i < `ARRAYWIDTH; i = i + 1) begin: output_fifo
			output_shifter_register u_output_shifter_register (
				.clk(clk),
				.rst(rst),
				.load_en(load_ena[i]),
				.load_clear(load_clear),
				.out_en(out_en),
				.acc_enable(acc_enable),
				.acc_clear(acc_clear),
				.in( in_res[(i+1)*`OUTPUT_BUF_DATASIZE-1:i*`OUTPUT_BUF_DATASIZE]),
				.out(out_res[(i+1)*`OUTPUT_BUF_DATASIZE-1:i*`OUTPUT_BUF_DATASIZE])
			);
		end
	endgenerate

endmodule

