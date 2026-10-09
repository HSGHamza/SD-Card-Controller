// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sd_data_rx.h for the primary calling header

#ifndef VERILATED_VTB_SD_DATA_RX___024ROOT_H_
#define VERILATED_VTB_SD_DATA_RX___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_sd_data_rx__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sd_data_rx___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_sd_data_rx__DOT__sd_clk;
    CData/*0:0*/ tb_sd_data_rx__DOT__done;
    CData/*0:0*/ tb_sd_data_rx__DOT__reset;
    CData/*0:0*/ tb_sd_data_rx__DOT__start;
    CData/*0:0*/ tb_sd_data_rx__DOT__sd_dat0;
    CData/*0:0*/ tb_sd_data_rx__DOT__valid;
    CData/*7:0*/ tb_sd_data_rx__DOT__data_byte;
    CData/*0:0*/ tb_sd_data_rx__DOT__data_write;
    CData/*0:0*/ tb_sd_data_rx__DOT__crc_valid;
    CData/*0:0*/ tb_sd_data_rx__DOT__done_seen;
    CData/*2:0*/ tb_sd_data_rx__DOT__dut__DOT__state;
    CData/*7:0*/ tb_sd_data_rx__DOT__dut__DOT__token_shift;
    CData/*7:0*/ tb_sd_data_rx__DOT__dut__DOT__byte_shift;
    CData/*2:0*/ tb_sd_data_rx__DOT__dut__DOT__bit_count;
    CData/*0:0*/ tb_sd_data_rx__DOT__dut__DOT__crc_byte_count;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sd_data_rx__DOT__done__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sd_data_rx__DOT__sd_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sd_data_rx__DOT__done_seen__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ tb_sd_data_rx__DOT__data_addr;
    SData/*15:0*/ tb_sd_data_rx__DOT__crc16_byte__Vstatic__crc;
    SData/*15:0*/ tb_sd_data_rx__DOT__dut__DOT__crc_shift;
    SData/*15:0*/ tb_sd_data_rx__DOT__dut__DOT__received_crc;
    SData/*15:0*/ tb_sd_data_rx__DOT__dut__DOT__calculated_crc;
    SData/*8:0*/ tb_sd_data_rx__DOT__dut__DOT__byte_count;
    SData/*15:0*/ tb_sd_data_rx__DOT__dut__DOT__crc16_next_bit;
    IData/*31:0*/ tb_sd_data_rx__DOT__write_count;
    IData/*31:0*/ tb_sd_data_rx__DOT__error_count;
    IData/*31:0*/ tb_sd_data_rx__DOT__pattern_byte__Vstatic__value;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h2a941096__0;
    VlTriggerScheduler __VtrigSched_h99e616b0__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_sd_data_rx__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_sd_data_rx___024root(Vtb_sd_data_rx__Syms* symsp, const char* v__name);
    ~Vtb_sd_data_rx___024root();
    VL_UNCOPYABLE(Vtb_sd_data_rx___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
