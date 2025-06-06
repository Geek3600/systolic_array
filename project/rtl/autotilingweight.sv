// Generated by CIRCT firtool-1.62.1
module AutoTilingWeight(
  input         clock,
                reset,
                io_enable,
                io_nextRowEnable,
  output [16:0] io_rdAddr_0,
                io_rdAddr_1,
                io_rdAddr_2,
                io_rdAddr_3,
                io_rdAddr_4,
                io_rdAddr_5,
                io_rdAddr_6,
                io_rdAddr_7,
  output        io_addrValid_0,
                io_addrValid_1,
                io_addrValid_2,
                io_addrValid_3,
                io_addrValid_4,
                io_addrValid_5,
                io_addrValid_6,
                io_addrValid_7
);

  reg  [16:0] tileStartX;
  reg  [16:0] tileStartY;
  reg  [16:0] rowNum;
  wire [20:0] _GEN = {1'h0, tileStartY, 3'h0};
  wire [16:0] _GEN_0 = {tileStartX[13:0] * 14'h98, 3'h0};
  wire [16:0] _GEN_1 = {tileStartY[13:0], 3'h0};
  wire [16:0] _io_rdAddr_7_T_5 = rowNum * 17'h98;
  wire [20:0] _GEN_2 = {1'h0, tileStartX, 3'h0};
  wire [20:0] _GEN_3 = {4'h0, rowNum};
  wire [20:0] _rowAddr_T_1 = _GEN_2 + _GEN_3;
  wire [20:0] _rowAddr_T_3 = _GEN_2 + _GEN_3;
  wire [20:0] _rowAddr_T_5 = _GEN_2 + _GEN_3;
  wire [20:0] _rowAddr_T_7 = _GEN_2 + _GEN_3;
  wire [20:0] _rowAddr_T_9 = _GEN_2 + _GEN_3;
  wire [20:0] _rowAddr_T_11 = _GEN_2 + _GEN_3;
  wire [20:0] _rowAddr_T_13 = _GEN_2 + _GEN_3;
  wire [20:0] _rowAddr_T_15 = _GEN_2 + _GEN_3;
  always @(posedge clock) begin
    if (reset) begin
      tileStartX <= 17'h0;
      tileStartY <= 17'h0;
      rowNum <= 17'h0;
    end
    else begin
      automatic logic isLastRowInTile;
      automatic logic isLastTileInRow;
      isLastRowInTile = rowNum == 17'h7;
      isLastTileInRow = tileStartY == 17'h12;
      if (io_enable & isLastRowInTile & isLastTileInRow & io_nextRowEnable)
        tileStartX <= tileStartX == 17'h7 ? 17'h0 : tileStartX + 17'h1;
      if (io_enable & isLastRowInTile) begin
        if (isLastTileInRow)
          tileStartY <= 17'h0;
        else
          tileStartY <= tileStartY + 17'h1;
      end
      if (io_enable) begin
        if (isLastRowInTile)
          rowNum <= 17'h0;
        else
          rowNum <= rowNum + 17'h1;
      end
    end
  end // always @(posedge)
  assign io_rdAddr_0 = io_enable ? _GEN_0 + _GEN_1 + _io_rdAddr_7_T_5 : 17'h0;
  assign io_rdAddr_1 = io_enable ? _GEN_0 + _GEN_1 + _io_rdAddr_7_T_5 + 17'h1 : 17'h0;
  assign io_rdAddr_2 = io_enable ? _GEN_0 + _GEN_1 + _io_rdAddr_7_T_5 + 17'h2 : 17'h0;
  assign io_rdAddr_3 = io_enable ? _GEN_0 + _GEN_1 + _io_rdAddr_7_T_5 + 17'h3 : 17'h0;
  assign io_rdAddr_4 = io_enable ? _GEN_0 + _GEN_1 + _io_rdAddr_7_T_5 + 17'h4 : 17'h0;
  assign io_rdAddr_5 = io_enable ? _GEN_0 + _GEN_1 + _io_rdAddr_7_T_5 + 17'h5 : 17'h0;
  assign io_rdAddr_6 = io_enable ? _GEN_0 + _GEN_1 + _io_rdAddr_7_T_5 + 17'h6 : 17'h0;
  assign io_rdAddr_7 = io_enable ? _GEN_0 + _GEN_1 + _io_rdAddr_7_T_5 + 17'h7 : 17'h0;
  assign io_addrValid_0 = io_enable & ~((|(_rowAddr_T_1[20:6])) | _GEN > 21'h97);
  assign io_addrValid_1 = io_enable & ~((|(_rowAddr_T_3[20:6])) | _GEN + 21'h1 > 21'h97);
  assign io_addrValid_2 = io_enable & ~((|(_rowAddr_T_5[20:6])) | _GEN + 21'h2 > 21'h97);
  assign io_addrValid_3 = io_enable & ~((|(_rowAddr_T_7[20:6])) | _GEN + 21'h3 > 21'h97);
  assign io_addrValid_4 = io_enable & ~((|(_rowAddr_T_9[20:6])) | _GEN + 21'h4 > 21'h97);
  assign io_addrValid_5 = io_enable & ~((|(_rowAddr_T_11[20:6])) | _GEN + 21'h5 > 21'h97);
  assign io_addrValid_6 = io_enable & ~((|(_rowAddr_T_13[20:6])) | _GEN + 21'h6 > 21'h97);
  assign io_addrValid_7 = io_enable & ~((|(_rowAddr_T_15[20:6])) | _GEN + 21'h7 > 21'h97);
endmodule

