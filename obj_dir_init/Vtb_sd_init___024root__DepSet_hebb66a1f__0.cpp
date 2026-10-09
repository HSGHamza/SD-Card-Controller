// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sd_init.h for the primary calling header

#include "Vtb_sd_init__pch.h"
#include "Vtb_sd_init___024root.h"

VlCoroutine Vtb_sd_init___024root___eval_initial__TOP__Vtiming__0(Vtb_sd_init___024root* vlSelf);
VlCoroutine Vtb_sd_init___024root___eval_initial__TOP__Vtiming__1(Vtb_sd_init___024root* vlSelf);
VlCoroutine Vtb_sd_init___024root___eval_initial__TOP__Vtiming__2(Vtb_sd_init___024root* vlSelf);
VlCoroutine Vtb_sd_init___024root___eval_initial__TOP__Vtiming__3(Vtb_sd_init___024root* vlSelf);
VlCoroutine Vtb_sd_init___024root___eval_initial__TOP__Vtiming__4(Vtb_sd_init___024root* vlSelf);
VlCoroutine Vtb_sd_init___024root___eval_initial__TOP__Vtiming__5(Vtb_sd_init___024root* vlSelf);

void Vtb_sd_init___024root___eval_initial(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sd_init___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_sd_init___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_sd_init___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_sd_init___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vtb_sd_init___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    Vtb_sd_init___024root___eval_initial__TOP__Vtiming__5(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_init__DOT__sd_clk__0 
        = vlSelfRef.tb_sd_init__DOT__sd_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_init__DOT__cmd_busy__0 
        = vlSelfRef.tb_sd_init__DOT__cmd_busy;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_init__DOT__response_start__0 
        = vlSelfRef.tb_sd_init__DOT__response_start;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_init__DOT__response_busy__0 
        = vlSelfRef.tb_sd_init__DOT__response_busy;
    vlSelfRef.__Vtrigprevexpr_h2dc325bd__0 = ((IData)(vlSelfRef.tb_sd_init__DOT__read_start) 
                                              | (IData)(vlSelfRef.tb_sd_init__DOT__read_busy));
    vlSelfRef.__Vtrigprevexpr_he1db2254__0 = ((IData)(vlSelfRef.tb_sd_init__DOT__init_done) 
                                              | (IData)(vlSelfRef.tb_sd_init__DOT__init_error));
}

VL_INLINE_OPT VlCoroutine Vtb_sd_init___024root___eval_initial__TOP__Vtiming__0(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sd_init__DOT__sd_clk = 0U;
    vlSelfRef.tb_sd_init__DOT__reset = 1U;
    vlSelfRef.tb_sd_init__DOT__start = 0U;
    vlSelfRef.tb_sd_init__DOT__card_cmd_oe = 0U;
    vlSelfRef.tb_sd_init__DOT__card_cmd_out = 1U;
    vlSelfRef.tb_sd_init__DOT__card_dat0 = 1U;
    vlSelfRef.tb_sd_init__DOT__received_command = 0ULL;
    vlSelfRef.tb_sd_init__DOT__response_data = 0ULL;
    vlSelfRef.tb_sd_init__DOT__acmd41_count = 0U;
    vlSelfRef.tb_sd_init__DOT__cmd17_count = 0U;
    vlSelfRef.tb_sd_init__DOT__read_byte_count = 0U;
    vlSelfRef.tb_sd_init__DOT__read_data_errors = 0U;
    vlSelfRef.tb_sd_init__DOT__sent_data_crc = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x989680ULL, 
                                         nullptr, "sim/tb_sd_init.sv", 
                                         354);
    vlSelfRef.tb_sd_init__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x4c4b40ULL, 
                                         nullptr, "sim/tb_sd_init.sv", 
                                         358);
    vlSelfRef.tb_sd_init__DOT__start = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2625a0ULL, 
                                         nullptr, "sim/tb_sd_init.sv", 
                                         362);
    vlSelfRef.tb_sd_init__DOT__start = 0U;
}

