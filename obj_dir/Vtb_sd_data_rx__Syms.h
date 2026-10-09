// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_SD_DATA_RX__SYMS_H_
#define VERILATED_VTB_SD_DATA_RX__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_sd_data_rx.h"

// INCLUDE MODULE CLASSES
#include "Vtb_sd_data_rx___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_sd_data_rx__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_sd_data_rx* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_sd_data_rx___024root       TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_sd_data_rx;

    // CONSTRUCTORS
    Vtb_sd_data_rx__Syms(VerilatedContext* contextp, const char* namep, Vtb_sd_data_rx* modelp);
    ~Vtb_sd_data_rx__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
