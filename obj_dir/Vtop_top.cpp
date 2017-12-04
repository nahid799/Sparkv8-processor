// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_top.h"          // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_top) {
    VL_CELL (__PVT__uncore_bus, Vtop_Sysbus__Td);
    VL_CELL (__PVT__core, Vtop_Core__B0);
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
}

void Vtop_top::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_top::~Vtop_top() {
}

//--------------------
// Internal Methods

void Vtop_top::_initial__TOP__v__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vtop_top::_initial__TOP__v__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at top.sv:28
    VL_WRITEF("Initializing top, entry point = 0x%x\n",
	      64,vlTOPp->entry);
}
