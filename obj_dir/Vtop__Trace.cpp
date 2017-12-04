// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop* t=(Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vtop::traceChgThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity 
					      >> 0xbU))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
				 | (vlTOPp->__Vm_traceActivity 
				    >> 3U)) | (vlTOPp->__Vm_traceActivity 
					       >> 8U)) 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 0xbU))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 6U))))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 7U))))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 8U)) | (vlTOPp->__Vm_traceActivity 
					      >> 0xaU))))) {
	    vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 9U))))) {
	    vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 0xbU))))) {
	    vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				>> 3U) | (vlTOPp->__Vm_traceActivity 
					  >> 8U))))) {
	    vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x80U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x100U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x200U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__20(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				>> 9U) | (vlTOPp->__Vm_traceActivity 
					  >> 0xaU))))) {
	    vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x400U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__22(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtop::traceChgThis__2(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlSymsp->TOP__v__core__Arbiter.__PVT__conversion_done),32);
    }
}

void Vtop::traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,(vlSymsp->TOP__v__uncore_bus.__PVT__respack));
	vcdp->chgBus  (c+3,(vlSymsp->TOP__v__core.__PVT__IC__DOT__age_w),32);
	vcdp->chgBit  (c+4,(vlSymsp->TOP__v__core.__PVT__IC__DOT__age_en));
	vcdp->chgBit  (c+5,(vlSymsp->TOP__v__core.__PVT__IC__DOT__update_done));
	vcdp->chgBus  (c+7,(vlSymsp->TOP__v__core.__PVT__IC__DOT__max_index),9);
	vcdp->chgBus  (c+8,(vlSymsp->TOP__v__core.__PVT__IC__DOT__max_age),32);
	vcdp->chgBus  (c+9,(vlSymsp->TOP__v__core.__PVT__IC__DOT__check_counter),5);
	vcdp->chgBus  (c+6,(vlSymsp->TOP__v__core.__PVT__IC__DOT__index),9);
	vcdp->chgBus  (c+10,(vlSymsp->TOP__v__core.__PVT__DC__DOT__age_w),32);
	vcdp->chgBit  (c+11,(vlSymsp->TOP__v__core.__PVT__DC__DOT__age_en));
	vcdp->chgBit  (c+12,(vlSymsp->TOP__v__core.__PVT__DC__DOT__update_done));
	vcdp->chgBus  (c+14,(vlSymsp->TOP__v__core.__PVT__DC__DOT__max_index),9);
	vcdp->chgBus  (c+15,(vlSymsp->TOP__v__core.__PVT__DC__DOT__max_age),32);
	vcdp->chgBus  (c+16,(vlSymsp->TOP__v__core.__PVT__DC__DOT__check_counter),5);
	vcdp->chgBus  (c+13,(vlSymsp->TOP__v__core.__PVT__DC__DOT__index),9);
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+17,(vlSymsp->TOP__v__core.__PVT__fetch_offset_wrap));
	vcdp->chgBit  (c+18,(vlSymsp->TOP__v__core.__PVT__decode_offset_wrap));
    }
}

void Vtop::traceChgThis__5(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+19,(vlSymsp->TOP__v__core.__PVT__can_decode));
    }
}

void Vtop::traceChgThis__6(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+20,(vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out),512);
    }
}

void Vtop::traceChgThis__7(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+36,(vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_w),512);
    }
}

void Vtop::traceChgThis__8(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+52,(vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out),512);
    }
}

void Vtop::traceChgThis__9(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+68,(vlSymsp->TOP__v__core.__PVT__psr),32);
	vcdp->chgBus  (c+69,((0x1fU & vlSymsp->TOP__v__core.__PVT__psr)),32);
	vcdp->chgBus  (c+70,(((IData)(8U) + (0x1f0U 
					     & (vlSymsp->TOP__v__core.__PVT__psr 
						<< 4U)))),32);
    }
}

void Vtop::traceChgThis__10(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+71,(vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst),32);
    }
}

