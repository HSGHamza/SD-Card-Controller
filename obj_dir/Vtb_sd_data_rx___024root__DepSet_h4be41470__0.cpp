// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sd_data_rx.h for the primary calling header

#include "Vtb_sd_data_rx__pch.h"
#include "Vtb_sd_data_rx__Syms.h"
#include "Vtb_sd_data_rx___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_sd_data_rx___024root___eval_initial__TOP__Vtiming__0(Vtb_sd_data_rx___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_data_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_data_rx___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_sd_data_rx__DOT__byte_index;
    tb_sd_data_rx__DOT__byte_index = 0;
    SData/*15:0*/ tb_sd_data_rx__DOT__expected_crc;
    tb_sd_data_rx__DOT__expected_crc = 0;
    CData/*7:0*/ __Vtask_tb_sd_data_rx__DOT__send_byte_from_current_edge__2__byte_value;
    __Vtask_tb_sd_data_rx__DOT__send_byte_from_current_edge__2__byte_value = 0;
    CData/*0:0*/ __Vtask_tb_sd_data_rx__DOT__send_bit__3__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__3__bit_value = 0;
    SData/*15:0*/ __Vfunc_tb_sd_data_rx__DOT__crc16_byte__4__Vfuncout;
    __Vfunc_tb_sd_data_rx__DOT__crc16_byte__4__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_sd_data_rx__DOT__crc16_byte__4__crc_in;
    __Vfunc_tb_sd_data_rx__DOT__crc16_byte__4__crc_in = 0;
    CData/*7:0*/ __Vfunc_tb_sd_data_rx__DOT__crc16_byte__4__data_in;
    __Vfunc_tb_sd_data_rx__DOT__crc16_byte__4__data_in = 0;
    CData/*7:0*/ __Vfunc_tb_sd_data_rx__DOT__pattern_byte__5__Vfuncout;
    __Vfunc_tb_sd_data_rx__DOT__pattern_byte__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sd_data_rx__DOT__pattern_byte__5__index;
    __Vfunc_tb_sd_data_rx__DOT__pattern_byte__5__index = 0;
    CData/*7:0*/ __Vtask_tb_sd_data_rx__DOT__send_byte__6__byte_value;
    __Vtask_tb_sd_data_rx__DOT__send_byte__6__byte_value = 0;
    CData/*7:0*/ __Vfunc_tb_sd_data_rx__DOT__pattern_byte__7__Vfuncout;
    __Vfunc_tb_sd_data_rx__DOT__pattern_byte__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sd_data_rx__DOT__pattern_byte__7__index;
    __Vfunc_tb_sd_data_rx__DOT__pattern_byte__7__index = 0;
    CData/*0:0*/ __Vtask_tb_sd_data_rx__DOT__send_bit__8__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__8__bit_value = 0;
    CData/*7:0*/ __Vtask_tb_sd_data_rx__DOT__send_byte__9__byte_value;
    __Vtask_tb_sd_data_rx__DOT__send_byte__9__byte_value = 0;
    CData/*0:0*/ __Vtask_tb_sd_data_rx__DOT__send_bit__10__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__10__bit_value = 0;
    CData/*7:0*/ __Vtask_tb_sd_data_rx__DOT__send_byte__11__byte_value;
    __Vtask_tb_sd_data_rx__DOT__send_byte__11__byte_value = 0;
    CData/*0:0*/ __Vtask_tb_sd_data_rx__DOT__send_bit__12__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__12__bit_value = 0;
    // Body
    vlSelfRef.tb_sd_data_rx__DOT__sd_clk = 0U;
    vlSelfRef.tb_sd_data_rx__DOT__reset = 1U;
    vlSelfRef.tb_sd_data_rx__DOT__start = 0U;
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = 1U;
    vlSelfRef.tb_sd_data_rx__DOT__write_count = 0U;
    vlSelfRef.tb_sd_data_rx__DOT__error_count = 0U;
    vlSelfRef.tb_sd_data_rx__DOT__done_seen = 0U;
    tb_sd_data_rx__DOT__expected_crc = 0U;
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         125);
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         125);
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         125);
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         125);
    vlSelfRef.tb_sd_data_rx__DOT__reset = 0U;
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         128);
    vlSelfRef.tb_sd_data_rx__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         130);
    vlSelfRef.tb_sd_data_rx__DOT__start = 0U;
    __Vtask_tb_sd_data_rx__DOT__send_byte_from_current_edge__2__byte_value = 0xfeU;
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte_from_current_edge__2__byte_value) 
                                                   >> 7U));
    __Vtask_tb_sd_data_rx__DOT__send_bit__3__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte_from_current_edge__2__byte_value) 
                 >> 6U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__3__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__3__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte_from_current_edge__2__byte_value) 
                 >> 5U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__3__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__3__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte_from_current_edge__2__byte_value) 
                 >> 4U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__3__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__3__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte_from_current_edge__2__byte_value) 
                 >> 3U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__3__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__3__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte_from_current_edge__2__byte_value) 
                 >> 2U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__3__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__3__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte_from_current_edge__2__byte_value) 
                 >> 1U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__3__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__3__bit_value 
        = (1U & (IData)(__Vtask_tb_sd_data_rx__DOT__send_byte_from_current_edge__2__byte_value));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__3__bit_value;
    tb_sd_data_rx__DOT__byte_index = 0U;
    while (VL_GTS_III(32, 0x200U, tb_sd_data_rx__DOT__byte_index)) {
        __Vfunc_tb_sd_data_rx__DOT__pattern_byte__5__index 
            = tb_sd_data_rx__DOT__byte_index;
        vlSelfRef.tb_sd_data_rx__DOT__pattern_byte__Vstatic__value 
            = ((IData)(0xbU) + VL_MULS_III(32, (IData)(0x25U), __Vfunc_tb_sd_data_rx__DOT__pattern_byte__5__index));
        __Vfunc_tb_sd_data_rx__DOT__pattern_byte__5__Vfuncout 
            = (0xffU & vlSelfRef.tb_sd_data_rx__DOT__pattern_byte__Vstatic__value);
        __Vfunc_tb_sd_data_rx__DOT__crc16_byte__4__data_in 
            = __Vfunc_tb_sd_data_rx__DOT__pattern_byte__5__Vfuncout;
        __Vfunc_tb_sd_data_rx__DOT__crc16_byte__4__crc_in 
            = tb_sd_data_rx__DOT__expected_crc;
        vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc 
            = __Vfunc_tb_sd_data_rx__DOT__crc16_byte__4__crc_in;
        vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc 
            = ((IData)((((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                         >> 0xfU) ^ ((IData)(__Vfunc_tb_sd_data_rx__DOT__crc16_byte__4__data_in) 
                                     >> 7U))) ? (0x1021U 
                                                 ^ 
                                                 (0xfffeU 
                                                  & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                                                     << 1U)))
                : (0xfffeU & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                              << 1U)));
        vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc 
            = ((1U & (((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                       >> 0xfU) ^ ((IData)(__Vfunc_tb_sd_data_rx__DOT__crc16_byte__4__data_in) 
                                   >> 6U))) ? (0x1021U 
                                               ^ (0xfffeU 
                                                  & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                                                     << 1U)))
                : (0xfffeU & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                              << 1U)));
        vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc 
            = ((1U & (((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                       >> 0xfU) ^ ((IData)(__Vfunc_tb_sd_data_rx__DOT__crc16_byte__4__data_in) 
                                   >> 5U))) ? (0x1021U 
                                               ^ (0xfffeU 
                                                  & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                                                     << 1U)))
                : (0xfffeU & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                              << 1U)));
        vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc 
            = ((1U & (((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                       >> 0xfU) ^ ((IData)(__Vfunc_tb_sd_data_rx__DOT__crc16_byte__4__data_in) 
                                   >> 4U))) ? (0x1021U 
                                               ^ (0xfffeU 
                                                  & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                                                     << 1U)))
                : (0xfffeU & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                              << 1U)));
        vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc 
            = ((1U & (((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                       >> 0xfU) ^ ((IData)(__Vfunc_tb_sd_data_rx__DOT__crc16_byte__4__data_in) 
                                   >> 3U))) ? (0x1021U 
                                               ^ (0xfffeU 
                                                  & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                                                     << 1U)))
                : (0xfffeU & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                              << 1U)));
        vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc 
            = ((1U & (((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                       >> 0xfU) ^ ((IData)(__Vfunc_tb_sd_data_rx__DOT__crc16_byte__4__data_in) 
                                   >> 2U))) ? (0x1021U 
                                               ^ (0xfffeU 
                                                  & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                                                     << 1U)))
                : (0xfffeU & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                              << 1U)));
        vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc 
            = ((1U & (((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                       >> 0xfU) ^ ((IData)(__Vfunc_tb_sd_data_rx__DOT__crc16_byte__4__data_in) 
                                   >> 1U))) ? (0x1021U 
                                               ^ (0xfffeU 
                                                  & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                                                     << 1U)))
                : (0xfffeU & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                              << 1U)));
        vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc 
            = ((1U & (((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                       >> 0xfU) ^ (IData)(__Vfunc_tb_sd_data_rx__DOT__crc16_byte__4__data_in)))
                ? (0x1021U ^ (0xfffeU & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                                         << 1U))) : 
               (0xfffeU & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc) 
                           << 1U)));
        __Vfunc_tb_sd_data_rx__DOT__crc16_byte__4__Vfuncout 
            = vlSelfRef.tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc;
        tb_sd_data_rx__DOT__expected_crc = __Vfunc_tb_sd_data_rx__DOT__crc16_byte__4__Vfuncout;
        __Vfunc_tb_sd_data_rx__DOT__pattern_byte__7__index 
            = tb_sd_data_rx__DOT__byte_index;
        vlSelfRef.tb_sd_data_rx__DOT__pattern_byte__Vstatic__value 
            = ((IData)(0xbU) + VL_MULS_III(32, (IData)(0x25U), __Vfunc_tb_sd_data_rx__DOT__pattern_byte__7__index));
        __Vfunc_tb_sd_data_rx__DOT__pattern_byte__7__Vfuncout 
            = (0xffU & vlSelfRef.tb_sd_data_rx__DOT__pattern_byte__Vstatic__value);
        __Vtask_tb_sd_data_rx__DOT__send_byte__6__byte_value 
            = __Vfunc_tb_sd_data_rx__DOT__pattern_byte__7__Vfuncout;
        __Vtask_tb_sd_data_rx__DOT__send_bit__8__bit_value 
            = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__6__byte_value) 
                     >> 7U));
        co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_data_rx.sd_clk)", 
                                                             "sim/tb_sd_data_rx.sv", 
                                                             69);
        vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__8__bit_value;
        __Vtask_tb_sd_data_rx__DOT__send_bit__8__bit_value 
            = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__6__byte_value) 
                     >> 6U));
        co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_data_rx.sd_clk)", 
                                                             "sim/tb_sd_data_rx.sv", 
                                                             69);
        vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__8__bit_value;
        __Vtask_tb_sd_data_rx__DOT__send_bit__8__bit_value 
            = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__6__byte_value) 
                     >> 5U));
        co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_data_rx.sd_clk)", 
                                                             "sim/tb_sd_data_rx.sv", 
                                                             69);
        vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__8__bit_value;
        __Vtask_tb_sd_data_rx__DOT__send_bit__8__bit_value 
            = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__6__byte_value) 
                     >> 4U));
        co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_data_rx.sd_clk)", 
                                                             "sim/tb_sd_data_rx.sv", 
                                                             69);
        vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__8__bit_value;
        __Vtask_tb_sd_data_rx__DOT__send_bit__8__bit_value 
            = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__6__byte_value) 
                     >> 3U));
        co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_data_rx.sd_clk)", 
                                                             "sim/tb_sd_data_rx.sv", 
                                                             69);
        vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__8__bit_value;
        __Vtask_tb_sd_data_rx__DOT__send_bit__8__bit_value 
            = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__6__byte_value) 
                     >> 2U));
        co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_data_rx.sd_clk)", 
                                                             "sim/tb_sd_data_rx.sv", 
                                                             69);
        vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__8__bit_value;
        __Vtask_tb_sd_data_rx__DOT__send_bit__8__bit_value 
            = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__6__byte_value) 
                     >> 1U));
        co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_data_rx.sd_clk)", 
                                                             "sim/tb_sd_data_rx.sv", 
                                                             69);
        vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__8__bit_value;
        __Vtask_tb_sd_data_rx__DOT__send_bit__8__bit_value 
            = (1U & (IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__6__byte_value));
        co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_data_rx.sd_clk)", 
                                                             "sim/tb_sd_data_rx.sv", 
                                                             69);
        vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__8__bit_value;
        tb_sd_data_rx__DOT__byte_index = ((IData)(1U) 
                                          + tb_sd_data_rx__DOT__byte_index);
    }
    __Vtask_tb_sd_data_rx__DOT__send_byte__9__byte_value 
        = (0xffU & ((IData)(tb_sd_data_rx__DOT__expected_crc) 
                    >> 8U));
    __Vtask_tb_sd_data_rx__DOT__send_bit__10__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__9__byte_value) 
                 >> 7U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__10__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__10__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__9__byte_value) 
                 >> 6U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__10__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__10__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__9__byte_value) 
                 >> 5U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__10__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__10__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__9__byte_value) 
                 >> 4U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__10__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__10__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__9__byte_value) 
                 >> 3U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__10__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__10__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__9__byte_value) 
                 >> 2U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__10__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__10__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__9__byte_value) 
                 >> 1U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__10__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__10__bit_value 
        = (1U & (IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__9__byte_value));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__10__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_byte__11__byte_value 
        = (0xffU & (IData)(tb_sd_data_rx__DOT__expected_crc));
    __Vtask_tb_sd_data_rx__DOT__send_bit__12__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__11__byte_value) 
                 >> 7U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__12__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__12__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__11__byte_value) 
                 >> 6U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__12__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__12__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__11__byte_value) 
                 >> 5U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__12__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__12__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__11__byte_value) 
                 >> 4U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__12__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__12__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__11__byte_value) 
                 >> 3U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__12__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__12__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__11__byte_value) 
                 >> 2U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__12__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__12__bit_value 
        = (1U & ((IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__11__byte_value) 
                 >> 1U));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__12__bit_value;
    __Vtask_tb_sd_data_rx__DOT__send_bit__12__bit_value 
        = (1U & (IData)(__Vtask_tb_sd_data_rx__DOT__send_byte__11__byte_value));
    co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd_data_rx.sd_clk)", 
                                                         "sim/tb_sd_data_rx.sv", 
                                                         69);
    vlSelfRef.tb_sd_data_rx__DOT__sd_dat0 = __Vtask_tb_sd_data_rx__DOT__send_bit__12__bit_value;
    while ((1U & (~ (IData)(vlSelfRef.tb_sd_data_rx__DOT__done_seen)))) {
        co_await vlSelfRef.__VtrigSched_h99e616b0__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_sd_data_rx.done_seen)", 
                                                             "sim/tb_sd_data_rx.sv", 
                                                             143);
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/tb_sd_data_rx.sv", 
                                         144);
    VL_WRITEF_NX("\n========================================\n          SD DATA RX TEST\n========================================\nBytes received = %0d\nExpected CRC   = %04x\nReceived CRC   = %04x\nCalculated CRC = %04x\nCRC valid      = %b\nData valid     = %b\n",0,
                 32,vlSelfRef.tb_sd_data_rx__DOT__write_count,
                 16,(IData)(tb_sd_data_rx__DOT__expected_crc),
                 16,vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__received_crc,
                 16,(IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__calculated_crc),
                 1,vlSelfRef.tb_sd_data_rx__DOT__crc_valid,
                 1,(IData)(vlSelfRef.tb_sd_data_rx__DOT__valid));
    if (VL_LIKELY(((((0x200U == vlSelfRef.tb_sd_data_rx__DOT__write_count) 
                     & (0U == vlSelfRef.tb_sd_data_rx__DOT__error_count)) 
                    & (IData)(vlSelfRef.tb_sd_data_rx__DOT__valid)) 
                   & (IData)(vlSelfRef.tb_sd_data_rx__DOT__crc_valid)))) {
        VL_WRITEF_NX("SD DATA RX TEST PASSED\n",0);
    } else {
        VL_WRITEF_NX("SD DATA RX TEST FAILED (errors=%0d)\n[%0t] %%Fatal: tb_sd_data_rx.sv:165: Assertion failed in %Ntb_sd_data_rx\n",0,
                     32,vlSelfRef.tb_sd_data_rx__DOT__error_count,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/tb_sd_data_rx.sv", 165, "", false);
    }
    VL_WRITEF_NX("========================================\n",0);
    VL_FINISH_MT("sim/tb_sd_data_rx.sv", 169, "");
}

