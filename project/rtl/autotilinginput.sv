// Generated by CIRCT firtool-1.62.1
module AutoTilingInput(
  input         clock,
                reset,
                io_enable,
                io_nextColEnable,
                io_nextIteration,
  output [17:0] io_rdAddr_0,
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

  reg  [17:0] tileStartX;
  reg  [17:0] tileStartY;
  reg  [17:0] rowNum;
  wire [21:0] _GEN = {1'h0, tileStartY, 3'h0};
  wire [17:0] _GEN_0 = {tileStartX[14:0] * 15'hC8, 3'h0};
  wire [17:0] _GEN_1 = {tileStartY[14:0], 3'h0};
  wire [17:0] _io_rdAddr_7_T_5 = rowNum * 18'hC8;
  wire [21:0] _GEN_2 = {1'h0, tileStartX, 3'h0};
  wire [21:0] _GEN_3 = {4'h0, rowNum};
  always @(posedge clock) begin
    if (reset) begin
      tileStartX <= 18'h0;
      tileStartY <= 18'h0;
      rowNum <= 18'h0;
    end
    else begin
      automatic logic isLastRowInTile;
      automatic logic isLastTileInCol;
      isLastRowInTile = rowNum == 18'h7;
      isLastTileInCol = tileStartX == 18'h12;
      if (io_enable & isLastRowInTile) begin
        if (isLastTileInCol)
          tileStartX <= 18'h0;
        else
          tileStartX <= tileStartX + 18'h1;
      end
      if (io_enable & isLastRowInTile & isLastTileInCol) begin
        if (tileStartY == 18'h18)
          tileStartY <= 18'h0;
        else if (io_nextColEnable)
          tileStartY <= tileStartY + 18'h1;
        else if (io_nextIteration)
          tileStartY <= 18'h0;
      end
      if (io_enable) begin
        if (isLastRowInTile)
          rowNum <= 18'h0;
        else
          rowNum <= rowNum + 18'h1;
      end
    end
  end // always @(posedge)
  assign io_rdAddr_0 = io_enable ? _GEN_0 + _GEN_1 + _io_rdAddr_7_T_5 : 18'h0;
  assign io_rdAddr_1 = io_enable ? _GEN_0 + _GEN_1 + _io_rdAddr_7_T_5 + 18'h1 : 18'h0;
  assign io_rdAddr_2 = io_enable ? _GEN_0 + _GEN_1 + _io_rdAddr_7_T_5 + 18'h2 : 18'h0;
  assign io_rdAddr_3 = io_enable ? _GEN_0 + _GEN_1 + _io_rdAddr_7_T_5 + 18'h3 : 18'h0;
  assign io_rdAddr_4 = io_enable ? _GEN_0 + _GEN_1 + _io_rdAddr_7_T_5 + 18'h4 : 18'h0;
  assign io_rdAddr_5 = io_enable ? _GEN_0 + _GEN_1 + _io_rdAddr_7_T_5 + 18'h5 : 18'h0;
  assign io_rdAddr_6 = io_enable ? _GEN_0 + _GEN_1 + _io_rdAddr_7_T_5 + 18'h6 : 18'h0;
  assign io_rdAddr_7 = io_enable ? _GEN_0 + _GEN_1 + _io_rdAddr_7_T_5 + 18'h7 : 18'h0;
  assign io_addrValid_0 = io_enable & ~(_GEN_2 + _GEN_3 > 22'h97 | _GEN > 22'hC7);
  assign io_addrValid_1 = io_enable & ~(_GEN_2 + _GEN_3 > 22'h97 | _GEN + 22'h1 > 22'hC7);
  assign io_addrValid_2 = io_enable & ~(_GEN_2 + _GEN_3 > 22'h97 | _GEN + 22'h2 > 22'hC7);
  assign io_addrValid_3 = io_enable & ~(_GEN_2 + _GEN_3 > 22'h97 | _GEN + 22'h3 > 22'hC7);
  assign io_addrValid_4 = io_enable & ~(_GEN_2 + _GEN_3 > 22'h97 | _GEN + 22'h4 > 22'hC7);
  assign io_addrValid_5 = io_enable & ~(_GEN_2 + _GEN_3 > 22'h97 | _GEN + 22'h5 > 22'hC7);
  assign io_addrValid_6 = io_enable & ~(_GEN_2 + _GEN_3 > 22'h97 | _GEN + 22'h6 > 22'hC7);
  assign io_addrValid_7 = io_enable & ~(_GEN_2 + _GEN_3 > 22'h97 | _GEN + 22'h7 > 22'hC7);
endmodule