void Vtop::traceChgThis__11(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+72,(vlSymsp->TOP__v__core.__PVT__N));
	vcdp->chgBit  (c+73,(vlSymsp->TOP__v__core.__PVT__Z));
	vcdp->chgBit  (c+74,(vlSymsp->TOP__v__core.__PVT__C));
	vcdp->chgBit  (c+75,(vlSymsp->TOP__v__core.__PVT__V));
	vcdp->chgArray(c+76,(vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec),152);
	vcdp->chgBit  (c+81,(vlSymsp->TOP__v__core.__PVT__decode__DOT__comb_done));
    }
}

void Vtop::traceChgThis__12(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+82,(vlSymsp->TOP__v__core.__PVT__fetch_offset_temp),7);
	vcdp->chgBus  (c+83,(vlSymsp->TOP__v__core.__PVT__decode_offset_temp),7);
	vcdp->chgBus  (c+84,(vlSymsp->TOP__v__core.__PVT__alu_val),32);
	vcdp->chgBus  (c+85,(vlSymsp->TOP__v__core.__PVT__alu_val_temp),32);
	vcdp->chgBit  (c+86,(vlSymsp->TOP__v__core.__PVT__alu_busy));
	vcdp->chgBit  (c+87,(vlSymsp->TOP__v__core.__PVT__alu_done));
	vcdp->chgBit  (c+88,(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber15));
	vcdp->chgBit  (c+89,(vlSymsp->TOP__v__core.__PVT__tag_overflow));
	vcdp->chgBit  (c+90,(vlSymsp->TOP__v__core.__PVT__trap));
	vcdp->chgBus  (c+91,(vlSymsp->TOP__v__core.__PVT__IC__DOT__tag__DOT__i),32);
	vcdp->chgBus  (c+92,(vlSymsp->TOP__v__core.__PVT__IC__DOT__state__DOT__i),32);
	vcdp->chgBus  (c+93,(vlSymsp->TOP__v__core.__PVT__DC__DOT__tag__DOT__i),32);
	vcdp->chgBus  (c+94,(vlSymsp->TOP__v__core.__PVT__DC__DOT__state__DOT__i),32);
	vcdp->chgBit  (c+95,(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11));
	vcdp->chgBit  (c+96,(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12));
	vcdp->chgBit  (c+97,(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13));
	vcdp->chgBit  (c+98,(vlSymsp->TOP__v__core.__Vcellout__alu__C));
	vcdp->chgBus  (c+99,(vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt),5);
	vcdp->chgQuad (c+100,(vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64),64);
	vcdp->chgBit  (c+102,(vlSymsp->TOP__v__core.__PVT__alu__DOT__temp));
	vcdp->chgBus  (c+103,(vlSymsp->TOP__v__core.__PVT__alu__DOT__pivot),32);
	vcdp->chgQuad (c+104,(vlSymsp->TOP__v__core.__PVT__alu__DOT__product),64);
	vcdp->chgBus  (c+106,(vlSymsp->TOP__v__core.__PVT__alu__DOT__ALU_state),32);
    }
}

void Vtop::traceChgThis__13(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+107,(vlSymsp->TOP__v__core.__PVT__decode_buffer),1024);
	vcdp->chgBus  (c+139,(vlSymsp->TOP__v__core.__PVT__icache_set_index),4);
	vcdp->chgBit  (c+140,(vlSymsp->TOP__v__core.__PVT__branch_flag));
	vcdp->chgArray(c+141,(vlSymsp->TOP__v__core.__PVT__temp),512);
	vcdp->chgBus  (c+157,(vlSymsp->TOP__v__core.__PVT__word_counter),32);
	vcdp->chgBit  (c+158,(vlSymsp->TOP__v__core.__PVT__go_to_call));
	vcdp->chgBit  (c+159,(vlSymsp->TOP__v__core.__PVT__alu_reqack));
	vcdp->chgBit  (c+160,(vlSymsp->TOP__v__core.__PVT__ready_for_wb));
    }
}

void Vtop::traceChgThis__14(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+161,(vlSymsp->TOP__v__core.__PVT__alu_req));
    }
}

