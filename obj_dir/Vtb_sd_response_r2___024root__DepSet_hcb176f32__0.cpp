// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sd_response_r2.h for the primary calling header

#include "Vtb_sd_response_r2__pch.h"
#include "Vtb_sd_response_r2___024root.h"

VlCoroutine Vtb_sd_response_r2___024root___eval_initial__TOP__Vtiming__0(Vtb_sd_response_r2___024root* vlSelf);
VlCoroutine Vtb_sd_response_r2___024root___eval_initial__TOP__Vtiming__1(Vtb_sd_response_r2___024root* vlSelf);

void Vtb_sd_response_r2___024root___eval_initial(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sd_response_r2___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_sd_response_r2___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_response_r2__DOT__sd_clk__0 
        = vlSelfRef.tb_sd_response_r2__DOT__sd_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_response_r2__DOT__response_done__0 
        = vlSelfRef.tb_sd_response_r2__DOT__response_done;
}

VL_INLINE_OPT VlCoroutine Vtb_sd_response_r2___024root___eval_initial__TOP__Vtiming__0(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*135:0*/ tb_sd_response_r2__DOT__fake_response;
    VL_ZERO_W(136, tb_sd_response_r2__DOT__fake_response);
    IData/*31:0*/ tb_sd_response_r2__DOT__i;
    tb_sd_response_r2__DOT__i = 0;
    VlWide<4>/*119:0*/ __Vtask_tb_sd_response_r2__DOT__send_r2__0__cid;
    VL_ZERO_W(120, __Vtask_tb_sd_response_r2__DOT__send_r2__0__cid);
    VlWide<4>/*127:0*/ __Vtemp_5;
    // Body
    vlSelfRef.tb_sd_response_r2__DOT__sd_clk = 0U;
    vlSelfRef.tb_sd_response_r2__DOT__reset = 1U;
    vlSelfRef.tb_sd_response_r2__DOT__response_start = 0U;
    vlSelfRef.tb_sd_response_r2__DOT__cmd = 1U;
    vlSelfRef.tb_sd_response_r2__DOT__response_type = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "sim/tb_sd_response_r2.sv", 
                                         106);
    co_await vlSelfRef.__VtrigSched_hb2435fb6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sd_response_r2.sd_clk)", 
                                                         "sim/tb_sd_response_r2.sv", 
                                                         108);
    vlSelfRef.tb_sd_response_r2__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "sim/tb_sd_response_r2.sv", 
                                         111);
    __Vtask_tb_sd_response_r2__DOT__send_r2__0__cid[0U] = 0x34455667U;
    __Vtask_tb_sd_response_r2__DOT__send_r2__0__cid[1U] = 0xf0011223U;
    __Vtask_tb_sd_response_r2__DOT__send_r2__0__cid[2U] = 0x789abcdeU;
    __Vtask_tb_sd_response_r2__DOT__send_r2__0__cid[3U] = 0x123456U;
    tb_sd_response_r2__DOT__fake_response[0U] = (0xabU 
                                                 | (__Vtask_tb_sd_response_r2__DOT__send_r2__0__cid[0U] 
                                                    << 8U));
    tb_sd_response_r2__DOT__fake_response[1U] = ((__Vtask_tb_sd_response_r2__DOT__send_r2__0__cid[0U] 
                                                  >> 0x18U) 
                                                 | (__Vtask_tb_sd_response_r2__DOT__send_r2__0__cid[1U] 
                                                    << 8U));
    tb_sd_response_r2__DOT__fake_response[2U] = ((__Vtask_tb_sd_response_r2__DOT__send_r2__0__cid[1U] 
                                                  >> 0x18U) 
                                                 | (__Vtask_tb_sd_response_r2__DOT__send_r2__0__cid[2U] 
                                                    << 8U));
    tb_sd_response_r2__DOT__fake_response[3U] = ((__Vtask_tb_sd_response_r2__DOT__send_r2__0__cid[2U] 
                                                  >> 0x18U) 
                                                 | (__Vtask_tb_sd_response_r2__DOT__send_r2__0__cid[3U] 
                                                    << 8U));
    tb_sd_response_r2__DOT__fake_response[4U] = (__Vtask_tb_sd_response_r2__DOT__send_r2__0__cid[3U] 
                                                 >> 0x18U);
    co_await vlSelfRef.__VtrigSched_hb2435fb6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sd_response_r2.sd_clk)", 
                                                         "sim/tb_sd_response_r2.sv", 
                                                         59);
    vlSelfRef.tb_sd_response_r2__DOT__response_type = 1U;
    vlSelfRef.tb_sd_response_r2__DOT__response_start = 1U;
    co_await vlSelfRef.__VtrigSched_hb2435fb6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sd_response_r2.sd_clk)", 
                                                         "sim/tb_sd_response_r2.sv", 
                                                         63);
    vlSelfRef.tb_sd_response_r2__DOT__response_start = 0U;
    tb_sd_response_r2__DOT__i = 0x87U;
    while (VL_LTES_III(32, 0U, tb_sd_response_r2__DOT__i)) {
        co_await vlSelfRef.__VtrigSched_hb2436077__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_response_r2.sd_clk)", 
                                                             "sim/tb_sd_response_r2.sv", 
                                                             67);
        vlSelfRef.tb_sd_response_r2__DOT__cmd = ((0x87U 
                                                  >= 
                                                  (0xffU 
                                                   & tb_sd_response_r2__DOT__i)) 
                                                 && (1U 
                                                     & (tb_sd_response_r2__DOT__fake_response[
                                                        (7U 
                                                         & (tb_sd_response_r2__DOT__i 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & tb_sd_response_r2__DOT__i))));
        tb_sd_response_r2__DOT__i = (tb_sd_response_r2__DOT__i 
                                     - (IData)(1U));
    }
    co_await vlSelfRef.__VtrigSched_hb2435fb6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sd_response_r2.sd_clk)", 
                                                         "sim/tb_sd_response_r2.sv", 
                                                         71);
    while ((1U & (~ (IData)(vlSelfRef.tb_sd_response_r2__DOT__response_done)))) {
        co_await vlSelfRef.__VtrigSched_haca534ba__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_sd_response_r2.response_done)", 
                                                             "sim/tb_sd_response_r2.sv", 
                                                             72);
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/tb_sd_response_r2.sv", 
                                         74);
    VL_WRITEF_NX("\n========================================\n             R2 RESPONSE TEST\n========================================\n",0);
    __Vtemp_5[0U] = ((tb_sd_response_r2__DOT__fake_response[1U] 
                      << 0x18U) | (tb_sd_response_r2__DOT__fake_response[0U] 
                                   >> 8U));
    __Vtemp_5[1U] = ((tb_sd_response_r2__DOT__fake_response[2U] 
                      << 0x18U) | (tb_sd_response_r2__DOT__fake_response[1U] 
                                   >> 8U));
    __Vtemp_5[2U] = ((tb_sd_response_r2__DOT__fake_response[3U] 
                      << 0x18U) | (tb_sd_response_r2__DOT__fake_response[2U] 
                                   >> 8U));
    __Vtemp_5[3U] = (tb_sd_response_r2__DOT__fake_response[3U] 
                     >> 8U);
    VL_WRITEF_NX("Expected CID = %030x\nReceived CID = %030x\nCRC          = %02x\nValid        = %b\n",0,
                 120,__Vtemp_5.data(),120,vlSelfRef.tb_sd_response_r2__DOT__response_long.data(),
                 7,(IData)(vlSelfRef.tb_sd_response_r2__DOT__response_crc),
                 1,vlSelfRef.tb_sd_response_r2__DOT__response_valid);
    if (VL_LIKELY(((0U == ((((vlSelfRef.tb_sd_response_r2__DOT__response_long[0U] 
                              ^ ((tb_sd_response_r2__DOT__fake_response[1U] 
                                  << 0x18U) | (tb_sd_response_r2__DOT__fake_response[0U] 
                                               >> 8U))) 
                             | (vlSelfRef.tb_sd_response_r2__DOT__response_long[1U] 
                                ^ ((tb_sd_response_r2__DOT__fake_response[2U] 
                                    << 0x18U) | (tb_sd_response_r2__DOT__fake_response[1U] 
                                                 >> 8U)))) 
                            | (vlSelfRef.tb_sd_response_r2__DOT__response_long[2U] 
                               ^ ((tb_sd_response_r2__DOT__fake_response[3U] 
                                   << 0x18U) | (tb_sd_response_r2__DOT__fake_response[2U] 
                                                >> 8U)))) 
                           | (vlSelfRef.tb_sd_response_r2__DOT__response_long[3U] 
                              ^ (tb_sd_response_r2__DOT__fake_response[3U] 
                                 >> 8U)))) & (IData)(vlSelfRef.tb_sd_response_r2__DOT__response_valid)))) {
        VL_WRITEF_NX("R2 TEST PASSED\n",0);
    } else {
        VL_WRITEF_NX("R2 TEST FAILED\n",0);
        VL_FINISH_MT("sim/tb_sd_response_r2.sv", 91, "");
    }
    VL_WRITEF_NX("========================================\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "sim/tb_sd_response_r2.sv", 
                                         117);
    VL_FINISH_MT("sim/tb_sd_response_r2.sv", 119, "");
}

