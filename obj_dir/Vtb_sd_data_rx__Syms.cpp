// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_sd_data_rx__pch.h"
#include "Vtb_sd_data_rx.h"
#include "Vtb_sd_data_rx___024root.h"

// FUNCTIONS
Vtb_sd_data_rx__Syms::~Vtb_sd_data_rx__Syms()
{
}

Vtb_sd_data_rx__Syms::Vtb_sd_data_rx__Syms(VerilatedContext* contextp, const char* namep, Vtb_sd_data_rx* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(79);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_sd_data_rx.configure(this, name(), "tb_sd_data_rx", "tb_sd_data_rx", "<null>", -9, VerilatedScope::SCOPE_OTHER);
}
