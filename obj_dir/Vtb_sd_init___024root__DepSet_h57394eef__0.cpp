// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sd_init.h for the primary calling header

#include "Vtb_sd_init__pch.h"
#include "Vtb_sd_init__Syms.h"
#include "Vtb_sd_init___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd_init___024root___dump_triggers__act(Vtb_sd_init___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_sd_init___024root___eval_triggers__act(Vtb_sd_init___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sd_init__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd_init___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_he1db2254__0;
    __Vtrigcurrexpr_he1db2254__0 = 0;
    __Vtrigcurrexpr_he1db2254__0 = ((IData)(vlSelfRef.tb_sd_init__DOT__init_done) 
                                    | (IData)(vlSelfRef.tb_sd_init__DOT__init_error));
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_sd_init__DOT__sd_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_init__DOT__sd_clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tb_sd_init__DOT__cmd_busy) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_init__DOT__cmd_busy__0)));
    vlSelfRef.__VactTriggered.set(3U, ((~ (IData)(vlSelfRef.tb_sd_init__DOT__sd_clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_init__DOT__sd_clk__0)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.tb_sd_init__DOT__response_start) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_init__DOT__response_start__0)));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSelfRef.tb_sd_init__DOT__response_busy) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_init__DOT__response_busy__0)));
    vlSelfRef.__VactTriggered.set(6U, ((IData)(__Vtrigcurrexpr_he1db2254__0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr_he1db2254__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_init__DOT__sd_clk__0 
        = vlSelfRef.tb_sd_init__DOT__sd_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_init__DOT__cmd_busy__0 
        = vlSelfRef.tb_sd_init__DOT__cmd_busy;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_init__DOT__response_start__0 
        = vlSelfRef.tb_sd_init__DOT__response_start;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd_init__DOT__response_busy__0 
        = vlSelfRef.tb_sd_init__DOT__response_busy;
    vlSelfRef.__Vtrigprevexpr_he1db2254__0 = __Vtrigcurrexpr_he1db2254__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
        vlSelfRef.__VactTriggered.set(5U, 1U);
        vlSelfRef.__VactTriggered.set(6U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sd_init___024root___dump_triggers__act(vlSelf);
    }
#endif
}
