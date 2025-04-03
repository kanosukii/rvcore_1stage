//      // verilator_coverage annotation
        module top(
 000140 	 input clk
        );
        cpu cpu_item(
        	 .clk(clk)
        ); 
        //	$readme();
%000001 	 initial begin
%000001 		$readmemh("./tcode/mytest/test.hex", cpu_item.instr_memory_item.mem,0);	
%000001     $display("mem[0] = %h", cpu_item.instr_memory_item.mem[0]);
        
        /*
        		cpu_item.instr_memory_item.mem[0] = 32'h00a00093;
        		cpu_item.instr_memory_item.mem[1] = 32'h01400113;
        		cpu_item.instr_memory_item.mem[2] = 32'hffb00193;
        */
%000001 	 	cpu_item.pc_item.next_pc = 32'b0;
         end
%000001 	 initial begin
%000000 		 if ($test$plusargs("trace") != 0) begin
%000001 				 $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
%000001 				 $dumpfile("logs/vlt_dump.vcd");
%000001 				 $dumpvars(); end
%000001 		 $display("[%0t] Model running...\n", $time);
         end
        endmodule
        