VL_INLINE_OPT VlCoroutine Vtb_sd_data_rx___024root___eval_initial__TOP__Vtiming__1(Vtb_sd_data_rx___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_data_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_data_rx___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x3b9aca00ULL, 
                                         nullptr, "sim/tb_sd_data_rx.sv", 
                                         173);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_sd_data_rx.sv:174: Assertion failed in %Ntb_sd_data_rx: SD data receiver test timed out\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("sim/tb_sd_data_rx.sv", 174, "", false);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd_data_rx___024root___dump_triggers__act(Vtb_sd_data_rx___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_sd_data_rx___024root___eval_triggers__act(Vtb_sd_data_rx___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_data_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_data_rx___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_sd_data_rx__DOT__done) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_data_rx__DOT__done__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tb_sd_data_rx__DOT__sd_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_data_rx__DOT__sd_clk__0))));
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.tb_sd_data_rx__DOT__sd_clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_data_rx__DOT__sd_clk__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.tb_sd_data_rx__DOT__done_seen) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_data_rx__DOT__done_seen__0)));
    vlSelfRef.__VactTriggered.set(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_data_rx__DOT__done__0 
        = vlSelfRef.tb_sd_data_rx__DOT__done;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_data_rx__DOT__sd_clk__0 
        = vlSelfRef.tb_sd_data_rx__DOT__sd_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_data_rx__DOT__done_seen__0 
        = vlSelfRef.tb_sd_data_rx__DOT__done_seen;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sd_data_rx___024root___dump_triggers__act(vlSelf);
    }
#endif
}
