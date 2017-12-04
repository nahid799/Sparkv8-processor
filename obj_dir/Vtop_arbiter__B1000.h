// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _Vtop_arbiter__B1000_H_
#define _Vtop_arbiter__B1000_H_

#include "verilated.h"
#include "Vtop__Inlines.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vtop_arbiter__B1000) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__icache_req,0,0);
    VL_OUT8(__PVT__icache_reqack,0,0);
    VL_OUT8(__PVT__icache_comp,0,0);
    VL_IN8(__PVT__dcache_req,0,0);
    VL_OUT8(__PVT__dcache_reqack,0,0);
    VL_IN8(__PVT__dcache_rw,0,0);
    VL_OUT8(__PVT__dcache_comp,0,0);
    //char	__VpadToAlign7[1];
    VL_OUTW(__PVT__icache_data_out,511,0,16);
    VL_OUTW(__PVT__dcache_data_out,511,0,16);
    VL_INW(__PVT__dcache_data_in,511,0,16);
    VL_IN64(__PVT__icache_line_addr,57,0);
    VL_IN64(__PVT__dcache_line_addr,63,0);
    
    // LOCAL SIGNALS
    //char	__VpadToAlign220[4];
    VL_SIGW(__PVT__dcache_r,511,0,16);
    VL_SIGW(__PVT__dcache_w,511,0,16);
    VL_SIGW(__PVT__icache_r,511,0,16);
    VL_SIGW(__PVT__buffer,511,0,16);
    VL_SIG(__PVT__counter,31,0);
    VL_SIG(__PVT__conversion_done,31,0);
    VL_SIG(__PVT__state,31,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__dcache_comp,0,0);
    VL_SIG8(__Vdly__dcache_reqack,0,0);
    //char	__VpadToAlign498[2];
    VL_SIG(__Vdly__state,31,0);
    VL_SIGW(__Vdly__buffer,511,0,16);
    VL_SIG(__Vdly__counter,31,0);
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vtop_arbiter__B1000& operator= (const Vtop_arbiter__B1000&);	///< Copying not allowed
    Vtop_arbiter__B1000(const Vtop_arbiter__B1000&);	///< Copying not allowed
  public:
    Vtop_arbiter__B1000(const char* name="TOP");
    ~Vtop_arbiter__B1000();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    static void	_combo__TOP__v__core__Arbiter__2(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__core__Arbiter__3(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__core__Arbiter__4(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__core__Arbiter__5(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__core__Arbiter__7(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__core__Arbiter__1(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__core__Arbiter__6(Vtop__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
