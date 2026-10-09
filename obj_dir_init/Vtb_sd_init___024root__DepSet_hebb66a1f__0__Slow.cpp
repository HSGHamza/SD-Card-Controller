// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sd_init.h for the primary calling header

#include "Vtb_sd_init__pch.h"
#include "Vtb_sd_init___024root.h"

VL_ATTR_COLD void Vtb_sd_init___024root___eval_static(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_sd_init___024root___eval_final(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd_init___024root___dump_triggers__stl(Vtb_sd_init___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_sd_init___024root___eval_phase__stl(Vtb_sd_init___024root* vlSelf);

VL_ATTR_COLD void Vtb_sd_init___024root___eval_settle(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___eval_settle\n"); );
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
            Vtb_sd_init___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/tb_sd_init.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_sd_init___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd_init___024root___dump_triggers__stl(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vtb_sd_init___024root___stl_sequent__TOP__0(Vtb_sd_init___024root* vlSelf);

VL_ATTR_COLD void Vtb_sd_init___024root___eval_stl(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_sd_init___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_sd_init___024root___stl_sequent__TOP__0(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*39:0*/ tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data;
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data = 0;
    CData/*6:0*/ tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg;
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg = 0;
    QData/*39:0*/ tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data;
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data = 0;
    CData/*6:0*/ tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg;
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg = 0;
    CData/*0:0*/ tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback;
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback = 0;
    // Body
    vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__crc16_next_bit 
        = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__calculated_crc), 1U) 
                      ^ (0x1021U & (- (IData)((IData)(
                                                      (((IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__calculated_crc) 
                                                        >> 0xfU) 
                                                       ^ (IData)(vlSelfRef.tb_sd_init__DOT__card_dat0))))))));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
        = (0x4000000000ULL | (((QData)((IData)(vlSelfRef.tb_sd_init__DOT__cmd_index)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.tb_sd_init__DOT__cmd_arg))));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & (IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                          >> 0x27U))) ? 9U : 0U);
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x26U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x25U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x24U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x23U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x22U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x21U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x20U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x1fU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x1eU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x1dU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x1cU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x1bU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x1aU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x19U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x18U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x17U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x16U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x15U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x14U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x13U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x12U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x11U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0x10U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                         >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0xfU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                        >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0xeU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                        >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0xdU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                        >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0xcU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                        >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0xbU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                        >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 0xaU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                        >> 6U))) ? 
           (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                           << 1U))) : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 9U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                      >> 6U))) ? (9U 
                                                  ^ 
                                                  (0x7eU 
                                                   & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                      << 1U)))
            : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                        << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 8U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                      >> 6U))) ? (9U 
                                                  ^ 
                                                  (0x7eU 
                                                   & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                      << 1U)))
            : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                        << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 7U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                      >> 6U))) ? (9U 
                                                  ^ 
                                                  (0x7eU 
                                                   & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                      << 1U)))
            : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                        << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 6U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                      >> 6U))) ? (9U 
                                                  ^ 
                                                  (0x7eU 
                                                   & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                      << 1U)))
            : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                        << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 5U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                      >> 6U))) ? (9U 
                                                  ^ 
                                                  (0x7eU 
                                                   & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                      << 1U)))
            : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                        << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 4U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                      >> 6U))) ? (9U 
                                                  ^ 
                                                  (0x7eU 
                                                   & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                      << 1U)))
            : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                        << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 3U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                      >> 6U))) ? (9U 
                                                  ^ 
                                                  (0x7eU 
                                                   & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                      << 1U)))
            : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                        << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 2U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                      >> 6U))) ? (9U 
                                                  ^ 
                                                  (0x7eU 
                                                   & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                      << 1U)))
            : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                        << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data 
                           >> 1U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                      >> 6U))) ? (9U 
                                                  ^ 
                                                  (0x7eU 
                                                   & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                      << 1U)))
            : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                        << 1U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg 
        = ((1U & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__data) 
                  ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                     >> 6U))) ? (9U ^ (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                                                << 1U)))
            : (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg) 
                        << 1U)));
    vlSelfRef.tb_sd_init__DOT__init_inst__DOT__crc7_value 
        = tb_sd_init__DOT__init_inst__DOT__crc7_inst__DOT__crc_reg;
    vlSelfRef.tb_sd_init__DOT__sd_cmd = (((IData)(vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_oe) 
                                          & (IData)(vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_out)) 
                                         | ((IData)(vlSelfRef.tb_sd_init__DOT__card_cmd_oe) 
                                            & (IData)(vlSelfRef.tb_sd_init__DOT__card_cmd_out)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
        = (0x4000000000ULL | (((QData)((IData)(vlSelfRef.tb_sd_init__DOT__response_cmd)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.tb_sd_init__DOT__response_status))));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & (IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                         >> 0x27U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg = 0U;
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x26U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x25U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x24U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x23U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x22U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x21U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x20U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x1fU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x1eU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x1dU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x1cU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x1bU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x1aU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x19U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x18U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x17U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x16U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x15U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x14U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x13U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x12U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x11U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0x10U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0xfU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                       >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0xeU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                       >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0xdU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                       >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0xcU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                       >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0xbU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                       >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 0xaU)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                       >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 9U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                     >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 8U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                     >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 7U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                     >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 6U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                     >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 5U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                     >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 4U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                     >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 3U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                     >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 2U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                     >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data 
                          >> 1U)) ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                                     >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__data) 
                 ^ ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    >> 6U)));
    tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg));
    }
    vlSelfRef.tb_sd_init__DOT__init_inst__DOT__crc_valid 
        = ((IData)(tb_sd_init__DOT__init_inst__DOT__crc7_check_inst__DOT__crc_reg) 
           == (IData)(vlSelfRef.tb_sd_init__DOT__response_crc));
    vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[0U] 
        = ((vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[0U] 
            << 1U) | (IData)(vlSelfRef.tb_sd_init__DOT__sd_cmd));
    vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[1U] 
        = ((vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[0U] 
            >> 0x1fU) | (vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[1U] 
                         << 1U));
    vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[2U] 
        = ((vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[1U] 
            >> 0x1fU) | (vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[2U] 
                         << 1U));
    vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[3U] 
        = ((vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[2U] 
            >> 0x1fU) | (vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[3U] 
                         << 1U));
    vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[4U] 
        = ((vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[3U] 
            >> 0x1fU) | (0xfeU & (vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[4U] 
                                  << 1U)));
}

