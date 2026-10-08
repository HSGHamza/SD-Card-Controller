// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_SD_RESPONSE_R2__SYMS_H_
#define VERILATED_VTB_SD_RESPONSE_R2__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_sd_response_r2.h"

// INCLUDE MODULE CLASSES
#include "Vtb_sd_response_r2___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_sd_response_r2__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_sd_response_r2* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_sd_response_r2___024root   TOP;

    // CONSTRUCTORS
    Vtb_sd_response_r2__Syms(VerilatedContext* contextp, const char* namep, Vtb_sd_response_r2* modelp);
    ~Vtb_sd_response_r2__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
