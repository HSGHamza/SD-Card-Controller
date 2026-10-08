// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sd_response_r2.h for the primary calling header

#ifndef VERILATED_VTB_SD_RESPONSE_R2___024ROOT_H_
#define VERILATED_VTB_SD_RESPONSE_R2___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_sd_response_r2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sd_response_r2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_sd_response_r2__DOT__sd_clk;
    CData/*0:0*/ tb_sd_response_r2__DOT__reset;
    CData/*0:0*/ tb_sd_response_r2__DOT__response_start;
    CData/*0:0*/ tb_sd_response_r2__DOT__cmd;
    CData/*2:0*/ tb_sd_response_r2__DOT__response_type;
    CData/*0:0*/ tb_sd_response_r2__DOT__response_done;
    CData/*0:0*/ tb_sd_response_r2__DOT__response_valid;
    CData/*6:0*/ tb_sd_response_r2__DOT__response_crc;
    CData/*1:0*/ tb_sd_response_r2__DOT__dut__DOT__state;
    CData/*7:0*/ tb_sd_response_r2__DOT__dut__DOT__counter;
    CData/*2:0*/ tb_sd_response_r2__DOT__dut__DOT__active_response_type;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sd_response_r2__DOT__sd_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sd_response_r2__DOT__response_done__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VlWide<4>/*119:0*/ tb_sd_response_r2__DOT__response_long;
    VlWide<5>/*135:0*/ tb_sd_response_r2__DOT__dut__DOT__response_shift_reg;
    VlWide<5>/*135:0*/ tb_sd_response_r2__DOT__dut__DOT__response_next;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hb2435fb6__0;
    VlTriggerScheduler __VtrigSched_hb2436077__0;
    VlTriggerScheduler __VtrigSched_haca534ba__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_sd_response_r2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_sd_response_r2___024root(Vtb_sd_response_r2__Syms* symsp, const char* v__name);
    ~Vtb_sd_response_r2___024root();
    VL_UNCOPYABLE(Vtb_sd_response_r2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
