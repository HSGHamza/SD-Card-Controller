// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sd_block_read.h for the primary calling header

#include "Vtb_sd_block_read__pch.h"
#include "Vtb_sd_block_read___024root.h"

VlCoroutine Vtb_sd_block_read___024root___eval_initial__TOP__Vtiming__0(Vtb_sd_block_read___024root* vlSelf);
VlCoroutine Vtb_sd_block_read___024root___eval_initial__TOP__Vtiming__1(Vtb_sd_block_read___024root* vlSelf);
VlCoroutine Vtb_sd_block_read___024root___eval_initial__TOP__Vtiming__2(Vtb_sd_block_read___024root* vlSelf);

void Vtb_sd_block_read___024root___eval_initial(Vtb_sd_block_read___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_block_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_block_read___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sd_block_read___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_sd_block_read___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_sd_block_read___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_block_read__DOT__sd_clk__0 
        = vlSelfRef.tb_sd_block_read__DOT__sd_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_block_read__DOT__cmd_start__0 
        = vlSelfRef.tb_sd_block_read__DOT__cmd_start;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_block_read__DOT__response_start__0 
        = vlSelfRef.tb_sd_block_read__DOT__response_start;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_block_read__DOT__read_start__0 
        = vlSelfRef.tb_sd_block_read__DOT__read_start;
}

VL_INLINE_OPT VlCoroutine Vtb_sd_block_read___024root___eval_initial__TOP__Vtiming__2(Vtb_sd_block_read___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_block_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_block_read___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/tb_sd_block_read.sv", 
                                             73);
        vlSelfRef.tb_sd_block_read__DOT__sd_clk = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_sd_block_read__DOT__sd_clk)));
    }
}

void Vtb_sd_block_read___024root___act_comb__TOP__0(Vtb_sd_block_read___024root* vlSelf);

void Vtb_sd_block_read___024root___eval_act(Vtb_sd_block_read___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_block_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_block_read___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x3eULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_sd_block_read___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_sd_block_read___024root___act_comb__TOP__0(Vtb_sd_block_read___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_block_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_block_read___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*39:0*/ tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data;
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data = 0;
    CData/*6:0*/ tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg;
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg = 0;
    CData/*0:0*/ tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback;
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback = 0;
    // Body
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
        = (((QData)((IData)(vlSelfRef.tb_sd_block_read__DOT__response_cmd)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.tb_sd_block_read__DOT__response_status)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & (IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                         >> 0x27U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg = 0U;
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x26U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x25U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x24U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x23U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x22U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x21U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x20U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x1fU)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x1eU)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x1dU)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x1cU)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x1bU)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x1aU)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x19U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x18U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x17U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x16U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x15U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x14U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x13U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x12U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x11U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0x10U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                        >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0xfU)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                       >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0xeU)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                       >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0xdU)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                       >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0xcU)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                       >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0xbU)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                       >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 0xaU)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                       >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 9U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                     >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 8U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                     >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 7U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                     >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 6U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                     >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 5U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                     >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 4U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                     >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 3U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                     >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 2U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                     >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)((tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data 
                          >> 1U)) ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                                     >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback 
        = (1U & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__data) 
                 ^ ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    >> 6U)));
    tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
        = (0x7eU & ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
                    << 1U));
    if (tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__feedback) {
        tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg 
            = (9U ^ (IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg));
    }
    vlSelfRef.tb_sd_block_read__DOT__dut__DOT__response_crc_valid 
        = ((IData)(tb_sd_block_read__DOT__dut__DOT__crc7_check_inst__DOT__crc_reg) 
           == (IData)(vlSelfRef.tb_sd_block_read__DOT__response_crc));
}

void Vtb_sd_block_read___024root___nba_sequent__TOP__0(Vtb_sd_block_read___024root* vlSelf);

