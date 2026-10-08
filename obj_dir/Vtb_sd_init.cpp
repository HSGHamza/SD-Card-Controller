// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_sd_init__pch.h"

//============================================================
// Constructors

Vtb_sd_init::Vtb_sd_init(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_sd_init__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_sd_init::Vtb_sd_init(const char* _vcname__)
    : Vtb_sd_init(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_sd_init::~Vtb_sd_init() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_sd_init___024root___eval_debug_assertions(Vtb_sd_init___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_sd_init___024root___eval_static(Vtb_sd_init___024root* vlSelf);
void Vtb_sd_init___024root___eval_initial(Vtb_sd_init___024root* vlSelf);
void Vtb_sd_init___024root___eval_settle(Vtb_sd_init___024root* vlSelf);
void Vtb_sd_init___024root___eval(Vtb_sd_init___024root* vlSelf);

void Vtb_sd_init::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_sd_init::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_sd_init___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_sd_init___024root___eval_static(&(vlSymsp->TOP));
        Vtb_sd_init___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_sd_init___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_sd_init___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_sd_init::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_sd_init::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_sd_init::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_sd_init___024root___eval_final(Vtb_sd_init___024root* vlSelf);

VL_ATTR_COLD void Vtb_sd_init::final() {
    Vtb_sd_init___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_sd_init::hierName() const { return vlSymsp->name(); }
const char* Vtb_sd_init::modelName() const { return "Vtb_sd_init"; }
unsigned Vtb_sd_init::threads() const { return 1; }
void Vtb_sd_init::prepareClone() const { contextp()->prepareClone(); }
void Vtb_sd_init::atClone() const {
    contextp()->threadPoolpOnClone();
}
