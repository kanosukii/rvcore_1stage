module top(
  input [31:0]a,
  input [31:0]b,
  input [3:0]ctr,
  output [31:0]out,
  output is_less,
  output is_zero
);
  alu alu_item(
	.a(a),
	.b(b),
	.ctr(ctr),
	.out(out),
	.is_less(is_less),
	.is_zero(is_zero)
);

   initial begin
      if ($test$plusargs("trace") != 0) begin
         $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
         $dumpfile("logs/vlt_dump.vcd");
         $dumpvars();
      end
      $display("[%0t] Model running...\n", $time);
   end
endmodule
