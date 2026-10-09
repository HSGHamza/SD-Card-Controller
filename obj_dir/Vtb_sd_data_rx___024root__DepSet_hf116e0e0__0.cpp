// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sd_data_rx.h for the primary calling header

#include "Vtb_sd_data_rx__pch.h"
#include "Vtb_sd_data_rx___024root.h"

VlCoroutine Vtb_sd_data_rx___024root___eval_initial__TOP__Vtiming__0(Vtb_sd_data_rx___024root* vlSelf);
VlCoroutine Vtb_sd_data_rx___024root___eval_initial__TOP__Vtiming__1(Vtb_sd_data_rx___024root* vlSelf);
VlCoroutine Vtb_sd_data_rx___024root___eval_initial__TOP__Vtiming__2(Vtb_sd_data_rx___024root* vlSelf);
VlCoroutine Vtb_sd_data_rx___024root___eval_initial__TOP__Vtiming__3(Vtb_sd_data_rx___024root* vlSelf);

void Vtb_sd_data_rx___024root___eval_initial(Vtb_sd_data_rx___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_data_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_data_rx___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sd_data_rx___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_sd_data_rx___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_sd_data_rx___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_sd_data_rx___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_data_rx__DOT__done__0 
        = vlSelfRef.tb_sd_data_rx__DOT__done;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_data_rx__DOT__sd_clk__0 
        = vlSelfRef.tb_sd_data_rx__DOT__sd_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_data_rx__DOT__done_seen__0 
        = vlSelfRef.tb_sd_data_rx__DOT__done_seen;
}

VL_INLINE_OPT VlCoroutine Vtb_sd_data_rx___024root___eval_initial__TOP__Vtiming__2(Vtb_sd_data_rx___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_data_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_data_rx___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/tb_sd_data_rx.sv", 
                                             38);
        vlSelfRef.tb_sd_data_rx__DOT__sd_clk = (1U 
                                                & (~ (IData)(vlSelfRef.tb_sd_data_rx__DOT__sd_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_sd_data_rx___024root___eval_initial__TOP__Vtiming__3(Vtb_sd_data_rx___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_data_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_data_rx___024root___eval_initial__TOP__Vtiming__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vfunc_tb_sd_data_rx__DOT__pattern_byte__0__Vfuncout;
    __Vfunc_tb_sd_data_rx__DOT__pattern_byte__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sd_data_rx__DOT__pattern_byte__0__index;
    __Vfunc_tb_sd_data_rx__DOT__pattern_byte__0__index = 0;
    CData/*7:0*/ __Vfunc_tb_sd_data_rx__DOT__pattern_byte__1__Vfuncout;
    __Vfunc_tb_sd_data_rx__DOT__pattern_byte__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sd_data_rx__DOT__pattern_byte__1__index;
    __Vfunc_tb_sd_data_rx__DOT__pattern_byte__1__index = 0;
    // Body
    while (1U) {
        co_await vlSelfRef.__VtrigSched_h2a941096__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_data_rx.sd_clk)", 
                                                             "sim/tb_sd_data_rx.sv", 
                                                             93);
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/tb_sd_data_rx.sv", 
                                             94);
        if (((~ (IData)(vlSelfRef.tb_sd_data_rx__DOT__reset)) 
             & (IData)(vlSelfRef.tb_sd_data_rx__DOT__data_write))) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.tb_sd_data_rx__DOT__data_addr) 
                             != (0x1ffU & vlSelfRef.tb_sd_data_rx__DOT__write_count)))) {
                VL_WRITEF_NX("Address mismatch at byte %0d: got %0#\n",0,
                             32,vlSelfRef.tb_sd_data_rx__DOT__write_count,
                             9,(IData)(vlSelfRef.tb_sd_data_rx__DOT__data_addr));
                vlSelfRef.tb_sd_data_rx__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_sd_data_rx__DOT__error_count);
            }
            if (VL_UNLIKELY(((IData)(vlSelfRef.tb_sd_data_rx__DOT__data_byte) 
                             != ([&]() {
                                __Vfunc_tb_sd_data_rx__DOT__pattern_byte__0__index 
                                    = vlSelfRef.tb_sd_data_rx__DOT__write_count;
                                vlSelfRef.tb_sd_data_rx__DOT__pattern_byte__Vstatic__value 
                                    = ((IData)(0xbU) 
                                       + VL_MULS_III(32, (IData)(0x25U), __Vfunc_tb_sd_data_rx__DOT__pattern_byte__0__index));
                                __Vfunc_tb_sd_data_rx__DOT__pattern_byte__0__Vfuncout 
                                    = (0xffU & vlSelfRef.tb_sd_data_rx__DOT__pattern_byte__Vstatic__value);
                            }(), (IData)(__Vfunc_tb_sd_data_rx__DOT__pattern_byte__0__Vfuncout))))) {
                VL_WRITEF_NX("Data mismatch at byte %0d: got %02x expected %02x\n",0,
                             32,vlSelfRef.tb_sd_data_rx__DOT__write_count,
                             8,(IData)(vlSelfRef.tb_sd_data_rx__DOT__data_byte),
                             8,([&]() {
                                __Vfunc_tb_sd_data_rx__DOT__pattern_byte__1__index 
                                    = vlSelfRef.tb_sd_data_rx__DOT__write_count;
                                vlSelfRef.tb_sd_data_rx__DOT__pattern_byte__Vstatic__value 
                                    = ((IData)(0xbU) 
                                       + VL_MULS_III(32, (IData)(0x25U), __Vfunc_tb_sd_data_rx__DOT__pattern_byte__1__index));
                                __Vfunc_tb_sd_data_rx__DOT__pattern_byte__1__Vfuncout 
                                    = (0xffU & vlSelfRef.tb_sd_data_rx__DOT__pattern_byte__Vstatic__value);
                            }(), (IData)(__Vfunc_tb_sd_data_rx__DOT__pattern_byte__1__Vfuncout)));
                vlSelfRef.tb_sd_data_rx__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_sd_data_rx__DOT__error_count);
            }
            vlSelfRef.tb_sd_data_rx__DOT__write_count 
                = ((IData)(1U) + vlSelfRef.tb_sd_data_rx__DOT__write_count);
        }
    }
}

