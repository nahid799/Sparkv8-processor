// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _Vtop_top_H_
#define _Vtop_top_H_

#include "verilated.h"
#include "Vtop__Inlines.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;
class Vtop_Sysbus__Td;
class Vtop_Core__B0;
class VerilatedVcd;

//----------

VL_MODULE(Vtop_top) {
  public:
    // CELLS
    Vtop_Sysbus__Td*   	__PVT__uncore_bus;
    Vtop_Core__B0*     	__PVT__core;
    
    // PORTS
    VL_IN8(reset,0,0);
    VL_IN8(clk,0,0);
    VL_OUT8(reqcyc,0,0);
    VL_IN8(respcyc,0,0);
    VL_IN8(reqack,0,0);
    VL_OUT8(respack,0,0);
    VL_OUT16(reqtag,12,0);
    VL_IN16(resptag,12,0);
    //char	__VpadToAlign10[6];
    VL_IN64(entry,63,0);
    VL_OUT64(req,63,0);
    VL_IN64(resp,63,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign52[4];
    Vtop__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vtop_top& operator= (const Vtop_top&);	///< Copying not allowed
    Vtop_top(const Vtop_top&);	///< Copying not allowed
  public:
    Vtop_top(const char* name="TOP");
    ~Vtop_top();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    static void	_initial__TOP__v__1(Vtop__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