VL_INLINE_OPT VlCoroutine Vtb_sd_response_r2___024root___eval_initial__TOP__Vtiming__1(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/tb_sd_response_r2.sv", 
                                             45);
        vlSelfRef.tb_sd_response_r2__DOT__sd_clk = 
            (1U & (~ (IData)(vlSelfRef.tb_sd_response_r2__DOT__sd_clk)));
    }
}

void Vtb_sd_response_r2___024root___act_comb__TOP__0(Vtb_sd_response_r2___024root* vlSelf);

void Vtb_sd_response_r2___024root___eval_act(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xfULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_sd_response_r2___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_sd_response_r2___024root___act_comb__TOP__0(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[0U] 
        = ((vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[0U] 
            << 1U) | (IData)(vlSelfRef.tb_sd_response_r2__DOT__cmd));
    vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[1U] 
        = ((vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[0U] 
            >> 0x1fU) | (vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[1U] 
                         << 1U));
    vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[2U] 
        = ((vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[1U] 
            >> 0x1fU) | (vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[2U] 
                         << 1U));
    vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[3U] 
        = ((vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[2U] 
            >> 0x1fU) | (vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[3U] 
                         << 1U));
    vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[4U] 
        = ((vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[3U] 
            >> 0x1fU) | (0xfeU & (vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[4U] 
                                  << 1U)));
}

void Vtb_sd_response_r2___024root___nba_sequent__TOP__0(Vtb_sd_response_r2___024root* vlSelf);

void Vtb_sd_response_r2___024root___eval_nba(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sd_response_r2___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sd_response_r2___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_sd_response_r2___024root___nba_sequent__TOP__0(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly__tb_sd_response_r2__DOT__dut__DOT__counter;
    __Vdly__tb_sd_response_r2__DOT__dut__DOT__counter = 0;
    CData/*2:0*/ __Vdly__tb_sd_response_r2__DOT__dut__DOT__active_response_type;
    __Vdly__tb_sd_response_r2__DOT__dut__DOT__active_response_type = 0;
    CData/*1:0*/ __Vdly__tb_sd_response_r2__DOT__dut__DOT__state;
    __Vdly__tb_sd_response_r2__DOT__dut__DOT__state = 0;
    // Body
    __Vdly__tb_sd_response_r2__DOT__dut__DOT__counter 
        = vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__counter;
    __Vdly__tb_sd_response_r2__DOT__dut__DOT__active_response_type 
        = vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__active_response_type;
    __Vdly__tb_sd_response_r2__DOT__dut__DOT__state 
        = vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__state;
    if (vlSelfRef.tb_sd_response_r2__DOT__reset) {
        vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[0U] = 0U;
        vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[1U] = 0U;
        vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[2U] = 0U;
        vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[3U] = 0U;
        vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[4U] = 0U;
        __Vdly__tb_sd_response_r2__DOT__dut__DOT__counter = 0U;
        vlSelfRef.tb_sd_response_r2__DOT__response_done = 0U;
        vlSelfRef.tb_sd_response_r2__DOT__response_valid = 0U;
        vlSelfRef.tb_sd_response_r2__DOT__response_crc = 0U;
        vlSelfRef.tb_sd_response_r2__DOT__response_long[0U] = 0U;
        vlSelfRef.tb_sd_response_r2__DOT__response_long[1U] = 0U;
        vlSelfRef.tb_sd_response_r2__DOT__response_long[2U] = 0U;
        vlSelfRef.tb_sd_response_r2__DOT__response_long[3U] = 0U;
        __Vdly__tb_sd_response_r2__DOT__dut__DOT__active_response_type = 0U;
        __Vdly__tb_sd_response_r2__DOT__dut__DOT__state = 0U;
    } else {
        vlSelfRef.tb_sd_response_r2__DOT__response_done = 0U;
        if ((0U == (IData)(vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__state))) {
            __Vdly__tb_sd_response_r2__DOT__dut__DOT__counter = 0U;
            if (vlSelfRef.tb_sd_response_r2__DOT__response_start) {
                vlSelfRef.tb_sd_response_r2__DOT__response_valid = 0U;
                __Vdly__tb_sd_response_r2__DOT__dut__DOT__active_response_type 
                    = vlSelfRef.tb_sd_response_r2__DOT__response_type;
                __Vdly__tb_sd_response_r2__DOT__dut__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_sd_response_r2__DOT__cmd)))) {
                vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[0U] = 0U;
                vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[1U] = 0U;
                vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[2U] = 0U;
                vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[3U] = 0U;
                vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[4U] = 0U;
                __Vdly__tb_sd_response_r2__DOT__dut__DOT__counter = 1U;
                __Vdly__tb_sd_response_r2__DOT__dut__DOT__state = 2U;
                vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[0U] 
                    = (0xfffffffeU & vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[0U]);
            }
        } else if ((2U == (IData)(vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__state))) {
            vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[0U] 
                = vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[0U];
            vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[1U] 
                = vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[1U];
            vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[2U] 
                = vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[2U];
            vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[3U] 
                = vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[3U];
            vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[4U] 
                = vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[4U];
            if ((1U == (IData)(vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__active_response_type))) {
                if ((0x87U == (IData)(vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__counter))) {
                    vlSelfRef.tb_sd_response_r2__DOT__response_done = 1U;
                    vlSelfRef.tb_sd_response_r2__DOT__response_long[0U] 
                        = ((vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[1U] 
                            << 0x18U) | (vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[0U] 
                                         >> 8U));
                    vlSelfRef.tb_sd_response_r2__DOT__response_long[1U] 
                        = ((vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[2U] 
                            << 0x18U) | (vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[1U] 
                                         >> 8U));
                    vlSelfRef.tb_sd_response_r2__DOT__response_long[2U] 
                        = ((vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[3U] 
                            << 0x18U) | (vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[2U] 
                                         >> 8U));
                    vlSelfRef.tb_sd_response_r2__DOT__response_long[3U] 
                        = (vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[3U] 
                           >> 8U);
                    vlSelfRef.tb_sd_response_r2__DOT__response_valid 
                        = (vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[0U] 
                           & (0U == (0xc0U & vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[4U])));
                    __Vdly__tb_sd_response_r2__DOT__dut__DOT__counter = 0U;
                    __Vdly__tb_sd_response_r2__DOT__dut__DOT__state = 0U;
                } else {
                    __Vdly__tb_sd_response_r2__DOT__dut__DOT__counter 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__counter)));
                }
            } else if ((0x2fU == (IData)(vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__counter))) {
                vlSelfRef.tb_sd_response_r2__DOT__response_done = 1U;
                vlSelfRef.tb_sd_response_r2__DOT__response_crc 
                    = (0x7fU & (vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[0U] 
                                >> 1U));
                vlSelfRef.tb_sd_response_r2__DOT__response_valid 
                    = (vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[0U] 
                       & (0x4000U == (0xc000U & vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_next[1U])));
                __Vdly__tb_sd_response_r2__DOT__dut__DOT__counter = 0U;
                __Vdly__tb_sd_response_r2__DOT__dut__DOT__state = 0U;
            } else {
                __Vdly__tb_sd_response_r2__DOT__dut__DOT__counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__counter)));
            }
        } else {
            vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[0U] = 0U;
            vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[1U] = 0U;
            vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[2U] = 0U;
            vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[3U] = 0U;
            vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__response_shift_reg[4U] = 0U;
            __Vdly__tb_sd_response_r2__DOT__dut__DOT__counter = 0U;
            vlSelfRef.tb_sd_response_r2__DOT__response_done = 0U;
            vlSelfRef.tb_sd_response_r2__DOT__response_valid = 0U;
            vlSelfRef.tb_sd_response_r2__DOT__response_crc = 0U;
            vlSelfRef.tb_sd_response_r2__DOT__response_long[0U] = 0U;
            vlSelfRef.tb_sd_response_r2__DOT__response_long[1U] = 0U;
            vlSelfRef.tb_sd_response_r2__DOT__response_long[2U] = 0U;
            vlSelfRef.tb_sd_response_r2__DOT__response_long[3U] = 0U;
            __Vdly__tb_sd_response_r2__DOT__dut__DOT__active_response_type = 0U;
            __Vdly__tb_sd_response_r2__DOT__dut__DOT__state = 0U;
        }
    }
    vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__counter 
        = __Vdly__tb_sd_response_r2__DOT__dut__DOT__counter;
    vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__active_response_type 
        = __Vdly__tb_sd_response_r2__DOT__dut__DOT__active_response_type;
    vlSelfRef.tb_sd_response_r2__DOT__dut__DOT__state 
        = __Vdly__tb_sd_response_r2__DOT__dut__DOT__state;
}

