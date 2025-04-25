`timescale 1ns/1ns
`include "config.v"
module tb_accelerator();
	parameter CLOCK_PERIOD = 10;
	reg clk;
	reg rst;
	parameter ACTIVATE_DATA_ADDR_WIDTH = 18;

	//===========生成时钟和复位信号===============
	always #(CLOCK_PERIOD/2) clk = ~clk;
	initial begin
		clk = 0;
		rst = 1;
		#CLOCK_PERIOD;
		rst = 0;
	end
	//===========生成时钟和复位信号===============

	//=================测试行为===================
	reg enable;
	initial begin
		enable = 0;
		#CLOCK_PERIOD;
		enable = 1;
	end


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

	wire softmax_en;
    wire relu_en;

	wire  [`OUTPUT_BUF_DATASIZE*`ARRAYWIDTH-1:0] out_top;

    // =========== 输入数据分块
    wire act_enable;
	wire [8*ACTIVATE_DATA_ADDR_WIDTH-1:0] act_addrs;
	wire [7:0] act_addr_valid;
	wire [8*8-1:0] output_activate;

    // =========== 权重数据分块
    wire  weight_enable;
	wire  [8*17-1:0] weight_addrs;
	wire  [7:0] weight_addr_valid;
	wire [8*8-1:0] output_weight;


	wire [2:0] tile_row_idx;
	wire [4:0] tile_col_idx;
	wire [4:0] inner_loop_idx;
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
        .softmax_en(softmax_en),
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
		.io_rdAddr_0( act_addrs[ACTIVATE_DATA_ADDR_WIDTH*1-1:ACTIVATE_DATA_ADDR_WIDTH*0]),
		.io_rdAddr_1( act_addrs[ACTIVATE_DATA_ADDR_WIDTH*2-1:ACTIVATE_DATA_ADDR_WIDTH*1]),
		.io_rdAddr_2( act_addrs[ACTIVATE_DATA_ADDR_WIDTH*3-1:ACTIVATE_DATA_ADDR_WIDTH*2]),
		.io_rdAddr_3( act_addrs[ACTIVATE_DATA_ADDR_WIDTH*4-1:ACTIVATE_DATA_ADDR_WIDTH*3]),
		.io_rdAddr_4( act_addrs[ACTIVATE_DATA_ADDR_WIDTH*5-1:ACTIVATE_DATA_ADDR_WIDTH*4]),
		.io_rdAddr_5( act_addrs[ACTIVATE_DATA_ADDR_WIDTH*6-1:ACTIVATE_DATA_ADDR_WIDTH*5]),
		.io_rdAddr_6( act_addrs[ACTIVATE_DATA_ADDR_WIDTH*7-1:ACTIVATE_DATA_ADDR_WIDTH*6]),
		.io_rdAddr_7( act_addrs[ACTIVATE_DATA_ADDR_WIDTH*8-1:ACTIVATE_DATA_ADDR_WIDTH*7]),
		.io_addrValid_0( act_addr_valid[0]),
		.io_addrValid_1( act_addr_valid[1]),
		.io_addrValid_2( act_addr_valid[2]),
		.io_addrValid_3( act_addr_valid[3]),
		.io_addrValid_4( act_addr_valid[4]),
		.io_addrValid_5( act_addr_valid[5]),
		.io_addrValid_6( act_addr_valid[6]),
		.io_addrValid_7( act_addr_valid[7])
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
		.io_addrValid_0( weight_addr_valid[0]),
		.io_addrValid_1( weight_addr_valid[1]),
		.io_addrValid_2( weight_addr_valid[2]),
		.io_addrValid_3( weight_addr_valid[3]),
		.io_addrValid_4( weight_addr_valid[4]),
		.io_addrValid_5( weight_addr_valid[5]),
		.io_addrValid_6( weight_addr_valid[6]),
		.io_addrValid_7( weight_addr_valid[7])
	);

    // wire [63:0] input_douta;
    // wire [63:0] weight_douta;

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


	initial begin
		$fsdbDumpfile("tb_accelerator.fsdb");
		$fsdbDumpvars("+all");
	end
	initial #3420000 $finish;

endmodule
