// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/hewang/Desktop/My_test/rv32I/vcode/top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__normal_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__bxx = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu_item__DOT__pc_cond = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu_item__DOT__reg_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__branch_ture = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__data2reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_ctr = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__bxx = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_opw = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__mem2reg = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc_cond = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b_ctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__reg_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__mem_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_less = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_zero = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT____Vtogcov__branch_ture = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->top__DOT__cpu_item__DOT__instr_memory_item__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_overflow = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__add_cin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__add_sub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_lr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__set_l = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_add = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_shift_l = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_set_lt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_set_ltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_xor = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_shift_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_or = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_and = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_sub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_shift_ra = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_overflow = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__add_cin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__shift_type = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__add_sub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__shift_lr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__set_l = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__type_U = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__type_I = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immU = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__type_U = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__type_B = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__type_I = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__type_R = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__op_0110_111 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__op_0010_111 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__op_0000_011 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__op_0010_011 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_000 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_001 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_010 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_011 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_100 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_101 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_110 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_111 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT__branch_ture_temp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT____Vtogcov__branch_ture_temp = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_hf91909b2__0 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
