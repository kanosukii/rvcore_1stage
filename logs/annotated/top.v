//      // verilator_coverage annotation
        module top(
 000010  input clk
        );
        cpu cpu_item(
        	 .clk(clk)
        ); 
        //	$readme();
%000001 	 initial begin
%000001 	 cpu_item.instr_memory_item.mem[0] =32'b0000_0000_0101_00000_000_00001_0010011;   //addi x1 x0 5
%000001 	 cpu_item.instr_memory_item.mem[1] =32'b0000_0000_0110_00000_000_00010_0010011;   //addi x2 x0 6
%000001 	 cpu_item.pc_item.next_pc = 32'b0;
         end
%000001 	 initial begin
%000000 		 if ($test$plusargs("trace") != 0) begin
%000001 				 $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
%000001 				 $dumpfile("logs/vlt_dump.vcd");
%000001 				 $dumpvars(); end
%000001 		 $display("[%0t] Model running...\n", $time);
         end
        endmodule
        