VL_INLINE_OPT VlCoroutine Vtb_sd_init___024root___eval_initial__TOP__Vtiming__1(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*47:0*/ __Vtask_tb_sd_init__DOT__send_response__1__data;
    __Vtask_tb_sd_init__DOT__send_response__1__data = 0;
    QData/*47:0*/ __Vtask_tb_sd_init__DOT__send_response__2__data;
    __Vtask_tb_sd_init__DOT__send_response__2__data = 0;
    QData/*47:0*/ __Vtask_tb_sd_init__DOT__send_response__3__data;
    __Vtask_tb_sd_init__DOT__send_response__3__data = 0;
    QData/*47:0*/ __Vtask_tb_sd_init__DOT__send_response__4__data;
    __Vtask_tb_sd_init__DOT__send_response__4__data = 0;
    CData/*7:0*/ __Vtask_tb_sd_init__DOT__send_dat0_byte_from_current_edge__6__byte_value;
    __Vtask_tb_sd_init__DOT__send_dat0_byte_from_current_edge__6__byte_value = 0;
    CData/*0:0*/ __Vtask_tb_sd_init__DOT__send_dat0_bit__7__bit_value;
    __Vtask_tb_sd_init__DOT__send_dat0_bit__7__bit_value = 0;
    SData/*15:0*/ __Vfunc_tb_sd_init__DOT__crc16_byte__8__Vfuncout;
    __Vfunc_tb_sd_init__DOT__crc16_byte__8__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_sd_init__DOT__crc16_byte__8__crc_in;
    __Vfunc_tb_sd_init__DOT__crc16_byte__8__crc_in = 0;
    CData/*7:0*/ __Vfunc_tb_sd_init__DOT__crc16_byte__8__data_in;
    __Vfunc_tb_sd_init__DOT__crc16_byte__8__data_in = 0;
    CData/*7:0*/ __Vtask_tb_sd_init__DOT__send_dat0_byte__9__byte_value;
    __Vtask_tb_sd_init__DOT__send_dat0_byte__9__byte_value = 0;
    CData/*0:0*/ __Vtask_tb_sd_init__DOT__send_dat0_bit__10__bit_value;
    __Vtask_tb_sd_init__DOT__send_dat0_bit__10__bit_value = 0;
    CData/*7:0*/ __Vtask_tb_sd_init__DOT__send_dat0_byte__11__byte_value;
    __Vtask_tb_sd_init__DOT__send_dat0_byte__11__byte_value = 0;
    CData/*0:0*/ __Vtask_tb_sd_init__DOT__send_dat0_bit__12__bit_value;
    __Vtask_tb_sd_init__DOT__send_dat0_bit__12__bit_value = 0;
    CData/*7:0*/ __Vtask_tb_sd_init__DOT__send_dat0_byte__13__byte_value;
    __Vtask_tb_sd_init__DOT__send_dat0_byte__13__byte_value = 0;
    CData/*0:0*/ __Vtask_tb_sd_init__DOT__send_dat0_bit__14__bit_value;
    __Vtask_tb_sd_init__DOT__send_dat0_bit__14__bit_value = 0;
    VlWide<4>/*119:0*/ __Vtask_tb_sd_init__DOT__send_r2_response__15__cid;
    VL_ZERO_W(120, __Vtask_tb_sd_init__DOT__send_r2_response__15__cid);
    QData/*47:0*/ __Vtask_tb_sd_init__DOT__send_response__16__data;
    __Vtask_tb_sd_init__DOT__send_response__16__data = 0;
    QData/*47:0*/ __Vtask_tb_sd_init__DOT__send_response__17__data;
    __Vtask_tb_sd_init__DOT__send_response__17__data = 0;
    SData/*15:0*/ __Vtask_tb_sd_init__DOT__send_r6_response__18__rca;
    __Vtask_tb_sd_init__DOT__send_r6_response__18__rca = 0;
    QData/*47:0*/ __Vtask_tb_sd_init__DOT__send_response__19__data;
    __Vtask_tb_sd_init__DOT__send_response__19__data = 0;
    VlWide<4>/*119:0*/ __Vtask_tb_sd_init__DOT__send_r2_response__20__cid;
    VL_ZERO_W(120, __Vtask_tb_sd_init__DOT__send_r2_response__20__cid);
    // Body
    while (1U) {
        while ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__cmd_busy)))) {
            co_await vlSelfRef.__VtrigSched_hed8007ad__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@([changed] tb_sd_init.cmd_busy)", 
                                                                 "sim/tb_sd_init.sv", 
                                                                 152);
        }
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             154);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0x7fffffffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x2fU));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xbfffffffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x2eU));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xdfffffffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x2dU));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xefffffffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x2cU));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xf7ffffffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x2bU));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfbffffffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x2aU));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfdffffffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x29U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfeffffffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x28U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xff7fffffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x27U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xffbfffffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x26U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xffdfffffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x25U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xffefffffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x24U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfff7ffffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x23U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfffbffffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x22U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfffdffffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x21U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfffeffffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x20U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xffff7fffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x1fU));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xffffbfffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x1eU));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xffffdfffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x1dU));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xffffefffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x1cU));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfffff7ffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x1bU));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfffffbffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x1aU));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfffffdffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x19U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfffffeffffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x18U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xffffff7fffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x17U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xffffffbfffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x16U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xffffffdfffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x15U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xffffffefffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x14U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfffffff7ffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x13U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfffffffbffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x12U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfffffffdffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x11U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfffffffeffffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0x10U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xffffffff7fffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0xfU));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xffffffffbfffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0xeU));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xffffffffdfffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0xdU));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xffffffffefffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0xcU));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfffffffff7ffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0xbU));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfffffffffbffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 0xaU));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfffffffffdffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 9U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfffffffffeffULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 8U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xffffffffff7fULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 7U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xffffffffffbfULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 6U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xffffffffffdfULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 5U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xffffffffffefULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 4U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfffffffffff7ULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 3U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfffffffffffbULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 2U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfffffffffffdULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | ((QData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)) 
                  << 1U));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0 
            = vlSelfRef.tb_sd_init__DOT__sd_cmd;
        vlSelfRef.tb_sd_init__DOT__received_command 
            = ((0xfffffffffffeULL & vlSelfRef.tb_sd_init__DOT__received_command) 
               | (IData)((IData)(vlSelfRef.tb_sd_init__DOT____Vlvbound_h8e7b2171__0)));
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             160);
        VL_WRITEF_NX("\nCARD RECEIVED COMMAND = %x\n",0,
                     48,vlSelfRef.tb_sd_init__DOT__received_command);
        if ((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                           >> 0x2dU)))) {
            if ((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                               >> 0x2cU)))) {
                if (VL_UNLIKELY((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                               >> 0x2bU))))) {
                    VL_WRITEF_NX("CARD: UNKNOWN COMMAND %0#\n",0,
                                 6,(0x3fU & (IData)(
                                                    (vlSelfRef.tb_sd_init__DOT__received_command 
                                                     >> 0x28U))));
                } else if (VL_LIKELY((1U & (IData)(
                                                   (vlSelfRef.tb_sd_init__DOT__received_command 
                                                    >> 0x2aU))))) {
                    if (VL_LIKELY((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                                 >> 0x29U))))) {
                        if ((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                           >> 0x28U)))) {
                            VL_WRITEF_NX("CARD: CMD55\n",0);
                            __Vtask_tb_sd_init__DOT__send_response__1__data = 0x770000000065ULL;
                            while ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__response_start)))) {
                                co_await vlSelfRef.__VtrigSched_h8a59d431__0.trigger(1U, 
                                                                                nullptr, 
                                                                                "@([changed] tb_sd_init.response_start)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                179);
                            }
                            while ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__response_busy)))) {
                                co_await vlSelfRef.__VtrigSched_h7fa966f5__0.trigger(1U, 
                                                                                nullptr, 
                                                                                "@([changed] tb_sd_init.response_busy)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                181);
                            }
                            vlSelfRef.tb_sd_init__DOT__response_data 
                                = __Vtask_tb_sd_init__DOT__send_response__1__data;
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                185);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_oe = 1U;
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x2fU)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x2eU)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x2dU)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x2cU)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x2bU)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x2aU)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x29U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x28U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x27U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x26U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x25U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x24U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x23U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x22U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x21U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x20U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x1fU)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x1eU)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x1dU)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x1cU)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x1bU)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x1aU)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x19U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x18U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x17U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x16U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x15U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x14U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x13U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x12U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x11U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0x10U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0xfU)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0xeU)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0xdU)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0xcU)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0xbU)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 0xaU)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 9U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 8U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 7U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 6U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 5U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 4U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 3U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 2U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                                 >> 1U)));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                                = (1U & (IData)(vlSelfRef.tb_sd_init__DOT__response_data));
                            co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_sd_init.sd_clk)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                193);
                            vlSelfRef.tb_sd_init__DOT__card_cmd_oe = 0U;
                            vlSelfRef.tb_sd_init__DOT__card_cmd_out = 1U;
                        } else {
                            VL_WRITEF_NX("CARD: UNKNOWN COMMAND %0#\n",0,
                                         6,(0x3fU & (IData)(
                                                            (vlSelfRef.tb_sd_init__DOT__received_command 
                                                             >> 0x28U))));
                        }
                    } else {
                        VL_WRITEF_NX("CARD: UNKNOWN COMMAND %0#\n",0,
                                     6,(0x3fU & (IData)(
                                                        (vlSelfRef.tb_sd_init__DOT__received_command 
                                                         >> 0x28U))));
                    }
                } else {
                    VL_WRITEF_NX("CARD: UNKNOWN COMMAND %0#\n",0,
                                 6,(0x3fU & (IData)(
                                                    (vlSelfRef.tb_sd_init__DOT__received_command 
                                                     >> 0x28U))));
                }
            } else if (VL_LIKELY((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                                >> 0x2bU))))) {
                if (VL_UNLIKELY((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                               >> 0x2aU))))) {
                    VL_WRITEF_NX("CARD: UNKNOWN COMMAND %0#\n",0,
                                 6,(0x3fU & (IData)(
                                                    (vlSelfRef.tb_sd_init__DOT__received_command 
                                                     >> 0x28U))));
                } else if (VL_UNLIKELY((1U & (IData)(
                                                     (vlSelfRef.tb_sd_init__DOT__received_command 
                                                      >> 0x29U))))) {
                    VL_WRITEF_NX("CARD: UNKNOWN COMMAND %0#\n",0,
                                 6,(0x3fU & (IData)(
                                                    (vlSelfRef.tb_sd_init__DOT__received_command 
                                                     >> 0x28U))));
                } else if ((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                          >> 0x28U)))) {
                    vlSelfRef.tb_sd_init__DOT__acmd41_count 
                        = ((IData)(1U) + vlSelfRef.tb_sd_init__DOT__acmd41_count);
                    VL_WRITEF_NX("CARD: ACMD41 attempt %0d\n",0,
                                 32,vlSelfRef.tb_sd_init__DOT__acmd41_count);
                    if ((1U == vlSelfRef.tb_sd_init__DOT__acmd41_count)) {
                        __Vtask_tb_sd_init__DOT__send_response__2__data = 0x690000000001ULL;
                        while ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__response_start)))) {
                            co_await vlSelfRef.__VtrigSched_h8a59d431__0.trigger(1U, 
                                                                                nullptr, 
                                                                                "@([changed] tb_sd_init.response_start)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                179);
                        }
                        while ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__response_busy)))) {
                            co_await vlSelfRef.__VtrigSched_h7fa966f5__0.trigger(1U, 
                                                                                nullptr, 
                                                                                "@([changed] tb_sd_init.response_busy)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                181);
                        }
                        vlSelfRef.tb_sd_init__DOT__response_data 
                            = __Vtask_tb_sd_init__DOT__send_response__2__data;
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             185);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_oe = 1U;
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x2fU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x2eU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x2dU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x2cU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x2bU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x2aU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x29U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x28U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x27U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x26U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x25U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x24U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x23U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x22U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x21U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x20U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x1fU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x1eU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x1dU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x1cU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x1bU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x1aU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x19U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x18U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x17U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x16U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x15U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x14U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x13U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x12U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x11U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x10U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0xfU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0xeU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0xdU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0xcU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0xbU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0xaU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 9U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 8U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 7U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 6U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 5U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 4U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 3U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 2U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 1U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)(vlSelfRef.tb_sd_init__DOT__response_data));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_oe = 0U;
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out = 1U;
                    } else {
                        __Vtask_tb_sd_init__DOT__send_response__3__data = 0x69c000000001ULL;
                        while ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__response_start)))) {
                            co_await vlSelfRef.__VtrigSched_h8a59d431__0.trigger(1U, 
                                                                                nullptr, 
                                                                                "@([changed] tb_sd_init.response_start)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                179);
                        }
                        while ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__response_busy)))) {
                            co_await vlSelfRef.__VtrigSched_h7fa966f5__0.trigger(1U, 
                                                                                nullptr, 
                                                                                "@([changed] tb_sd_init.response_busy)", 
                                                                                "sim/tb_sd_init.sv", 
                                                                                181);
                        }
                        vlSelfRef.tb_sd_init__DOT__response_data 
                            = __Vtask_tb_sd_init__DOT__send_response__3__data;
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             185);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_oe = 1U;
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x2fU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x2eU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x2dU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x2cU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x2bU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x2aU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x29U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x28U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x27U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x26U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x25U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x24U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x23U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x22U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x21U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x20U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x1fU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x1eU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x1dU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x1cU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x1bU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x1aU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x19U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x18U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x17U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x16U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x15U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x14U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x13U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x12U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x11U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0x10U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0xfU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0xeU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0xdU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0xcU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0xbU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 0xaU)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 9U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 8U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 7U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 6U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 5U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 4U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 3U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 2U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                             >> 1U)));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                            = (1U & (IData)(vlSelfRef.tb_sd_init__DOT__response_data));
                        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             193);
                        vlSelfRef.tb_sd_init__DOT__card_cmd_oe = 0U;
                        vlSelfRef.tb_sd_init__DOT__card_cmd_out = 1U;
                    }
                } else {
                    VL_WRITEF_NX("CARD: UNKNOWN COMMAND %0#\n",0,
                                 6,(0x3fU & (IData)(
                                                    (vlSelfRef.tb_sd_init__DOT__received_command 
                                                     >> 0x28U))));
                }
            } else {
                VL_WRITEF_NX("CARD: UNKNOWN COMMAND %0#\n",0,
                             6,(0x3fU & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                                 >> 0x28U))));
            }
        } else if ((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                  >> 0x2cU)))) {
            if (VL_UNLIKELY((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                           >> 0x2bU))))) {
                VL_WRITEF_NX("CARD: UNKNOWN COMMAND %0#\n",0,
                             6,(0x3fU & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                                 >> 0x28U))));
            } else if (VL_UNLIKELY((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                                  >> 0x2aU))))) {
                VL_WRITEF_NX("CARD: UNKNOWN COMMAND %0#\n",0,
                             6,(0x3fU & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                                 >> 0x28U))));
            } else if (VL_UNLIKELY((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                                  >> 0x29U))))) {
                VL_WRITEF_NX("CARD: UNKNOWN COMMAND %0#\n",0,
                             6,(0x3fU & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                                 >> 0x28U))));
            } else if ((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                      >> 0x28U)))) {
                vlSelfRef.tb_sd_init__DOT__cmd17_count 
                    = ((IData)(1U) + vlSelfRef.tb_sd_init__DOT__cmd17_count);
                VL_WRITEF_NX("CARD: CMD17\n",0);
                __Vtask_tb_sd_init__DOT__send_response__4__data = 0x5100000000d1ULL;
                while ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__response_start)))) {
                    co_await vlSelfRef.__VtrigSched_h8a59d431__0.trigger(1U, 
                                                                         nullptr, 
                                                                         "@([changed] tb_sd_init.response_start)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         179);
                }
                while ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__response_busy)))) {
                    co_await vlSelfRef.__VtrigSched_h7fa966f5__0.trigger(1U, 
                                                                         nullptr, 
                                                                         "@([changed] tb_sd_init.response_busy)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         181);
                }
                vlSelfRef.tb_sd_init__DOT__response_data 
                    = __Vtask_tb_sd_init__DOT__send_response__4__data;
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     185);
                vlSelfRef.tb_sd_init__DOT__card_cmd_oe = 1U;
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x2fU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x2eU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x2dU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x2cU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x2bU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x2aU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x29U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x28U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x27U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x26U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x25U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x24U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x23U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x22U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x21U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x20U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x1fU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x1eU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x1dU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x1cU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x1bU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x1aU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x19U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x18U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x17U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x16U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x15U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x14U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x13U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x12U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x11U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x10U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0xfU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0xeU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0xdU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0xcU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0xbU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0xaU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 9U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 8U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 7U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 6U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 5U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 4U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 3U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 2U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 1U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)(vlSelfRef.tb_sd_init__DOT__response_data));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_oe = 0U;
                vlSelfRef.tb_sd_init__DOT__card_cmd_out = 1U;
                while ((1U & (~ ((IData)(vlSelfRef.tb_sd_init__DOT__read_start) 
                                 | (IData)(vlSelfRef.tb_sd_init__DOT__read_busy))))) {
                    co_await vlSelfRef.__VtrigSched_hb97569e7__0.trigger(1U, 
                                                                         nullptr, 
                                                                         "@([changed] (tb_sd_init.read_start | tb_sd_init.read_busy))", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         314);
                }
                co_await vlSelfRef.__VtrigSched_h5163257e__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     315);
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     316);
                vlSelfRef.tb_sd_init__DOT__send_read_data__Vstatic__crc_value = 0U;
                __Vtask_tb_sd_init__DOT__send_dat0_byte_from_current_edge__6__byte_value = 0xfeU;
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte_from_current_edge__6__byte_value) 
                             >> 7U));
                __Vtask_tb_sd_init__DOT__send_dat0_bit__7__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte_from_current_edge__6__byte_value) 
                             >> 6U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__7__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__7__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte_from_current_edge__6__byte_value) 
                             >> 5U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__7__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__7__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte_from_current_edge__6__byte_value) 
                             >> 4U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__7__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__7__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte_from_current_edge__6__byte_value) 
                             >> 3U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__7__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__7__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte_from_current_edge__6__byte_value) 
                             >> 2U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__7__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__7__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte_from_current_edge__6__byte_value) 
                             >> 1U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__7__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__7__bit_value 
                    = (1U & (IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte_from_current_edge__6__byte_value));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__7__bit_value;
                vlSelfRef.tb_sd_init__DOT__send_read_data__Vstatic__i = 0U;
                while (VL_GTS_III(32, 0x200U, vlSelfRef.tb_sd_init__DOT__send_read_data__Vstatic__i)) {
                    vlSelfRef.tb_sd_init__DOT__send_read_data__Vstatic__data_value 
                        = (0xffU & vlSelfRef.tb_sd_init__DOT__send_read_data__Vstatic__i);
                    __Vfunc_tb_sd_init__DOT__crc16_byte__8__data_in 
                        = vlSelfRef.tb_sd_init__DOT__send_read_data__Vstatic__data_value;
                    __Vfunc_tb_sd_init__DOT__crc16_byte__8__crc_in 
                        = vlSelfRef.tb_sd_init__DOT__send_read_data__Vstatic__crc_value;
                    vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc 
                        = __Vfunc_tb_sd_init__DOT__crc16_byte__8__crc_in;
                    vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc 
                        = ((IData)((((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                     >> 0xfU) ^ ((IData)(__Vfunc_tb_sd_init__DOT__crc16_byte__8__data_in) 
                                                 >> 7U)))
                            ? (0x1021U ^ (0xfffeU & 
                                          ((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                           << 1U)))
                            : (0xfffeU & ((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                          << 1U)));
                    vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc 
                        = ((1U & (((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                   >> 0xfU) ^ ((IData)(__Vfunc_tb_sd_init__DOT__crc16_byte__8__data_in) 
                                               >> 6U)))
                            ? (0x1021U ^ (0xfffeU & 
                                          ((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                           << 1U)))
                            : (0xfffeU & ((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                          << 1U)));
                    vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc 
                        = ((1U & (((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                   >> 0xfU) ^ ((IData)(__Vfunc_tb_sd_init__DOT__crc16_byte__8__data_in) 
                                               >> 5U)))
                            ? (0x1021U ^ (0xfffeU & 
                                          ((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                           << 1U)))
                            : (0xfffeU & ((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                          << 1U)));
                    vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc 
                        = ((1U & (((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                   >> 0xfU) ^ ((IData)(__Vfunc_tb_sd_init__DOT__crc16_byte__8__data_in) 
                                               >> 4U)))
                            ? (0x1021U ^ (0xfffeU & 
                                          ((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                           << 1U)))
                            : (0xfffeU & ((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                          << 1U)));
                    vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc 
                        = ((1U & (((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                   >> 0xfU) ^ ((IData)(__Vfunc_tb_sd_init__DOT__crc16_byte__8__data_in) 
                                               >> 3U)))
                            ? (0x1021U ^ (0xfffeU & 
                                          ((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                           << 1U)))
                            : (0xfffeU & ((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                          << 1U)));
                    vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc 
                        = ((1U & (((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                   >> 0xfU) ^ ((IData)(__Vfunc_tb_sd_init__DOT__crc16_byte__8__data_in) 
                                               >> 2U)))
                            ? (0x1021U ^ (0xfffeU & 
                                          ((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                           << 1U)))
                            : (0xfffeU & ((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                          << 1U)));
                    vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc 
                        = ((1U & (((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                   >> 0xfU) ^ ((IData)(__Vfunc_tb_sd_init__DOT__crc16_byte__8__data_in) 
                                               >> 1U)))
                            ? (0x1021U ^ (0xfffeU & 
                                          ((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                           << 1U)))
                            : (0xfffeU & ((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                          << 1U)));
                    vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc 
                        = ((1U & (((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                   >> 0xfU) ^ (IData)(__Vfunc_tb_sd_init__DOT__crc16_byte__8__data_in)))
                            ? (0x1021U ^ (0xfffeU & 
                                          ((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                           << 1U)))
                            : (0xfffeU & ((IData)(vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc) 
                                          << 1U)));
                    __Vfunc_tb_sd_init__DOT__crc16_byte__8__Vfuncout 
                        = vlSelfRef.tb_sd_init__DOT__crc16_byte__Vstatic__crc;
                    vlSelfRef.tb_sd_init__DOT__send_read_data__Vstatic__crc_value 
                        = __Vfunc_tb_sd_init__DOT__crc16_byte__8__Vfuncout;
                    __Vtask_tb_sd_init__DOT__send_dat0_byte__9__byte_value 
                        = vlSelfRef.tb_sd_init__DOT__send_read_data__Vstatic__data_value;
                    __Vtask_tb_sd_init__DOT__send_dat0_bit__10__bit_value 
                        = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__9__byte_value) 
                                 >> 7U));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         285);
                    vlSelfRef.tb_sd_init__DOT__card_dat0 
                        = __Vtask_tb_sd_init__DOT__send_dat0_bit__10__bit_value;
                    __Vtask_tb_sd_init__DOT__send_dat0_bit__10__bit_value 
                        = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__9__byte_value) 
                                 >> 6U));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         285);
                    vlSelfRef.tb_sd_init__DOT__card_dat0 
                        = __Vtask_tb_sd_init__DOT__send_dat0_bit__10__bit_value;
                    __Vtask_tb_sd_init__DOT__send_dat0_bit__10__bit_value 
                        = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__9__byte_value) 
                                 >> 5U));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         285);
                    vlSelfRef.tb_sd_init__DOT__card_dat0 
                        = __Vtask_tb_sd_init__DOT__send_dat0_bit__10__bit_value;
                    __Vtask_tb_sd_init__DOT__send_dat0_bit__10__bit_value 
                        = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__9__byte_value) 
                                 >> 4U));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         285);
                    vlSelfRef.tb_sd_init__DOT__card_dat0 
                        = __Vtask_tb_sd_init__DOT__send_dat0_bit__10__bit_value;
                    __Vtask_tb_sd_init__DOT__send_dat0_bit__10__bit_value 
                        = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__9__byte_value) 
                                 >> 3U));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         285);
                    vlSelfRef.tb_sd_init__DOT__card_dat0 
                        = __Vtask_tb_sd_init__DOT__send_dat0_bit__10__bit_value;
                    __Vtask_tb_sd_init__DOT__send_dat0_bit__10__bit_value 
                        = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__9__byte_value) 
                                 >> 2U));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         285);
                    vlSelfRef.tb_sd_init__DOT__card_dat0 
                        = __Vtask_tb_sd_init__DOT__send_dat0_bit__10__bit_value;
                    __Vtask_tb_sd_init__DOT__send_dat0_bit__10__bit_value 
                        = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__9__byte_value) 
                                 >> 1U));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         285);
                    vlSelfRef.tb_sd_init__DOT__card_dat0 
                        = __Vtask_tb_sd_init__DOT__send_dat0_bit__10__bit_value;
                    __Vtask_tb_sd_init__DOT__send_dat0_bit__10__bit_value 
                        = (1U & (IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__9__byte_value));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         285);
                    vlSelfRef.tb_sd_init__DOT__card_dat0 
                        = __Vtask_tb_sd_init__DOT__send_dat0_bit__10__bit_value;
                    vlSelfRef.tb_sd_init__DOT__send_read_data__Vstatic__i 
                        = ((IData)(1U) + vlSelfRef.tb_sd_init__DOT__send_read_data__Vstatic__i);
                }
                __Vtask_tb_sd_init__DOT__send_dat0_byte__11__byte_value 
                    = (0xffU & ((IData)(vlSelfRef.tb_sd_init__DOT__send_read_data__Vstatic__crc_value) 
                                >> 8U));
                __Vtask_tb_sd_init__DOT__send_dat0_bit__12__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__11__byte_value) 
                             >> 7U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__12__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__12__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__11__byte_value) 
                             >> 6U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__12__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__12__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__11__byte_value) 
                             >> 5U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__12__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__12__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__11__byte_value) 
                             >> 4U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__12__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__12__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__11__byte_value) 
                             >> 3U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__12__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__12__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__11__byte_value) 
                             >> 2U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__12__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__12__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__11__byte_value) 
                             >> 1U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__12__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__12__bit_value 
                    = (1U & (IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__11__byte_value));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__12__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_byte__13__byte_value 
                    = (0xffU & (IData)(vlSelfRef.tb_sd_init__DOT__send_read_data__Vstatic__crc_value));
                __Vtask_tb_sd_init__DOT__send_dat0_bit__14__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__13__byte_value) 
                             >> 7U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__14__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__14__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__13__byte_value) 
                             >> 6U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__14__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__14__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__13__byte_value) 
                             >> 5U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__14__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__14__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__13__byte_value) 
                             >> 4U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__14__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__14__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__13__byte_value) 
                             >> 3U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__14__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__14__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__13__byte_value) 
                             >> 2U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__14__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__14__bit_value 
                    = (1U & ((IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__13__byte_value) 
                             >> 1U));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__14__bit_value;
                __Vtask_tb_sd_init__DOT__send_dat0_bit__14__bit_value 
                    = (1U & (IData)(__Vtask_tb_sd_init__DOT__send_dat0_byte__13__byte_value));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     285);
                vlSelfRef.tb_sd_init__DOT__card_dat0 
                    = __Vtask_tb_sd_init__DOT__send_dat0_bit__14__bit_value;
                vlSelfRef.tb_sd_init__DOT__sent_data_crc 
                    = vlSelfRef.tb_sd_init__DOT__send_read_data__Vstatic__crc_value;
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     330);
                vlSelfRef.tb_sd_init__DOT__card_dat0 = 1U;
            } else {
                VL_WRITEF_NX("CARD: UNKNOWN COMMAND %0#\n",0,
                             6,(0x3fU & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                                 >> 0x28U))));
            }
        } else if ((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                  >> 0x2bU)))) {
            if (VL_UNLIKELY((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                           >> 0x2aU))))) {
                VL_WRITEF_NX("CARD: UNKNOWN COMMAND %0#\n",0,
                             6,(0x3fU & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                                 >> 0x28U))));
            } else if (VL_UNLIKELY((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                                  >> 0x29U))))) {
                VL_WRITEF_NX("CARD: UNKNOWN COMMAND %0#\n",0,
                             6,(0x3fU & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                                 >> 0x28U))));
            } else if ((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                      >> 0x28U)))) {
                VL_WRITEF_NX("CARD: CMD9\n",0);
                __Vtask_tb_sd_init__DOT__send_r2_response__15__cid[0U] = 0xccddeeffU;
                __Vtask_tb_sd_init__DOT__send_r2_response__15__cid[1U] = 0x8899aabbU;
                __Vtask_tb_sd_init__DOT__send_r2_response__15__cid[2U] = 0x44556677U;
                __Vtask_tb_sd_init__DOT__send_r2_response__15__cid[3U] = 0x112233U;
                while ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__response_start)))) {
                    co_await vlSelfRef.__VtrigSched_h8a59d431__0.trigger(1U, 
                                                                         nullptr, 
                                                                         "@([changed] tb_sd_init.response_start)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         234);
                }
                while ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__response_busy)))) {
                    co_await vlSelfRef.__VtrigSched_h7fa966f5__0.trigger(1U, 
                                                                         nullptr, 
                                                                         "@([changed] tb_sd_init.response_busy)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         235);
                }
                vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__response_data_r2[0U] 
                    = (0xabU | (__Vtask_tb_sd_init__DOT__send_r2_response__15__cid[0U] 
                                << 8U));
                vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__response_data_r2[1U] 
                    = ((__Vtask_tb_sd_init__DOT__send_r2_response__15__cid[0U] 
                        >> 0x18U) | (__Vtask_tb_sd_init__DOT__send_r2_response__15__cid[1U] 
                                     << 8U));
                vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__response_data_r2[2U] 
                    = ((__Vtask_tb_sd_init__DOT__send_r2_response__15__cid[1U] 
                        >> 0x18U) | (__Vtask_tb_sd_init__DOT__send_r2_response__15__cid[2U] 
                                     << 8U));
                vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__response_data_r2[3U] 
                    = ((__Vtask_tb_sd_init__DOT__send_r2_response__15__cid[2U] 
                        >> 0x18U) | (__Vtask_tb_sd_init__DOT__send_r2_response__15__cid[3U] 
                                     << 8U));
                vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__response_data_r2[4U] 
                    = (__Vtask_tb_sd_init__DOT__send_r2_response__15__cid[3U] 
                       >> 0x18U);
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     246);
                vlSelfRef.tb_sd_init__DOT__card_cmd_oe = 1U;
                vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__j = 0x87U;
                while (VL_LTES_III(32, 0U, vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__j)) {
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = ((0x87U >= (0xffU & vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__j)) 
                           && (1U & (vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__response_data_r2[
                                     (7U & (vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__j 
                                            >> 5U))] 
                                     >> (0x1fU & vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__j))));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         254);
                    vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__j 
                        = (vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__j 
                           - (IData)(1U));
                }
                vlSelfRef.tb_sd_init__DOT__card_cmd_oe = 0U;
                vlSelfRef.tb_sd_init__DOT__card_cmd_out = 1U;
            } else {
                VL_WRITEF_NX("CARD: CMD8\n",0);
                __Vtask_tb_sd_init__DOT__send_response__16__data = 0x48000001aa87ULL;
                while ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__response_start)))) {
                    co_await vlSelfRef.__VtrigSched_h8a59d431__0.trigger(1U, 
                                                                         nullptr, 
                                                                         "@([changed] tb_sd_init.response_start)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         179);
                }
                while ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__response_busy)))) {
                    co_await vlSelfRef.__VtrigSched_h7fa966f5__0.trigger(1U, 
                                                                         nullptr, 
                                                                         "@([changed] tb_sd_init.response_busy)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         181);
                }
                vlSelfRef.tb_sd_init__DOT__response_data 
                    = __Vtask_tb_sd_init__DOT__send_response__16__data;
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     185);
                vlSelfRef.tb_sd_init__DOT__card_cmd_oe = 1U;
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x2fU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x2eU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x2dU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x2cU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x2bU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x2aU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x29U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x28U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x27U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x26U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x25U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x24U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x23U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x22U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x21U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x20U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x1fU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x1eU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x1dU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x1cU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x1bU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x1aU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x19U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x18U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x17U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x16U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x15U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x14U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x13U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x12U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x11U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x10U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0xfU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0xeU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0xdU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0xcU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0xbU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0xaU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 9U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 8U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 7U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 6U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 5U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 4U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 3U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 2U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 1U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)(vlSelfRef.tb_sd_init__DOT__response_data));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_oe = 0U;
                vlSelfRef.tb_sd_init__DOT__card_cmd_out = 1U;
            }
        } else if ((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                  >> 0x2aU)))) {
            if (VL_LIKELY((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                         >> 0x29U))))) {
                if ((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                   >> 0x28U)))) {
                    VL_WRITEF_NX("CARD: CMD7\n",0);
                    __Vtask_tb_sd_init__DOT__send_response__17__data = 0x470000000065ULL;
                    while ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__response_start)))) {
                        co_await vlSelfRef.__VtrigSched_h8a59d431__0.trigger(1U, 
                                                                             nullptr, 
                                                                             "@([changed] tb_sd_init.response_start)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             179);
                    }
                    while ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__response_busy)))) {
                        co_await vlSelfRef.__VtrigSched_h7fa966f5__0.trigger(1U, 
                                                                             nullptr, 
                                                                             "@([changed] tb_sd_init.response_busy)", 
                                                                             "sim/tb_sd_init.sv", 
                                                                             181);
                    }
                    vlSelfRef.tb_sd_init__DOT__response_data 
                        = __Vtask_tb_sd_init__DOT__send_response__17__data;
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         185);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_oe = 1U;
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x2fU)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x2eU)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x2dU)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x2cU)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x2bU)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x2aU)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x29U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x28U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x27U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x26U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x25U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x24U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x23U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x22U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x21U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x20U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x1fU)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x1eU)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x1dU)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x1cU)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x1bU)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x1aU)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x19U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x18U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x17U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x16U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x15U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x14U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x13U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x12U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x11U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0x10U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0xfU)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0xeU)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0xdU)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0xcU)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0xbU)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 0xaU)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 9U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 8U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 7U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 6U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 5U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 4U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 3U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 2U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                         >> 1U)));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = (1U & (IData)(vlSelfRef.tb_sd_init__DOT__response_data));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         193);
                    vlSelfRef.tb_sd_init__DOT__card_cmd_oe = 0U;
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out = 1U;
                } else {
                    VL_WRITEF_NX("CARD: UNKNOWN COMMAND %0#\n",0,
                                 6,(0x3fU & (IData)(
                                                    (vlSelfRef.tb_sd_init__DOT__received_command 
                                                     >> 0x28U))));
                }
            } else {
                VL_WRITEF_NX("CARD: UNKNOWN COMMAND %0#\n",0,
                             6,(0x3fU & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                                 >> 0x28U))));
            }
        } else if ((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                  >> 0x29U)))) {
            if ((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                               >> 0x28U)))) {
                VL_WRITEF_NX("CARD: CMD3\n",0);
                __Vtask_tb_sd_init__DOT__send_r6_response__18__rca = 0x1234U;
                __Vtask_tb_sd_init__DOT__send_response__19__data 
                    = (0x430000000001ULL | ((QData)((IData)(__Vtask_tb_sd_init__DOT__send_r6_response__18__rca)) 
                                            << 0x18U));
                while ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__response_start)))) {
                    co_await vlSelfRef.__VtrigSched_h8a59d431__0.trigger(1U, 
                                                                         nullptr, 
                                                                         "@([changed] tb_sd_init.response_start)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         179);
                }
                while ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__response_busy)))) {
                    co_await vlSelfRef.__VtrigSched_h7fa966f5__0.trigger(1U, 
                                                                         nullptr, 
                                                                         "@([changed] tb_sd_init.response_busy)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         181);
                }
                vlSelfRef.tb_sd_init__DOT__response_data 
                    = __Vtask_tb_sd_init__DOT__send_response__19__data;
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     185);
                vlSelfRef.tb_sd_init__DOT__card_cmd_oe = 1U;
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x2fU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x2eU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x2dU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x2cU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x2bU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x2aU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x29U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x28U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x27U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x26U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x25U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x24U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x23U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x22U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x21U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x20U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x1fU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x1eU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x1dU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x1cU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x1bU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x1aU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x19U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x18U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x17U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x16U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x15U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x14U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x13U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x12U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x11U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0x10U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0xfU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0xeU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0xdU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0xcU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0xbU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 0xaU)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 9U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 8U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 7U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 6U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 5U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 4U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 3U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 2U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__response_data 
                                     >> 1U)));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                    = (1U & (IData)(vlSelfRef.tb_sd_init__DOT__response_data));
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     193);
                vlSelfRef.tb_sd_init__DOT__card_cmd_oe = 0U;
                vlSelfRef.tb_sd_init__DOT__card_cmd_out = 1U;
            } else {
                VL_WRITEF_NX("CARD: CMD2\n",0);
                __Vtask_tb_sd_init__DOT__send_r2_response__20__cid[0U] = 0x34455667U;
                __Vtask_tb_sd_init__DOT__send_r2_response__20__cid[1U] = 0xf0011223U;
                __Vtask_tb_sd_init__DOT__send_r2_response__20__cid[2U] = 0x789abcdeU;
                __Vtask_tb_sd_init__DOT__send_r2_response__20__cid[3U] = 0x123456U;
                while ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__response_start)))) {
                    co_await vlSelfRef.__VtrigSched_h8a59d431__0.trigger(1U, 
                                                                         nullptr, 
                                                                         "@([changed] tb_sd_init.response_start)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         234);
                }
                while ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__response_busy)))) {
                    co_await vlSelfRef.__VtrigSched_h7fa966f5__0.trigger(1U, 
                                                                         nullptr, 
                                                                         "@([changed] tb_sd_init.response_busy)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         235);
                }
                vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__response_data_r2[0U] 
                    = (0xabU | (__Vtask_tb_sd_init__DOT__send_r2_response__20__cid[0U] 
                                << 8U));
                vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__response_data_r2[1U] 
                    = ((__Vtask_tb_sd_init__DOT__send_r2_response__20__cid[0U] 
                        >> 0x18U) | (__Vtask_tb_sd_init__DOT__send_r2_response__20__cid[1U] 
                                     << 8U));
                vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__response_data_r2[2U] 
                    = ((__Vtask_tb_sd_init__DOT__send_r2_response__20__cid[1U] 
                        >> 0x18U) | (__Vtask_tb_sd_init__DOT__send_r2_response__20__cid[2U] 
                                     << 8U));
                vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__response_data_r2[3U] 
                    = ((__Vtask_tb_sd_init__DOT__send_r2_response__20__cid[2U] 
                        >> 0x18U) | (__Vtask_tb_sd_init__DOT__send_r2_response__20__cid[3U] 
                                     << 8U));
                vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__response_data_r2[4U] 
                    = (__Vtask_tb_sd_init__DOT__send_r2_response__20__cid[3U] 
                       >> 0x18U);
                co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_sd_init.sd_clk)", 
                                                                     "sim/tb_sd_init.sv", 
                                                                     246);
                vlSelfRef.tb_sd_init__DOT__card_cmd_oe = 1U;
                vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__j = 0x87U;
                while (VL_LTES_III(32, 0U, vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__j)) {
                    vlSelfRef.tb_sd_init__DOT__card_cmd_out 
                        = ((0x87U >= (0xffU & vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__j)) 
                           && (1U & (vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__response_data_r2[
                                     (7U & (vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__j 
                                            >> 5U))] 
                                     >> (0x1fU & vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__j))));
                    co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_sd_init.sd_clk)", 
                                                                         "sim/tb_sd_init.sv", 
                                                                         254);
                    vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__j 
                        = (vlSelfRef.tb_sd_init__DOT__send_r2_response__Vstatic__j 
                           - (IData)(1U));
                }
                vlSelfRef.tb_sd_init__DOT__card_cmd_oe = 0U;
                vlSelfRef.tb_sd_init__DOT__card_cmd_out = 1U;
            }
        } else if ((1U & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                  >> 0x28U)))) {
            VL_WRITEF_NX("CARD: UNKNOWN COMMAND %0#\n",0,
                         6,(0x3fU & (IData)((vlSelfRef.tb_sd_init__DOT__received_command 
                                             >> 0x28U))));
        } else {
            VL_WRITEF_NX("CARD: CMD0\n",0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_sd_init___024root___eval_initial__TOP__Vtiming__2(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ ((IData)(vlSelfRef.tb_sd_init__DOT__init_done) 
                     | (IData)(vlSelfRef.tb_sd_init__DOT__init_error))))) {
        co_await vlSelfRef.__VtrigSched_h45ed6d6c__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] (tb_sd_init.init_done | tb_sd_init.init_error))", 
                                                             "sim/tb_sd_init.sv", 
                                                             494);
    }
    co_await vlSelfRef.__VdlySched.delay(0x4c4b40ULL, 
                                         nullptr, "sim/tb_sd_init.sv", 
                                         496);
    VL_WRITEF_NX("\n========================================\n         SD INITIALIZATION RESULT\n========================================\nACMD41 Attempts = %0d\nCMD17 Commands  = %0d\nResponse CMD    = %2#\nResponse Status = %x\nResponse CRC    = %x\nResponse Valid  = %b\nCID             = %030x\nRCA             = %04x\nCSD             = %030x\nRead bytes      = %0d\nRead data errors= %0d\nTransmitted CRC = %04x\n",0,
                 32,vlSelfRef.tb_sd_init__DOT__acmd41_count,
                 32,vlSelfRef.tb_sd_init__DOT__cmd17_count,
                 6,(IData)(vlSelfRef.tb_sd_init__DOT__response_cmd),
                 32,vlSelfRef.tb_sd_init__DOT__response_status,
                 7,(IData)(vlSelfRef.tb_sd_init__DOT__response_crc),
                 1,vlSelfRef.tb_sd_init__DOT__response_valid,
                 120,vlSelfRef.tb_sd_init__DOT__card_cid.data(),
                 16,(IData)(vlSelfRef.tb_sd_init__DOT__card_rca),
                 120,vlSelfRef.tb_sd_init__DOT__card_csd.data(),
                 32,vlSelfRef.tb_sd_init__DOT__read_byte_count,
                 32,vlSelfRef.tb_sd_init__DOT__read_data_errors,
                 16,(IData)(vlSelfRef.tb_sd_init__DOT__sent_data_crc));
    if (((((IData)(vlSelfRef.tb_sd_init__DOT__init_done) 
           & (0U == vlSelfRef.tb_sd_init__DOT__cmd17_count)) 
          & (0U == vlSelfRef.tb_sd_init__DOT__read_byte_count)) 
         & (0U == vlSelfRef.tb_sd_init__DOT__read_data_errors))) {
        VL_WRITEF_NX("\nSD CARD INITIALIZED\nSD INIT PASSED\n",0);
    } else {
        VL_WRITEF_NX("\nSD INIT FAILED\n",0);
    }
    VL_WRITEF_NX("========================================\n\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x989680ULL, 
                                         nullptr, "sim/tb_sd_init.sv", 
                                         538);
    VL_FINISH_MT("sim/tb_sd_init.sv", 540, "");
}

