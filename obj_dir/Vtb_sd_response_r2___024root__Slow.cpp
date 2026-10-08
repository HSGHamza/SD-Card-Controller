// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sd_response_r2.h for the primary calling header

#include "Vtb_sd_response_r2__pch.h"
#include "Vtb_sd_response_r2__Syms.h"
#include "Vtb_sd_response_r2___024root.h"

void Vtb_sd_response_r2___024root___ctor_var_reset(Vtb_sd_response_r2___024root* vlSelf);

Vtb_sd_response_r2___024root::Vtb_sd_response_r2___024root(Vtb_sd_response_r2__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_sd_response_r2___024root___ctor_var_reset(this);
}

void Vtb_sd_response_r2___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_sd_response_r2___024root::~Vtb_sd_response_r2___024root() {
}
