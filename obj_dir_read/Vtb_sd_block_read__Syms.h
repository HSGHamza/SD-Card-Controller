// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_SD_BLOCK_READ__SYMS_H_
#define VERILATED_VTB_SD_BLOCK_READ__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_sd_block_read.h"

// INCLUDE MODULE CLASSES
#include "Vtb_sd_block_read___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_sd_block_read__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_sd_block_read* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_sd_block_read___024root    TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_sd_block_read;
    VerilatedScope __Vscope_tb_sd_block_read__check;

    // CONSTRUCTORS
    Vtb_sd_block_read__Syms(VerilatedContext* contextp, const char* namep, Vtb_sd_block_read* modelp);
    ~Vtb_sd_block_read__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
