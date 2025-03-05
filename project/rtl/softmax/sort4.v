`timescale 1ns/1ns
`include "config.v"

// 4个数排序，第6个时钟输出排序结果，第7个周期可读到
module sort4 (
    input clk,
    input rst,
    input en,
    input [`OUTPUT_BUF_DATASIZE-1:0] in1,
    input [`OUTPUT_BUF_DATASIZE-1:0] in2,
    input [`OUTPUT_BUF_DATASIZE-1:0] in3,
    input [`OUTPUT_BUF_DATASIZE-1:0] in4,
    output  [`OUTPUT_BUF_DATASIZE-1:0] small1,
    output  [`OUTPUT_BUF_DATASIZE-1:0] small2,
    output  [`OUTPUT_BUF_DATASIZE-1:0] large1,
    output  [`OUTPUT_BUF_DATASIZE-1:0] large2
);

    reg  [2:0] cnt;
    reg  [`OUTPUT_BUF_DATASIZE-1:0] num1;
    reg  [`OUTPUT_BUF_DATASIZE-1:0] num2;
    reg  [`OUTPUT_BUF_DATASIZE-1:0] num3;
    reg  [`OUTPUT_BUF_DATASIZE-1:0] num4;

    always @(posedge clk) begin
        if (rst) cnt <= 0;
        else if (en && cnt < 'd6) cnt <= cnt + 1;
        else cnt <= 0;
    end

    always @(posedge clk) begin
        if (rst) begin
            num1 <= 0;
            num2 <= 0;
            num3 <= 0;
            num4 <= 0;
        end
        else if (en && cnt == 0) begin
            num1 <= in1;
            num2 <= in2;
            num3 <= in3;
            num4 <= in4;
        end
        else if (cnt == 1) begin
            if (num1 > num2) begin
                num1 <= num2;
                num2 <= num1;
                num3 <= num3;
                num4 <= num4; 
            end
            else begin
                num1 <= num1;
                num2 <= num2;
                num3 <= num3;
                num4 <= num4;
            end
        end
        else if (cnt == 2) begin
            if (num3 > num4) begin
                num1 <= num1;
                num2 <= num2;
                num3 <= num4;
                num4 <= num3;
            end
            else begin
                num1 <= num1;
                num2 <= num2;
                num3 <= num3;
                num4 <= num4;
            end
        end
        else if (cnt == 3) begin
            if (num2 > num3) begin
                num1 <= num1;
                num2 <= num3;
                num3 <= num2;
                num4 <= num4;
            end
            else begin
                num1 <= num1;
                num2 <= num2;
                num3 <= num3;
                num4 <= num4;
            end
        end
        else if (cnt == 4) begin
            if (num3 > num4) begin
                num1 <= num1;
                num2 <= num2;
                num3 <= num4;
                num4 <= num3;
            end
            else begin  
                num1 <= num1;
                num2 <= num2;
                num3 <= num3;
                num4 <= num4;
            end
        end
        else if (cnt == 5) begin
            if (num1 > num2) begin
                num1 <= num2;
                num2 <= num1;
                num3 <= num3;
                num4 <= num4;   
            end
            else begin
                num1 <= num1;
                num2 <= num2;
                num3 <= num3;
                num4 <= num4;
            end
        end
        else if (cnt == 6) begin
            if (num2 > num3) begin
                num1 <= num1;
                num2 <= num3;
                num3 <= num2;
                num4 <= num4;
            end
            else begin
                num1 <= num1;
                num2 <= num2;
                num3 <= num3;
                num4 <= num4;
            end
        end
        else begin
            num1 <= num1;
            num2 <= num2;
            num3 <= num3;
            num4 <= num4;
        end
    end

    assign small1 = num1;
    assign small2 = num2;
    assign large1 = num3;
    assign large2 = num4;


endmodule

