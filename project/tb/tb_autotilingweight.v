`timescale 1ns/1ns
`include "config.v"
module tb_autotilingweight();
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
	reg [16*17-1:0] addrs;
	reg [15:0] addr_valid;
	wire [16*8-1:0] output_weight;
	reg [147*8*64-1:0] weight [0:0];
	
    initial begin	
		enable = 1'b0;
        #CLOCK_PERIOD;
		enable = 1'b1;
		#(CLOCK_PERIOD*16);
		enable = 1'b0;
		#(CLOCK_PERIOD*10);
		enable = 1'b1;
    end

	// reg [147*25*8-1:0] activate;
	initial begin
		$readmemh("/home/hyyuan/systolic-array/test/conv1_kernel.dat", weight);
		// $readmemh("/home/hyyuan/systolic-array/test/im2col_input.bin", activate);
		// $readmemh("/home/hyyuan/systolic-array/test/sort_data", mem);
		// $readmemh("/home/hyyuan/systolic-array/test/sort_data_res", mem_res);
	end

	always@(posedge clk) begin
		if (enable) count <= count + 1;
		else count <= count;
		
		$display("%d: %h %h %h %h %h %h %h %h %h %h %h %h %h %h %h %h\n",  count, 
																		output_weight[7:0]    ,
																		output_weight[15:8]   ,
																		output_weight[23:16]  ,
																		output_weight[31:24]  ,
																		output_weight[39:32]  ,
																		output_weight[47:40]  ,
																		output_weight[55:48]  ,
																		output_weight[63:56]  ,
																		output_weight[71:64]  ,
																		output_weight[79:72]  ,
																		output_weight[87:80]  ,
																		output_weight[95:88]  ,
																		output_weight[103:96] ,
																		output_weight[111:104],
																		output_weight[119:112],
																		output_weight[127:120]
																		);
	end
	// wire [17:0] addr1;
	// wire [17:0] addr2;
	// wire [17:0] addr3;
	// wire [17:0] addr4;
	// wire [17:0] addr5;
	// wire [17:0] addr6;
	// wire [17:0] addr7;
	// wire [17:0] addr8;
	// wire [17:0] addr9;
	// wire [17:0] addr10;
	// wire [17:0] addr11;
	// wire [17:0] addr12;
	// wire [17:0] addr13;
	// wire [17:0] addr14;
	// wire [17:0] addr15;
	// wire [17:0] addr16; 
	// assign addr1 =  addrs[16:0]   ;
	// assign addr2 =  addrs[33:17]  ;
	// assign addr3 =  addrs[50:34]  ;
	// assign addr4 =  addrs[67:51]  ;
	// assign addr5 =  addrs[84:68]  ;
	// assign addr6 =  addrs[101:85] ;
	// assign addr7 =  addrs[118:102];
	// assign addr8 =  addrs[135:119];
	// assign addr9 =  addrs[152:136];
	// assign addr10 = addrs[169:153];
	// assign addr11 = addrs[186:170];
	// assign addr12 = addrs[203:187];
	// assign addr13 = addrs[220:204];
	// assign addr14 = addrs[237:221];
	// assign addr15 = addrs[254:238];
	// assign addr16 = addrs[271:255];
	AutoTilingWeight u_autotilingweight(
		.clock(clk),
		.reset(rst),
		.io_enable(enable),
		.io_rdAddr_0(addrs[16:0]),
		.io_rdAddr_1(addrs[33:17]),
		.io_rdAddr_2(addrs[50:34]),
		.io_rdAddr_3(addrs[67:51]),
		.io_rdAddr_4(addrs[84:68]),
		.io_rdAddr_5(addrs[101:85]),
		.io_rdAddr_6(addrs[118:102]),
		.io_rdAddr_7(addrs[135:119]),
		.io_rdAddr_8(addrs[152:136]),
		.io_rdAddr_9(addrs[169:153]),
		.io_rdAddr_10(addrs[186:170]),
		.io_rdAddr_11(addrs[203:187]),
		.io_rdAddr_12(addrs[220:204]),
		.io_rdAddr_13(addrs[237:221]),
		.io_rdAddr_14(addrs[254:238]),
		.io_rdAddr_15(addrs[271:255]),
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
	assign output_weight[7:0]     = (addr_valid[0])  ? weight[0][(addrs[16:0]   )*8  +: 8]: 8'b0;
	assign output_weight[15:8]    = (addr_valid[1])  ? weight[0][(addrs[33:17]  )*8  +: 8]: 8'b0;
	assign output_weight[23:16]   = (addr_valid[2])  ? weight[0][(addrs[50:34]  )*8  +: 8]: 8'b0;
	assign output_weight[31:24]   = (addr_valid[3])  ? weight[0][(addrs[67:51]  )*8  +: 8]: 8'b0;
	assign output_weight[39:32]   = (addr_valid[4])  ? weight[0][(addrs[84:68]  )*8  +: 8]: 8'b0;
	assign output_weight[47:40]   = (addr_valid[5])  ? weight[0][(addrs[101:85] )*8  +: 8]: 8'b0;
	assign output_weight[55:48]   = (addr_valid[6])  ? weight[0][(addrs[118:102])*8  +: 8]: 8'b0;
	assign output_weight[63:56]   = (addr_valid[7])  ? weight[0][(addrs[135:119])*8  +: 8]: 8'b0;
	assign output_weight[71:64]   = (addr_valid[8])  ? weight[0][(addrs[152:136])*8  +: 8]: 8'b0;
	assign output_weight[79:72]   = (addr_valid[9])  ? weight[0][(addrs[169:153])*8 +: 8]: 8'b0;
	assign output_weight[87:80]   = (addr_valid[10]) ? weight[0][(addrs[186:170])*8 +: 8]: 8'b0;
	assign output_weight[95:88]   = (addr_valid[11]) ? weight[0][(addrs[203:187])*8 +: 8]: 8'b0;
	assign output_weight[103:96]  = (addr_valid[12]) ? weight[0][(addrs[220:204])*8 +: 8]: 8'b0;
	assign output_weight[111:104] = (addr_valid[13]) ? weight[0][(addrs[237:221])*8 +: 8]: 8'b0;
	assign output_weight[119:112] = (addr_valid[14]) ? weight[0][(addrs[254:238])*8 +: 8]: 8'b0;
	assign output_weight[127:120] = (addr_valid[15]) ? weight[0][(addrs[271:255])*8 +: 8]: 8'b0;

    //=================测试行为===================
	
	//================生成波形====================
	initial begin
		$fsdbDumpfile("tb_autotilingweight.fsdb");
		$fsdbDumpvars("+all");
	end
    //================生成波形====================
	initial #200 $finish;

endmodule
