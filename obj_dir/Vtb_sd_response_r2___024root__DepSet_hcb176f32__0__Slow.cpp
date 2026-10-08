// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sd_response_r2.h for the primary calling header

#include "Vtb_sd_response_r2__pch.h"
#include "Vtb_sd_response_r2___024root.h"

VL_ATTR_COLD void Vtb_sd_response_r2___024root___eval_static(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_sd_response_r2___024root___eval_final(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd_response_r2___024root___dump_triggers__stl(Vtb_sd_response_r2___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_sd_response_r2___024root___eval_phase__stl(Vtb_sd_response_r2___024root* vlSelf);

VL_ATTR_COLD void Vtb_sd_response_r2___024root___eval_settle(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_sd_response_r2___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/tb_sd_response_r2.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_sd_response_r2___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd_response_r2___024root___dump_triggers__stl(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_sd_response_r2___024root___act_comb__TOP__0(Vtb_sd_response_r2___024root* vlSelf);

VL_ATTR_COLD void Vtb_sd_response_r2___024root___eval_stl(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_sd_response_r2___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_sd_response_r2___024root___eval_triggers__stl(Vtb_sd_response_r2___024root* vlSelf);

VL_ATTR_COLD bool Vtb_sd_response_r2___024root___eval_phase__stl(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_sd_response_r2___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_sd_response_r2___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd_response_r2___024root___dump_triggers__act(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_sd_response_r2.sd_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_sd_response_r2.sd_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] tb_sd_response_r2.response_done)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd_response_r2___024root___dump_triggers__nba(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_sd_response_r2.sd_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_sd_response_r2.sd_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] tb_sd_response_r2.response_done)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sd_response_r2___024root___ctor_var_reset(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_sd_response_r2__DOT__sd_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_response_r2__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_response_r2__DOT__response_start = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_response_r2__DOT__cmd = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_response_r2__DOT__response_type = VL_RAND_RESET_I(3);
    vlSelf->tb_sd_response_r2__DOT__response_done = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_response_r2__DOT__response_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_response_r2__DOT__response_crc = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(120, vlSelf->tb_sd_response_r2__DOT__response_long);
    vlSelf->tb_sd_response_r2__DOT__dut__DOT__state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(136, vlSelf->tb_sd_response_r2__DOT__dut__DOT__response_shift_reg);
    vlSelf->tb_sd_response_r2__DOT__dut__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->tb_sd_response_r2__DOT__dut__DOT__active_response_type = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(136, vlSelf->tb_sd_response_r2__DOT__dut__DOT__response_next);
    vlSelf->__Vtrigprevexpr___TOP__tb_sd_response_r2__DOT__sd_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_sd_response_r2__DOT__response_done__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