void Vtop::traceChgThis__15(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+162,(vlSymsp->TOP__v__core.__PVT__icache_comp));
	vcdp->chgArray(c+163,(vlSymsp->TOP__v__core.__PVT__icache_data_out),512);
	vcdp->chgBit  (c+179,(vlSymsp->TOP__v__core.__PVT__icache_reqack));
	vcdp->chgQuad (c+180,(vlSymsp->TOP__v__core.__PVT__IC__DOT__tag_w),54);
	vcdp->chgBit  (c+182,(vlSymsp->TOP__v__core.__PVT__IC__DOT__tag_en));
	vcdp->chgBit  (c+183,(vlSymsp->TOP__v__core.__PVT__IC__DOT__state_w));
	vcdp->chgBit  (c+184,(vlSymsp->TOP__v__core.__PVT__IC__DOT__state_en));
	vcdp->chgBit  (c+185,(vlSymsp->TOP__v__core.__PVT__IC__DOT__hit));
	vcdp->chgBus  (c+186,(vlSymsp->TOP__v__core.__PVT__IC__DOT__set_counter),5);
	vcdp->chgBus  (c+187,(vlSymsp->TOP__v__core.__PVT__IC__DOT__cache_state),32);
	vcdp->chgBus  (c+188,(vlSymsp->TOP__v__core.__PVT__IC__DOT__state_w),2);
    }
}

void Vtop::traceChgThis__16(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+189,(vlSymsp->TOP__v__uncore_bus.__PVT__req),64);
	vcdp->chgBus  (c+191,(vlSymsp->TOP__v__uncore_bus.__PVT__reqtag),13);
	vcdp->chgBit  (c+192,(vlSymsp->TOP__v__uncore_bus.__PVT__reqcyc));
	vcdp->chgBit  (c+195,(vlSymsp->TOP__v__core.__PVT__icache_req));
	vcdp->chgArray(c+196,(vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r),512);
	vcdp->chgQuad (c+212,(vlSymsp->TOP__v__core.__PVT__IC__DOT__tag_r),54);
	vcdp->chgBit  (c+214,(vlSymsp->TOP__v__core.IC__DOT____Vcellout__state__readData));
	vcdp->chgBus  (c+215,(vlSymsp->TOP__v__core.__PVT__IC__DOT__age_r),32);
	vcdp->chgBus  (c+216,(vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i),32);
	vcdp->chgBus  (c+217,(vlSymsp->TOP__v__core.__PVT__IC__DOT__age__DOT__i),32);
	vcdp->chgBit  (c+193,(vlSymsp->TOP__v__core__Arbiter.__PVT__icache_reqack));
	vcdp->chgBit  (c+194,(vlSymsp->TOP__v__core__Arbiter.__PVT__icache_comp));
	vcdp->chgArray(c+218,(vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_r),512);
	vcdp->chgArray(c+234,(vlSymsp->TOP__v__core__Arbiter.__PVT__icache_r),512);
	vcdp->chgArray(c+250,(vlSymsp->TOP__v__core__Arbiter.__PVT__buffer),512);
	vcdp->chgBus  (c+266,(vlSymsp->TOP__v__core__Arbiter.__PVT__counter),32);
	vcdp->chgBus  (c+267,(vlSymsp->TOP__v__core__Arbiter.__PVT__state),32);
    }
}

void Vtop::traceChgThis__17(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+287,(vlSymsp->TOP__v__core.__Vcellout__DC__bus_req_addr),58);
	vcdp->chgBus  (c+289,(vlSymsp->TOP__v__core.__PVT__dcache_data_out),32);
	vcdp->chgArray(c+291,(vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w),512);
	vcdp->chgBus  (c+290,(vlSymsp->TOP__v__core.__PVT__IC__DOT__data_en),1);
	vcdp->chgQuad (c+307,(vlSymsp->TOP__v__core.__PVT__DC__DOT__tag_w),54);
	vcdp->chgBit  (c+309,(vlSymsp->TOP__v__core.__PVT__DC__DOT__tag_en));
	vcdp->chgBus  (c+310,(vlSymsp->TOP__v__core.__PVT__DC__DOT__state_w),2);
	vcdp->chgBit  (c+311,(vlSymsp->TOP__v__core.__PVT__DC__DOT__state_en));
	vcdp->chgBit  (c+312,(vlSymsp->TOP__v__core.__PVT__DC__DOT__hit));
	vcdp->chgBus  (c+313,(vlSymsp->TOP__v__core.__PVT__DC__DOT__set_counter),5);
	vcdp->chgBus  (c+314,(vlSymsp->TOP__v__core.__PVT__DC__DOT__counter),32);
	vcdp->chgBus  (c+315,(vlSymsp->TOP__v__core.__PVT__DC__DOT__cache_state),32);
	vcdp->chgBit  (c+268,(vlSymsp->TOP__v__core.__PVT__icache_bus_req));
	vcdp->chgBit  (c+269,(vlSymsp->TOP__v__core.__PVT__dcache_bus_req));
	vcdp->chgQuad (c+316,(vlSymsp->TOP__v__core.__Vcellout__DC__bus_req_addr),64);
	vcdp->chgBit  (c+270,(vlSymsp->TOP__v__core.__PVT__dcache_bus_rw));
	vcdp->chgArray(c+271,(vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out),512);
    }
}

