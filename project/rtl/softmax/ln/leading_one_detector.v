`timescale 1ns/1ns
`include "config.v"
module leading_one_detector #(
    parameter IN_SIZE  =  `OUTPUT_BUF_DATASIZE,
    parameter OUT_SIZE =  `OUTPUT_BUF_DATASIZE
)(
    input  clk,
    input  rst,
    input  [IN_SIZE-1:0]  F,    //32位定点数  F >= 1
    output [OUT_SIZE-1:0] w,    //32位定点数
    output [IN_SIZE-1:0]  one_hot// 输出最高位1的one hot
);

    wire [IN_SIZE-1:0] pre;
    wire [IN_SIZE-1:0] one_hot_d;

    assign pre[IN_SIZE-1] = 0;
    assign pre[IN_SIZE-2:0] = F[IN_SIZE-1:1] | pre[IN_SIZE-1:1];
    assign one_hot_d = F & (~pre);
    register #(IN_SIZE) u_register1 (clk, rst, one_hot_d, one_hot);
    
    // 优先编码器输出1的位置
    assign w =   (one_hot[0])  ? 'd1 : 
                 (one_hot[1])  ? 'd2 :
                 (one_hot[2])  ? 'd3 :
                 (one_hot[3])  ? 'd4 :
                 (one_hot[4])  ? 'd5 :
                 (one_hot[5])  ? 'd6 :
                 (one_hot[6])  ? 'd7 :
                 (one_hot[7])  ? 'd8 :
                 (one_hot[8])  ? 'd9 :
                 (one_hot[9])  ? 'd10 :
                 (one_hot[10]) ? 'd11 :
                 (one_hot[11]) ? 'd12 :
                 (one_hot[12]) ? 'd13 :
                 (one_hot[13]) ? 'd14 :
                 (one_hot[14]) ? 'd15 :
                 (one_hot[15]) ? 'd16 :
                 (one_hot[16]) ? 'd17 :
                 (one_hot[17]) ? 'd18 :
                 (one_hot[18]) ? 'd19 :
                 (one_hot[19]) ? 'd20 :
                 (one_hot[20]) ? 'd21 :
                 (one_hot[21]) ? 'd22 :
                 (one_hot[22]) ? 'd23 :
                 (one_hot[23]) ? 'd24 :
                 (one_hot[24]) ? 'd25 :
                 (one_hot[25]) ? 'd26 :
                 (one_hot[26]) ? 'd27 :
                 (one_hot[27]) ? 'd28 :
                 (one_hot[28]) ? 'd29 :
                 (one_hot[29]) ? 'd30 :
                 (one_hot[30]) ? 'd31 :
                 (one_hot[31]) ? 'd32 : 0;


endmodule

