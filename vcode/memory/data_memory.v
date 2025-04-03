module data_memory#(
    parameter ADDR_WIDTH = 15, // 128KB / 4B = 32K = 2^15
    parameter DATA_WIDTH = 32
)(
    input wire clk,
    input wire we,                 //write_enable 
    input wire [3:0] be,           //byte_enable 
		input wire [2:0] op_read,      //lb lh lw lbu lhu
 //   input wire [ADDR_WIDTH-1:0] addr, //address 
		input wire [ADDR_WIDTH-1:0] addr, //address 

    input wire [DATA_WIDTH-1:0] wdata, //write_data 
    output wire [DATA_WIDTH-1:0] rdata  //read_data
);

    // 128KB memory，32-bit one line
    reg [DATA_WIDTH-1:0] mem [0:(1 << ADDR_WIDTH)-1]/*verilator coverage_off*/ ;
		reg [DATA_WIDTH-1:0]rdata_temp;
		reg [31:0]rdata_reg;

    assign rdata_reg = mem[addr];

		always @(*)begin
		rdata_temp = rdata_reg;
		if(op_read == 3'b000) rdata_temp = {{24{rdata_reg[7]}},rdata_reg[7:0]};
		if(op_read == 3'b001) rdata_temp = {{16{rdata_reg[15]}},rdata_reg[15:0]};
		if(op_read == 3'b010) rdata_temp = rdata_reg;
		if(op_read == 3'b100) rdata_temp = {{24'b0},rdata_reg[7:0]};
		if(op_read == 3'b101) rdata_temp = {{16'b0},rdata_reg[15:0]};
end
	assign rdata = rdata_temp;

    always @(posedge clk) begin
        // write enable   byte enable 
        if (we) begin
            if (be[0]) mem[addr][7:0]   <= wdata[7:0];
            if (be[1]) mem[addr][15:8]  <= wdata[15:8];
            if (be[2]) mem[addr][23:16] <= wdata[23:16];
            if (be[3]) mem[addr][31:24] <= wdata[31:24];
        end
    end

endmodule
