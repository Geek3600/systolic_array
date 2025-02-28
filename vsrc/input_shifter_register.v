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
	reg [7:0] cnt;

	always @(posedge clk) begin
		if (rst) mem <= 0;
		else if (load_en) mem <= {{(`ARRAYWIDTH-1-DELAY_NUM)*`DATASIZE{1'b0}},
			                      in,
			mem[(`ARRAYWIDTH+DELAY_NUM)*`DATASIZE-1:`DATASIZE]};
		else if (out_en && cnt == `DSP_DELAY) mem <= {{`DATASIZE{1'b0}},mem[(2*`ARRAYWIDTH-1)*`DATASIZE-1:`DATASIZE]};
		else mem <= mem;
	end

	// 计数器，输出的延迟
	always @(posedge clk) begin
		if (rst) cnt <= `DSP_DELAY;
		else if (out_en) begin
			if (cnt == 1) cnt <= `DSP_DELAY;
			else  cnt <= cnt - 1;
		end
		else cnt <= cnt;
	end

	assign out = (out_en && cnt == `DSP_DELAY) ? mem[`DATASIZE-1:0] : 0;
endmodule
