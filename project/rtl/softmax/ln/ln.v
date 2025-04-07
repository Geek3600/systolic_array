`timescale 1ns/1ns
`include "config.v"
module ln (
	input clk,
	input rst,
    input [`OUTPUT_BUF_DATASIZE-1:0]  F,
    output [`OUTPUT_BUF_DATASIZE-1:0] lnF 
);

    wire  [`OUTPUT_BUF_DATASIZE-1:0] w;
    wire  [`OUTPUT_BUF_DATASIZE-1:0] one_hot; // 输出最高位1的one hot 
    leading_one_detector u_leading_one_detector (
        .clk(clk),
        .rst(rst),
        .F(F),  // F >= 1
        .w(w), 
        .one_hot(one_hot) // 输出最高位1的one hot
    );

    wire  [`OUTPUT_BUF_DATASIZE-1:0] m_sub_one_plus_w; // m-1+w
    shift u_shift(  // 移位，然后直接-1，再进行拼接
        .clk(clk),
        .rst(rst),
        .w(w),      // w
        .F(F),      // F
        .one_hot(one_hot),
        .m_sub_one_plus_w(m_sub_one_plus_w)  // m-1+w
    );

    constant_multipler_ln2 u_constant_multipler_ln2( // 0.1011
        .m_sub_one_plus_w(m_sub_one_plus_w),       //32定点数 22位整数 10位小数
        .lnF(lnF)                                  //32定点数 22位整数 10位小数 lnF
    );


endmodule

