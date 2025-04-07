`timescale 1ns/1ns
`include "config.v"
module constant_multipler_ln2 ( // 0.1011
    input  [`OUTPUT_BUF_DATASIZE-1:0] m_sub_one_plus_w, // 定点数 22位整数 10位小数
    output [`OUTPUT_BUF_DATASIZE-1:0] lnF //定点数 22位整数 10位小数 lnF
);
    // A * 0.1011 = A * (0.1 + 0.001 + 0.0001) = A>>1 + A>>3 + A>>4
    assign lnF = (m_sub_one_plus_w >> 1)+ (m_sub_one_plus_w >> 3) + (m_sub_one_plus_w >> 4);
endmodule

