//      // verilator_coverage annotation
        module regfile (
 000010     input clk,               // posedge vaild 
%000001     input we,                // wr_en low_vaild 
%000001     input [4:0] rs1,         // read_port_1
%000001     input [4:0] rs2,         // read_port_2
%000002     input [4:0] rd,          // write_port
%000001     input [31:0] wd,         // write_data
%000001     output [31:0] rs1_data,       // read_port_1_output
%000001     output [31:0] rs2_data        // read_port_2_output
        );
        
            //32 register 
            reg [31:0] register [0:31];
        
            //if x0 then output 0, or output reg 
            assign rs1_data = (rs1 == 5'd0) ? 32'd0 : register[rs1];
            assign rs2_data = (rs2 == 5'd0) ? 32'd0 : register[rs2];
        
%000004     always @(posedge clk) begin
%000004         if ((!we) && (rd != 5'd0)) begin
%000004             register[rd] <= wd;  // write_data_into_register except_rd==5'd0
                end
            end
        endmodule
        
        
