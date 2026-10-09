// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sd_block_read.h for the primary calling header

#include "Vtb_sd_block_read__pch.h"
#include "Vtb_sd_block_read__Syms.h"
#include "Vtb_sd_block_read___024root.h"

void Vtb_sd_block_read___024root___ctor_var_reset(Vtb_sd_block_read___024root* vlSelf);

Vtb_sd_block_read___024root::Vtb_sd_block_read___024root(Vtb_sd_block_read__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_sd_block_read___024root___ctor_var_reset(this);
}

void Vtb_sd_block_read___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_sd_block_read___024root::~Vtb_sd_block_read___024root() {
}