VL_ATTR_COLD void Vtb_sd_init___024root___eval_triggers__stl(Vtb_sd_init___024root* vlSelf);

VL_ATTR_COLD bool Vtb_sd_init___024root___eval_phase__stl(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_sd_init___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_sd_init___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd_init___024root___dump_triggers__act(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_sd_init.sd_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] tb_sd_init.cmd_busy)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge tb_sd_init.sd_clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] tb_sd_init.response_start)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] tb_sd_init.response_busy)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([changed] (tb_sd_init.read_start | tb_sd_init.read_busy))\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([changed] (tb_sd_init.init_done | tb_sd_init.init_error))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd_init___024root___dump_triggers__nba(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_sd_init.sd_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] tb_sd_init.cmd_busy)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge tb_sd_init.sd_clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] tb_sd_init.response_start)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] tb_sd_init.response_busy)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([changed] (tb_sd_init.read_start | tb_sd_init.read_busy))\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([changed] (tb_sd_init.init_done | tb_sd_init.init_error))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sd_init___024root___ctor_var_reset(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_sd_init__DOT__sd_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__init_done = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__init_error = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__cmd_index = VL_RAND_RESET_I(6);
    vlSelf->tb_sd_init__DOT__cmd_arg = VL_RAND_RESET_I(32);
    vlSelf->tb_sd_init__DOT__cmd_start = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__response_start = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__read_start = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__cmd_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__cmd_done = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__response_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__response_done = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__response_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__response_cmd = VL_RAND_RESET_I(6);
    vlSelf->tb_sd_init__DOT__response_status = VL_RAND_RESET_I(32);
    vlSelf->tb_sd_init__DOT__response_crc = VL_RAND_RESET_I(7);
    vlSelf->tb_sd_init__DOT__sd_cmd = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__response_type = VL_RAND_RESET_I(3);
    vlSelf->tb_sd_init__DOT__card_cmd_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__card_cmd_out = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__received_command = VL_RAND_RESET_Q(48);
    vlSelf->tb_sd_init__DOT__response_data = VL_RAND_RESET_Q(48);
    vlSelf->tb_sd_init__DOT__acmd41_count = VL_RAND_RESET_I(32);
    vlSelf->tb_sd_init__DOT__cmd17_count = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(120, vlSelf->tb_sd_init__DOT__response_long);
    VL_RAND_RESET_W(120, vlSelf->tb_sd_init__DOT__card_cid);
    vlSelf->tb_sd_init__DOT__card_rca = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(120, vlSelf->tb_sd_init__DOT__card_csd);
    vlSelf->tb_sd_init__DOT__read_done = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__read_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__read_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__read_crc_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__data_addr = VL_RAND_RESET_I(9);
    vlSelf->tb_sd_init__DOT__data_byte = VL_RAND_RESET_I(8);
    vlSelf->tb_sd_init__DOT__data_write = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__card_dat0 = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__read_byte_count = VL_RAND_RESET_I(32);
    vlSelf->tb_sd_init__DOT__read_data_errors = VL_RAND_RESET_I(32);
    vlSelf->tb_sd_init__DOT__sent_data_crc = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(136, vlSelf->tb_sd_init__DOT__send_r2_response__Vstatic__response_data_r2);
    vlSelf->tb_sd_init__DOT__send_r2_response__Vstatic__j = VL_RAND_RESET_I(32);
    vlSelf->tb_sd_init__DOT__crc16_byte__Vstatic__crc = VL_RAND_RESET_I(16);
    vlSelf->tb_sd_init__DOT__send_read_data__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->tb_sd_init__DOT__send_read_data__Vstatic__data_value = VL_RAND_RESET_I(8);
    vlSelf->tb_sd_init__DOT__send_read_data__Vstatic__crc_value = VL_RAND_RESET_I(16);
    vlSelf->tb_sd_init__DOT____Vlvbound_h8e7b2171__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__init_inst__DOT__crc7_value = VL_RAND_RESET_I(7);
    vlSelf->tb_sd_init__DOT__init_inst__DOT__crc_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__init_inst__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->tb_sd_init__DOT__data_rx_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_sd_init__DOT__data_rx_inst__DOT__token_shift = VL_RAND_RESET_I(8);
    vlSelf->tb_sd_init__DOT__data_rx_inst__DOT__byte_shift = VL_RAND_RESET_I(8);
    vlSelf->tb_sd_init__DOT__data_rx_inst__DOT__crc_shift = VL_RAND_RESET_I(16);
    vlSelf->tb_sd_init__DOT__data_rx_inst__DOT__calculated_crc = VL_RAND_RESET_I(16);
    vlSelf->tb_sd_init__DOT__data_rx_inst__DOT__bit_count = VL_RAND_RESET_I(3);
    vlSelf->tb_sd_init__DOT__data_rx_inst__DOT__byte_count = VL_RAND_RESET_I(9);
    vlSelf->tb_sd_init__DOT__data_rx_inst__DOT__crc_byte_count = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__data_rx_inst__DOT__crc16_next_bit = VL_RAND_RESET_I(16);
    vlSelf->tb_sd_init__DOT__uut_cmd__DOT__cmd_shift_reg = VL_RAND_RESET_Q(48);
    vlSelf->tb_sd_init__DOT__uut_cmd__DOT__counter = VL_RAND_RESET_I(6);
    vlSelf->tb_sd_init__DOT__uut_cmd__DOT__cmd_out = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__uut_cmd__DOT__cmd_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_sd_init__DOT__uut_cmd__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_sd_init__DOT__response_inst__DOT__state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(136, vlSelf->tb_sd_init__DOT__response_inst__DOT__response_shift_reg);
    vlSelf->tb_sd_init__DOT__response_inst__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->tb_sd_init__DOT__response_inst__DOT__active_response_type = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(136, vlSelf->tb_sd_init__DOT__response_inst__DOT__response_next);
    vlSelf->__Vtrigprevexpr___TOP__tb_sd_init__DOT__sd_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_sd_init__DOT__cmd_busy__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_sd_init__DOT__response_start__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_sd_init__DOT__response_busy__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h2dc325bd__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_he1db2254__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
