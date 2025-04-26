`timescale 1ns/1ns
`include "config.v"
module top(
	input clk,
	input rst,
	input btn,
	output led_enable,
	output reg led_finish
	// output [2:0] tile_row_idx,
	// output [4:0] tile_col_idx,
	// output [4:0] inner_loop_idx,
	// output [`OUTPUT_BUF_DATASIZE*`ARRAYWIDTH-1:0] out

);
	parameter ACTIVATE_DATA_ADDR_WIDTH = 18;

	wire input_buffer_load_en;
	wire input_buffer_out_en;
	wire input_buffer_delay_clear;

	wire weight_buffer_load_en;
	wire weight_buffer_out_en;

	wire write_weight_en;
	wire output_buffer_load_en;
	wire output_buffer_out_en;
	wire output_buffer_load_clear;
	wire output_buffer_acc_enable;
	wire output_buffer_acc_clear;

	wire tiling_input_nextcol_en ;
	wire tiling_weight_nextrow_en;
	wire tiling_input_next_iteration_en;

	// wire softmax_en;
    wire relu_en;

	wire  [`OUTPUT_BUF_DATASIZE*`ARRAYWIDTH-1:0] out_top;
	// assign out = out_top;
    // =========== 输入数据分块
    wire act_enable;
	wire [8*ACTIVATE_DATA_ADDR_WIDTH-1:0] act_addrs;
	// wire [7:0] act_addr_valid;
	wire [8*8-1:0] output_activate;

    // =========== 权重数据分块
    wire  weight_enable;
	wire  [8*17-1:0] weight_addrs;
	// wire  [7:0] weight_addr_valid;
	wire [8*8-1:0] output_weight;

	wire [2:0] tile_row_idx;
	wire [4:0] tile_col_idx;
	wire [4:0] inner_loop_idx;

	reg led_finish_1d;
	always @(posedge clk) begin
		if (rst) begin
			led_finish <= 0;
			led_finish_1d <= 0;
		end
		else if (tile_row_idx == 'd7 && tile_col_idx == 'd24 && inner_loop_idx == 'd31) begin
			led_finish <= 1;
			led_finish_1d <= led_finish;
		end
		else begin
			led_finish <= led_finish;
			led_finish_1d <= led_finish_1d;
		end

	end

	reg enable;
	always @(posedge clk) begin
		if (rst) enable <= 0;
		else if (btn == 1) enable <= 1;
		else enable <= enable;
	end


	ila_0 u_debugger (
		.clk(clk),
		.probe0(led_finish),
		.probe1(perf_counter),
		.probe2(clk),
		.probe3(save_perf_counter)
		// .probe4(result)
	);
	ConvController u_cu_conctrl(
		.clock(clk),
		.reset(rst),
		.io_enable(enable),
		.io_weightAutoTileEn(weight_enable),
		.io_inputAutoTileEn(act_enable),
		.io_weightBufferLoadEn(weight_buffer_load_en),
		.io_weightBufferOutEn(weight_buffer_out_en),
		.io_inputBufferLoadEn(input_buffer_load_en),
		.io_inputBufferOutEn(input_buffer_out_en),
		.io_inputBufferDelayClear(input_buffer_delay_clear),
		.io_weightStationary(write_weight_en),
		.io_outputBufferLoadEn(output_buffer_load_en),
		.io_outputBufferOutEn(output_buffer_out_en),
		.io_outputBufferLoadClear(output_buffer_load_clear),
		.io_outputBufferAccClear(output_buffer_acc_clear),
		.io_outputBufferAccEn(output_buffer_acc_enable),
		.io_tileInputNextColEn(tiling_input_nextcol_en),
		.io_tileInputNextIterationEn(tiling_input_next_iteration_en),
		.io_tileWeightNextRowEn(tiling_weight_nextrow_en),
		.io_tileRowIdx(tile_row_idx),
		.io_tileColIdx(tile_col_idx),
		.io_innerLoopIdx(inner_loop_idx)
	);

	accelerator u_accelerator(
		.clk(clk),
		.rst(rst),
		.input_buffer_load_en(input_buffer_load_en),
		.input_buffer_out_en(input_buffer_out_en),
		.input_buffer_delay_clear(input_buffer_delay_clear),
		.weight_buffer_load_en(weight_buffer_load_en),
		.weight_buffer_out_en(weight_buffer_out_en),
		.output_buffer_load_en(output_buffer_load_en),
		.output_buffer_out_en(output_buffer_out_en),
		.output_buffer_load_clear(output_buffer_load_clear),
		.output_buffer_acc_enable(output_buffer_acc_enable),
		.output_buffer_acc_clear(output_buffer_acc_clear),
		.write_weight_en(write_weight_en),
        .softmax_en(),
        .relu_en(relu_en),
		.in_act(output_weight),
		.in_weight(output_activate),
		.out_top(out_top)
	);

	AutoTilingInput u_autotilinginput(
		.clock(clk),
		.reset(rst),
		.io_enable(weight_enable),
		.io_nextColEnable(tiling_input_nextcol_en),
		.io_nextIteration(tiling_input_next_iteration_en),
		.io_rdAddr_0(act_addrs[ACTIVATE_DATA_ADDR_WIDTH*1-1:ACTIVATE_DATA_ADDR_WIDTH*0]),
		.io_rdAddr_1(act_addrs[ACTIVATE_DATA_ADDR_WIDTH*2-1:ACTIVATE_DATA_ADDR_WIDTH*1]),
		.io_rdAddr_2(act_addrs[ACTIVATE_DATA_ADDR_WIDTH*3-1:ACTIVATE_DATA_ADDR_WIDTH*2]),
		.io_rdAddr_3(act_addrs[ACTIVATE_DATA_ADDR_WIDTH*4-1:ACTIVATE_DATA_ADDR_WIDTH*3]),
		.io_rdAddr_4(act_addrs[ACTIVATE_DATA_ADDR_WIDTH*5-1:ACTIVATE_DATA_ADDR_WIDTH*4]),
		.io_rdAddr_5(act_addrs[ACTIVATE_DATA_ADDR_WIDTH*6-1:ACTIVATE_DATA_ADDR_WIDTH*5]),
		.io_rdAddr_6(act_addrs[ACTIVATE_DATA_ADDR_WIDTH*7-1:ACTIVATE_DATA_ADDR_WIDTH*6]),
		.io_rdAddr_7(act_addrs[ACTIVATE_DATA_ADDR_WIDTH*8-1:ACTIVATE_DATA_ADDR_WIDTH*7]),
		.io_addrValid_0(),
		.io_addrValid_1(),
		.io_addrValid_2(),
		.io_addrValid_3(),
		.io_addrValid_4(),
		.io_addrValid_5(),
		.io_addrValid_6(),
		.io_addrValid_7()
	);
	
    AutoTilingWeight u_autotilingweight(
		.clock(clk),
		.reset(rst),
		.io_enable(act_enable), // 因为我给input做的im2col所以，得反过来
		.io_nextRowEnable(tiling_weight_nextrow_en),
		.io_rdAddr_0( weight_addrs[16:0]),
		.io_rdAddr_1( weight_addrs[33:17]),
		.io_rdAddr_2( weight_addrs[50:34]),
		.io_rdAddr_3( weight_addrs[67:51]),
		.io_rdAddr_4( weight_addrs[84:68]),
		.io_rdAddr_5( weight_addrs[101:85]),
		.io_rdAddr_6( weight_addrs[118:102]),
		.io_rdAddr_7( weight_addrs[135:119]),
		.io_addrValid_0(),
		.io_addrValid_1(),
		.io_addrValid_2(),
		.io_addrValid_3(),
		.io_addrValid_4(),
		.io_addrValid_5(),
		.io_addrValid_6(),
		.io_addrValid_7()
	);

	wire [13: 0] debug_weight_addr = weight_addrs[16:0] >> 3;
	wire [14: 0] debug_input_addr = act_addrs[17:0] >> 3;

	bram_input28 im2col_input_2828 (
		.clka(clk),    // input wire clka
		.ena(weight_enable),      // input wire ena
		.addra(debug_input_addr[11:0]),  // input wire [14 : 0] addra
		.douta(output_activate)  // output wire [63 : 0] input_douta
	);

	bram_weight_0 weight_bram (
		.clka(clk),    // input wire clka
		.ena(act_enable),      // input wire ena
		.addra(debug_weight_addr[10:0]),  // input wire [10 : 0] addra
		.douta(output_weight)  // output wire [63 : 0] douta
	);

	assign led_enable = enable;

	reg [31:0] perf_counter;
	always @(posedge clk) begin
		if (rst) perf_counter <= 0;
		else if (enable) perf_counter <= perf_counter + 1;
		else perf_counter <= 0;
	end

	reg [31:0] save_perf_counter;

	wire led_finish_up;
	assign led_finish_up = led_finish & (~led_finish_1d);
	always @(posedge clk) begin
		if (rst) save_perf_counter <= 0;
		else if (led_finish_up) save_perf_counter <= perf_counter;
		else save_perf_counter <= save_perf_counter;
	end

	// reg [`OUTPUT_BUF_DATASIZE*`ARRAYWIDTH-1:0] result;
	// always @(posedge clk) begin
	// 	if (rst) result <= 0;
	// 	else if (led_finish_up) result <= out_top;
	// 	else result <= result;
	// end

endmodule
