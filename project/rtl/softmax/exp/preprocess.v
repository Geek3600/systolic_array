`timescale 1ns/1ns
`include "config.v"
module preprocess ( // 1.0111
    input  [`OUTPUT_BUF_DATASIZE-1:0] in, // 32位整数
    output [`OUTPUT_BUF_DATASIZE-1:0] u,
    output [7:0] v,
    output [`OUTPUT_BUF_DATASIZE+`P:0] out  // 40位定点数 32位整数，8位小数
);
    // A * 1.0111 = A * (1 + 0.1 - 0.0001) = A + A>>1 + (~(A>>4)) + 1

    wire [39:0] extend_in;
    assign extend_in = {in, 8{1'b0}};  
    assign out = extend_in + (extend_in >> 1) + (~(extend_in >> 4)) + 1; // x * log2e
    assign u = out[39:8]; // 整数部分
    assign v = out[7:0];  // 小数部分

endmodule

// 0011 3
// 001 10 1.5
// 01001 4.5

// 001100 + 000110  
// 000110
// 010010