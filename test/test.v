module tb();
	reg [127:0]   mem [23:0];
	initial begin
		#50 ;
		$readmemh("./test_matrix_8_8.data", mem);
		// $readmemh("./test_matrix_8_8.data", MatrixB);
		// $readmemh("./test_matrix_8_8.data", MatrixY);
		$display("Read memory1: %h", mem[23]);
		// $display("Read memory2: %h", mem_load[1]);
		// $display("Read memory3: %h", mem_load[2]);
		// $display("Read memory4: %h", mem_load[3]);
		// $display("Read memory5: %h", mem_load[4]);
		// $display("Read memory6: %h", mem_load[5]);
		// $display("Read memory7: %h", mem_load[6]);
		// $display("Read memory8: %h", mem_load[7]);
	end
endmodule
