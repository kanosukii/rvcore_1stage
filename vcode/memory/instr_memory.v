module instr_memory#(
	parameter ADDR_WIDTH = 16, // 256KB / 4B = 64K = 2^16
//	parameter ADDR_WIDTH = 32,
	parameter DATA_WIDTH = 32

)
(
//	input clk,
	input [ADDR_WIDTH-1:0]addr, 
	output [DATA_WIDTH-1:0]instr
);
//	reg [DATA_WIDTH-1:0]mem[0:(1 << ADDR_WIDTH) - 1]
	reg [DATA_WIDTH-1:0]mem[0:(1 << 16) - 1];
	assign instr = mem[addr];	
endmodule
