// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vtop__Syms_H_
#define _Vtop__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vtop.h"
#include "Vtop_top.h"
#include "Vtop___024unit.h"
#include "Vtop_Core__B0.h"
#include "Vtop_arbiter__B1000.h"
#include "Vtop_Sysbus__Td.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vtop__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    Vtop*                          TOPp;
    Vtop___024unit                 TOP____024unit;
    Vtop_top                       TOP__v;
    Vtop_Core__B0                  TOP__v__core;
    Vtop_arbiter__B1000            TOP__v__core__Arbiter;
    Vtop_Sysbus__Td                TOP__v__uncore_bus;
    
    // COVERAGE
    
    // SCOPE NAMES
    
    // CREATORS
    Vtop__Syms(Vtop* topp, const char* namep);
    ~Vtop__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
