// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"              // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (__PVT__v, Vtop_top);
    VL_CELL (__PVT____024unit, Vtop___024unit);
    // Reset internal values
    
    // Reset structure values
    entry = VL_RAND_RESET_Q(64);
    reset = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    req = VL_RAND_RESET_Q(64);
    reqtag = VL_RAND_RESET_I(13);
    resp = VL_RAND_RESET_Q(64);
    resptag = VL_RAND_RESET_I(13);
    reqcyc = VL_RAND_RESET_I(1);
    respcyc = VL_RAND_RESET_I(1);
    reqack = VL_RAND_RESET_I(1);
    respack = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__core__IC__DOT__check_counter = VL_RAND_RESET_I(5);
    __Vchglast__TOP__v__core__DC__DOT__check_counter = VL_RAND_RESET_I(5);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vtop::eval() {
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vtop::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vtop::_combo__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_combo__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->respack = vlSymsp->TOP__v__uncore_bus.__PVT__respack;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->req = vlSymsp->TOP__v__uncore_bus.__PVT__req;
    vlTOPp->reqcyc = vlSymsp->TOP__v__uncore_bus.__PVT__reqcyc;
    vlTOPp->reqtag = vlSymsp->TOP__v__uncore_bus.__PVT__reqtag;
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__v__core__Arbiter._combo__TOP__v__core__Arbiter__2(vlSymsp);
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlSymsp->TOP__v__core._sequent__TOP__v__core__4(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__v__core__Arbiter._sequent__TOP__v__core__Arbiter__3(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlSymsp->TOP__v__core._sequent__TOP__v__core__5(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) ^ (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlSymsp->TOP__v__core._sequent__TOP__v__core__6(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlSymsp->TOP__v__core._sequent__TOP__v__core__7(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlSymsp->TOP__v__core._sequent__TOP__v__core__8(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlSymsp->TOP__v__core._sequent__TOP__v__core__9(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__v__core__Arbiter._sequent__TOP__v__core__Arbiter__4(vlSymsp);
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlSymsp->TOP__v__core._sequent__TOP__v__core__10(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__v__core__Arbiter._sequent__TOP__v__core__Arbiter__5(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlSymsp->TOP__v__core._sequent__TOP__v__core__11(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x80U | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__v__core__Arbiter._sequent__TOP__v__core__Arbiter__7(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlSymsp->TOP__v__core._sequent__TOP__v__core__12(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x100U | vlTOPp->__Vm_traceActivity);
    }
    vlSymsp->TOP__v__core._combo__TOP__v__core__13(vlSymsp);
    if (((IData)(vlTOPp->clk) ^ (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlSymsp->TOP__v__core._sequent__TOP__v__core__15(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x200U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlSymsp->TOP__v__core._sequent__TOP__v__core__16(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x400U | vlTOPp->__Vm_traceActivity);
    }
    vlSymsp->TOP__v__core._combo__TOP__v__core__17(vlSymsp);
    if (((IData)(vlTOPp->clk) ^ (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlSymsp->TOP__v__core._sequent__TOP__v__core__19(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x800U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__core._initial__TOP__v__core__1(vlSymsp);
    vlSymsp->TOP__v._initial__TOP__v__1(vlSymsp);
}

void Vtop::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__core__Arbiter._settle__TOP__v__core__Arbiter__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__v__core._settle__TOP__v__core__2(vlSymsp);
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->_sequent__TOP__3(vlSymsp);
    vlSymsp->TOP__v__core__Arbiter._settle__TOP__v__core__Arbiter__6(vlSymsp);
    vlSymsp->TOP__v__core._settle__TOP__v__core__14(vlSymsp);
    vlSymsp->TOP__v__core._settle__TOP__v__core__18(vlSymsp);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__v__core.__PVT__IC__DOT__check_counter ^ vlTOPp->__Vchglast__TOP__v__core__IC__DOT__check_counter)
	 | (vlSymsp->TOP__v__core.__PVT__DC__DOT__check_counter ^ vlTOPp->__Vchglast__TOP__v__core__DC__DOT__check_counter));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__core.__PVT__IC__DOT__check_counter ^ vlTOPp->__Vchglast__TOP__v__core__IC__DOT__check_counter))) VL_PRINTF("	CHANGE: Icache.sv:86: IC.check_counter\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__core.__PVT__DC__DOT__check_counter ^ vlTOPp->__Vchglast__TOP__v__core__DC__DOT__check_counter))) VL_PRINTF("	CHANGE: Dcache.sv:85: DC.check_counter\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__v__core__IC__DOT__check_counter 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__check_counter;
    vlTOPp->__Vchglast__TOP__v__core__DC__DOT__check_counter 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__check_counter;
    return __req;
}
