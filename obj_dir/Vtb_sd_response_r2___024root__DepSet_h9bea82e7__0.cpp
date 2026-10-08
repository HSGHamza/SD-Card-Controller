// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sd_response_r2.h for the primary calling header

#include "Vtb_sd_response_r2__pch.h"
#include "Vtb_sd_response_r2__Syms.h"
#include "Vtb_sd_response_r2___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd_response_r2___024root___dump_triggers__act(Vtb_sd_response_r2___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_sd_response_r2___024root___eval_triggers__act(Vtb_sd_response_r2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_response_r2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_response_r2___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_sd_response_r2__DOT__sd_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_response_r2__DOT__sd_clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.tb_sd_response_r2__DOT__sd_clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_response_r2__DOT__sd_clk__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.tb_sd_response_r2__DOT__response_done) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_response_r2__DOT__response_done__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_response_r2__DOT__sd_clk__0 
        = vlSelfRef.tb_sd_response_r2__DOT__sd_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_response_r2__DOT__response_done__0 
        = vlSelfRef.tb_sd_response_r2__DOT__response_done;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sd_response_r2___024root___dump_triggers__act(vlSelf);
    }
#endif
}