void Vtb_sd_block_read___024root___eval_nba(Vtb_sd_block_read___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_block_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_block_read___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sd_block_read___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x3eULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sd_block_read___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_sd_block_read___024root___nba_sequent__TOP__0(Vtb_sd_block_read___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_block_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_block_read___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__tb_sd_block_read__DOT__dut__DOT__state;
    __Vdly__tb_sd_block_read__DOT__dut__DOT__state = 0;
    // Body
    __Vdly__tb_sd_block_read__DOT__dut__DOT__state 
        = vlSelfRef.tb_sd_block_read__DOT__dut__DOT__state;
    if (vlSelfRef.tb_sd_block_read__DOT__reset) {
        __Vdly__tb_sd_block_read__DOT__dut__DOT__state = 0U;
        vlSelfRef.tb_sd_block_read__DOT__busy = 0U;
        vlSelfRef.tb_sd_block_read__DOT__done = 0U;
        vlSelfRef.tb_sd_block_read__DOT__error = 0U;
        vlSelfRef.tb_sd_block_read__DOT__cmd_index = 0U;
        vlSelfRef.tb_sd_block_read__DOT__cmd_arg = 0U;
        vlSelfRef.tb_sd_block_read__DOT__cmd_start = 0U;
        vlSelfRef.tb_sd_block_read__DOT__response_start = 0U;
        vlSelfRef.tb_sd_block_read__DOT__response_type = 0U;
        vlSelfRef.tb_sd_block_read__DOT__read_start = 0U;
    } else {
        vlSelfRef.tb_sd_block_read__DOT__done = 0U;
        vlSelfRef.tb_sd_block_read__DOT__cmd_start = 0U;
        vlSelfRef.tb_sd_block_read__DOT__response_start = 0U;
        vlSelfRef.tb_sd_block_read__DOT__read_start = 0U;
        if ((4U & (IData)(vlSelfRef.tb_sd_block_read__DOT__dut__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_sd_block_read__DOT__dut__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_sd_block_read__DOT__dut__DOT__state))) {
                    __Vdly__tb_sd_block_read__DOT__dut__DOT__state = 0U;
                    vlSelfRef.tb_sd_block_read__DOT__busy = 0U;
                    vlSelfRef.tb_sd_block_read__DOT__error = 1U;
                    vlSelfRef.tb_sd_block_read__DOT__done = 1U;
                } else if (vlSelfRef.tb_sd_block_read__DOT__read_done) {
                    vlSelfRef.tb_sd_block_read__DOT__busy = 0U;
                    vlSelfRef.tb_sd_block_read__DOT__done = 1U;
                    vlSelfRef.tb_sd_block_read__DOT__error 
                        = (1U & (~ ((IData)(vlSelfRef.tb_sd_block_read__DOT__read_valid) 
                                    & (IData)(vlSelfRef.tb_sd_block_read__DOT__read_crc_valid))));
                    __Vdly__tb_sd_block_read__DOT__dut__DOT__state = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_sd_block_read__DOT__dut__DOT__state))) {
                vlSelfRef.tb_sd_block_read__DOT__read_start = 1U;
                __Vdly__tb_sd_block_read__DOT__dut__DOT__state = 6U;
            } else if (vlSelfRef.tb_sd_block_read__DOT__response_done) {
                if ((((IData)(vlSelfRef.tb_sd_block_read__DOT__response_valid) 
                      & (0x11U == (IData)(vlSelfRef.tb_sd_block_read__DOT__response_cmd))) 
                     & (IData)(vlSelfRef.tb_sd_block_read__DOT__dut__DOT__response_crc_valid))) {
                    __Vdly__tb_sd_block_read__DOT__dut__DOT__state = 5U;
                } else {
                    vlSelfRef.tb_sd_block_read__DOT__error = 1U;
                    vlSelfRef.tb_sd_block_read__DOT__busy = 0U;
                    vlSelfRef.tb_sd_block_read__DOT__done = 1U;
                    __Vdly__tb_sd_block_read__DOT__dut__DOT__state = 0U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tb_sd_block_read__DOT__dut__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_sd_block_read__DOT__dut__DOT__state))) {
                vlSelfRef.tb_sd_block_read__DOT__response_start = 1U;
                __Vdly__tb_sd_block_read__DOT__dut__DOT__state = 4U;
            } else if (vlSelfRef.tb_sd_block_read__DOT__cmd_done) {
                __Vdly__tb_sd_block_read__DOT__dut__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_sd_block_read__DOT__dut__DOT__state))) {
            vlSelfRef.tb_sd_block_read__DOT__cmd_start = 1U;
            __Vdly__tb_sd_block_read__DOT__dut__DOT__state = 2U;
        } else {
            vlSelfRef.tb_sd_block_read__DOT__busy = 0U;
            vlSelfRef.tb_sd_block_read__DOT__error = 0U;
            if (vlSelfRef.tb_sd_block_read__DOT__start) {
                vlSelfRef.tb_sd_block_read__DOT__busy = 1U;
                vlSelfRef.tb_sd_block_read__DOT__cmd_index = 0x11U;
                vlSelfRef.tb_sd_block_read__DOT__cmd_arg 
                    = vlSelfRef.tb_sd_block_read__DOT__block_address;
                vlSelfRef.tb_sd_block_read__DOT__response_type = 0U;
                __Vdly__tb_sd_block_read__DOT__dut__DOT__state = 1U;
            }
        }
    }
    vlSelfRef.tb_sd_block_read__DOT__dut__DOT__state 
        = __Vdly__tb_sd_block_read__DOT__dut__DOT__state;
}

void Vtb_sd_block_read___024root___timing_resume(Vtb_sd_block_read___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_block_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_block_read___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hac6c5971__0.resume(
                                                   "@(negedge tb_sd_block_read.sd_clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h32197c21__0.resume(
                                                   "@([changed] tb_sd_block_read.cmd_start)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hf7c49fa8__0.resume(
                                                   "@([changed] tb_sd_block_read.response_start)");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h61e86e35__0.resume(
                                                   "@([changed] tb_sd_block_read.read_start)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_sd_block_read___024root___timing_commit(Vtb_sd_block_read___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_block_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_block_read___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hac6c5971__0.commit(
                                                   "@(negedge tb_sd_block_read.sd_clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h32197c21__0.commit(
                                                   "@([changed] tb_sd_block_read.cmd_start)");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hf7c49fa8__0.commit(
                                                   "@([changed] tb_sd_block_read.response_start)");
    }
    if ((! (0x20ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h61e86e35__0.commit(
                                                   "@([changed] tb_sd_block_read.read_start)");
    }
}

void Vtb_sd_block_read___024root___eval_triggers__act(Vtb_sd_block_read___024root* vlSelf);

bool Vtb_sd_block_read___024root___eval_phase__act(Vtb_sd_block_read___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_block_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_block_read___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_sd_block_read___024root___eval_triggers__act(vlSelf);
    Vtb_sd_block_read___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_sd_block_read___024root___timing_resume(vlSelf);
        Vtb_sd_block_read___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_sd_block_read___024root___eval_phase__nba(Vtb_sd_block_read___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_block_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_block_read___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_sd_block_read___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd_block_read___024root___dump_triggers__nba(Vtb_sd_block_read___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd_block_read___024root___dump_triggers__act(Vtb_sd_block_read___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_sd_block_read___024root___eval(Vtb_sd_block_read___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_block_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_block_read___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_sd_block_read___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/tb_sd_block_read.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_sd_block_read___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/tb_sd_block_read.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_sd_block_read___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_sd_block_read___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_sd_block_read___024root___eval_debug_assertions(Vtb_sd_block_read___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_block_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_block_read___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