void Vtb_sd_data_rx___024root___act_comb__TOP__0(Vtb_sd_data_rx___024root* vlSelf);

void Vtb_sd_data_rx___024root___eval_act(Vtb_sd_data_rx___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_data_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_data_rx___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x1cULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_sd_data_rx___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_sd_data_rx___024root___act_comb__TOP__0(Vtb_sd_data_rx___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_data_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_data_rx___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__crc16_next_bit 
        = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__calculated_crc), 1U) 
                      ^ (0x1021U & (- (IData)((IData)(
                                                      (((IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__calculated_crc) 
                                                        >> 0xfU) 
                                                       ^ (IData)(vlSelfRef.tb_sd_data_rx__DOT__sd_dat0))))))));
}

void Vtb_sd_data_rx___024root___nba_sequent__TOP__0(Vtb_sd_data_rx___024root* vlSelf);
void Vtb_sd_data_rx___024root___nba_sequent__TOP__1(Vtb_sd_data_rx___024root* vlSelf);

void Vtb_sd_data_rx___024root___eval_nba(Vtb_sd_data_rx___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_data_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_data_rx___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sd_data_rx___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sd_data_rx___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x1eULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sd_data_rx___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_sd_data_rx___024root___nba_sequent__TOP__0(Vtb_sd_data_rx___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_data_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_data_rx___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__tb_sd_data_rx__DOT__dut__DOT__state;
    __Vdly__tb_sd_data_rx__DOT__dut__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_sd_data_rx__DOT__dut__DOT__token_shift;
    __Vdly__tb_sd_data_rx__DOT__dut__DOT__token_shift = 0;
    CData/*7:0*/ __Vdly__tb_sd_data_rx__DOT__dut__DOT__byte_shift;
    __Vdly__tb_sd_data_rx__DOT__dut__DOT__byte_shift = 0;
    SData/*15:0*/ __Vdly__tb_sd_data_rx__DOT__dut__DOT__crc_shift;
    __Vdly__tb_sd_data_rx__DOT__dut__DOT__crc_shift = 0;
    SData/*15:0*/ __Vdly__tb_sd_data_rx__DOT__dut__DOT__calculated_crc;
    __Vdly__tb_sd_data_rx__DOT__dut__DOT__calculated_crc = 0;
    CData/*2:0*/ __Vdly__tb_sd_data_rx__DOT__dut__DOT__bit_count;
    __Vdly__tb_sd_data_rx__DOT__dut__DOT__bit_count = 0;
    SData/*8:0*/ __Vdly__tb_sd_data_rx__DOT__dut__DOT__byte_count;
    __Vdly__tb_sd_data_rx__DOT__dut__DOT__byte_count = 0;
    CData/*0:0*/ __Vdly__tb_sd_data_rx__DOT__dut__DOT__crc_byte_count;
    __Vdly__tb_sd_data_rx__DOT__dut__DOT__crc_byte_count = 0;
    // Body
    __Vdly__tb_sd_data_rx__DOT__dut__DOT__state = vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__state;
    __Vdly__tb_sd_data_rx__DOT__dut__DOT__token_shift 
        = vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__token_shift;
    __Vdly__tb_sd_data_rx__DOT__dut__DOT__byte_shift 
        = vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__byte_shift;
    __Vdly__tb_sd_data_rx__DOT__dut__DOT__crc_shift 
        = vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__crc_shift;
    __Vdly__tb_sd_data_rx__DOT__dut__DOT__bit_count 
        = vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__bit_count;
    __Vdly__tb_sd_data_rx__DOT__dut__DOT__byte_count 
        = vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__byte_count;
    __Vdly__tb_sd_data_rx__DOT__dut__DOT__crc_byte_count 
        = vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__crc_byte_count;
    __Vdly__tb_sd_data_rx__DOT__dut__DOT__calculated_crc 
        = vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__calculated_crc;
    if (vlSelfRef.tb_sd_data_rx__DOT__reset) {
        __Vdly__tb_sd_data_rx__DOT__dut__DOT__state = 0U;
        vlSelfRef.tb_sd_data_rx__DOT__done = 0U;
        vlSelfRef.tb_sd_data_rx__DOT__valid = 0U;
        vlSelfRef.tb_sd_data_rx__DOT__data_addr = 0U;
        vlSelfRef.tb_sd_data_rx__DOT__data_byte = 0U;
        vlSelfRef.tb_sd_data_rx__DOT__data_write = 0U;
        vlSelfRef.tb_sd_data_rx__DOT__crc_valid = 0U;
        __Vdly__tb_sd_data_rx__DOT__dut__DOT__token_shift = 0U;
        __Vdly__tb_sd_data_rx__DOT__dut__DOT__byte_shift = 0U;
        __Vdly__tb_sd_data_rx__DOT__dut__DOT__crc_shift = 0U;
        vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__received_crc = 0U;
        __Vdly__tb_sd_data_rx__DOT__dut__DOT__calculated_crc = 0U;
        __Vdly__tb_sd_data_rx__DOT__dut__DOT__bit_count = 0U;
        __Vdly__tb_sd_data_rx__DOT__dut__DOT__byte_count = 0U;
        __Vdly__tb_sd_data_rx__DOT__dut__DOT__crc_byte_count = 0U;
    } else {
        vlSelfRef.tb_sd_data_rx__DOT__done = 0U;
        vlSelfRef.tb_sd_data_rx__DOT__data_write = 0U;
        if ((4U & (IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__state))) {
                __Vdly__tb_sd_data_rx__DOT__dut__DOT__state = 0U;
                vlSelfRef.tb_sd_data_rx__DOT__done = 0U;
                vlSelfRef.tb_sd_data_rx__DOT__valid = 0U;
                vlSelfRef.tb_sd_data_rx__DOT__crc_valid = 0U;
            } else if ((1U & (IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__state))) {
                __Vdly__tb_sd_data_rx__DOT__dut__DOT__state = 0U;
                vlSelfRef.tb_sd_data_rx__DOT__done = 0U;
                vlSelfRef.tb_sd_data_rx__DOT__valid = 0U;
                vlSelfRef.tb_sd_data_rx__DOT__crc_valid = 0U;
            } else {
                __Vdly__tb_sd_data_rx__DOT__dut__DOT__state = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__state))) {
                __Vdly__tb_sd_data_rx__DOT__dut__DOT__crc_shift 
                    = ((0xfffeU & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__crc_shift) 
                                   << 1U)) | (IData)(vlSelfRef.tb_sd_data_rx__DOT__sd_dat0));
                if ((7U == (IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__bit_count))) {
                    __Vdly__tb_sd_data_rx__DOT__dut__DOT__bit_count = 0U;
                    if (vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__crc_byte_count) {
                        vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__received_crc 
                            = ((0xfffeU & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__crc_shift) 
                                           << 1U)) 
                               | (IData)(vlSelfRef.tb_sd_data_rx__DOT__sd_dat0));
                        vlSelfRef.tb_sd_data_rx__DOT__done = 1U;
                        __Vdly__tb_sd_data_rx__DOT__dut__DOT__crc_byte_count = 0U;
                        __Vdly__tb_sd_data_rx__DOT__dut__DOT__state = 4U;
                        if ((((0xfffeU & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__crc_shift) 
                                          << 1U)) | (IData)(vlSelfRef.tb_sd_data_rx__DOT__sd_dat0)) 
                             == (IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__calculated_crc))) {
                            vlSelfRef.tb_sd_data_rx__DOT__crc_valid = 1U;
                            vlSelfRef.tb_sd_data_rx__DOT__valid = 1U;
                        } else {
                            vlSelfRef.tb_sd_data_rx__DOT__crc_valid = 0U;
                            vlSelfRef.tb_sd_data_rx__DOT__valid = 0U;
                        }
                    } else {
                        __Vdly__tb_sd_data_rx__DOT__dut__DOT__crc_byte_count = 1U;
                    }
                } else {
                    __Vdly__tb_sd_data_rx__DOT__dut__DOT__bit_count 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__bit_count)));
                }
            } else {
                __Vdly__tb_sd_data_rx__DOT__dut__DOT__byte_shift 
                    = ((0xfeU & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__byte_shift) 
                                 << 1U)) | (IData)(vlSelfRef.tb_sd_data_rx__DOT__sd_dat0));
                __Vdly__tb_sd_data_rx__DOT__dut__DOT__calculated_crc 
                    = vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__crc16_next_bit;
                if ((7U == (IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__bit_count))) {
                    vlSelfRef.tb_sd_data_rx__DOT__data_addr 
                        = vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__byte_count;
                    vlSelfRef.tb_sd_data_rx__DOT__data_byte 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__byte_shift) 
                                     << 1U)) | (IData)(vlSelfRef.tb_sd_data_rx__DOT__sd_dat0));
                    vlSelfRef.tb_sd_data_rx__DOT__data_write = 1U;
                    __Vdly__tb_sd_data_rx__DOT__dut__DOT__bit_count = 0U;
                    if ((0x1ffU == (IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__byte_count))) {
                        __Vdly__tb_sd_data_rx__DOT__dut__DOT__crc_shift = 0U;
                        __Vdly__tb_sd_data_rx__DOT__dut__DOT__crc_byte_count = 0U;
                        __Vdly__tb_sd_data_rx__DOT__dut__DOT__state = 3U;
                    } else {
                        __Vdly__tb_sd_data_rx__DOT__dut__DOT__byte_count 
                            = (0x1ffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__byte_count)));
                    }
                } else {
                    __Vdly__tb_sd_data_rx__DOT__dut__DOT__bit_count 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__bit_count)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__state))) {
            __Vdly__tb_sd_data_rx__DOT__dut__DOT__token_shift 
                = ((0xfeU & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__token_shift) 
                             << 1U)) | (IData)(vlSelfRef.tb_sd_data_rx__DOT__sd_dat0));
            if ((7U == (IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__bit_count))) {
                __Vdly__tb_sd_data_rx__DOT__dut__DOT__bit_count = 0U;
                if ((0xfeU == ((0xfeU & ((IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__token_shift) 
                                         << 1U)) | (IData)(vlSelfRef.tb_sd_data_rx__DOT__sd_dat0)))) {
                    __Vdly__tb_sd_data_rx__DOT__dut__DOT__byte_count = 0U;
                    __Vdly__tb_sd_data_rx__DOT__dut__DOT__byte_shift = 0U;
                    __Vdly__tb_sd_data_rx__DOT__dut__DOT__calculated_crc = 0U;
                    __Vdly__tb_sd_data_rx__DOT__dut__DOT__state = 2U;
                }
            } else {
                __Vdly__tb_sd_data_rx__DOT__dut__DOT__bit_count 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__bit_count)));
            }
        } else {
            vlSelfRef.tb_sd_data_rx__DOT__valid = 0U;
            vlSelfRef.tb_sd_data_rx__DOT__crc_valid = 0U;
            if (vlSelfRef.tb_sd_data_rx__DOT__start) {
                __Vdly__tb_sd_data_rx__DOT__dut__DOT__token_shift = 0U;
                __Vdly__tb_sd_data_rx__DOT__dut__DOT__byte_shift = 0U;
                __Vdly__tb_sd_data_rx__DOT__dut__DOT__crc_shift = 0U;
                vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__received_crc = 0U;
                __Vdly__tb_sd_data_rx__DOT__dut__DOT__calculated_crc = 0U;
                __Vdly__tb_sd_data_rx__DOT__dut__DOT__bit_count = 0U;
                __Vdly__tb_sd_data_rx__DOT__dut__DOT__byte_count = 0U;
                __Vdly__tb_sd_data_rx__DOT__dut__DOT__crc_byte_count = 0U;
                __Vdly__tb_sd_data_rx__DOT__dut__DOT__state = 1U;
            }
        }
    }
    vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__state = __Vdly__tb_sd_data_rx__DOT__dut__DOT__state;
    vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__token_shift 
        = __Vdly__tb_sd_data_rx__DOT__dut__DOT__token_shift;
    vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__byte_shift 
        = __Vdly__tb_sd_data_rx__DOT__dut__DOT__byte_shift;
    vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__crc_shift 
        = __Vdly__tb_sd_data_rx__DOT__dut__DOT__crc_shift;
    vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__bit_count 
        = __Vdly__tb_sd_data_rx__DOT__dut__DOT__bit_count;
    vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__byte_count 
        = __Vdly__tb_sd_data_rx__DOT__dut__DOT__byte_count;
    vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__crc_byte_count 
        = __Vdly__tb_sd_data_rx__DOT__dut__DOT__crc_byte_count;
    vlSelfRef.tb_sd_data_rx__DOT__dut__DOT__calculated_crc 
        = __Vdly__tb_sd_data_rx__DOT__dut__DOT__calculated_crc;
}