VL_INLINE_OPT VlCoroutine Vtb_sd_init___024root___eval_initial__TOP__Vtiming__3(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___eval_initial__TOP__Vtiming__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x6fc23ac00ULL, 
                                         nullptr, "sim/tb_sd_init.sv", 
                                         546);
    VL_WRITEF_NX("\nTIMEOUT\nSD INIT FAILED\n\n",0);
    VL_FINISH_MT("sim/tb_sd_init.sv", 553, "");
}

VL_INLINE_OPT VlCoroutine Vtb_sd_init___024root___eval_initial__TOP__Vtiming__4(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___eval_initial__TOP__Vtiming__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1312d0ULL, 
                                             nullptr, 
                                             "sim/tb_sd_init.sv", 
                                             144);
        vlSelfRef.tb_sd_init__DOT__sd_clk = (1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__sd_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_sd_init___024root___eval_initial__TOP__Vtiming__5(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___eval_initial__TOP__Vtiming__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VtrigSched_h5163263f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd_init.sd_clk)", 
                                                             "sim/tb_sd_init.sv", 
                                                             478);
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/tb_sd_init.sv", 
                                             479);
        if (((~ (IData)(vlSelfRef.tb_sd_init__DOT__reset)) 
             & (IData)(vlSelfRef.tb_sd_init__DOT__data_write))) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_sd_init__DOT__data_addr) 
                              != (0x1ffU & vlSelfRef.tb_sd_init__DOT__read_byte_count)) 
                             | ((IData)(vlSelfRef.tb_sd_init__DOT__data_byte) 
                                != (0xffU & vlSelfRef.tb_sd_init__DOT__read_byte_count))))) {
                VL_WRITEF_NX("Read data mismatch at byte %0d: addr=%0# data=%02x expected=%02x\n",0,
                             32,vlSelfRef.tb_sd_init__DOT__read_byte_count,
                             9,(IData)(vlSelfRef.tb_sd_init__DOT__data_addr),
                             8,vlSelfRef.tb_sd_init__DOT__data_byte,
                             8,(0xffU & vlSelfRef.tb_sd_init__DOT__read_byte_count));
                vlSelfRef.tb_sd_init__DOT__read_data_errors 
                    = ((IData)(1U) + vlSelfRef.tb_sd_init__DOT__read_data_errors);
            }
            vlSelfRef.tb_sd_init__DOT__read_byte_count 
                = ((IData)(1U) + vlSelfRef.tb_sd_init__DOT__read_byte_count);
        }
    }
}

