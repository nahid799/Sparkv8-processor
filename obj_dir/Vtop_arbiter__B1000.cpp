// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_arbiter__B1000.h" // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_arbiter__B1000) {
    // Reset internal values
    // Reset structure values
    __PVT__icache_req = VL_RAND_RESET_I(1);
    __PVT__icache_line_addr = VL_RAND_RESET_Q(58);
    __PVT__icache_reqack = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512,__PVT__icache_data_out);
    __PVT__icache_comp = VL_RAND_RESET_I(1);
    __PVT__dcache_req = VL_RAND_RESET_I(1);
    __PVT__dcache_line_addr = VL_RAND_RESET_Q(64);
    __PVT__dcache_reqack = VL_RAND_RESET_I(1);
    __PVT__dcache_rw = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512,__PVT__dcache_data_out);
    VL_RAND_RESET_W(512,__PVT__dcache_data_in);
    __PVT__dcache_comp = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512,__PVT__dcache_r);
    VL_RAND_RESET_W(512,__PVT__dcache_w);
    VL_RAND_RESET_W(512,__PVT__icache_r);
    VL_RAND_RESET_W(512,__PVT__buffer);
    __PVT__counter = VL_RAND_RESET_I(32);
    __PVT__conversion_done = VL_RAND_RESET_I(32);
    __PVT__state = 0;
    __Vdly__state = 0;
    __Vdly__dcache_comp = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512,__Vdly__buffer);
    __Vdly__dcache_reqack = VL_RAND_RESET_I(1);
    __Vdly__counter = VL_RAND_RESET_I(32);
}

void Vtop_arbiter__B1000::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_arbiter__B1000::~Vtop_arbiter__B1000() {
}

//--------------------
// Internal Methods

void Vtop_arbiter__B1000::_settle__TOP__v__core__Arbiter__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_arbiter__B1000::_settle__TOP__v__core__Arbiter__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at arbiter.sv:59
    // ALWAYS at arbiter.sv:77
    // ALWAYS at arbiter.sv:91
    vlSymsp->TOP__v__core__Arbiter.__PVT__conversion_done = 1U;
}

VL_INLINE_OPT void Vtop_arbiter__B1000::_combo__TOP__v__core__Arbiter__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_arbiter__B1000::_combo__TOP__v__core__Arbiter__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__uncore_bus.__PVT__respack = vlTOPp->respcyc;
}

VL_INLINE_OPT void Vtop_arbiter__B1000::_sequent__TOP__v__core__Arbiter__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_arbiter__B1000::_sequent__TOP__v__core__Arbiter__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__core__Arbiter.__Vdly__state = vlSymsp->TOP__v__core__Arbiter.__PVT__state;
    vlSymsp->TOP__v__core__Arbiter.__Vdly__dcache_comp 
	= vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_comp;
    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0U] 
	= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0U];
    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[1U] 
	= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[1U];
    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[2U] 
	= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[2U];
    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[3U] 
	= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[3U];
    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[4U] 
	= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[4U];
    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[5U] 
	= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[5U];
    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[6U] 
	= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[6U];
    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[7U] 
	= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[7U];
    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[8U] 
	= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[8U];
    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[9U] 
	= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[9U];
    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0xaU] 
	= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xaU];
    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0xbU] 
	= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xbU];
    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0xcU] 
	= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xcU];
    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0xdU] 
	= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xdU];
    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0xeU] 
	= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xeU];
    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0xfU] 
	= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xfU];
    vlSymsp->TOP__v__core__Arbiter.__Vdly__dcache_reqack 
	= vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_reqack;
    vlSymsp->TOP__v__core__Arbiter.__Vdly__counter 
	= vlSymsp->TOP__v__core__Arbiter.__PVT__counter;
}