VL_INLINE_OPT void Vtb_sd_data_rx___024root___nba_sequent__TOP__1(Vtb_sd_data_rx___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_data_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_data_rx___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sd_data_rx__DOT__done_seen = 1U;
}

void Vtb_sd_data_rx___024root___timing_resume(Vtb_sd_data_rx___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_data_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_data_rx___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h2a941096__0.resume(
                                                   "@(negedge tb_sd_data_rx.sd_clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h99e616b0__0.resume(
                                                   "@([changed] tb_sd_data_rx.done_seen)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_sd_data_rx___024root___timing_commit(Vtb_sd_data_rx___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_data_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_data_rx___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h2a941096__0.commit(
                                                   "@(negedge tb_sd_data_rx.sd_clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h99e616b0__0.commit(
                                                   "@([changed] tb_sd_data_rx.done_seen)");
    }
}

void Vtb_sd_data_rx___024root___eval_triggers__act(Vtb_sd_data_rx___024root* vlSelf);

bool Vtb_sd_data_rx___024root___eval_phase__act(Vtb_sd_data_rx___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_data_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_data_rx___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_sd_data_rx___024root___eval_triggers__act(vlSelf);
    Vtb_sd_data_rx___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_sd_data_rx___024root___timing_resume(vlSelf);
        Vtb_sd_data_rx___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_sd_data_rx___024root___eval_phase__nba(Vtb_sd_data_rx___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_data_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_data_rx___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_sd_data_rx___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd_data_rx___024root___dump_triggers__nba(Vtb_sd_data_rx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd_data_rx___024root___dump_triggers__act(Vtb_sd_data_rx___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_sd_data_rx___024root___eval(Vtb_sd_data_rx___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_data_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_data_rx___024root___eval\n"); );
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
            Vtb_sd_data_rx___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/tb_sd_data_rx.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_sd_data_rx___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/tb_sd_data_rx.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_sd_data_rx___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_sd_data_rx___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_sd_data_rx___024root___eval_debug_assertions(Vtb_sd_data_rx___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_data_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_data_rx___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