void Vtb_sd_init___024root___act_comb__TOP__0(Vtb_sd_init___024root* vlSelf);

void Vtb_sd_init___024root___eval_act(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x7fULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_sd_init___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_sd_init___024root___act_comb__TOP__0(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__crc16_next_bit 
        = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__calculated_crc), 1U) 
                      ^ (0x1021U & (- (IData)((IData)(
                                                      (((IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__calculated_crc) 
                                                        >> 0xfU) 
                                                       ^ (IData)(vlSelfRef.tb_sd_init__DOT__card_dat0))))))));
    vlSelfRef.tb_sd_init__DOT__sd_cmd = (((IData)(vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_oe) 
                                          & (IData)(vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_out)) 
                                         | ((IData)(vlSelfRef.tb_sd_init__DOT__card_cmd_oe) 
                                            & (IData)(vlSelfRef.tb_sd_init__DOT__card_cmd_out)));
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

void Vtb_sd_init___024root___nba_sequent__TOP__0(Vtb_sd_init___024root* vlSelf);
void Vtb_sd_init___024root___nba_comb__TOP__0(Vtb_sd_init___024root* vlSelf);

void Vtb_sd_init___024root___eval_nba(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sd_init___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x7fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sd_init___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_sd_init___024root___nba_sequent__TOP__0(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___nba_sequent__TOP__0\n"); );
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
    CData/*4:0*/ __Vdly__tb_sd_init__DOT__init_inst__DOT__state;
    __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0;
    CData/*0:0*/ __Vdly__tb_sd_init__DOT__response_start;
    __Vdly__tb_sd_init__DOT__response_start = 0;
    CData/*0:0*/ __Vdly__tb_sd_init__DOT__read_start;
    __Vdly__tb_sd_init__DOT__read_start = 0;
    CData/*2:0*/ __Vdly__tb_sd_init__DOT__response_type;
    __Vdly__tb_sd_init__DOT__response_type = 0;
    SData/*15:0*/ __Vdly__tb_sd_init__DOT__card_rca;
    __Vdly__tb_sd_init__DOT__card_rca = 0;
    CData/*2:0*/ __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__state;
    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__token_shift;
    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__token_shift = 0;
    CData/*7:0*/ __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__byte_shift;
    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__byte_shift = 0;
    SData/*15:0*/ __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__crc_shift;
    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__crc_shift = 0;
    SData/*15:0*/ __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__calculated_crc;
    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__calculated_crc = 0;
    CData/*2:0*/ __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__bit_count;
    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__bit_count = 0;
    SData/*8:0*/ __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__byte_count;
    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__byte_count = 0;
    CData/*0:0*/ __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__crc_byte_count;
    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__crc_byte_count = 0;
    QData/*47:0*/ __Vdly__tb_sd_init__DOT__uut_cmd__DOT__cmd_shift_reg;
    __Vdly__tb_sd_init__DOT__uut_cmd__DOT__cmd_shift_reg = 0;
    CData/*5:0*/ __Vdly__tb_sd_init__DOT__uut_cmd__DOT__counter;
    __Vdly__tb_sd_init__DOT__uut_cmd__DOT__counter = 0;
    CData/*0:0*/ __Vdly__tb_sd_init__DOT__cmd_busy;
    __Vdly__tb_sd_init__DOT__cmd_busy = 0;
    CData/*0:0*/ __Vdly__tb_sd_init__DOT__cmd_done;
    __Vdly__tb_sd_init__DOT__cmd_done = 0;
    CData/*1:0*/ __Vdly__tb_sd_init__DOT__uut_cmd__DOT__state;
    __Vdly__tb_sd_init__DOT__uut_cmd__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_sd_init__DOT__response_inst__DOT__counter;
    __Vdly__tb_sd_init__DOT__response_inst__DOT__counter = 0;
    CData/*2:0*/ __Vdly__tb_sd_init__DOT__response_inst__DOT__active_response_type;
    __Vdly__tb_sd_init__DOT__response_inst__DOT__active_response_type = 0;
    CData/*1:0*/ __Vdly__tb_sd_init__DOT__response_inst__DOT__state;
    __Vdly__tb_sd_init__DOT__response_inst__DOT__state = 0;
    // Body
    __Vdly__tb_sd_init__DOT__response_inst__DOT__counter 
        = vlSelfRef.tb_sd_init__DOT__response_inst__DOT__counter;
    __Vdly__tb_sd_init__DOT__response_inst__DOT__active_response_type 
        = vlSelfRef.tb_sd_init__DOT__response_inst__DOT__active_response_type;
    __Vdly__tb_sd_init__DOT__response_inst__DOT__state 
        = vlSelfRef.tb_sd_init__DOT__response_inst__DOT__state;
    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__state 
        = vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__state;
    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__token_shift 
        = vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__token_shift;
    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__byte_shift 
        = vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__byte_shift;
    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__crc_shift 
        = vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__crc_shift;
    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__bit_count 
        = vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__bit_count;
    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__byte_count 
        = vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__byte_count;
    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__crc_byte_count 
        = vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__crc_byte_count;
    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__calculated_crc 
        = vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__calculated_crc;
    __Vdly__tb_sd_init__DOT__init_inst__DOT__state 
        = vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state;
    __Vdly__tb_sd_init__DOT__response_start = vlSelfRef.tb_sd_init__DOT__response_start;
    __Vdly__tb_sd_init__DOT__read_start = vlSelfRef.tb_sd_init__DOT__read_start;
    __Vdly__tb_sd_init__DOT__response_type = vlSelfRef.tb_sd_init__DOT__response_type;
    __Vdly__tb_sd_init__DOT__card_rca = vlSelfRef.tb_sd_init__DOT__card_rca;
    __Vdly__tb_sd_init__DOT__uut_cmd__DOT__cmd_shift_reg 
        = vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_shift_reg;
    __Vdly__tb_sd_init__DOT__uut_cmd__DOT__counter 
        = vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__counter;
    __Vdly__tb_sd_init__DOT__cmd_busy = vlSelfRef.tb_sd_init__DOT__cmd_busy;
    __Vdly__tb_sd_init__DOT__cmd_done = vlSelfRef.tb_sd_init__DOT__cmd_done;
    __Vdly__tb_sd_init__DOT__uut_cmd__DOT__state = vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__state;
    if (vlSelfRef.tb_sd_init__DOT__reset) {
        __Vdly__tb_sd_init__DOT__uut_cmd__DOT__cmd_shift_reg = 0ULL;
        __Vdly__tb_sd_init__DOT__uut_cmd__DOT__counter = 0U;
        __Vdly__tb_sd_init__DOT__cmd_busy = 0U;
        __Vdly__tb_sd_init__DOT__cmd_done = 0U;
        vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_out = 1U;
        vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_oe = 0U;
        __Vdly__tb_sd_init__DOT__uut_cmd__DOT__state = 0U;
        __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0U;
        vlSelfRef.tb_sd_init__DOT__init_done = 0U;
        vlSelfRef.tb_sd_init__DOT__init_error = 0U;
        vlSelfRef.tb_sd_init__DOT__cmd_index = 0U;
        vlSelfRef.tb_sd_init__DOT__cmd_arg = 0U;
        vlSelfRef.tb_sd_init__DOT__cmd_start = 0U;
        __Vdly__tb_sd_init__DOT__response_start = 0U;
        __Vdly__tb_sd_init__DOT__read_start = 0U;
        __Vdly__tb_sd_init__DOT__response_type = 0U;
        vlSelfRef.tb_sd_init__DOT__card_cid[0U] = 0U;
        vlSelfRef.tb_sd_init__DOT__card_cid[1U] = 0U;
        vlSelfRef.tb_sd_init__DOT__card_cid[2U] = 0U;
        vlSelfRef.tb_sd_init__DOT__card_cid[3U] = 0U;
        __Vdly__tb_sd_init__DOT__card_rca = 0U;
        vlSelfRef.tb_sd_init__DOT__card_csd[0U] = 0U;
        vlSelfRef.tb_sd_init__DOT__card_csd[1U] = 0U;
        vlSelfRef.tb_sd_init__DOT__card_csd[2U] = 0U;
        vlSelfRef.tb_sd_init__DOT__card_csd[3U] = 0U;
        __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__state = 0U;
        vlSelfRef.tb_sd_init__DOT__read_busy = 0U;
        vlSelfRef.tb_sd_init__DOT__read_done = 0U;
        vlSelfRef.tb_sd_init__DOT__read_valid = 0U;
        vlSelfRef.tb_sd_init__DOT__data_addr = 0U;
        vlSelfRef.tb_sd_init__DOT__data_byte = 0U;
        vlSelfRef.tb_sd_init__DOT__data_write = 0U;
        vlSelfRef.tb_sd_init__DOT__read_crc_valid = 0U;
        __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__token_shift = 0U;
        __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__byte_shift = 0U;
        __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__crc_shift = 0U;
        __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__calculated_crc = 0U;
        __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__bit_count = 0U;
        __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__byte_count = 0U;
        __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__crc_byte_count = 0U;
        vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[0U] = 0U;
        vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[1U] = 0U;
        vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[2U] = 0U;
        vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[3U] = 0U;
        vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[4U] = 0U;
        __Vdly__tb_sd_init__DOT__response_inst__DOT__counter = 0U;
        vlSelfRef.tb_sd_init__DOT__response_busy = 0U;
        vlSelfRef.tb_sd_init__DOT__response_done = 0U;
        vlSelfRef.tb_sd_init__DOT__response_valid = 0U;
        vlSelfRef.tb_sd_init__DOT__response_cmd = 0U;
        vlSelfRef.tb_sd_init__DOT__response_status = 0U;
        vlSelfRef.tb_sd_init__DOT__response_crc = 0U;
        vlSelfRef.tb_sd_init__DOT__response_long[0U] = 0U;
        vlSelfRef.tb_sd_init__DOT__response_long[1U] = 0U;
        vlSelfRef.tb_sd_init__DOT__response_long[2U] = 0U;
        vlSelfRef.tb_sd_init__DOT__response_long[3U] = 0U;
        __Vdly__tb_sd_init__DOT__response_inst__DOT__active_response_type = 0U;
        __Vdly__tb_sd_init__DOT__response_inst__DOT__state = 0U;
    } else {
        __Vdly__tb_sd_init__DOT__cmd_done = 0U;
        if ((0U == (IData)(vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__state))) {
            __Vdly__tb_sd_init__DOT__cmd_busy = 0U;
            vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_oe = 0U;
            __Vdly__tb_sd_init__DOT__uut_cmd__DOT__counter = 0U;
            if (vlSelfRef.tb_sd_init__DOT__cmd_start) {
                __Vdly__tb_sd_init__DOT__uut_cmd__DOT__cmd_shift_reg 
                    = (((QData)((IData)((0x40U | (IData)(vlSelfRef.tb_sd_init__DOT__cmd_index)))) 
                        << 0x28U) | (((QData)((IData)(vlSelfRef.tb_sd_init__DOT__cmd_arg)) 
                                      << 8U) | (QData)((IData)(
                                                               (1U 
                                                                | ((IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__crc7_value) 
                                                                   << 1U))))));
                vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_out = 0U;
                vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_oe = 1U;
                __Vdly__tb_sd_init__DOT__cmd_busy = 1U;
                __Vdly__tb_sd_init__DOT__uut_cmd__DOT__counter = 0U;
                __Vdly__tb_sd_init__DOT__uut_cmd__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__state))) {
            if ((0x2fU == (IData)(vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__counter))) {
                __Vdly__tb_sd_init__DOT__cmd_busy = 0U;
                __Vdly__tb_sd_init__DOT__uut_cmd__DOT__state = 2U;
            } else {
                __Vdly__tb_sd_init__DOT__uut_cmd__DOT__cmd_shift_reg 
                    = (0xfffffffffffeULL & (vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_shift_reg 
                                            << 1U));
                __Vdly__tb_sd_init__DOT__uut_cmd__DOT__counter 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__counter)));
                vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_out 
                    = (1U & (IData)((vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_shift_reg 
                                     >> 0x2eU)));
            }
        } else if ((2U == (IData)(vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__state))) {
            vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_oe = 0U;
            vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_out = 1U;
            __Vdly__tb_sd_init__DOT__cmd_done = 1U;
            __Vdly__tb_sd_init__DOT__uut_cmd__DOT__counter = 0U;
            __Vdly__tb_sd_init__DOT__uut_cmd__DOT__state = 0U;
        } else {
            __Vdly__tb_sd_init__DOT__uut_cmd__DOT__cmd_shift_reg = 0ULL;
            __Vdly__tb_sd_init__DOT__uut_cmd__DOT__counter = 0U;
            __Vdly__tb_sd_init__DOT__cmd_busy = 0U;
            __Vdly__tb_sd_init__DOT__cmd_done = 0U;
            vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_out = 1U;
            vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_oe = 0U;
            __Vdly__tb_sd_init__DOT__uut_cmd__DOT__state = 0U;
        }
        vlSelfRef.tb_sd_init__DOT__cmd_start = 0U;
        __Vdly__tb_sd_init__DOT__response_start = 0U;
        __Vdly__tb_sd_init__DOT__read_start = 0U;
        if ((0x10U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
            if ((8U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                if ((4U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                    if ((2U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                        if ((1U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                            vlSelfRef.tb_sd_init__DOT__init_error = 1U;
                            __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0x1fU;
                        } else {
                            vlSelfRef.tb_sd_init__DOT__init_done = 1U;
                            __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0x1eU;
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                        if (vlSelfRef.tb_sd_init__DOT__read_done) {
                            __Vdly__tb_sd_init__DOT__init_inst__DOT__state 
                                = (((IData)(vlSelfRef.tb_sd_init__DOT__read_valid) 
                                    & (IData)(vlSelfRef.tb_sd_init__DOT__read_crc_valid))
                                    ? 0x1eU : 0x1fU);
                        }
                    } else if (vlSelfRef.tb_sd_init__DOT__response_done) {
                        if (((IData)(vlSelfRef.tb_sd_init__DOT__response_valid) 
                             & (0x11U == (IData)(vlSelfRef.tb_sd_init__DOT__response_cmd)))) {
                            __Vdly__tb_sd_init__DOT__read_start = 1U;
                            __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0x1dU;
                        } else {
                            __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0x1fU;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                        if (vlSelfRef.tb_sd_init__DOT__cmd_done) {
                            __Vdly__tb_sd_init__DOT__response_start = 1U;
                            __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0x1cU;
                        }
                    } else {
                        vlSelfRef.tb_sd_init__DOT__cmd_index = 0x11U;
                        vlSelfRef.tb_sd_init__DOT__cmd_arg = 0U;
                        __Vdly__tb_sd_init__DOT__response_type = 0U;
                        if ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__cmd_busy)))) {
                            vlSelfRef.tb_sd_init__DOT__cmd_start = 1U;
                            __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0x1bU;
                        }
                    }
                } else {
                    __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0U;
                    vlSelfRef.tb_sd_init__DOT__init_done = 0U;
                    vlSelfRef.tb_sd_init__DOT__init_error = 0U;
                    vlSelfRef.tb_sd_init__DOT__cmd_start = 0U;
                    __Vdly__tb_sd_init__DOT__response_start = 0U;
                    __Vdly__tb_sd_init__DOT__read_start = 0U;
                    __Vdly__tb_sd_init__DOT__response_type = 0U;
                    vlSelfRef.tb_sd_init__DOT__card_cid[0U] = 0U;
                    vlSelfRef.tb_sd_init__DOT__card_cid[1U] = 0U;
                    vlSelfRef.tb_sd_init__DOT__card_cid[2U] = 0U;
                    vlSelfRef.tb_sd_init__DOT__card_cid[3U] = 0U;
                    __Vdly__tb_sd_init__DOT__card_rca = 0U;
                    vlSelfRef.tb_sd_init__DOT__card_csd[0U] = 0U;
                    vlSelfRef.tb_sd_init__DOT__card_csd[1U] = 0U;
                    vlSelfRef.tb_sd_init__DOT__card_csd[2U] = 0U;
                    vlSelfRef.tb_sd_init__DOT__card_csd[3U] = 0U;
                }
            } else if ((4U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                        if (vlSelfRef.tb_sd_init__DOT__response_done) {
                            __Vdly__tb_sd_init__DOT__init_inst__DOT__state 
                                = (((IData)(vlSelfRef.tb_sd_init__DOT__response_valid) 
                                    & (7U == (IData)(vlSelfRef.tb_sd_init__DOT__response_cmd)))
                                    ? 0x1eU : 0x1fU);
                        }
                    } else if (vlSelfRef.tb_sd_init__DOT__cmd_done) {
                        __Vdly__tb_sd_init__DOT__response_start = 1U;
                        __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0x17U;
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                    vlSelfRef.tb_sd_init__DOT__cmd_index = 7U;
                    vlSelfRef.tb_sd_init__DOT__cmd_arg 
                        = ((IData)(vlSelfRef.tb_sd_init__DOT__card_rca) 
                           << 0x10U);
                    __Vdly__tb_sd_init__DOT__response_type = 4U;
                    if ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__cmd_busy)))) {
                        vlSelfRef.tb_sd_init__DOT__cmd_start = 1U;
                        __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0x16U;
                    }
                } else if (vlSelfRef.tb_sd_init__DOT__response_done) {
                    if (vlSelfRef.tb_sd_init__DOT__response_valid) {
                        vlSelfRef.tb_sd_init__DOT__card_csd[0U] 
                            = vlSelfRef.tb_sd_init__DOT__response_long[0U];
                        vlSelfRef.tb_sd_init__DOT__card_csd[1U] 
                            = vlSelfRef.tb_sd_init__DOT__response_long[1U];
                        vlSelfRef.tb_sd_init__DOT__card_csd[2U] 
                            = vlSelfRef.tb_sd_init__DOT__response_long[2U];
                        vlSelfRef.tb_sd_init__DOT__card_csd[3U] 
                            = vlSelfRef.tb_sd_init__DOT__response_long[3U];
                        __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0x15U;
                    } else {
                        __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0x1fU;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                    if (vlSelfRef.tb_sd_init__DOT__cmd_done) {
                        __Vdly__tb_sd_init__DOT__response_start = 1U;
                        __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0x14U;
                    }
                } else {
                    vlSelfRef.tb_sd_init__DOT__cmd_index = 9U;
                    vlSelfRef.tb_sd_init__DOT__cmd_arg 
                        = ((IData)(vlSelfRef.tb_sd_init__DOT__card_rca) 
                           << 0x10U);
                    __Vdly__tb_sd_init__DOT__response_type = 1U;
                    if ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__cmd_busy)))) {
                        vlSelfRef.tb_sd_init__DOT__cmd_start = 1U;
                        __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0x13U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                if (vlSelfRef.tb_sd_init__DOT__response_done) {
                    if (((IData)(vlSelfRef.tb_sd_init__DOT__response_valid) 
                         & (3U == (IData)(vlSelfRef.tb_sd_init__DOT__response_cmd)))) {
                        __Vdly__tb_sd_init__DOT__card_rca 
                            = (vlSelfRef.tb_sd_init__DOT__response_status 
                               >> 0x10U);
                        __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0x12U;
                    } else {
                        __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0x1fU;
                    }
                }
            } else if (vlSelfRef.tb_sd_init__DOT__cmd_done) {
                __Vdly__tb_sd_init__DOT__response_start = 1U;
                __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0x11U;
            }
        } else if ((8U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                        vlSelfRef.tb_sd_init__DOT__cmd_index = 3U;
                        vlSelfRef.tb_sd_init__DOT__cmd_arg = 0U;
                        __Vdly__tb_sd_init__DOT__response_type = 3U;
                        if ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__cmd_busy)))) {
                            vlSelfRef.tb_sd_init__DOT__cmd_start = 1U;
                            __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0x10U;
                        }
                    } else if (vlSelfRef.tb_sd_init__DOT__response_done) {
                        if (vlSelfRef.tb_sd_init__DOT__response_valid) {
                            vlSelfRef.tb_sd_init__DOT__card_cid[0U] 
                                = vlSelfRef.tb_sd_init__DOT__response_long[0U];
                            vlSelfRef.tb_sd_init__DOT__card_cid[1U] 
                                = vlSelfRef.tb_sd_init__DOT__response_long[1U];
                            vlSelfRef.tb_sd_init__DOT__card_cid[2U] 
                                = vlSelfRef.tb_sd_init__DOT__response_long[2U];
                            vlSelfRef.tb_sd_init__DOT__card_cid[3U] 
                                = vlSelfRef.tb_sd_init__DOT__response_long[3U];
                            __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0xfU;
                        } else {
                            __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0x1fU;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                    if (vlSelfRef.tb_sd_init__DOT__cmd_done) {
                        __Vdly__tb_sd_init__DOT__response_start = 1U;
                        __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0xeU;
                    }
                } else {
                    vlSelfRef.tb_sd_init__DOT__cmd_index = 2U;
                    vlSelfRef.tb_sd_init__DOT__cmd_arg = 0U;
                    __Vdly__tb_sd_init__DOT__response_type = 1U;
                    if ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__cmd_busy)))) {
                        vlSelfRef.tb_sd_init__DOT__cmd_start = 1U;
                        __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0xdU;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                    if (vlSelfRef.tb_sd_init__DOT__response_done) {
                        __Vdly__tb_sd_init__DOT__init_inst__DOT__state 
                            = (((0x29U == (IData)(vlSelfRef.tb_sd_init__DOT__response_cmd)) 
                                & (vlSelfRef.tb_sd_init__DOT__response_status 
                                   >> 0x1fU)) ? 0xcU
                                : (((0x29U == (IData)(vlSelfRef.tb_sd_init__DOT__response_cmd)) 
                                    & (~ (vlSelfRef.tb_sd_init__DOT__response_status 
                                          >> 0x1fU)))
                                    ? 6U : 0x1fU));
                    }
                } else if (vlSelfRef.tb_sd_init__DOT__cmd_done) {
                    __Vdly__tb_sd_init__DOT__response_start = 1U;
                    __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0xbU;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                vlSelfRef.tb_sd_init__DOT__cmd_index = 0x29U;
                vlSelfRef.tb_sd_init__DOT__cmd_arg = 0x40000000U;
                __Vdly__tb_sd_init__DOT__response_type = 2U;
                if ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__cmd_busy)))) {
                    vlSelfRef.tb_sd_init__DOT__cmd_start = 1U;
                    __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 0xaU;
                }
            } else if (vlSelfRef.tb_sd_init__DOT__response_done) {
                __Vdly__tb_sd_init__DOT__init_inst__DOT__state 
                    = ((((IData)(vlSelfRef.tb_sd_init__DOT__response_valid) 
                         & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__crc_valid)) 
                        & (0x37U == (IData)(vlSelfRef.tb_sd_init__DOT__response_cmd)))
                        ? 9U : 0x1fU);
            }
        } else if ((4U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                    if (vlSelfRef.tb_sd_init__DOT__cmd_done) {
                        __Vdly__tb_sd_init__DOT__response_start = 1U;
                        __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 8U;
                    }
                } else {
                    vlSelfRef.tb_sd_init__DOT__cmd_index = 0x37U;
                    vlSelfRef.tb_sd_init__DOT__cmd_arg = 0U;
                    __Vdly__tb_sd_init__DOT__response_type = 0U;
                    if ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__cmd_busy)))) {
                        vlSelfRef.tb_sd_init__DOT__cmd_start = 1U;
                        __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 7U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                if (vlSelfRef.tb_sd_init__DOT__response_done) {
                    __Vdly__tb_sd_init__DOT__init_inst__DOT__state 
                        = (((((IData)(vlSelfRef.tb_sd_init__DOT__response_valid) 
                              & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__crc_valid)) 
                             & (8U == (IData)(vlSelfRef.tb_sd_init__DOT__response_cmd))) 
                            & (0x1aaU == vlSelfRef.tb_sd_init__DOT__response_status))
                            ? 6U : 0x1fU);
                }
            } else if (vlSelfRef.tb_sd_init__DOT__cmd_done) {
                __Vdly__tb_sd_init__DOT__response_start = 1U;
                __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
                vlSelfRef.tb_sd_init__DOT__cmd_index = 8U;
                vlSelfRef.tb_sd_init__DOT__cmd_arg = 0x1aaU;
                __Vdly__tb_sd_init__DOT__response_type = 0U;
                if ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__cmd_busy)))) {
                    vlSelfRef.tb_sd_init__DOT__cmd_start = 1U;
                    __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 4U;
                }
            } else if (vlSelfRef.tb_sd_init__DOT__cmd_done) {
                __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state))) {
            vlSelfRef.tb_sd_init__DOT__cmd_index = 0U;
            vlSelfRef.tb_sd_init__DOT__cmd_arg = 0U;
            __Vdly__tb_sd_init__DOT__response_type = 0U;
            if ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__cmd_busy)))) {
                vlSelfRef.tb_sd_init__DOT__cmd_start = 1U;
                __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 2U;
            }
        } else {
            vlSelfRef.tb_sd_init__DOT__init_done = 0U;
            vlSelfRef.tb_sd_init__DOT__init_error = 0U;
            if (vlSelfRef.tb_sd_init__DOT__start) {
                __Vdly__tb_sd_init__DOT__init_inst__DOT__state = 1U;
            }
        }
        vlSelfRef.tb_sd_init__DOT__read_done = 0U;
        vlSelfRef.tb_sd_init__DOT__data_write = 0U;
        if ((4U & (IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__state))) {
                __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__state = 0U;
                vlSelfRef.tb_sd_init__DOT__read_busy = 0U;
                vlSelfRef.tb_sd_init__DOT__read_done = 0U;
                vlSelfRef.tb_sd_init__DOT__read_valid = 0U;
                vlSelfRef.tb_sd_init__DOT__read_crc_valid = 0U;
            } else if ((1U & (IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__state))) {
                __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__state = 0U;
                vlSelfRef.tb_sd_init__DOT__read_busy = 0U;
                vlSelfRef.tb_sd_init__DOT__read_done = 0U;
                vlSelfRef.tb_sd_init__DOT__read_valid = 0U;
                vlSelfRef.tb_sd_init__DOT__read_crc_valid = 0U;
            } else {
                __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__state = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__state))) {
                __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__crc_shift 
                    = ((0xfffeU & ((IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__crc_shift) 
                                   << 1U)) | (IData)(vlSelfRef.tb_sd_init__DOT__card_dat0));
                if ((7U == (IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__bit_count))) {
                    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__bit_count = 0U;
                    if (vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__crc_byte_count) {
                        if ((((0xfffeU & ((IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__crc_shift) 
                                          << 1U)) | (IData)(vlSelfRef.tb_sd_init__DOT__card_dat0)) 
                             == (IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__calculated_crc))) {
                            vlSelfRef.tb_sd_init__DOT__read_crc_valid = 1U;
                            vlSelfRef.tb_sd_init__DOT__read_valid = 1U;
                        } else {
                            vlSelfRef.tb_sd_init__DOT__read_crc_valid = 0U;
                            vlSelfRef.tb_sd_init__DOT__read_valid = 0U;
                        }
                        vlSelfRef.tb_sd_init__DOT__read_busy = 0U;
                        vlSelfRef.tb_sd_init__DOT__read_done = 1U;
                        __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__crc_byte_count = 0U;
                        __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__state = 4U;
                    } else {
                        __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__crc_byte_count = 1U;
                    }
                } else {
                    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__bit_count 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__bit_count)));
                }
            } else {
                __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__byte_shift 
                    = ((0xfeU & ((IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__byte_shift) 
                                 << 1U)) | (IData)(vlSelfRef.tb_sd_init__DOT__card_dat0));
                __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__calculated_crc 
                    = vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__crc16_next_bit;
                if ((7U == (IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__bit_count))) {
                    vlSelfRef.tb_sd_init__DOT__data_addr 
                        = vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__byte_count;
                    vlSelfRef.tb_sd_init__DOT__data_byte 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__byte_shift) 
                                     << 1U)) | (IData)(vlSelfRef.tb_sd_init__DOT__card_dat0));
                    vlSelfRef.tb_sd_init__DOT__data_write = 1U;
                    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__bit_count = 0U;
                    if ((0x1ffU == (IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__byte_count))) {
                        __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__crc_shift = 0U;
                        __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__crc_byte_count = 0U;
                        __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__state = 3U;
                    } else {
                        __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__byte_count 
                            = (0x1ffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__byte_count)));
                    }
                } else {
                    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__bit_count 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__bit_count)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__state))) {
            __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__token_shift 
                = ((0xfeU & ((IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__token_shift) 
                             << 1U)) | (IData)(vlSelfRef.tb_sd_init__DOT__card_dat0));
            if ((7U == (IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__bit_count))) {
                __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__bit_count = 0U;
                if ((0xfeU == ((0xfeU & ((IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__token_shift) 
                                         << 1U)) | (IData)(vlSelfRef.tb_sd_init__DOT__card_dat0)))) {
                    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__byte_count = 0U;
                    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__byte_shift = 0U;
                    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__calculated_crc = 0U;
                    __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__state = 2U;
                }
            } else {
                __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__bit_count 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__bit_count)));
            }
        } else {
            vlSelfRef.tb_sd_init__DOT__read_busy = 0U;
            vlSelfRef.tb_sd_init__DOT__read_valid = 0U;
            vlSelfRef.tb_sd_init__DOT__read_crc_valid = 0U;
            if (vlSelfRef.tb_sd_init__DOT__read_start) {
                vlSelfRef.tb_sd_init__DOT__read_busy = 1U;
                __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__token_shift = 0U;
                __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__byte_shift = 0U;
                __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__crc_shift = 0U;
                __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__calculated_crc = 0U;
                __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__bit_count = 0U;
                __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__byte_count = 0U;
                __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__crc_byte_count = 0U;
                __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__state = 1U;
            }
        }
        vlSelfRef.tb_sd_init__DOT__response_done = 0U;
        if ((0U == (IData)(vlSelfRef.tb_sd_init__DOT__response_inst__DOT__state))) {
            vlSelfRef.tb_sd_init__DOT__response_busy = 0U;
            __Vdly__tb_sd_init__DOT__response_inst__DOT__counter = 0U;
            if (vlSelfRef.tb_sd_init__DOT__response_start) {
                vlSelfRef.tb_sd_init__DOT__response_busy = 1U;
                vlSelfRef.tb_sd_init__DOT__response_valid = 0U;
                __Vdly__tb_sd_init__DOT__response_inst__DOT__active_response_type 
                    = vlSelfRef.tb_sd_init__DOT__response_type;
                __Vdly__tb_sd_init__DOT__response_inst__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_sd_init__DOT__response_inst__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_sd_init__DOT__sd_cmd)))) {
                vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[0U] = 0U;
                vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[1U] = 0U;
                vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[2U] = 0U;
                vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[3U] = 0U;
                vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[4U] = 0U;
                __Vdly__tb_sd_init__DOT__response_inst__DOT__counter = 1U;
                __Vdly__tb_sd_init__DOT__response_inst__DOT__state = 2U;
                vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[0U] 
                    = (0xfffffffeU & vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[0U]);
            }
        } else if ((2U == (IData)(vlSelfRef.tb_sd_init__DOT__response_inst__DOT__state))) {
            vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[0U] 
                = vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[0U];
            vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[1U] 
                = vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[1U];
            vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[2U] 
                = vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[2U];
            vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[3U] 
                = vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[3U];
            vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[4U] 
                = vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[4U];
            if ((1U == (IData)(vlSelfRef.tb_sd_init__DOT__response_inst__DOT__active_response_type))) {
                if ((0x87U == (IData)(vlSelfRef.tb_sd_init__DOT__response_inst__DOT__counter))) {
                    vlSelfRef.tb_sd_init__DOT__response_busy = 0U;
                    vlSelfRef.tb_sd_init__DOT__response_done = 1U;
                    vlSelfRef.tb_sd_init__DOT__response_long[0U] 
                        = ((vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[1U] 
                            << 0x18U) | (vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[0U] 
                                         >> 8U));
                    vlSelfRef.tb_sd_init__DOT__response_long[1U] 
                        = ((vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[2U] 
                            << 0x18U) | (vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[1U] 
                                         >> 8U));
                    vlSelfRef.tb_sd_init__DOT__response_long[2U] 
                        = ((vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[3U] 
                            << 0x18U) | (vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[2U] 
                                         >> 8U));
                    vlSelfRef.tb_sd_init__DOT__response_long[3U] 
                        = (vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[3U] 
                           >> 8U);
                    vlSelfRef.tb_sd_init__DOT__response_valid 
                        = (vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[0U] 
                           & (0U == (0xc0U & vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[4U])));
                    __Vdly__tb_sd_init__DOT__response_inst__DOT__counter = 0U;
                    __Vdly__tb_sd_init__DOT__response_inst__DOT__state = 0U;
                } else {
                    __Vdly__tb_sd_init__DOT__response_inst__DOT__counter 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sd_init__DOT__response_inst__DOT__counter)));
                }
            } else if ((0x2fU == (IData)(vlSelfRef.tb_sd_init__DOT__response_inst__DOT__counter))) {
                vlSelfRef.tb_sd_init__DOT__response_busy = 0U;
                vlSelfRef.tb_sd_init__DOT__response_done = 1U;
                vlSelfRef.tb_sd_init__DOT__response_cmd 
                    = (0x3fU & (vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[1U] 
                                >> 8U));
                vlSelfRef.tb_sd_init__DOT__response_status 
                    = ((vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[1U] 
                        << 0x18U) | (vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[0U] 
                                     >> 8U));
                vlSelfRef.tb_sd_init__DOT__response_crc 
                    = (0x7fU & (vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[0U] 
                                >> 1U));
                vlSelfRef.tb_sd_init__DOT__response_valid 
                    = (vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[0U] 
                       & (0x4000U == (0xc000U & vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_next[1U])));
                __Vdly__tb_sd_init__DOT__response_inst__DOT__counter = 0U;
                __Vdly__tb_sd_init__DOT__response_inst__DOT__state = 0U;
            } else {
                __Vdly__tb_sd_init__DOT__response_inst__DOT__counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sd_init__DOT__response_inst__DOT__counter)));
            }
        } else {
            vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[0U] = 0U;
            vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[1U] = 0U;
            vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[2U] = 0U;
            vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[3U] = 0U;
            vlSelfRef.tb_sd_init__DOT__response_inst__DOT__response_shift_reg[4U] = 0U;
            __Vdly__tb_sd_init__DOT__response_inst__DOT__counter = 0U;
            vlSelfRef.tb_sd_init__DOT__response_busy = 0U;
            vlSelfRef.tb_sd_init__DOT__response_done = 0U;
            vlSelfRef.tb_sd_init__DOT__response_valid = 0U;
            vlSelfRef.tb_sd_init__DOT__response_cmd = 0U;
            vlSelfRef.tb_sd_init__DOT__response_status = 0U;
            vlSelfRef.tb_sd_init__DOT__response_crc = 0U;
            vlSelfRef.tb_sd_init__DOT__response_long[0U] = 0U;
            vlSelfRef.tb_sd_init__DOT__response_long[1U] = 0U;
            vlSelfRef.tb_sd_init__DOT__response_long[2U] = 0U;
            vlSelfRef.tb_sd_init__DOT__response_long[3U] = 0U;
            __Vdly__tb_sd_init__DOT__response_inst__DOT__active_response_type = 0U;
            __Vdly__tb_sd_init__DOT__response_inst__DOT__state = 0U;
        }
    }
    vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_shift_reg 
        = __Vdly__tb_sd_init__DOT__uut_cmd__DOT__cmd_shift_reg;
    vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__counter 
        = __Vdly__tb_sd_init__DOT__uut_cmd__DOT__counter;
    vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__state 
        = __Vdly__tb_sd_init__DOT__uut_cmd__DOT__state;
    vlSelfRef.tb_sd_init__DOT__cmd_done = __Vdly__tb_sd_init__DOT__cmd_done;
    vlSelfRef.tb_sd_init__DOT__cmd_busy = __Vdly__tb_sd_init__DOT__cmd_busy;
    vlSelfRef.tb_sd_init__DOT__init_inst__DOT__state 
        = __Vdly__tb_sd_init__DOT__init_inst__DOT__state;
    vlSelfRef.tb_sd_init__DOT__card_rca = __Vdly__tb_sd_init__DOT__card_rca;
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
    vlSelfRef.tb_sd_init__DOT__read_start = __Vdly__tb_sd_init__DOT__read_start;
    vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__state 
        = __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__state;
    vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__token_shift 
        = __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__token_shift;
    vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__byte_shift 
        = __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__byte_shift;
    vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__crc_shift 
        = __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__crc_shift;
    vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__bit_count 
        = __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__bit_count;
    vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__byte_count 
        = __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__byte_count;
    vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__crc_byte_count 
        = __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__crc_byte_count;
    vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__calculated_crc 
        = __Vdly__tb_sd_init__DOT__data_rx_inst__DOT__calculated_crc;
    vlSelfRef.tb_sd_init__DOT__response_start = __Vdly__tb_sd_init__DOT__response_start;
    vlSelfRef.tb_sd_init__DOT__response_type = __Vdly__tb_sd_init__DOT__response_type;
    vlSelfRef.tb_sd_init__DOT__response_inst__DOT__counter 
        = __Vdly__tb_sd_init__DOT__response_inst__DOT__counter;
    vlSelfRef.tb_sd_init__DOT__response_inst__DOT__active_response_type 
        = __Vdly__tb_sd_init__DOT__response_inst__DOT__active_response_type;
    vlSelfRef.tb_sd_init__DOT__response_inst__DOT__state 
        = __Vdly__tb_sd_init__DOT__response_inst__DOT__state;
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
}