void Vtb_sd_response_r2___024root___timing_resume(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hb2435fb6__0.resume(
                                                   "@(posedge tb_sd_response_r2.sd_clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hb2436077__0.resume(
                                                   "@(negedge tb_sd_response_r2.sd_clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_haca534ba__0.resume(
                                                   "@([changed] tb_sd_response_r2.response_done)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_sd_response_r2___024root___timing_commit(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hb2435fb6__0.commit(
                                                   "@(posedge tb_sd_response_r2.sd_clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hb2436077__0.commit(
                                                   "@(negedge tb_sd_response_r2.sd_clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_haca534ba__0.commit(
                                                   "@([changed] tb_sd_response_r2.response_done)");
    }
}

void Vtb_sd_response_r2___024root___eval_triggers__act(Vtb_sd_response_r2___024root* vlSelf);

bool Vtb_sd_response_r2___024root___eval_phase__act(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_sd_response_r2___024root___eval_triggers__act(vlSelf);
    Vtb_sd_response_r2___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_sd_response_r2___024root___timing_resume(vlSelf);
        Vtb_sd_response_r2___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_sd_response_r2___024root___eval_phase__nba(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_sd_response_r2___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd_response_r2___024root___dump_triggers__nba(Vtb_sd_response_r2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd_response_r2___024root___dump_triggers__act(Vtb_sd_response_r2___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_sd_response_r2___024root___eval(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___eval\n"); );
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
            Vtb_sd_response_r2___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/tb_sd_response_r2.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_sd_response_r2___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/tb_sd_response_r2.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_sd_response_r2___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_sd_response_r2___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_sd_response_r2___024root___eval_debug_assertions(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
