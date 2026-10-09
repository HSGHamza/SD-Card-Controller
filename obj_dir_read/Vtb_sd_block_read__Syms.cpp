// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_sd_block_read__pch.h"
#include "Vtb_sd_block_read.h"
#include "Vtb_sd_block_read___024root.h"

// FUNCTIONS
Vtb_sd_block_read__Syms::~Vtb_sd_block_read__Syms()
{
}

Vtb_sd_block_read__Syms::Vtb_sd_block_read__Syms(VerilatedContext* contextp, const char* namep, Vtb_sd_block_read* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(1388);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_sd_block_read.configure(this, name(), "tb_sd_block_read", "tb_sd_block_read", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_sd_block_read__check.configure(this, name(), "tb_sd_block_read.check", "check", "<null>", -9, VerilatedScope::SCOPE_OTHER);
}