void Vtop::traceChgThis__18(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+320,(vlSymsp->TOP__v__core.__PVT__dcache_req));
	vcdp->chgQuad (c+321,(vlSymsp->TOP__v__core.__PVT__dcache_line_addr),58);
	vcdp->chgBit  (c+323,(vlSymsp->TOP__v__core.__PVT__dcache_rw));
	vcdp->chgBus  (c+324,(vlSymsp->TOP__v__core.__PVT__dcache_data_in),32);
	vcdp->chgBus  (c+325,(vlSymsp->TOP__v__core.__PVT__dcache_word_select),4);
	vcdp->chgBus  (c+326,(vlSymsp->TOP__v__core.__PVT__dcache_set_index),4);
	vcdp->chgBit  (c+327,(vlSymsp->TOP__v__core.__PVT__go_to_memory));
	vcdp->chgBus  (c+328,(vlSymsp->TOP__v__core.__PVT__byte_select),2);
	vcdp->chgBit  (c+329,(vlSymsp->TOP__v__core.__PVT__byte_access));
	vcdp->chgBus  (c+330,(vlSymsp->TOP__v__core.__PVT__mem_state),32);
	vcdp->chgQuad (c+331,(vlSymsp->TOP__v__core.__PVT__dcache_line_addr),64);
	vcdp->chgArray(c+333,(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r),512);
	vcdp->chgQuad (c+349,(vlSymsp->TOP__v__core.__PVT__DC__DOT__tag_r),54);
	vcdp->chgBus  (c+351,(vlSymsp->TOP__v__core.__PVT__DC__DOT__state_r),2);
	vcdp->chgBus  (c+352,(vlSymsp->TOP__v__core.__PVT__DC__DOT__age_r),32);
	vcdp->chgBus  (c+353,(vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i),32);
	vcdp->chgBus  (c+354,(vlSymsp->TOP__v__core.__PVT__DC__DOT__age__DOT__i),32);
	vcdp->chgBit  (c+318,(vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_reqack));
	vcdp->chgBit  (c+319,(vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_comp));
    }
}

void Vtop::traceChgThis__19(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+355,(vlSymsp->TOP__v__core.__PVT__dcache_reqack));
	vcdp->chgBit  (c+356,(vlSymsp->TOP__v__core.__PVT__dcache_comp));
	vcdp->chgBus  (c+357,(vlSymsp->TOP__v__core.__PVT__rd),32);
	vcdp->chgBus  (c+358,(vlSymsp->TOP__v__core.__PVT__destination),32);
	vcdp->chgBus  (c+359,(vlSymsp->TOP__v__core.__PVT__op),2);
	vcdp->chgQuad (c+360,(vlSymsp->TOP__v__core.__PVT__new_fetch_rip),58);
	vcdp->chgBit  (c+362,(vlSymsp->TOP__v__core.__PVT__branch_taken_ch));
	vcdp->chgBus  (c+363,(vlSymsp->TOP__v__core.__PVT__source1),32);
	vcdp->chgBus  (c+364,(vlSymsp->TOP__v__core.__PVT__source2),32);
	vcdp->chgBus  (c+365,(vlSymsp->TOP__v__core.__PVT__op3),6);
	vcdp->chgBus  (c+366,(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en),16);
	vcdp->chgArray(c+367,(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w),512);
	vcdp->chgBus  (c+383,((1U & (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en))),1);
    }
}

