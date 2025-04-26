`timescale 1ns/1ns
`include "config.v"
module sort_pe (
	input clk,
	input rst,
    input write_enable,   // 排序前存储待排序数据
    input sort_en,

    input send_left,
    input send_right,
    input receive_left,
    input receive_right,

    input [`OUTPUT_BUF_DATASIZE-1:0] write_data1,
    input [`OUTPUT_BUF_DATASIZE-1:0] write_data2,

    input [`OUTPUT_BUF_DATASIZE-1:0] in_right1,
    input [`OUTPUT_BUF_DATASIZE-1:0] in_right2,
    output  [`OUTPUT_BUF_DATASIZE-1:0] out_right1,
    output  [`OUTPUT_BUF_DATASIZE-1:0] out_right2,

    input [`OUTPUT_BUF_DATASIZE-1:0] in_left1,
    input [`OUTPUT_BUF_DATASIZE-1:0] in_left2,

    output  [`OUTPUT_BUF_DATASIZE-1:0] out_left1,
    output  [`OUTPUT_BUF_DATASIZE-1:0] out_left2,
    output [2*`OUTPUT_BUF_DATASIZE-1:0] out
);

    reg [`OUTPUT_BUF_DATASIZE-1:0] num1;
    reg [`OUTPUT_BUF_DATASIZE-1:0] num2;
    wire [`OUTPUT_BUF_DATASIZE-1:0] small1;
    wire [`OUTPUT_BUF_DATASIZE-1:0] small2;
    wire sort_finish;
    always @(posedge clk) begin
        if (rst) begin
            num1 <= 0;
            num2 <= 0;
        end
        else if (write_enable) begin  // 排序前存储待排序数据
            num1 <= write_data1;
            num2 <= write_data2;
        end
        else if (receive_left) begin  
            num1 <= (in_left1 === `OUTPUT_BUF_DATASIZE'hZZZZZZZZ) ? num1 : in_left1;
            num2 <= (in_left2 === `OUTPUT_BUF_DATASIZE'hZZZZZZZZ) ? num2 : in_left2;
        end
        else if (sort_finish) begin
            num1 <= small1;
            num2 <= small2;
        end
        else begin
            num1 <= num1;
            num2 <= num2;
        end
    end

    
    assign out_left1 = num1;
    assign out_left2 = num2;



    reg [`OUTPUT_BUF_DATASIZE-1:0] in3;
    reg [`OUTPUT_BUF_DATASIZE-1:0] in4;
    wire [`OUTPUT_BUF_DATASIZE-1:0] out_large1;
    wire [`OUTPUT_BUF_DATASIZE-1:0] out_large2;
    assign out_right1 = (send_right) ? out_large1 : 0;
    assign out_right2 = (send_right) ? out_large2 : 0;


    // always @(posedge clk) begin
    //     if (rst) begin
    //         out_right1 <= 0;
    //         out_right2 <= 0;
    //     end
    //     else if (send_right) begin
    //         out_right1 <= out_large1;
    //         out_right2 <= out_large2;
    //     end
    //     else begin
    //         out_right1 <= 0;
    //         out_right2 <= 0;
    //     end
    // end
   

    always @(posedge clk) begin
        if (rst) begin
            in3 <= 0;
            in4 <= 0;
        end
        else if (receive_right) begin
            in3 <= in_right1;
            in4 <= in_right2;
        end
        else begin
            in3 <= 0;
            in4 <= 0;
        end
    end
    sort4 u_sort4(
        .clk(clk),
        .rst(rst),
        .sort_en(sort_en),
        .sort_finish(sort_finish),
        .in1(num1),
        .in2(num2),
        .in3(in3),
        .in4(in4),
        .out_small1(small1),
        .out_small2(small2),
        .out_large1(out_large1),
        .out_large2(out_large2)
    );
    assign out = {num2,num1};
endmodule

