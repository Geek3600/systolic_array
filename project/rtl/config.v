// general configuration
// 数据位宽
`define DATASIZE 8
// 输出数据位宽
`define OUTPUT_BUF_DATASIZE 32
// 阵列的高
`define ARRAYHEIGHT 8
// 阵列的宽
`define ARRAYWIDTH 8
// 等于ARRAYWIDTH的位宽 
`define OUTPUT_INDEX $clog2(`ARRAYWIDTH) 
// 等于与DSP的延迟周期数
`define DSP_DELAY 4                      


// softmax configuration
// 定点数整数位数
`define FIXPOINT_INT  22
 // 定点数小数位数     
`define FIXPOINT_FRAC 10   
// 分段线性拟合系数 
`define P 3                  

