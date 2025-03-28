// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__cpu_item__DOT__instr),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__cpu_item__DOT__rs1_data),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__cpu_item__DOT__rs2_data),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__cpu_item__DOT__alu_b),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp),32);
        bufp->chgIData(oldp+8,(((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__cpu_item__DOT__data2reg),32);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp),4);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__cpu_item__DOT__bxx),4);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp),4);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp),3);
        bufp->chgCData(oldp+15,((7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__cpu_item__DOT__pc_cond),2);
        bufp->chgBit(oldp+17,((1U & (~ (IData)(vlSelf->__VdfgTmp_hf91909b2__0)))));
        bufp->chgBit(oldp+18,((0x6fU == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))));
        bufp->chgBit(oldp+19,((0x67U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))));
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__cpu_item__DOT__reg_we));
        bufp->chgBit(oldp+21,((0x23U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less));
        bufp->chgBit(oldp+23,((0xffffffffU == (~ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add))));
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__cpu_item__DOT__branch_ture));
        bufp->chgBit(oldp+25,((0U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
        bufp->chgBit(oldp+26,((1U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
        bufp->chgBit(oldp+27,((2U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
        bufp->chgBit(oldp+28,((3U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
        bufp->chgBit(oldp+29,((4U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
        bufp->chgBit(oldp+30,((5U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
        bufp->chgBit(oldp+31,((6U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
        bufp->chgBit(oldp+32,((7U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
        bufp->chgBit(oldp+33,((8U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
        bufp->chgBit(oldp+34,((0xdU == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and),32);
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_carry));
        bufp->chgBit(oldp+41,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_overflow));
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__add_cin));
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type),2);
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__add_sub));
        bufp->chgBit(oldp+45,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_lr));
        bufp->chgBit(oldp+46,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__set_l));
        bufp->chgCData(oldp+47,((0x1fU & vlSelf->top__DOT__cpu_item__DOT__alu_b)),5);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b),32);
        bufp->chgCData(oldp+53,((0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)),7);
        bufp->chgCData(oldp+54,((vlSelf->top__DOT__cpu_item__DOT__instr 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI),32);
        bufp->chgIData(oldp+56,((0xfffff000U & vlSelf->top__DOT__cpu_item__DOT__instr)),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ),32);
        bufp->chgBit(oldp+60,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__type_U));
        bufp->chgBit(oldp+61,((0x63U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))));
        bufp->chgBit(oldp+62,(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__type_I));
        bufp->chgBit(oldp+63,((0x33U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))));
        bufp->chgBit(oldp+64,((0x37U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))));
        bufp->chgBit(oldp+65,((0x17U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))));
        bufp->chgBit(oldp+66,((3U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))));
        bufp->chgBit(oldp+67,((0x13U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))));
        bufp->chgBit(oldp+68,((0U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+69,((1U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+70,((2U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+71,((3U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+72,((4U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+73,((5U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+74,((6U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+75,((7U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                            >> 0xcU)))));
        bufp->chgSData(oldp+76,((0x7fffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp)),15);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg),32);
        bufp->chgSData(oldp+78,((0xffffU & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                                            >> 2U))),16);
        bufp->chgBit(oldp+79,(vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT__branch_ture_temp));
        bufp->chgCData(oldp+80,((0x1fU & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+81,((0x1fU & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+82,((0x1fU & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[0]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[1]),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[2]),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[3]),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[4]),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[5]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[6]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[7]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[8]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[9]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[10]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[11]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[12]),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[13]),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[14]),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[15]),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[16]),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[17]),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[18]),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[19]),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[20]),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[21]),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[22]),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[23]),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[24]),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[25]),32);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[26]),32);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[27]),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[28]),32);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[29]),32);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[30]),32);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[31]),32);
    }
    bufp->chgBit(oldp+115,(vlSelf->clk));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
