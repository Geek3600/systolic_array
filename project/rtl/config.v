`define DATASIZE 8
`define OUTPUT_BUF_DATASIZE 32
`define ARRAYHEIGHT 16
`define ARRAYWIDTH 16
`define OUTPUT_INDEX $clog2(ARRAYWIDTH) // 等于ARRAYWIDTH的位宽，暂时未找到更好的方法  
`define DSP_DELAY 4    // 等于与DSP的延迟周期数

// sort_pe 控制信号
`define SEND_LEFT 001    // 发送数据到左边
`define SEND_RIGHT 010   // 发送数据到右边
`define RECEIVE_LEFT 011  // 接收左边数据
`define RECEIVE_RIGHT 100 // 接收右边数据
`define COMPARE 101     // 比较数据

`define FIXPOINT_INT  10     // 定点数整数位数
`define FIXPOINT_FRAC 22     // 定点数小数位数

`define P 4    // 分段线性拟合段数


