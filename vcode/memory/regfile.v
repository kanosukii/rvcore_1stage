module regfile (
    input clk,               // posedge vaild 
    input we,                // wr_en low_vaild 
    input [4:0] rs1,         // read_port_1
    input [4:0] rs2,         // read_port_2
    input [4:0] rd,          // write_port
    input [31:0] wd,         // write_data
    output [31:0] rs1_data,       // read_port_1_output
    output [31:0] rs2_data        // read_port_2_output
);

    //32 register 
    reg [31:0] register [0:31];

    //if x0 then output 0, or output reg 
    assign rs1_data = (rs1 == 5'd0) ? 32'd0 : register[rs1];
    assign rs2_data = (rs2 == 5'd0) ? 32'd0 : register[rs2];

    always @(posedge clk) begin
        if ((!we) && (rd != 5'd0)) begin
            register[rd] <= wd;  // write_data_into_register except_rd==5'd0
        end
    end
endmodule

