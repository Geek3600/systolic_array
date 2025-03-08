`timescale 1ns/1ns
`include "config.v"
module constant_multipler_ln2 ( // 0.1011
    input [`OUTPUT_BUF_DATASIZE-1:0] in, // 定点数 10位整数 22位小数
    output [`OUTPUT_BUF_DATASIZE-1:0] out //定点数 10位整数 22位小数
);
    // A * 0.1011 = A * (0.1 + 0.001 + 0.0001) = A>>1 + A>>3 + A>>4
    assign out = (in >> 1)+ (in >> 3) + (in >> 4);
endmodule

