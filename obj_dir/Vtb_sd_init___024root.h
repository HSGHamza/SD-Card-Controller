// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sd_init.h for the primary calling header

#ifndef VERILATED_VTB_SD_INIT___024ROOT_H_
#define VERILATED_VTB_SD_INIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_sd_init__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sd_init___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_sd_init__DOT__sd_clk;
    CData/*0:0*/ tb_sd_init__DOT__reset;
    CData/*0:0*/ tb_sd_init__DOT__start;
    CData/*0:0*/ tb_sd_init__DOT__init_done;
    CData/*0:0*/ tb_sd_init__DOT__init_error;
    CData/*5:0*/ tb_sd_init__DOT__cmd_index;
    CData/*0:0*/ tb_sd_init__DOT__cmd_start;
    CData/*0:0*/ tb_sd_init__DOT__response_start;
    CData/*0:0*/ tb_sd_init__DOT__cmd_busy;
    CData/*0:0*/ tb_sd_init__DOT__cmd_done;
    CData/*0:0*/ tb_sd_init__DOT__response_busy;
    CData/*0:0*/ tb_sd_init__DOT__response_done;
    CData/*0:0*/ tb_sd_init__DOT__response_valid;
    CData/*5:0*/ tb_sd_init__DOT__response_cmd;
    CData/*6:0*/ tb_sd_init__DOT__response_crc;
    CData/*0:0*/ tb_sd_init__DOT__sd_cmd;
    CData/*2:0*/ tb_sd_init__DOT__response_type;
    CData/*0:0*/ tb_sd_init__DOT__card_cmd_oe;
    CData/*0:0*/ tb_sd_init__DOT__card_cmd_out;
    CData/*0:0*/ tb_sd_init__DOT____Vlvbound_h8e7b2171__0;
    CData/*6:0*/ tb_sd_init__DOT__uut_init__DOT__crc7_value;
    CData/*0:0*/ tb_sd_init__DOT__uut_init__DOT__crc_valid;
    CData/*3:0*/ tb_sd_init__DOT__uut_init__DOT__state;
    CData/*5:0*/ tb_sd_init__DOT__uut_cmd__DOT__counter;
    CData/*0:0*/ tb_sd_init__DOT__uut_cmd__DOT__cmd_out;
    CData/*0:0*/ tb_sd_init__DOT__uut_cmd__DOT__cmd_oe;
    CData/*1:0*/ tb_sd_init__DOT__uut_cmd__DOT__state;
    CData/*1:0*/ tb_sd_init__DOT__uut_response__DOT__state;
    CData/*7:0*/ tb_sd_init__DOT__uut_response__DOT__counter;
    CData/*2:0*/ tb_sd_init__DOT__uut_response__DOT__active_response_type;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sd_init__DOT__sd_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sd_init__DOT__cmd_busy__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sd_init__DOT__response_start__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sd_init__DOT__response_busy__0;
    CData/*0:0*/ __Vtrigprevexpr_he1db2254__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_sd_init__DOT__cmd_arg;
    IData/*31:0*/ tb_sd_init__DOT__response_status;
    IData/*31:0*/ tb_sd_init__DOT__acmd41_count;
    VlWide<5>/*135:0*/ tb_sd_init__DOT__uut_response__DOT__response_shift_reg;
    VlWide<5>/*135:0*/ tb_sd_init__DOT__uut_response__DOT__response_next;
    IData/*31:0*/ __VactIterCount;
    QData/*47:0*/ tb_sd_init__DOT__received_command;
    QData/*47:0*/ tb_sd_init__DOT__response_data;
    QData/*47:0*/ tb_sd_init__DOT__uut_cmd__DOT__cmd_shift_reg;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hed8007ad__0;
    VlTriggerScheduler __VtrigSched_h5163263f__0;
    VlTriggerScheduler __VtrigSched_h8a59d431__0;
    VlTriggerScheduler __VtrigSched_h7fa966f5__0;
    VlTriggerScheduler __VtrigSched_h45ed6d6c__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<7> __VactTriggered;
    VlTriggerVec<7> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_sd_init__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_sd_init___024root(Vtb_sd_init__Syms* symsp, const char* v__name);
    ~Vtb_sd_init___024root();
    VL_UNCOPYABLE(Vtb_sd_init___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
