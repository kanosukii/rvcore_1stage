// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+116,"clk", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+116,"clk", false,-1);
    tracep->pushNamePrefix("cpu_item ");
    tracep->declBit(c+116,"clk", false,-1);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBus(c+3,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+4,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+5,"imm", false,-1, 31,0);
    tracep->declBus(c+6,"alu_b", false,-1, 31,0);
    tracep->declBus(c+7,"alu_out", false,-1, 31,0);
    tracep->declBus(c+8,"data_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+9,"normal_pc", false,-1, 31,0);
    tracep->declBus(c+10,"jal_branch_pc", false,-1, 31,0);
    tracep->declBus(c+11,"data2reg_wire", false,-1, 31,0);
    tracep->declBus(c+12,"alu_ctr", false,-1, 3,0);
    tracep->declBus(c+13,"bxx", false,-1, 3,0);
    tracep->declBus(c+14,"data_mem_opw", false,-1, 3,0);
    tracep->declBus(c+15,"mem2reg", false,-1, 2,0);
    tracep->declBus(c+16,"data_mem_opr", false,-1, 2,0);
    tracep->declBus(c+17,"pc_cond", false,-1, 1,0);
    tracep->declBit(c+18,"alu_b_ctr", false,-1);
    tracep->declBit(c+19,"jal", false,-1);
    tracep->declBit(c+20,"jalr", false,-1);
    tracep->declBit(c+21,"reg_we", false,-1);
    tracep->declBit(c+22,"mem_we", false,-1);
    tracep->declBit(c+23,"alu_less", false,-1);
    tracep->declBit(c+24,"alu_zero", false,-1);
    tracep->declBit(c+25,"branch_ture", false,-1);
    tracep->declBus(c+11,"data2reg", false,-1, 31,0);
    tracep->pushNamePrefix("alu_temp ");
    tracep->declBus(c+3,"a", false,-1, 31,0);
    tracep->declBus(c+6,"b", false,-1, 31,0);
    tracep->declBus(c+12,"ctr", false,-1, 3,0);
    tracep->declBus(c+7,"out", false,-1, 31,0);
    tracep->declBit(c+23,"is_less", false,-1);
    tracep->declBit(c+24,"is_zero", false,-1);
    tracep->declBit(c+26,"is_add", false,-1);
    tracep->declBit(c+27,"is_shift_l", false,-1);
    tracep->declBit(c+28,"is_set_lt", false,-1);
    tracep->declBit(c+29,"is_set_ltu", false,-1);
    tracep->declBit(c+30,"is_xor", false,-1);
    tracep->declBit(c+31,"is_shift_r", false,-1);
    tracep->declBit(c+32,"is_or", false,-1);
    tracep->declBit(c+33,"is_and", false,-1);
    tracep->declBit(c+34,"is_sub", false,-1);
    tracep->declBit(c+35,"is_shift_ra", false,-1);
    tracep->declBus(c+36,"out_add", false,-1, 31,0);
    tracep->declBus(c+37,"out_shift", false,-1, 31,0);
    tracep->declBus(c+38,"out_xor", false,-1, 31,0);
    tracep->declBus(c+39,"out_or", false,-1, 31,0);
    tracep->declBus(c+40,"out_and", false,-1, 31,0);
    tracep->declBit(c+24,"out_zero", false,-1);
    tracep->declBit(c+23,"out_less", false,-1);
    tracep->declBit(c+41,"out_carry", false,-1);
    tracep->declBit(c+42,"out_overflow", false,-1);
    tracep->declBit(c+43,"add_cin", false,-1);
    tracep->declBus(c+44,"shift_type", false,-1, 1,0);
    tracep->declBit(c+45,"add_sub", false,-1);
    tracep->declBit(c+46,"shift_lr", false,-1);
    tracep->declBit(c+47,"set_l", false,-1);
    tracep->declBus(c+7,"out_temp", false,-1, 31,0);
    tracep->pushNamePrefix("item0 ");
    tracep->declBus(c+3,"data_in", false,-1, 31,0);
    tracep->declBus(c+48,"shift_amt", false,-1, 4,0);
    tracep->declBus(c+44,"shift_type", false,-1, 1,0);
    tracep->declBus(c+37,"data_out", false,-1, 31,0);
    tracep->declBus(c+49,"stage1", false,-1, 31,0);
    tracep->declBus(c+50,"stage2", false,-1, 31,0);
    tracep->declBus(c+51,"stage3", false,-1, 31,0);
    tracep->declBus(c+52,"stage4", false,-1, 31,0);
    tracep->declBus(c+37,"stage5", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("item_add ");
    tracep->declBus(c+3,"a", false,-1, 31,0);
    tracep->declBus(c+53,"b", false,-1, 31,0);
    tracep->declBit(c+43,"cin", false,-1);
    tracep->declBus(c+36,"sum", false,-1, 31,0);
    tracep->declBit(c+41,"carry", false,-1);
    tracep->declBit(c+24,"zero", false,-1);
    tracep->declBit(c+42,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("item_alu_decode ");
    tracep->declBus(c+12,"alu_ctr", false,-1, 3,0);
    tracep->declBit(c+26,"is_add", false,-1);
    tracep->declBit(c+34,"is_sub", false,-1);
    tracep->declBit(c+27,"is_shift_l", false,-1);
    tracep->declBit(c+28,"is_set_lt", false,-1);
    tracep->declBit(c+29,"is_set_ltu", false,-1);
    tracep->declBit(c+30,"is_xor", false,-1);
    tracep->declBit(c+31,"is_shift_r", false,-1);
    tracep->declBit(c+35,"is_shift_ra", false,-1);
    tracep->declBit(c+32,"is_or", false,-1);
    tracep->declBit(c+33,"is_and", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ctr_item ");
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBus(c+5,"imm", false,-1, 31,0);
    tracep->declBus(c+12,"alu_ctr", false,-1, 3,0);
    tracep->declBit(c+18,"alu_b_ctr", false,-1);
    tracep->declBus(c+13,"bxx", false,-1, 3,0);
    tracep->declBit(c+19,"jal", false,-1);
    tracep->declBit(c+20,"jalr", false,-1);
    tracep->declBit(c+21,"reg_we", false,-1);
    tracep->declBit(c+22,"mem_we", false,-1);
    tracep->declBus(c+15,"mem2reg", false,-1, 2,0);
    tracep->declBus(c+16,"data_mem_opr", false,-1, 2,0);
    tracep->declBus(c+14,"data_mem_opw", false,-1, 3,0);
    tracep->declBus(c+54,"op", false,-1, 6,0);
    tracep->declBus(c+16,"fun3", false,-1, 2,0);
    tracep->declBus(c+55,"fun7", false,-1, 6,0);
    tracep->declBus(c+56,"immI", false,-1, 31,0);
    tracep->declBus(c+57,"immU", false,-1, 31,0);
    tracep->declBus(c+58,"immS", false,-1, 31,0);
    tracep->declBus(c+59,"immB", false,-1, 31,0);
    tracep->declBus(c+60,"immJ", false,-1, 31,0);
    tracep->declBus(c+5,"out_imm", false,-1, 31,0);
    tracep->declBit(c+19,"type_J", false,-1);
    tracep->declBit(c+61,"type_U", false,-1);
    tracep->declBit(c+22,"type_S", false,-1);
    tracep->declBit(c+62,"type_B", false,-1);
    tracep->declBit(c+63,"type_I", false,-1);
    tracep->declBit(c+64,"type_R", false,-1);
    tracep->declBit(c+65,"op_0110_111", false,-1);
    tracep->declBit(c+66,"op_0010_111", false,-1);
    tracep->declBit(c+19,"op_1101_111", false,-1);
    tracep->declBit(c+20,"op_1100_111", false,-1);
    tracep->declBit(c+62,"op_1100_011", false,-1);
    tracep->declBit(c+67,"op_0000_011", false,-1);
    tracep->declBit(c+22,"op_0100_011", false,-1);
    tracep->declBit(c+68,"op_0010_011", false,-1);
    tracep->declBit(c+64,"op_0110_011", false,-1);
    tracep->declBit(c+69,"fun3_000", false,-1);
    tracep->declBit(c+70,"fun3_001", false,-1);
    tracep->declBit(c+71,"fun3_010", false,-1);
    tracep->declBit(c+72,"fun3_011", false,-1);
    tracep->declBit(c+73,"fun3_100", false,-1);
    tracep->declBit(c+74,"fun3_101", false,-1);
    tracep->declBit(c+75,"fun3_110", false,-1);
    tracep->declBit(c+76,"fun3_111", false,-1);
    tracep->declBus(c+12,"alu_ctr_temp", false,-1, 3,0);
    tracep->declBus(c+14,"data_mem_opw_temp", false,-1, 3,0);
    tracep->declBus(c+15,"mem2reg_temp", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_memory_item ");
    tracep->declBus(c+117,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+118,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+116,"clk", false,-1);
    tracep->declBit(c+22,"we", false,-1);
    tracep->declBus(c+14,"be", false,-1, 3,0);
    tracep->declBus(c+16,"op_read", false,-1, 2,0);
    tracep->declBus(c+77,"addr", false,-1, 14,0);
    tracep->declBus(c+4,"wdata", false,-1, 31,0);
    tracep->declBus(c+8,"rdata", false,-1, 31,0);
    tracep->declBus(c+8,"rdata_temp", false,-1, 31,0);
    tracep->declBus(c+78,"rdata_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instr_memory_item ");
    tracep->declBus(c+119,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+118,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+79,"addr", false,-1, 15,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_branch_item ");
    tracep->declBus(c+13,"branch", false,-1, 3,0);
    tracep->declBit(c+23,"less", false,-1);
    tracep->declBit(c+24,"zero", false,-1);
    tracep->declBit(c+25,"branch_ture", false,-1);
    tracep->declBit(c+80,"branch_ture_temp", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_item ");
    tracep->declBit(c+116,"clk", false,-1);
    tracep->declBus(c+5,"imm", false,-1, 31,0);
    tracep->declBus(c+17,"cond", false,-1, 1,0);
    tracep->declBus(c+7,"alu_out", false,-1, 31,0);
    tracep->declBus(c+9,"normal_pc", false,-1, 31,0);
    tracep->declBus(c+10,"jal_branch_pc", false,-1, 31,0);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+1,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_item ");
    tracep->declBit(c+116,"clk", false,-1);
    tracep->declBit(c+21,"we", false,-1);
    tracep->declBus(c+81,"rs1", false,-1, 4,0);
    tracep->declBus(c+82,"rs2", false,-1, 4,0);
    tracep->declBus(c+83,"rd", false,-1, 4,0);
    tracep->declBus(c+11,"wd", false,-1, 31,0);
    tracep->declBus(c+3,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+4,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+84+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__cpu_item__DOT__instr),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__cpu_item__DOT__rs1_data),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__cpu_item__DOT__rs2_data),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__cpu_item__DOT__alu_b),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp),32);
    bufp->fullIData(oldp+9,(((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__cpu_item__DOT__data2reg),32);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp),4);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__cpu_item__DOT__bxx),4);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp),4);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp),3);
    bufp->fullCData(oldp+16,((7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__cpu_item__DOT__pc_cond),2);
    bufp->fullBit(oldp+18,((1U & (~ (IData)(vlSelf->__VdfgTmp_hf91909b2__0)))));
    bufp->fullBit(oldp+19,((0x6fU == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))));
    bufp->fullBit(oldp+20,((0x67U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))));
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__cpu_item__DOT__reg_we));
    bufp->fullBit(oldp+22,((0x23U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))));
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less));
    bufp->fullBit(oldp+24,((0xffffffffU == (~ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add))));
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__cpu_item__DOT__branch_ture));
    bufp->fullBit(oldp+26,((0U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
    bufp->fullBit(oldp+27,((1U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
    bufp->fullBit(oldp+28,((2U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
    bufp->fullBit(oldp+29,((3U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
    bufp->fullBit(oldp+30,((4U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
    bufp->fullBit(oldp+31,((5U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
    bufp->fullBit(oldp+32,((6U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
    bufp->fullBit(oldp+33,((7U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
    bufp->fullBit(oldp+34,((8U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
    bufp->fullBit(oldp+35,((0xdU == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and),32);
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_carry));
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_overflow));
    bufp->fullBit(oldp+43,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__add_cin));
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type),2);
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__add_sub));
    bufp->fullBit(oldp+46,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_lr));
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__set_l));
    bufp->fullCData(oldp+48,((0x1fU & vlSelf->top__DOT__cpu_item__DOT__alu_b)),5);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b),32);
    bufp->fullCData(oldp+54,((0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)),7);
    bufp->fullCData(oldp+55,((vlSelf->top__DOT__cpu_item__DOT__instr 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI),32);
    bufp->fullIData(oldp+57,((0xfffff000U & vlSelf->top__DOT__cpu_item__DOT__instr)),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ),32);
    bufp->fullBit(oldp+61,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__type_U));
    bufp->fullBit(oldp+62,((0x63U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))));
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__type_I));
    bufp->fullBit(oldp+64,((0x33U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))));
    bufp->fullBit(oldp+65,((0x37U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))));
    bufp->fullBit(oldp+66,((0x17U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))));
    bufp->fullBit(oldp+67,((3U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))));
    bufp->fullBit(oldp+68,((0x13U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))));
    bufp->fullBit(oldp+69,((0U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+70,((1U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+71,((2U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+72,((3U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+73,((4U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+74,((5U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+75,((6U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+76,((7U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                         >> 0xcU)))));
    bufp->fullSData(oldp+77,((0x7fffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp)),15);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg),32);
    bufp->fullSData(oldp+79,((0xffffU & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                                         >> 2U))),16);
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT__branch_ture_temp));
    bufp->fullCData(oldp+81,((0x1fU & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+82,((0x1fU & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+83,((0x1fU & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[0]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[1]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[2]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[3]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[4]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[5]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[6]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[7]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[8]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[9]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[10]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[11]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[12]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[13]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[14]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[15]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[16]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[17]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[18]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[19]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[20]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[21]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[22]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[23]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[24]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[25]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[26]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[27]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[28]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[29]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[30]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[31]),32);
    bufp->fullBit(oldp+116,(vlSelf->clk));
    bufp->fullIData(oldp+117,(0xfU),32);
    bufp->fullIData(oldp+118,(0x20U),32);
    bufp->fullIData(oldp+119,(0x10U),32);
}
