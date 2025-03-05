`define DATASIZE 8
`define OUTPUT_BUF_DATASIZE 32
`define ARRAYHEIGHT 16
`define ARRAYWIDTH 16
`define OUTPUT_INDEX 4 // 等于ARRAYWIDTH的位宽，暂时未找到更好的方法  
`define DSP_DELAY 4    // 等于与DSP的延迟周期数

// sort_pe 控制信号
`define SEND_LEFT 00    // 发送数据到左边
`define SEND_RIGHT 01   // 发送数据到右边
`define RECEIVE_LEFT 10  // 接收左边数据
`define RECEIVE_RIGHT 11 // 接收右边数据

