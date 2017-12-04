// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _Vtop___024unit_H_
#define _Vtop___024unit_H_

#include "verilated.h"
#include "Vtop__Inlines.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vtop___024unit) {
  public:
    // CELLS
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign12[4];
    Vtop__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vtop___024unit& operator= (const Vtop___024unit&);	///< Copying not allowed
    Vtop___024unit(const Vtop___024unit&);	///< Copying not allowed
  public:
    Vtop___024unit(const char* name="TOP");
    ~Vtop___024unit();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