void Vtop::traceChgThis__20(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+384,(vlSymsp->TOP__v__core.__PVT__fetch_state),32);
	vcdp->chgQuad (c+385,(vlSymsp->TOP__v__core.__PVT__fetch_rip),64);
	vcdp->chgQuad (c+387,(vlSymsp->TOP__v__core.__PVT__decode_rip),64);
	vcdp->chgBus  (c+389,(vlSymsp->TOP__v__core.__PVT__fetch_skip),6);
	vcdp->chgBus  (c+390,(vlSymsp->TOP__v__core.__PVT__decode_offset),7);
	vcdp->chgBit  (c+393,(vlSymsp->TOP__v__core.__PVT__branch_taken));
	vcdp->chgBit  (c+394,(vlSymsp->TOP__v__core.__PVT__alu_working));
	vcdp->chgBit  (c+395,(vlSymsp->TOP__v__core.__PVT__go_to_sys));
	vcdp->chgBit  (c+396,(vlSymsp->TOP__v__core.__PVT__go_to_mem));
	vcdp->chgBit  (c+397,(vlSymsp->TOP__v__core.__PVT__go_to_nonsense));
	vcdp->chgBit  (c+398,(vlSymsp->TOP__v__core.__PVT__go_to_branch));
	vcdp->chgBit  (c+399,(vlSymsp->TOP__v__core.__PVT__go_to_save));
	vcdp->chgBit  (c+400,(vlSymsp->TOP__v__core.__PVT__go_to_wb));
	vcdp->chgQuad (c+391,(vlSymsp->TOP__v__core.__PVT__icache_line_addr),58);
    }
}

void Vtop::traceChgThis__21(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+401,(((0U == vlSymsp->TOP__v__core.__PVT__fetch_state) 
			       & (0x20U > (0x7fU & 
					   ((IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset) 
					    - (IData)(vlSymsp->TOP__v__core.__PVT__decode_offset)))))));
    }
}

void Vtop::traceChgThis__22(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+402,(vlSymsp->TOP__v__core.__PVT__fetch_offset),7);
	vcdp->chgBus  (c+403,(vlSymsp->TOP__v__core.__PVT__reg_used),32);
	vcdp->chgBus  (c+404,(vlSymsp->TOP__v__core.__PVT__wim),32);
	vcdp->chgArray(c+405,(vlSymsp->TOP__v__core.__PVT__decoded_val),152);
	vcdp->chgBit  (c+410,(vlSymsp->TOP__v__core.__PVT__decode_ack));
	vcdp->chgBus  (c+411,(vlSymsp->TOP__v__core.__PVT__unnamedblk1__DOT__i),32);
	vcdp->chgBus  (c+412,(vlSymsp->TOP__v__core.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
	vcdp->chgBit  (c+413,(vlSymsp->TOP__v__core.__PVT__decode__DOT__done));
	vcdp->chgBus  (c+414,(vlSymsp->TOP__v__core.__PVT__decode__DOT__decode_state),32);
	vcdp->chgBus  (c+415,((3U & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
				     >> 0x16U))),2);
	vcdp->chgBus  (c+416,((0x3fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					>> 0x10U))),6);
    }
}

void Vtop::traceChgThis__23(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+421,(vlTOPp->req),64);
	vcdp->chgBus  (c+423,(vlTOPp->reqtag),13);
	vcdp->chgBit  (c+427,(vlTOPp->reqcyc));
	vcdp->chgBit  (c+430,(vlTOPp->respack));
	vcdp->chgQuad (c+417,(vlTOPp->entry),64);
	vcdp->chgBit  (c+419,(vlTOPp->reset));
	vcdp->chgBit  (c+420,(vlTOPp->clk));
	vcdp->chgQuad (c+424,(vlTOPp->resp),64);
	vcdp->chgBus  (c+426,(vlTOPp->resptag),13);
	vcdp->chgBit  (c+428,(vlTOPp->respcyc));
	vcdp->chgBit  (c+429,(vlTOPp->reqack));
    }
}