VL_INLINE_OPT void Vtop_arbiter__B1000::_sequent__TOP__v__core__Arbiter__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_arbiter__B1000::_sequent__TOP__v__core__Arbiter__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at arbiter.sv:104
    if (vlTOPp->reset) {
	vlSymsp->TOP__v__core__Arbiter.__Vdly__state = 0U;
	vlSymsp->TOP__v__core__Arbiter.__PVT__icache_comp = 0U;
	vlSymsp->TOP__v__core__Arbiter.__Vdly__dcache_comp = 0U;
    } else {
	if ((0U == vlSymsp->TOP__v__core__Arbiter.__PVT__state)) {
	    vlSymsp->TOP__v__uncore_bus.__PVT__req = VL_ULL(0);
	    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0U] = 0U;
	    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[1U] = 0U;
	    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[2U] = 0U;
	    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[3U] = 0U;
	    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[4U] = 0U;
	    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[5U] = 0U;
	    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[6U] = 0U;
	    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[7U] = 0U;
	    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[8U] = 0U;
	    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[9U] = 0U;
	    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0xaU] = 0U;
	    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0xbU] = 0U;
	    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0xcU] = 0U;
	    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0xdU] = 0U;
	    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0xeU] = 0U;
	    vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0xfU] = 0U;
	    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_comp = 0U;
	    vlSymsp->TOP__v__core__Arbiter.__Vdly__dcache_comp = 0U;
	    vlSymsp->TOP__v__uncore_bus.__PVT__reqcyc = 0U;
	    vlSymsp->TOP__v__uncore_bus.__PVT__reqtag = 0U;
	    if (((IData)(vlSymsp->TOP__v__core.__PVT__icache_bus_req) 
		 & (~ (IData)(vlSymsp->TOP__v__core.__PVT__dcache_bus_req)))) {
		vlSymsp->TOP__v__core__Arbiter.__Vdly__state = 1U;
		vlSymsp->TOP__v__core__Arbiter.__PVT__icache_reqack = 1U;
		vlSymsp->TOP__v__uncore_bus.__PVT__reqcyc = 1U;
		vlSymsp->TOP__v__uncore_bus.__PVT__req 
		    = (vlSymsp->TOP__v__core.__PVT__icache_line_addr 
		       << 6U);
		vlSymsp->TOP__v__uncore_bus.__PVT__reqtag = 0x1100U;
	    } else {
		if (vlSymsp->TOP__v__core.__PVT__dcache_bus_req) {
		    vlSymsp->TOP__v__core__Arbiter.__Vdly__state = 2U;
		    vlSymsp->TOP__v__core__Arbiter.__Vdly__dcache_reqack = 1U;
		    if (vlSymsp->TOP__v__core.__PVT__dcache_bus_rw) {
			vlSymsp->TOP__v__uncore_bus.__PVT__reqcyc = 1U;
			vlSymsp->TOP__v__uncore_bus.__PVT__reqtag = 0x1100U;
			vlSymsp->TOP__v__uncore_bus.__PVT__req 
			    = vlSymsp->TOP__v__core.__Vcellout__DC__bus_req_addr;
			vlSymsp->TOP__v__core__Arbiter.__Vdly__state = 2U;
			vlSymsp->TOP__v__core__Arbiter.__Vdly__counter = 0U;
		    } else {
			vlSymsp->TOP__v__uncore_bus.__PVT__reqcyc = 1U;
			vlSymsp->TOP__v__uncore_bus.__PVT__reqtag = 0x100U;
			vlSymsp->TOP__v__uncore_bus.__PVT__req 
			    = vlSymsp->TOP__v__core.__Vcellout__DC__bus_req_addr;
			vlSymsp->TOP__v__core__Arbiter.__Vdly__state = 2U;
			vlSymsp->TOP__v__core__Arbiter.__Vdly__counter = 0U;
		    }
		}
	    }
	} else {
	    if ((1U == vlSymsp->TOP__v__core__Arbiter.__PVT__state)) {
		if (vlTOPp->reqack) {
		    vlSymsp->TOP__v__core__Arbiter.__Vdly__state = 3U;
		    vlSymsp->TOP__v__uncore_bus.__PVT__reqcyc = 0U;
		    vlSymsp->TOP__v__core__Arbiter.__Vdly__counter = 0U;
		    vlSymsp->TOP__v__uncore_bus.__PVT__req = VL_ULL(0);
		    vlSymsp->TOP__v__uncore_bus.__PVT__reqtag = 0U;
		}
	    } else {
		if ((2U == vlSymsp->TOP__v__core__Arbiter.__PVT__state)) {
		    if (vlTOPp->reqack) {
			vlSymsp->TOP__v__uncore_bus.__PVT__reqcyc = 0U;
			vlSymsp->TOP__v__uncore_bus.__PVT__req = VL_ULL(0);
			vlSymsp->TOP__v__uncore_bus.__PVT__reqtag = 0U;
			if (vlSymsp->TOP__v__core.__PVT__dcache_bus_rw) {
			    vlSymsp->TOP__v__core__Arbiter.__Vdly__state = 4U;
			    vlSymsp->TOP__v__core__Arbiter.__Vdly__counter = 0U;
			} else {
			    vlSymsp->TOP__v__core__Arbiter.__Vdly__state = 5U;
			    vlSymsp->TOP__v__core__Arbiter.__Vdly__counter = 0U;
			}
		    }
		} else {
		    if ((3U == vlSymsp->TOP__v__core__Arbiter.__PVT__state)) {
			if (vlTOPp->respcyc) {
			    vlSymsp->TOP__v__core__Arbiter.__Vdly__counter 
				= ((IData)(1U) + vlSymsp->TOP__v__core__Arbiter.__PVT__counter);
			    vlSymsp->TOP__v__uncore_bus.__PVT__reqcyc = 0U;
			    VL_ASSIGNSEL_WIIQ(64,(0x1ffU 
						  & VL_MULS_III(9,32,32, (IData)(0x40U), vlSymsp->TOP__v__core__Arbiter.__PVT__counter)), vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer, vlTOPp->resp);
			} else {
			    if (VL_LTS_III(1,32,32, 0U, vlSymsp->TOP__v__core__Arbiter.__PVT__counter)) {
				vlSymsp->TOP__v__core__Arbiter.__Vdly__state = 6U;
			    }
			}
		    } else {
			if ((4U == vlSymsp->TOP__v__core__Arbiter.__PVT__state)) {
			    if (vlTOPp->respcyc) {
				VL_ASSIGNSEL_WIIQ(64,
						  (0x1ffU 
						   & VL_MULS_III(9,32,32, (IData)(0x40U), vlSymsp->TOP__v__core__Arbiter.__PVT__counter)), vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer, vlTOPp->resp);
				vlSymsp->TOP__v__uncore_bus.__PVT__reqcyc = 0U;
				vlSymsp->TOP__v__core__Arbiter.__Vdly__counter 
				    = ((IData)(1U) 
				       + vlSymsp->TOP__v__core__Arbiter.__PVT__counter);
			    } else {
				if (VL_LTS_III(1,32,32, 0U, vlSymsp->TOP__v__core__Arbiter.__PVT__counter)) {
				    vlSymsp->TOP__v__core__Arbiter.__Vdly__state = 7U;
				}
			    }
			} else {
			    if ((5U == vlSymsp->TOP__v__core__Arbiter.__PVT__state)) {
				if ((1U & (~ ((IData)(vlTOPp->resptag) 
					      >> 0xcU)))) {
				    if (VL_GTS_III(1,32,32, 8U, vlSymsp->TOP__v__core__Arbiter.__PVT__counter)) {
					vlSymsp->TOP__v__uncore_bus.__PVT__req 
					    = (((0U 
						 == 
						 (0x1fU 
						  & VL_MULS_III(9,32,32, (IData)(0x40U), vlSymsp->TOP__v__core__Arbiter.__PVT__counter)))
						 ? VL_ULL(0)
						 : 
						((QData)((IData)(
								 vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[
								 ((IData)(2U) 
								  + 
								  (0xfU 
								   & (VL_MULS_III(9,32,32, (IData)(0x40U), vlSymsp->TOP__v__core__Arbiter.__PVT__counter) 
								      >> 5U)))])) 
						 << 
						 ((IData)(0x40U) 
						  - 
						  (0x1fU 
						   & VL_MULS_III(9,32,32, (IData)(0x40U), vlSymsp->TOP__v__core__Arbiter.__PVT__counter))))) 
					       | (((QData)((IData)(
								   vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[
								   ((IData)(1U) 
								    + 
								    (0xfU 
								     & (VL_MULS_III(9,32,32, (IData)(0x40U), vlSymsp->TOP__v__core__Arbiter.__PVT__counter) 
									>> 5U)))])) 
						   << 
						   ((0U 
						     == 
						     (0x1fU 
						      & VL_MULS_III(9,32,32, (IData)(0x40U), vlSymsp->TOP__v__core__Arbiter.__PVT__counter)))
						     ? 0x20U
						     : 
						    ((IData)(0x20U) 
						     - 
						     (0x1fU 
						      & VL_MULS_III(9,32,32, (IData)(0x40U), vlSymsp->TOP__v__core__Arbiter.__PVT__counter))))) 
						  | ((QData)((IData)(
								     vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[
								     (0xfU 
								      & (VL_MULS_III(9,32,32, (IData)(0x40U), vlSymsp->TOP__v__core__Arbiter.__PVT__counter) 
									 >> 5U))])) 
						     >> 
						     (0x1fU 
						      & VL_MULS_III(9,32,32, (IData)(0x40U), vlSymsp->TOP__v__core__Arbiter.__PVT__counter)))));
					vlSymsp->TOP__v__core__Arbiter.__Vdly__counter 
					    = ((IData)(1U) 
					       + vlSymsp->TOP__v__core__Arbiter.__PVT__counter);
				    } else {
					vlSymsp->TOP__v__uncore_bus.__PVT__reqcyc = 0U;
					vlSymsp->TOP__v__core__Arbiter.__Vdly__state = 7U;
				    }
				}
			    } else {
				if ((6U == vlSymsp->TOP__v__core__Arbiter.__PVT__state)) {
				    vlSymsp->TOP__v__core__Arbiter.__Vdly__state = 0U;
				    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_comp = 1U;
				    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0U] 
					= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0U];
				    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[1U] 
					= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[1U];
				    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[2U] 
					= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[2U];
				    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[3U] 
					= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[3U];
				    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[4U] 
					= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[4U];
				    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[5U] 
					= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[5U];
				    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[6U] 
					= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[6U];
				    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[7U] 
					= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[7U];
				    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[8U] 
					= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[8U];
				    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[9U] 
					= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[9U];
				    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xaU] 
					= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xaU];
				    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xbU] 
					= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xbU];
				    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xcU] 
					= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xcU];
				    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xdU] 
					= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xdU];
				    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xeU] 
					= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xeU];
				    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xfU] 
					= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xfU];
				    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_reqack = 0U;
				} else {
				    if ((7U == vlSymsp->TOP__v__core__Arbiter.__PVT__state)) {
					if (vlSymsp->TOP__v__core.__PVT__dcache_bus_rw) {
					    vlSymsp->TOP__v__core__Arbiter.__Vdly__state = 0U;
					    vlSymsp->TOP__v__core__Arbiter.__Vdly__dcache_comp = 1U;
					    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0U] 
						= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0U];
					    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[1U] 
						= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[1U];
					    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[2U] 
						= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[2U];
					    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[3U] 
						= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[3U];
					    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[4U] 
						= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[4U];
					    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[5U] 
						= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[5U];
					    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[6U] 
						= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[6U];
					    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[7U] 
						= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[7U];
					    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[8U] 
						= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[8U];
					    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[9U] 
						= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[9U];
					    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xaU] 
						= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xaU];
					    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xbU] 
						= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xbU];
					    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xcU] 
						= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xcU];
					    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xdU] 
						= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xdU];
					    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xeU] 
						= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xeU];
					    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xfU] 
						= vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xfU];
					    vlSymsp->TOP__v__core__Arbiter.__Vdly__dcache_reqack = 0U;
					} else {
					    vlSymsp->TOP__v__core__Arbiter.__Vdly__dcache_reqack = 0U;
					    vlSymsp->TOP__v__core__Arbiter.__Vdly__dcache_comp = 1U;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__v__core__Arbiter.__PVT__state = vlSymsp->TOP__v__core__Arbiter.__Vdly__state;
    vlSymsp->TOP__v__core__Arbiter.__PVT__counter = vlSymsp->TOP__v__core__Arbiter.__Vdly__counter;
    vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0U] 
	= vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0U];
    vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[1U] 
	= vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[1U];
    vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[2U] 
	= vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[2U];
    vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[3U] 
	= vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[3U];
    vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[4U] 
	= vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[4U];
    vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[5U] 
	= vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[5U];
    vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[6U] 
	= vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[6U];
    vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[7U] 
	= vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[7U];
    vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[8U] 
	= vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[8U];
    vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[9U] 
	= vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[9U];
    vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xaU] 
	= vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0xaU];
    vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xbU] 
	= vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0xbU];
    vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xcU] 
	= vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0xcU];
    vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xdU] 
	= vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0xdU];
    vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xeU] 
	= vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0xeU];
    vlSymsp->TOP__v__core__Arbiter.__PVT__buffer[0xfU] 
	= vlSymsp->TOP__v__core__Arbiter.__Vdly__buffer[0xfU];
    // ALWAYS at arbiter.sv:48
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[1U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[2U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[3U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[4U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[5U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[6U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[7U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[8U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[9U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xaU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xbU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xcU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xdU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xeU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xfU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[1U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[1U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[1U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[1U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[1U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[1U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[1U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[1U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[2U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[2U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[2U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[2U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[2U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[2U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[2U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[2U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[2U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[2U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[2U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[2U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[3U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[3U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[3U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[3U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[3U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[3U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[3U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[3U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[3U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[3U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[3U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[3U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[4U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[4U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[4U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[4U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[4U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[4U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[4U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[4U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[4U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[4U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[4U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[4U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[5U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[5U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[5U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[5U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[5U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[5U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[5U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[5U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[5U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[5U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[5U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[5U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[6U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[6U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[6U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[6U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[6U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[6U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[6U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[6U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[6U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[6U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[6U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[6U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[7U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[7U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[7U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[7U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[7U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[7U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[7U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[7U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[7U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[7U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[7U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[7U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[8U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[8U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[8U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[8U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[8U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[8U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[8U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[8U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[8U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[8U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[8U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[8U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[9U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[9U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[9U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[9U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[9U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[9U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[9U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[9U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[9U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[9U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[9U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[9U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xaU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xaU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xaU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xaU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xaU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xaU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xaU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xaU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xaU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xaU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xaU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xaU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xbU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xbU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xbU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xbU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xbU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xbU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xbU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xbU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xbU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xbU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xbU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xbU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xcU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xcU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xcU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xcU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xcU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xcU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xcU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xcU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xcU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xcU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xcU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xcU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xdU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xdU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xdU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xdU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xdU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xdU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xdU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xdU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xdU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xdU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xdU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xdU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xeU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xeU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xeU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xeU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xeU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xeU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xeU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xeU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xeU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xeU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xeU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xeU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xfU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xfU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xfU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xfU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xfU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xfU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xfU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xfU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xfU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xfU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xfU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xfU]));
}

VL_INLINE_OPT void Vtop_arbiter__B1000::_sequent__TOP__v__core__Arbiter__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_arbiter__B1000::_sequent__TOP__v__core__Arbiter__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at arbiter.sv:87
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[2U] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[1U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[2U] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[1U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[1U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[1U] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[1U] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[1U] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0U] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xffU & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xfU] 
		       >> 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff00U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xfU] 
			 >> 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xfU] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xfU] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xfU] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xeU] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xfU] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xeU] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xeU] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xeU] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xeU] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xdU] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xeU] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xdU] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xdU] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xdU] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xdU] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xcU] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xdU] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xcU] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xcU] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xcU] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xcU] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xbU] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xcU] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xbU] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xbU] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xbU] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xbU] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xaU] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xbU] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xaU] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xaU] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xaU] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xaU] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[9U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xaU] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[9U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[9U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[9U] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[9U] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[8U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[9U] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[8U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[8U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[8U] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[8U] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[7U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[8U] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[7U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[7U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[7U] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[7U] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[6U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[7U] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[6U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[6U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[6U] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[6U] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[5U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[6U] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[5U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[5U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[5U] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[5U] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[4U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[5U] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[4U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[4U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[4U] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[4U] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[3U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[4U] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[3U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[3U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[3U] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[3U] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[2U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[3U] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[2U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[2U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[2U] 
			     << 0x18U)));
}

void Vtop_arbiter__B1000::_settle__TOP__v__core__Arbiter__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_arbiter__B1000::_settle__TOP__v__core__Arbiter__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at arbiter.sv:48
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[1U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[2U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[3U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[4U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[5U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[6U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[7U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[8U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[9U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xaU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xbU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xcU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xdU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xeU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xfU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[1U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[1U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[1U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[1U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[1U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[1U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[1U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[1U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[2U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[2U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[2U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[2U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[2U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[2U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[2U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[2U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[2U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[2U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[2U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[2U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[3U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[3U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[3U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[3U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[3U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[3U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[3U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[3U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[3U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[3U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[3U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[3U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[4U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[4U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[4U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[4U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[4U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[4U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[4U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[4U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[4U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[4U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[4U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[4U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[5U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[5U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[5U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[5U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[5U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[5U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[5U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[5U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[5U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[5U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[5U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[5U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[6U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[6U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[6U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[6U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[6U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[6U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[6U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[6U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[6U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[6U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[6U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[6U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[7U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[7U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[7U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[7U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[7U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[7U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[7U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[7U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[7U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[7U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[7U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[7U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[8U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[8U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[8U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[8U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[8U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[8U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[8U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[8U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[8U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[8U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[8U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[8U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[9U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[9U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[9U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[9U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[9U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[9U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[9U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[9U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[9U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[9U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[9U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[9U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xaU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xaU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xaU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xaU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xaU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xaU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xaU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xaU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xaU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xaU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xaU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xaU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xbU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xbU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xbU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xbU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xbU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xbU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xbU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xbU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xbU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xbU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xbU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xbU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xcU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xcU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xcU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xcU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xcU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xcU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xcU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xcU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xcU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xcU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xcU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xcU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xdU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xdU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xdU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xdU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xdU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xdU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xdU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xdU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xdU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xdU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xdU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xdU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xeU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xeU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xeU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xeU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xeU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xeU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xeU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xeU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xeU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xeU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xeU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xeU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xfU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xfU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xfU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xfU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xfU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xfU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xfU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xfU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xfU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xfU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xfU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r[0xfU]));
    // ALWAYS at arbiter.sv:65
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[1U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[2U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[3U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[4U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[5U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[6U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[7U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[8U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[9U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xaU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xbU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xcU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xdU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xeU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xfU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[1U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[1U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[1U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[1U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[1U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[1U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[1U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[1U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[2U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[2U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[2U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[2U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[2U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[2U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[2U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[2U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[2U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[2U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[2U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[2U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[3U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[3U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[3U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[3U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[3U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[3U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[3U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[3U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[3U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[3U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[3U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[3U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[4U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[4U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[4U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[4U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[4U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[4U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[4U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[4U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[4U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[4U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[4U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[4U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[5U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[5U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[5U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[5U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[5U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[5U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[5U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[5U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[5U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[5U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[5U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[5U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[6U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[6U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[6U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[6U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[6U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[6U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[6U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[6U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[6U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[6U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[6U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[6U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[7U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[7U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[7U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[7U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[7U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[7U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[7U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[7U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[7U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[7U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[7U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[7U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[8U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[8U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[8U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[8U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[8U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[8U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[8U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[8U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[8U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[8U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[8U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[8U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[9U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[9U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[9U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[9U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[9U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[9U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[9U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[9U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[9U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[9U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[9U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[9U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xaU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xaU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xaU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xaU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xaU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xaU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xaU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xaU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xaU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xaU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xaU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xaU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xbU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xbU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xbU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xbU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xbU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xbU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xbU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xbU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xbU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xbU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xbU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xbU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xcU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xcU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xcU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xcU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xcU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xcU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xcU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xcU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xcU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xcU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xcU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xcU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xdU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xdU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xdU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xdU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xdU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xdU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xdU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xdU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xdU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xdU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xdU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xdU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xeU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xeU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xeU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xeU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xeU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xeU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xeU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xeU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xeU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xeU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xeU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xeU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xfU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xfU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xfU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xfU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xfU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xfU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xfU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xfU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xfU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xfU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xfU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xfU]));
    // ALWAYS at arbiter.sv:87
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[2U] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[1U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[2U] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[1U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[1U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[1U] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[1U] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[1U] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0U] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xffU & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xfU] 
		       >> 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff00U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xfU] 
			 >> 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xfU] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xfU] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xfU] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xeU] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xfU] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xeU] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xeU] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xeU] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xeU] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xdU] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xeU] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xdU] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xdU] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xdU] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xdU] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xcU] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xdU] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xcU] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xcU] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xcU] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xcU] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xbU] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xcU] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xbU] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xbU] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xbU] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xbU] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xaU] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xbU] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xaU] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xaU] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xaU] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xaU] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[9U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xaU] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[9U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[9U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[9U] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[9U] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[8U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[9U] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[8U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[8U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[8U] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[8U] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[7U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[8U] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[7U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[7U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[7U] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[7U] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[6U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[7U] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[6U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[6U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[6U] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[6U] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[5U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[6U] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[5U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[5U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[5U] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[5U] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[4U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[5U] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[4U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[4U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[4U] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[4U] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[3U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[4U] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[3U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[3U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[0U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[3U] 
			     << 0x18U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xffU & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[3U] 
			<< 8U) | (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[2U] 
				  >> 0x18U))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff00U & ((vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[3U] 
			  << 0x18U) | (0xffff00U & 
				       (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[2U] 
					>> 8U)))));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff0000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[2U] 
			   << 8U)));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w[1U]) 
	   | (0xff000000U & (vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[2U] 
			     << 0x18U)));
}

VL_INLINE_OPT void Vtop_arbiter__B1000::_sequent__TOP__v__core__Arbiter__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_arbiter__B1000::_sequent__TOP__v__core__Arbiter__7\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_reqack 
	= vlSymsp->TOP__v__core__Arbiter.__Vdly__dcache_reqack;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_comp 
	= vlSymsp->TOP__v__core__Arbiter.__Vdly__dcache_comp;
    // ALWAYS at arbiter.sv:65
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[1U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[2U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[3U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[4U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[5U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[6U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[7U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[8U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[9U] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xaU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xbU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xcU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xdU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xeU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xfU] = 0U;
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[1U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[1U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[1U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[1U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[1U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[1U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[1U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[1U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[1U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[1U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[1U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[1U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[2U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[2U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[2U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[2U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[2U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[2U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[2U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[2U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[2U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[2U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[2U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[2U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[3U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[3U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[3U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[3U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[3U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[3U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[3U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[3U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[3U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[3U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[3U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[3U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[4U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[4U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[4U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[4U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[4U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[4U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[4U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[4U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[4U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[4U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[4U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[4U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[5U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[5U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[5U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[5U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[5U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[5U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[5U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[5U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[5U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[5U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[5U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[5U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[6U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[6U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[6U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[6U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[6U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[6U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[6U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[6U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[6U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[6U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[6U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[6U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[7U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[7U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[7U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[7U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[7U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[7U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[7U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[7U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[7U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[7U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[7U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[7U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[8U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[8U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[8U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[8U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[8U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[8U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[8U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[8U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[8U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[8U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[8U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[8U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[9U] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[9U]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[9U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[9U] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[9U]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[9U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[9U] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[9U]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[9U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[9U] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[9U]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[9U]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xaU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xaU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xaU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xaU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xaU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xaU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xaU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xaU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xaU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xaU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xaU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xaU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xbU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xbU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xbU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xbU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xbU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xbU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xbU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xbU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xbU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xbU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xbU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xbU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xcU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xcU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xcU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xcU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xcU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xcU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xcU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xcU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xcU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xcU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xcU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xcU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xdU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xdU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xdU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xdU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xdU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xdU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xdU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xdU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xdU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xdU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xdU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xdU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xeU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xeU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xeU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xeU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xeU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xeU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xeU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xeU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xeU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xeU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xeU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xeU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xfU] 
	= ((0xffffff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xfU]) 
	   | (0xffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xfU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xfU] 
	= ((0xffff00ffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xfU]) 
	   | (0xff00U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xfU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xfU] 
	= ((0xff00ffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xfU]) 
	   | (0xff0000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xfU]));
    vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xfU] 
	= ((0xffffffU & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xfU]) 
	   | (0xff000000U & vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r[0xfU]));
}
