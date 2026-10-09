// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sd_block_read.h for the primary calling header

#ifndef VERILATED_VTB_SD_BLOCK_READ___024ROOT_H_
#define VERILATED_VTB_SD_BLOCK_READ___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_sd_block_read__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sd_block_read___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_sd_block_read__DOT__sd_clk;
    CData/*0:0*/ tb_sd_block_read__DOT__reset;
    CData/*0:0*/ tb_sd_block_read__DOT__start;
    CData/*0:0*/ tb_sd_block_read__DOT__busy;
    CData/*0:0*/ tb_sd_block_read__DOT__done;
    CData/*0:0*/ tb_sd_block_read__DOT__error;
    CData/*5:0*/ tb_sd_block_read__DOT__cmd_index;
    CData/*0:0*/ tb_sd_block_read__DOT__cmd_start;
    CData/*0:0*/ tb_sd_block_read__DOT__cmd_done;
    CData/*2:0*/ tb_sd_block_read__DOT__response_type;
    CData/*0:0*/ tb_sd_block_read__DOT__response_start;
    CData/*0:0*/ tb_sd_block_read__DOT__response_done;
    CData/*0:0*/ tb_sd_block_read__DOT__response_valid;
    CData/*5:0*/ tb_sd_block_read__DOT__response_cmd;
    CData/*6:0*/ tb_sd_block_read__DOT__response_crc;
    CData/*0:0*/ tb_sd_block_read__DOT__read_start;
    CData/*0:0*/ tb_sd_block_read__DOT__read_done;
    CData/*0:0*/ tb_sd_block_read__DOT__read_valid;
    CData/*0:0*/ tb_sd_block_read__DOT__read_crc_valid;
    CData/*2:0*/ tb_sd_block_read__DOT__dut__DOT__state;
    CData/*0:0*/ tb_sd_block_read__DOT__dut__DOT__response_crc_valid;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sd_block_read__DOT__sd_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sd_block_read__DOT__cmd_start__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sd_block_read__DOT__response_start__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sd_block_read__DOT__read_start__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_sd_block_read__DOT__block_address;
    IData/*31:0*/ tb_sd_block_read__DOT__cmd_arg;
    IData/*31:0*/ tb_sd_block_read__DOT__response_status;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hac6c5971__0;
    VlTriggerScheduler __VtrigSched_h32197c21__0;
    VlTriggerScheduler __VtrigSched_hf7c49fa8__0;
    VlTriggerScheduler __VtrigSched_h61e86e35__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_sd_block_read__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_sd_block_read___024root(Vtb_sd_block_read__Syms* symsp, const char* v__name);
    ~Vtb_sd_block_read___024root();
    VL_UNCOPYABLE(Vtb_sd_block_read___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
