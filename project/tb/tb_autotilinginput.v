`timescale 1ns/1ns
//`include "config.v"
module tb_autotilinginput();
	parameter CLOCK_PERIOD = 10;
	reg clk;
	reg rst;
	reg [20:0] count;

	//===========生成时钟和复位信号===============
	always #(CLOCK_PERIOD/2) clk = ~clk;
	initial begin
		count = 0;
		clk = 0;
		rst = 1;
		#CLOCK_PERIOD;
		rst = 0;
	end
	//===========生成时钟和复位信号===============

	//=================测试行为===================
	reg enable;
	reg [16*15-1:0] addrs;
	reg [15:0] addr_valid;
	wire [16*8-1:0] output_activate;
	reg [147*25*8-1:0] activate [0:0];
	
    initial begin	
		enable = 1'b0;
        #CLOCK_PERIOD;
		enable = 1'b1;
		#(CLOCK_PERIOD*16);
		enable = 1'b0;
		#(CLOCK_PERIOD*2);
		enable = 1'b1;
    end

	// reg [147*8*64-1:0]  [0:0];
	initial begin
		$readmemh("/home/hyyuan/systolic-array/test/im2col_input.dat", activate);
		// $readmemh("/home/hyyuan/systolic-array/test/im2col_input.bin", activate);
		// $readmemh("/home/hyyuan/systolic-array/test/sort_data", mem);
		// $readmemh("/home/hyyuan/systolic-array/test/sort_data_res", mem_res);
	end

	always@(posedge clk) begin
		count <= count + 1;
		$display("%d: %h %h %h %h %h %h %h %h %h %h %h %h %h %h %h %h\n",  count, 
																		output_activate[7:0]    ,
																		output_activate[15:8]   ,
																		output_activate[23:16]  ,
																		output_activate[31:24]  ,
																		output_activate[39:32]  ,
																		output_activate[47:40]  ,
																		output_activate[55:48]  ,
																		output_activate[63:56]  ,
																		output_activate[71:64]  ,
																		output_activate[79:72]  ,
																		output_activate[87:80]  ,
																		output_activate[95:88]  ,
																		output_activate[103:96] ,
																		output_activate[111:104],
																		output_activate[119:112],
																		output_activate[127:120]
																		);
	end

	AutoTilingInput u_autotilinginput(
		.clock(clk),
		.reset(rst),
		.io_enable(enable),
		.io_rdAddr_0( addrs[14:0]    ),
		.io_rdAddr_1( addrs[29:15]   ),
		.io_rdAddr_2( addrs[44:30]   ),
		.io_rdAddr_3( addrs[59:45]   ),
		.io_rdAddr_4( addrs[74:60]   ),
		.io_rdAddr_5( addrs[89:75]  ),
		.io_rdAddr_6( addrs[104:90] ),
		.io_rdAddr_7( addrs[119:105] ),
		.io_rdAddr_8( addrs[134:120] ),
		.io_rdAddr_9( addrs[149:135] ),	
		.io_rdAddr_10(addrs[164:150]),
		.io_rdAddr_11(addrs[179:165]),
		.io_rdAddr_12(addrs[194:180]),
		.io_rdAddr_13(addrs[209:195]),
		.io_rdAddr_14(addrs[224:210]),
		.io_rdAddr_15(addrs[239:225]),
		.io_addrValid_0(addr_valid[0]),
		.io_addrValid_1(addr_valid[1]),
		.io_addrValid_2(addr_valid[2]),
		.io_addrValid_3(addr_valid[3]),
		.io_addrValid_4(addr_valid[4]),
		.io_addrValid_5(addr_valid[5]),
		.io_addrValid_6(addr_valid[6]),
		.io_addrValid_7(addr_valid[7]),
		.io_addrValid_8(addr_valid[8]),
		.io_addrValid_9(addr_valid[9]),
		.io_addrValid_10(addr_valid[10]),
		.io_addrValid_11(addr_valid[11]),
		.io_addrValid_12(addr_valid[12]),
		.io_addrValid_13(addr_valid[13]),
		.io_addrValid_14(addr_valid[14]),
		.io_addrValid_15(addr_valid[15])
	);
	assign output_activate[7:0]     = (addr_valid[0])  ? activate[0][(addrs[14:0]   )*8  +: 8]: 8'b0;
	assign output_activate[15:8]    = (addr_valid[1])  ? activate[0][(addrs[29:15]  )*8  +: 8]: 8'b0;
	assign output_activate[23:16]   = (addr_valid[2])  ? activate[0][(addrs[44:30]  )*8  +: 8]: 8'b0;
	assign output_activate[31:24]   = (addr_valid[3])  ? activate[0][(addrs[59:45]  )*8  +: 8]: 8'b0;
	assign output_activate[39:32]   = (addr_valid[4])  ? activate[0][(addrs[74:60]  )*8  +: 8]: 8'b0;
	assign output_activate[47:40]   = (addr_valid[5])  ? activate[0][(addrs[89:75]  )*8  +: 8]: 8'b0;
	assign output_activate[55:48]   = (addr_valid[6])  ? activate[0][(addrs[104:90] )*8  +: 8]: 8'b0;
	assign output_activate[63:56]   = (addr_valid[7])  ? activate[0][(addrs[119:105])*8  +: 8]: 8'b0;
	assign output_activate[71:64]   = (addr_valid[8])  ? activate[0][(addrs[134:120])*8  +: 8]: 8'b0;
	assign output_activate[79:72]   = (addr_valid[9])  ? activate[0][(addrs[149:135])*8 +: 8]: 8'b0;
	assign output_activate[87:80]   = (addr_valid[10]) ? activate[0][(addrs[164:150])*8 +: 8]: 8'b0;
	assign output_activate[95:88]   = (addr_valid[11]) ? activate[0][(addrs[179:165])*8 +: 8]: 8'b0;
	assign output_activate[103:96]  = (addr_valid[12]) ? activate[0][(addrs[194:180])*8 +: 8]: 8'b0;
	assign output_activate[111:104] = (addr_valid[13]) ? activate[0][(addrs[209:195])*8 +: 8]: 8'b0;
	assign output_activate[119:112] = (addr_valid[14]) ? activate[0][(addrs[224:210])*8 +: 8]: 8'b0;
	assign output_activate[127:120] = (addr_valid[15]) ? activate[0][(addrs[239:225])*8 +: 8]: 8'b0;

    //=================测试行为===================
	
	//================生成波形====================
	initial begin
		$fsdbDumpfile("tb_autotilinginput.fsdb");
		$fsdbDumpvars("+all");
	end
    //================生成波形====================
	initial #200 $finish;

endmodule