VL_INLINE_OPT void Vtb_sd_init___024root___nba_comb__TOP__0(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sd_init__DOT__sd_cmd = (((IData)(vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_oe) 
                                          & (IData)(vlSelfRef.tb_sd_init__DOT__uut_cmd__DOT__cmd_out)) 
                                         | ((IData)(vlSelfRef.tb_sd_init__DOT__card_cmd_oe) 
                                            & (IData)(vlSelfRef.tb_sd_init__DOT__card_cmd_out)));
    vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__crc16_next_bit 
        = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__calculated_crc), 1U) 
                      ^ (0x1021U & (- (IData)((IData)(
                                                      (((IData)(vlSelfRef.tb_sd_init__DOT__data_rx_inst__DOT__calculated_crc) 
                                                        >> 0xfU) 
                                                       ^ (IData)(vlSelfRef.tb_sd_init__DOT__card_dat0))))))));
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

void Vtb_sd_init___024root___timing_resume(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hed8007ad__0.resume(
                                                   "@([changed] tb_sd_init.cmd_busy)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h5163263f__0.resume(
                                                   "@(negedge tb_sd_init.sd_clk)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h8a59d431__0.resume(
                                                   "@([changed] tb_sd_init.response_start)");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h7fa966f5__0.resume(
                                                   "@([changed] tb_sd_init.response_busy)");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hb97569e7__0.resume(
                                                   "@([changed] (tb_sd_init.read_start | tb_sd_init.read_busy))");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h5163257e__0.resume(
                                                   "@(posedge tb_sd_init.sd_clk)");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h45ed6d6c__0.resume(
                                                   "@([changed] (tb_sd_init.init_done | tb_sd_init.init_error))");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_sd_init___024root___timing_commit(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hed8007ad__0.commit(
                                                   "@([changed] tb_sd_init.cmd_busy)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h5163263f__0.commit(
                                                   "@(negedge tb_sd_init.sd_clk)");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h8a59d431__0.commit(
                                                   "@([changed] tb_sd_init.response_start)");
    }
    if ((! (0x20ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h7fa966f5__0.commit(
                                                   "@([changed] tb_sd_init.response_busy)");
    }
    if ((! (0x40ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hb97569e7__0.commit(
                                                   "@([changed] (tb_sd_init.read_start | tb_sd_init.read_busy))");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h5163257e__0.commit(
                                                   "@(posedge tb_sd_init.sd_clk)");
    }
    if ((! (0x80ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h45ed6d6c__0.commit(
                                                   "@([changed] (tb_sd_init.init_done | tb_sd_init.init_error))");
    }
}

void Vtb_sd_init___024root___eval_triggers__act(Vtb_sd_init___024root* vlSelf);

bool Vtb_sd_init___024root___eval_phase__act(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<8> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_sd_init___024root___eval_triggers__act(vlSelf);
    Vtb_sd_init___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_sd_init___024root___timing_resume(vlSelf);
        Vtb_sd_init___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_sd_init___024root___eval_phase__nba(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_sd_init___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd_init___024root___dump_triggers__nba(Vtb_sd_init___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd_init___024root___dump_triggers__act(Vtb_sd_init___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_sd_init___024root___eval(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___eval\n"); );
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
            Vtb_sd_init___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/tb_sd_init.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_sd_init___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/tb_sd_init.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_sd_init___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_sd_init___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_sd_init___024root___eval_debug_assertions(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
