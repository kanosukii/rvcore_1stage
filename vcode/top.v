module top(
 input clk
);
cpu cpu_item(
	 .clk(clk)
); 
//	$readme();
	 initial begin
	 cpu_item.instr_memory_item.mem[0] =32'b0000_0000_0101_00000_000_00001_0010011;   //addi x1 x0 5
	 cpu_item.instr_memory_item.mem[1] =32'b0000_0000_0110_00000_000_00010_0010011;   //addi x2 x0 6
	 cpu_item.instr_memory_item.mem[2] =32'b0000_0000_0000_00000_000_00011_0010011;   //addi x3 x0 0
	 cpu_item.instr_memory_item.mem[1] =32'b0000_0000_0110_00000_000_00010_0010011;   //addi x2 x0 6
	 cpu_item.pc_item.next_pc = 32'b0;
 end
	 initial begin
		 if ($test$plusargs("trace") != 0) begin
				 $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
				 $dumpfile("logs/vlt_dump.vcd");
				 $dumpvars(); end
		 $display("[%0t] Model running...\n", $time);
 end
endmodule
