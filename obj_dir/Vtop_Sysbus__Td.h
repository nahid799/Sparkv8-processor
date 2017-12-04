// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _Vtop_Sysbus__Td_H_
#define _Vtop_Sysbus__Td_H_

#include "verilated.h"
#include "Vtop__Inlines.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vtop_Sysbus__Td) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    //char	__VpadToAlign2[2];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__reqcyc,0,0);
    VL_SIG8(__PVT__respack,0,0);
    VL_SIG16(__PVT__reqtag,12,0);
    //char	__VpadToAlign12[4];
    VL_SIG64(__PVT__req,63,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vtop_Sysbus__Td& operator= (const Vtop_Sysbus__Td&);	///< Copying not allowed
    Vtop_Sysbus__Td(const Vtop_Sysbus__Td&);	///< Copying not allowed
  public:
    Vtop_Sysbus__Td(const char* name="TOP");
    ~Vtop_Sysbus__Td();
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
