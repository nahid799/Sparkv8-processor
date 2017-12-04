// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_Sysbus__Td.h"   // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_Sysbus__Td) {
    // Reset internal values
    // Reset structure values
    __PVT__reset = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__req = VL_RAND_RESET_Q(64);
    __PVT__reqtag = VL_RAND_RESET_I(13);
    __PVT__reqcyc = VL_RAND_RESET_I(1);
    __PVT__respack = VL_RAND_RESET_I(1);
}

void Vtop_Sysbus__Td::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_Sysbus__Td::~Vtop_Sysbus__Td() {
}

//--------------------
// Internal Methods
