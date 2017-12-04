// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_Core__B0.h"     // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_Core__B0) {
    VL_CELL (__PVT__Arbiter, Vtop_arbiter__B1000);
    // Reset internal values
    // Reset structure values
    __PVT__entry = VL_RAND_RESET_Q(64);
    __PVT__fetch_state = 0;
    __PVT__fetch_rip = VL_RAND_RESET_Q(64);
    __PVT__decode_rip = VL_RAND_RESET_Q(64);
    __PVT__fetch_skip = VL_RAND_RESET_I(6);
    __PVT__fetch_offset = VL_RAND_RESET_I(7);
    __PVT__decode_offset = VL_RAND_RESET_I(7);
    __PVT__prev_fetch_offset = VL_RAND_RESET_I(7);
    __PVT__fetch_offset_temp = VL_RAND_RESET_I(7);
    __PVT__decode_offset_temp = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(1024,__PVT__decode_buffer);
    __PVT__send_fetch_req = VL_RAND_RESET_I(1);
    __PVT__reg_used = VL_RAND_RESET_I(32);
    __PVT__psr = VL_RAND_RESET_I(32);
    __PVT__wim = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<518; ++__Vi0) {
	    __PVT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__oreg_start = VL_RAND_RESET_I(32);
    __PVT__N = VL_RAND_RESET_I(1);
    __PVT__Z = VL_RAND_RESET_I(1);
    __PVT__C = VL_RAND_RESET_I(1);
    __PVT__V = VL_RAND_RESET_I(1);
    __PVT__icache_bus_req = VL_RAND_RESET_I(1);
    __PVT__dcache_bus_req = VL_RAND_RESET_I(1);
    __PVT__dcache_bus_rw = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512,__PVT__dcache_bus_data_out);
    __PVT__icache_comp = VL_RAND_RESET_I(1);
    __PVT__icache_req = VL_RAND_RESET_I(1);
    __PVT__icache_line_addr = VL_RAND_RESET_Q(58);
    __PVT__icache_set_index = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(512,__PVT__icache_data_out);
    __PVT__dcache_req = VL_RAND_RESET_I(1);
    __PVT__dcache_line_addr = VL_RAND_RESET_Q(58);
    __PVT__dcache_reqack = VL_RAND_RESET_I(1);
    __PVT__dcache_rw = VL_RAND_RESET_I(1);
    __PVT__dcache_data_out = VL_RAND_RESET_I(32);
    __PVT__dcache_data_in = VL_RAND_RESET_I(32);
    __PVT__dcache_comp = VL_RAND_RESET_I(1);
    __PVT__dcache_word_select = VL_RAND_RESET_I(4);
    __PVT__dcache_set_index = VL_RAND_RESET_I(4);
    __Vcellout__DC__bus_req_addr = VL_RAND_RESET_Q(64);
    __PVT__branch_flag = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512,__PVT__temp);
    __PVT__word_counter = 0;
    VL_RAND_RESET_W(152,__PVT__decoded_val);
    __PVT__fetch_offset_wrap = VL_RAND_RESET_I(1);
    __PVT__decode_offset_wrap = VL_RAND_RESET_I(1);
    __PVT__branch_taken = VL_RAND_RESET_I(1);
    __PVT__decode_ack = VL_RAND_RESET_I(1);
    __Vcellinp__decode__dec_inst = VL_RAND_RESET_I(32);
    __PVT__can_decode = VL_RAND_RESET_I(1);
    __PVT__bytes_decoded_this_cycle = VL_RAND_RESET_I(4);
    __PVT__alu_working = VL_RAND_RESET_I(1);
    __PVT__rd = VL_RAND_RESET_I(32);
    __PVT__destination = VL_RAND_RESET_I(32);
    __PVT__alu_val = VL_RAND_RESET_I(32);
    __PVT__go_to_sys = VL_RAND_RESET_I(1);
    __PVT__op = VL_RAND_RESET_I(2);
    __PVT__go_to_call = VL_RAND_RESET_I(1);
    __PVT__new_fetch_rip = VL_RAND_RESET_Q(58);
    __PVT__branch_taken_ch = VL_RAND_RESET_I(1);
    __PVT__go_to_mem = VL_RAND_RESET_I(1);
    __PVT__go_to_nonsense = VL_RAND_RESET_I(1);
    __PVT__go_to_branch = VL_RAND_RESET_I(1);
    __PVT__go_to_save = VL_RAND_RESET_I(1);
    __PVT__alu_req = VL_RAND_RESET_I(1);
    __PVT__alu_reqack = VL_RAND_RESET_I(1);
    __PVT__source1 = VL_RAND_RESET_I(32);
    __PVT__source2 = VL_RAND_RESET_I(32);
    __PVT__op3 = VL_RAND_RESET_I(6);
    __Vcellout__alu____pinNumber15 = VL_RAND_RESET_I(32);
    __Vcellout__alu__C = VL_RAND_RESET_I(1);
    __Vcellout__alu____pinNumber13 = VL_RAND_RESET_I(1);
    __Vcellout__alu____pinNumber12 = VL_RAND_RESET_I(1);
    __Vcellout__alu____pinNumber11 = VL_RAND_RESET_I(1);
    __PVT__go_to_memory = VL_RAND_RESET_I(1);
    __PVT__alu_val_temp = VL_RAND_RESET_I(32);
    __PVT__ready_for_wb = VL_RAND_RESET_I(1);
    __PVT__go_to_wb = VL_RAND_RESET_I(1);
    __PVT__byte_select = VL_RAND_RESET_I(2);
    __PVT__byte_access = VL_RAND_RESET_I(1);
    __PVT__mem_state = 0;
    __PVT__icache_reqack = VL_RAND_RESET_I(1);
    __PVT__alu_busy = VL_RAND_RESET_I(1);
    __PVT__alu_done = VL_RAND_RESET_I(1);
    __PVT__tag_overflow = VL_RAND_RESET_I(1);
    __PVT__trap = VL_RAND_RESET_I(1);
    __PVT__unnamedblk1__DOT__i = 0;
    __PVT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    __Vlvbound1 = VL_RAND_RESET_I(32);
    __Vlvbound3 = VL_RAND_RESET_I(32);
    __Vlvbound4 = VL_RAND_RESET_I(32);
    __Vlvbound5 = VL_RAND_RESET_I(32);
    __Vlvbound6 = VL_RAND_RESET_I(32);
    __Vlvbound7 = VL_RAND_RESET_I(32);
    __Vlvbound8 = VL_RAND_RESET_I(32);
    __Vlvbound9 = VL_RAND_RESET_I(32);
    __Vlvbound10 = VL_RAND_RESET_I(32);
    __Vlvbound11 = VL_RAND_RESET_I(32);
    __Vlvbound12 = VL_RAND_RESET_I(32);
    __Vlvbound13 = VL_RAND_RESET_I(32);
    __Vlvbound14 = VL_RAND_RESET_I(32);
    __Vlvbound15 = VL_RAND_RESET_I(32);
    __Vlvbound16 = VL_RAND_RESET_I(32);
    __Vlvbound17 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512,__PVT__IC__DOT__data_r);
    __PVT__IC__DOT__data_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512,__PVT__IC__DOT__data_w);
    __PVT__IC__DOT__tag_r = VL_RAND_RESET_Q(54);
    __PVT__IC__DOT__tag_w = VL_RAND_RESET_Q(54);
    __PVT__IC__DOT__tag_en = VL_RAND_RESET_I(1);
    __PVT__IC__DOT__state_w = VL_RAND_RESET_I(1);
    __PVT__IC__DOT__state_en = VL_RAND_RESET_I(1);
    __PVT__IC__DOT__age_r = VL_RAND_RESET_I(32);
    __PVT__IC__DOT__age_w = VL_RAND_RESET_I(32);
    __PVT__IC__DOT__age_en = VL_RAND_RESET_I(1);
    __PVT__IC__DOT__hit = VL_RAND_RESET_I(1);
    __PVT__IC__DOT__update_done = VL_RAND_RESET_I(1);
    __PVT__IC__DOT__index = VL_RAND_RESET_I(9);
    __PVT__IC__DOT__max_index = VL_RAND_RESET_I(9);
    __PVT__IC__DOT__max_age = VL_RAND_RESET_I(32);
    __PVT__IC__DOT__set_counter = VL_RAND_RESET_I(5);
    __PVT__IC__DOT__check_counter = VL_RAND_RESET_I(5);
    IC__DOT____Vcellout__state__readData = VL_RAND_RESET_I(2);
    __PVT__IC__DOT__cache_state = 0;
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
	    VL_RAND_RESET_W(512,__PVT__IC__DOT__data__DOT__mem[__Vi0]);
    }}
    __PVT__IC__DOT__data__DOT__i = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
	    __PVT__IC__DOT__tag__DOT__mem[__Vi0] = VL_RAND_RESET_Q(54);
    }}
    __PVT__IC__DOT__tag__DOT__i = VL_RAND_RESET_I(32);
    IC__DOT__tag__DOT____Vlvbound1 = VL_RAND_RESET_Q(54);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
	    __PVT__IC__DOT__state__DOT__mem[__Vi0] = VL_RAND_RESET_I(2);
    }}
    __PVT__IC__DOT__state__DOT__i = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
	    __PVT__IC__DOT__age__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__IC__DOT__age__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512,__PVT__DC__DOT__data_r);
    __PVT__DC__DOT__data_en = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(512,__PVT__DC__DOT__data_w);
    __PVT__DC__DOT__tag_r = VL_RAND_RESET_Q(54);
    __PVT__DC__DOT__tag_w = VL_RAND_RESET_Q(54);
    __PVT__DC__DOT__tag_en = VL_RAND_RESET_I(1);
    __PVT__DC__DOT__state_r = VL_RAND_RESET_I(2);
    __PVT__DC__DOT__state_w = VL_RAND_RESET_I(2);
    __PVT__DC__DOT__state_en = VL_RAND_RESET_I(1);
    __PVT__DC__DOT__age_r = VL_RAND_RESET_I(32);
    __PVT__DC__DOT__age_w = VL_RAND_RESET_I(32);
    __PVT__DC__DOT__age_en = VL_RAND_RESET_I(1);
    __PVT__DC__DOT__hit = VL_RAND_RESET_I(1);
    __PVT__DC__DOT__update_done = VL_RAND_RESET_I(1);
    __PVT__DC__DOT__index = VL_RAND_RESET_I(9);
    __PVT__DC__DOT__max_index = VL_RAND_RESET_I(9);
    __PVT__DC__DOT__max_age = VL_RAND_RESET_I(32);
    __PVT__DC__DOT__set_counter = VL_RAND_RESET_I(5);
    __PVT__DC__DOT__check_counter = VL_RAND_RESET_I(5);
    __PVT__DC__DOT__counter = VL_RAND_RESET_I(32);
    __PVT__DC__DOT__cache_state = 0;
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
	    VL_RAND_RESET_W(512,__PVT__DC__DOT__data__DOT__mem[__Vi0]);
    }}
    __PVT__DC__DOT__data__DOT__i = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
	    __PVT__DC__DOT__tag__DOT__mem[__Vi0] = VL_RAND_RESET_Q(54);
    }}
    __PVT__DC__DOT__tag__DOT__i = VL_RAND_RESET_I(32);
    DC__DOT__tag__DOT____Vlvbound1 = VL_RAND_RESET_Q(54);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
	    __PVT__DC__DOT__state__DOT__mem[__Vi0] = VL_RAND_RESET_I(2);
    }}
    __PVT__DC__DOT__state__DOT__i = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
	    __PVT__DC__DOT__age__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__DC__DOT__age__DOT__i = VL_RAND_RESET_I(32);
    __PVT__decode__DOT__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(152,__PVT__decode__DOT__temp_dec);
    __PVT__decode__DOT__comb_done = VL_RAND_RESET_I(1);
    __PVT__decode__DOT__decode_state = 0;
    __PVT__alu__DOT__shcnt = VL_RAND_RESET_I(5);
    __PVT__alu__DOT__temp_64 = VL_RAND_RESET_Q(64);
    __PVT__alu__DOT__temp = VL_RAND_RESET_I(1);
    __PVT__alu__DOT__pivot = VL_RAND_RESET_I(32);
    __PVT__alu__DOT__product = VL_RAND_RESET_Q(64);
    __PVT__alu__DOT__ALU_state = 0;
    __Vfunc_get_index__0__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__0__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__1__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__1__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__2__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__2__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__3__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__3__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__4__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__4__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__5__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__5__index = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__6__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__6__index = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__6__win = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__6__cwpt = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__6__oregt = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__7__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__7__index = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__7__win = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__7__cwpt = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__7__oregt = VL_RAND_RESET_I(32);
    __Vfunc_get_index__8__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__8__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__9__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__9__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__10__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__10__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__11__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__11__index = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__12__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__12__index = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__12__win = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__12__cwpt = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__12__oregt = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__13__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__13__index = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__13__win = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__13__cwpt = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__13__oregt = VL_RAND_RESET_I(32);
    __Vfunc_get_index__14__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__14__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__15__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__15__index = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__16__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__16__index = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__16__win = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__16__cwpt = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__16__oregt = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__17__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__17__index = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__17__win = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__17__cwpt = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__17__oregt = VL_RAND_RESET_I(32);
    __Vfunc_get_index__18__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__18__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__19__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__19__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__20__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__20__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__21__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__21__index = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__22__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__22__index = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__22__win = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__22__cwpt = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__22__oregt = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__23__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__23__index = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__23__win = VL_RAND_RESET_I(5);
    __Vfunc_reg_win__23__cwpt = VL_RAND_RESET_I(32);
    __Vfunc_reg_win__23__oregt = VL_RAND_RESET_I(32);
    __Vfunc_branch_eval__24__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_branch_eval__24__cond = VL_RAND_RESET_I(4);
    __Vfunc_branch_eval__24__N = VL_RAND_RESET_I(1);
    __Vfunc_branch_eval__24__Z = VL_RAND_RESET_I(1);
    __Vfunc_branch_eval__24__C = VL_RAND_RESET_I(1);
    __Vfunc_branch_eval__24__V = VL_RAND_RESET_I(1);
    __Vfunc_get_index__25__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__25__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__26__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__26__index = VL_RAND_RESET_I(5);
    __Vfunc_syscall_cse502__27__Vfuncout = 0;
    __Vfunc_get_index__28__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__28__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__29__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__29__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__30__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__30__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__31__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__31__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__32__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__32__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__33__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__33__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__34__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__34__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__35__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__35__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__36__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__36__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__37__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__37__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__38__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__38__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__39__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__39__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__40__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__40__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__41__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__41__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__42__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__42__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__43__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__43__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__44__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__44__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__45__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__45__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__46__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__46__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__47__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__47__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__48__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__48__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__49__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__49__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__50__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__50__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__51__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__51__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__52__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__52__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__53__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__53__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__54__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__54__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__55__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__55__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__56__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__56__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__57__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__57__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__58__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__58__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__59__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__59__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__60__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__60__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__61__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__61__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__62__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__62__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__63__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__63__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__64__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__64__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__65__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__65__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__66__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__66__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__67__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__67__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__68__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__68__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__69__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__69__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__70__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__70__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__71__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__71__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__72__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__72__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__73__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__73__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__74__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__74__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__75__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__75__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__76__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__76__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__77__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__77__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__78__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__78__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__79__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__79__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__80__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__80__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__81__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__81__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__82__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__82__index = VL_RAND_RESET_I(5);
    __Vfunc_get_index__83__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_get_index__83__index = VL_RAND_RESET_I(5);
    __Vfunc_alu__DOT__result__84__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Shift__85__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Shift__86__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Shift__87__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__MultS__88__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__TagSUB__89__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__TagADD__90__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__TagSUB__91__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__TagADD__92__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Divide__93__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Divide__94__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Subtract__95__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Multiply__96__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Multiply__97__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Add__98__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Logical__99__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Logical__100__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Subtract__101__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Logical__102__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Logical__103__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Logical__104__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Add__105__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Divide__106__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Divide__107__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Subtract__108__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Multiply__109__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Multiply__110__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Add__111__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Logical__112__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Logical__113__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Logical__114__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Subtract__115__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Logical__116__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Logical__117__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Logical__118__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_alu__DOT__Add__119__Vfuncout = VL_RAND_RESET_I(32);
    __Vdlyvset__regs__v0 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__regs__v517 = VL_RAND_RESET_I(10);
    __Vdlyvval__regs__v517 = VL_RAND_RESET_I(32);
    __Vdlyvset__regs__v517 = VL_RAND_RESET_I(1);
    __Vdly__fetch_state = 0;
    __Vdly__fetch_rip = VL_RAND_RESET_Q(64);
    __Vdly__fetch_offset = VL_RAND_RESET_I(7);
    __Vdly__decode_offset = VL_RAND_RESET_I(7);
    __Vdly__alu_working = VL_RAND_RESET_I(1);
    __Vdly__branch_flag = VL_RAND_RESET_I(1);
    __Vdly__decode_rip = VL_RAND_RESET_Q(64);
    __Vdly__fetch_skip = VL_RAND_RESET_I(6);
    __Vdly__icache_req = VL_RAND_RESET_I(1);
    __Vdly__icache_line_addr = VL_RAND_RESET_Q(58);
    __Vdly__word_counter = 0;
    VL_RAND_RESET_W(512,__Vdly__temp);
    __Vdly__branch_taken = VL_RAND_RESET_I(1);
    __Vdly__ready_for_wb = VL_RAND_RESET_I(1);
    __Vdly__mem_state = 0;
    __Vdly__go_to_memory = VL_RAND_RESET_I(1);
    __Vdly__go_to_mem = VL_RAND_RESET_I(1);
    __Vdlyvdim0__regs__v518 = VL_RAND_RESET_I(10);
    __Vdlyvval__regs__v518 = VL_RAND_RESET_I(32);
    __Vdlyvset__regs__v518 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__regs__v519 = VL_RAND_RESET_I(10);
    __Vdlyvval__regs__v519 = VL_RAND_RESET_I(32);
    __Vdlyvset__regs__v519 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__regs__v520 = VL_RAND_RESET_I(10);
    __Vdlyvval__regs__v520 = VL_RAND_RESET_I(32);
    __Vdlyvset__regs__v520 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__regs__v521 = VL_RAND_RESET_I(10);
    __Vdlyvval__regs__v521 = VL_RAND_RESET_I(32);
    __Vdlyvset__regs__v521 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__regs__v522 = VL_RAND_RESET_I(10);
    __Vdlyvval__regs__v522 = VL_RAND_RESET_I(32);
    __Vdlyvset__regs__v522 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__regs__v523 = VL_RAND_RESET_I(10);
    __Vdlyvval__regs__v523 = VL_RAND_RESET_I(32);
    __Vdlyvset__regs__v523 = VL_RAND_RESET_I(1);
    __Vdly__go_to_wb = VL_RAND_RESET_I(1);
    __Vdly__go_to_sys = VL_RAND_RESET_I(1);
    __Vdly__go_to_call = VL_RAND_RESET_I(1);
    __Vdly__go_to_nonsense = VL_RAND_RESET_I(1);
    __Vdly__go_to_branch = VL_RAND_RESET_I(1);
    __Vdly__go_to_save = VL_RAND_RESET_I(1);
    __Vdly__branch_taken_ch = VL_RAND_RESET_I(1);
    __Vdlyvdim0__regs__v524 = VL_RAND_RESET_I(10);
    __Vdlyvval__regs__v524 = VL_RAND_RESET_I(32);
    __Vdlyvset__regs__v524 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__regs__v525 = VL_RAND_RESET_I(10);
    __Vdlyvval__regs__v525 = VL_RAND_RESET_I(32);
    __Vdlyvset__regs__v525 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__regs__v526 = VL_RAND_RESET_I(10);
    __Vdlyvval__regs__v526 = VL_RAND_RESET_I(32);
    __Vdlyvset__regs__v526 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__regs__v527 = VL_RAND_RESET_I(10);
    __Vdlyvval__regs__v527 = VL_RAND_RESET_I(32);
    __Vdlyvset__regs__v527 = VL_RAND_RESET_I(1);
    __Vdly__new_fetch_rip = VL_RAND_RESET_Q(58);
    __Vdlyvdim0__regs__v528 = VL_RAND_RESET_I(10);
    __Vdlyvval__regs__v528 = VL_RAND_RESET_I(32);
    __Vdlyvset__regs__v528 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__regs__v529 = VL_RAND_RESET_I(10);
    __Vdlyvval__regs__v529 = VL_RAND_RESET_I(32);
    __Vdlyvset__regs__v529 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__regs__v530 = VL_RAND_RESET_I(10);
    __Vdlyvval__regs__v530 = VL_RAND_RESET_I(32);
    __Vdlyvset__regs__v530 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__regs__v531 = VL_RAND_RESET_I(10);
    __Vdlyvval__regs__v531 = VL_RAND_RESET_I(32);
    __Vdlyvset__regs__v531 = VL_RAND_RESET_I(1);
    __Vdly__IC__DOT__cache_state = 0;
    __Vdly__IC__DOT__set_counter = VL_RAND_RESET_I(5);
    __Vdly__IC__DOT__data_en = VL_RAND_RESET_I(1);
    __Vdly__icache_bus_req = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512,__Vdly__IC__DOT__data_w);
    __Vdlyvdim0__IC__DOT__data__DOT__mem__v0 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512,__Vdlyvval__IC__DOT__data__DOT__mem__v0);
    __Vdlyvset__IC__DOT__data__DOT__mem__v0 = VL_RAND_RESET_I(1);
    __Vdly__IC__DOT__tag_r = VL_RAND_RESET_Q(54);
    __Vdlyvdim0__IC__DOT__tag__DOT__mem__v0 = VL_RAND_RESET_I(9);
    __Vdlyvval__IC__DOT__tag__DOT__mem__v0 = VL_RAND_RESET_Q(54);
    __Vdlyvset__IC__DOT__tag__DOT__mem__v0 = VL_RAND_RESET_I(1);
    __Vdly__IC__DOT____Vcellout__state__readData = VL_RAND_RESET_I(2);
    __Vdlyvdim0__IC__DOT__state__DOT__mem__v0 = VL_RAND_RESET_I(9);
    __Vdlyvval__IC__DOT__state__DOT__mem__v0 = VL_RAND_RESET_I(2);
    __Vdlyvset__IC__DOT__state__DOT__mem__v0 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__IC__DOT__age__DOT__mem__v0 = VL_RAND_RESET_I(9);
    __Vdlyvval__IC__DOT__age__DOT__mem__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__IC__DOT__age__DOT__mem__v0 = VL_RAND_RESET_I(1);
    __Vdly__dcache_reqack = VL_RAND_RESET_I(1);
    __Vdly__DC__DOT__cache_state = 0;
    __Vdly__DC__DOT__set_counter = VL_RAND_RESET_I(5);
    __Vdly__dcache_comp = VL_RAND_RESET_I(1);
    __Vdly__DC__DOT__data_en = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(512,__Vdly__DC__DOT__data_w);
    __Vdly__DC__DOT__counter = VL_RAND_RESET_I(32);
    __Vdlyvdim0__DC__DOT__data__DOT__mem__v0 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__DC__DOT__data__DOT__mem__v0 = VL_RAND_RESET_I(9);
    __Vdlyvval__DC__DOT__data__DOT__mem__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__DC__DOT__data__DOT__mem__v0 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__DC__DOT__data__DOT__mem__v1 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__DC__DOT__data__DOT__mem__v1 = VL_RAND_RESET_I(9);
    __Vdlyvval__DC__DOT__data__DOT__mem__v1 = VL_RAND_RESET_I(32);
    __Vdlyvset__DC__DOT__data__DOT__mem__v1 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__DC__DOT__data__DOT__mem__v2 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__DC__DOT__data__DOT__mem__v2 = VL_RAND_RESET_I(9);
    __Vdlyvval__DC__DOT__data__DOT__mem__v2 = VL_RAND_RESET_I(32);
    __Vdlyvset__DC__DOT__data__DOT__mem__v2 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__DC__DOT__data__DOT__mem__v3 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__DC__DOT__data__DOT__mem__v3 = VL_RAND_RESET_I(9);
    __Vdlyvval__DC__DOT__data__DOT__mem__v3 = VL_RAND_RESET_I(32);
    __Vdlyvset__DC__DOT__data__DOT__mem__v3 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__DC__DOT__data__DOT__mem__v4 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__DC__DOT__data__DOT__mem__v4 = VL_RAND_RESET_I(9);
    __Vdlyvval__DC__DOT__data__DOT__mem__v4 = VL_RAND_RESET_I(32);
    __Vdlyvset__DC__DOT__data__DOT__mem__v4 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__DC__DOT__data__DOT__mem__v5 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__DC__DOT__data__DOT__mem__v5 = VL_RAND_RESET_I(9);
    __Vdlyvval__DC__DOT__data__DOT__mem__v5 = VL_RAND_RESET_I(32);
    __Vdlyvset__DC__DOT__data__DOT__mem__v5 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__DC__DOT__data__DOT__mem__v6 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__DC__DOT__data__DOT__mem__v6 = VL_RAND_RESET_I(9);
    __Vdlyvval__DC__DOT__data__DOT__mem__v6 = VL_RAND_RESET_I(32);
    __Vdlyvset__DC__DOT__data__DOT__mem__v6 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__DC__DOT__data__DOT__mem__v7 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__DC__DOT__data__DOT__mem__v7 = VL_RAND_RESET_I(9);
    __Vdlyvval__DC__DOT__data__DOT__mem__v7 = VL_RAND_RESET_I(32);
    __Vdlyvset__DC__DOT__data__DOT__mem__v7 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__DC__DOT__data__DOT__mem__v8 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__DC__DOT__data__DOT__mem__v8 = VL_RAND_RESET_I(9);
    __Vdlyvval__DC__DOT__data__DOT__mem__v8 = VL_RAND_RESET_I(32);
    __Vdlyvset__DC__DOT__data__DOT__mem__v8 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__DC__DOT__data__DOT__mem__v9 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__DC__DOT__data__DOT__mem__v9 = VL_RAND_RESET_I(9);
    __Vdlyvval__DC__DOT__data__DOT__mem__v9 = VL_RAND_RESET_I(32);
    __Vdlyvset__DC__DOT__data__DOT__mem__v9 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__DC__DOT__data__DOT__mem__v10 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__DC__DOT__data__DOT__mem__v10 = VL_RAND_RESET_I(9);
    __Vdlyvval__DC__DOT__data__DOT__mem__v10 = VL_RAND_RESET_I(32);
    __Vdlyvset__DC__DOT__data__DOT__mem__v10 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__DC__DOT__data__DOT__mem__v11 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__DC__DOT__data__DOT__mem__v11 = VL_RAND_RESET_I(9);
    __Vdlyvval__DC__DOT__data__DOT__mem__v11 = VL_RAND_RESET_I(32);
    __Vdlyvset__DC__DOT__data__DOT__mem__v11 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__DC__DOT__data__DOT__mem__v12 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__DC__DOT__data__DOT__mem__v12 = VL_RAND_RESET_I(9);
    __Vdlyvval__DC__DOT__data__DOT__mem__v12 = VL_RAND_RESET_I(32);
    __Vdlyvset__DC__DOT__data__DOT__mem__v12 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__DC__DOT__data__DOT__mem__v13 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__DC__DOT__data__DOT__mem__v13 = VL_RAND_RESET_I(9);
    __Vdlyvval__DC__DOT__data__DOT__mem__v13 = VL_RAND_RESET_I(32);
    __Vdlyvset__DC__DOT__data__DOT__mem__v13 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__DC__DOT__data__DOT__mem__v14 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__DC__DOT__data__DOT__mem__v14 = VL_RAND_RESET_I(9);
    __Vdlyvval__DC__DOT__data__DOT__mem__v14 = VL_RAND_RESET_I(32);
    __Vdlyvset__DC__DOT__data__DOT__mem__v14 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__DC__DOT__data__DOT__mem__v15 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__DC__DOT__data__DOT__mem__v15 = VL_RAND_RESET_I(9);
    __Vdlyvval__DC__DOT__data__DOT__mem__v15 = VL_RAND_RESET_I(32);
    __Vdlyvset__DC__DOT__data__DOT__mem__v15 = VL_RAND_RESET_I(1);
    __Vdly__DC__DOT__tag_r = VL_RAND_RESET_Q(54);
    __Vdlyvdim0__DC__DOT__tag__DOT__mem__v0 = VL_RAND_RESET_I(9);
    __Vdlyvval__DC__DOT__tag__DOT__mem__v0 = VL_RAND_RESET_Q(54);
    __Vdlyvset__DC__DOT__tag__DOT__mem__v0 = VL_RAND_RESET_I(1);
    __Vdly__DC__DOT__state_r = VL_RAND_RESET_I(2);
    __Vdlyvdim0__DC__DOT__state__DOT__mem__v0 = VL_RAND_RESET_I(9);
    __Vdlyvval__DC__DOT__state__DOT__mem__v0 = VL_RAND_RESET_I(2);
    __Vdlyvset__DC__DOT__state__DOT__mem__v0 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__DC__DOT__age__DOT__mem__v0 = VL_RAND_RESET_I(9);
    __Vdlyvval__DC__DOT__age__DOT__mem__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__DC__DOT__age__DOT__mem__v0 = VL_RAND_RESET_I(1);
    __Vdly__decode__DOT__decode_state = 0;
    __Vdly__alu_busy = VL_RAND_RESET_I(1);
    __Vdly__alu_reqack = VL_RAND_RESET_I(1);
    __Vdly__alu__DOT__ALU_state = 0;
}

void Vtop_Core__B0::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_Core__B0::~Vtop_Core__B0() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vtop_Core__B0::__Vdpiimwrap_syscall_cse502_TOP__v__core(IData g1, IData o0, IData o1, IData o2, IData o3, IData o4, IData o5, IData& syscall_cse502__Vfuncrtn) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_Core__B0::__Vdpiimwrap_syscall_cse502_TOP__v__core\n"); );
    // Body
    int g1__Vcvt;
    g1__Vcvt = g1;
    int o0__Vcvt;
    o0__Vcvt = o0;
    int o1__Vcvt;
    o1__Vcvt = o1;
    int o2__Vcvt;
    o2__Vcvt = o2;
    int o3__Vcvt;
    o3__Vcvt = o3;
    int o4__Vcvt;
    o4__Vcvt = o4;
    int o5__Vcvt;
    o5__Vcvt = o5;
    int syscall_cse502__Vfuncrtn__Vcvt = syscall_cse502(g1__Vcvt, o0__Vcvt, o1__Vcvt, o2__Vcvt, o3__Vcvt, o4__Vcvt, o5__Vcvt);
    syscall_cse502__Vfuncrtn = syscall_cse502__Vfuncrtn__Vcvt;
}

void Vtop_Core__B0::_initial__TOP__v__core__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_Core__B0::_initial__TOP__v__core__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at SRAM.sv:17
    VL_WRITEF("Initializing 32KB (512x512) memory\n");
    // INITIAL at SRAM.sv:17
    VL_WRITEF("Initializing 3KB (54x512) memory\n");
    // INITIAL at SRAM.sv:17
    VL_WRITEF("Initializing 0KB (2x512) memory\n");
    // INITIAL at SRAM.sv:17
    VL_WRITEF("Initializing 2KB (32x512) memory\n");
    // INITIAL at SRAM.sv:17
    VL_WRITEF("Initializing 32KB (512x512) memory\n");
    // INITIAL at SRAM.sv:17
    VL_WRITEF("Initializing 3KB (54x512) memory\n");
    // INITIAL at SRAM.sv:17
    VL_WRITEF("Initializing 0KB (2x512) memory\n");
    // INITIAL at SRAM.sv:17
    VL_WRITEF("Initializing 2KB (32x512) memory\n");
}

void Vtop_Core__B0::_settle__TOP__v__core__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_Core__B0::_settle__TOP__v__core__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__uncore_bus.__PVT__respack = vlTOPp->respcyc;
}

VL_INLINE_OPT void Vtop_Core__B0::_sequent__TOP__v__core__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_Core__B0::_sequent__TOP__v__core__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__core.__Vdlyvset__IC__DOT__data__DOT__mem__v0 = 0U;
    vlSymsp->TOP__v__core.__Vdly__decode__DOT__decode_state 
	= vlSymsp->TOP__v__core.__PVT__decode__DOT__decode_state;
    vlSymsp->TOP__v__core.__Vdlyvset__IC__DOT__age__DOT__mem__v0 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__age__DOT__mem__v0 = 0U;
    vlSymsp->TOP__v__core.__Vdly__mem_state = vlSymsp->TOP__v__core.__PVT__mem_state;
    vlSymsp->TOP__v__core.__Vdly__alu_busy = vlSymsp->TOP__v__core.__PVT__alu_busy;
    vlSymsp->TOP__v__core.__Vdly__alu_reqack = vlSymsp->TOP__v__core.__PVT__alu_reqack;
    vlSymsp->TOP__v__core.__Vdly__alu__DOT__ALU_state 
	= vlSymsp->TOP__v__core.__PVT__alu__DOT__ALU_state;
    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v0 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v1 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v2 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v3 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v4 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v5 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v6 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v7 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v8 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v9 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v10 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v11 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v12 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v13 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v14 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v15 = 0U;
    vlSymsp->TOP__v__core.__Vdly__go_to_call = vlSymsp->TOP__v__core.__PVT__go_to_call;
    vlSymsp->TOP__v__core.__Vdly__go_to_memory = vlSymsp->TOP__v__core.__PVT__go_to_memory;
    vlSymsp->TOP__v__core.__Vdly__ready_for_wb = vlSymsp->TOP__v__core.__PVT__ready_for_wb;
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__state_r 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__state_r;
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__tag_r = vlSymsp->TOP__v__core.__PVT__DC__DOT__tag_r;
    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__state__DOT__mem__v0 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__tag__DOT__mem__v0 = 0U;
    vlSymsp->TOP__v__core.__Vdly__IC__DOT____Vcellout__state__readData 
	= vlSymsp->TOP__v__core.IC__DOT____Vcellout__state__readData;
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__tag_r = vlSymsp->TOP__v__core.__PVT__IC__DOT__tag_r;
    vlSymsp->TOP__v__core.__Vdlyvset__IC__DOT__state__DOT__mem__v0 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__IC__DOT__tag__DOT__mem__v0 = 0U;
    vlSymsp->TOP__v__core.__Vdly__branch_flag = vlSymsp->TOP__v__core.__PVT__branch_flag;
    vlSymsp->TOP__v__core.__Vdly__icache_req = vlSymsp->TOP__v__core.__PVT__icache_req;
    vlSymsp->TOP__v__core.__Vdly__word_counter = vlSymsp->TOP__v__core.__PVT__word_counter;
    vlSymsp->TOP__v__core.__Vdly__temp[0U] = vlSymsp->TOP__v__core.__PVT__temp[0U];
    vlSymsp->TOP__v__core.__Vdly__temp[1U] = vlSymsp->TOP__v__core.__PVT__temp[1U];
    vlSymsp->TOP__v__core.__Vdly__temp[2U] = vlSymsp->TOP__v__core.__PVT__temp[2U];
    vlSymsp->TOP__v__core.__Vdly__temp[3U] = vlSymsp->TOP__v__core.__PVT__temp[3U];
    vlSymsp->TOP__v__core.__Vdly__temp[4U] = vlSymsp->TOP__v__core.__PVT__temp[4U];
    vlSymsp->TOP__v__core.__Vdly__temp[5U] = vlSymsp->TOP__v__core.__PVT__temp[5U];
    vlSymsp->TOP__v__core.__Vdly__temp[6U] = vlSymsp->TOP__v__core.__PVT__temp[6U];
    vlSymsp->TOP__v__core.__Vdly__temp[7U] = vlSymsp->TOP__v__core.__PVT__temp[7U];
    vlSymsp->TOP__v__core.__Vdly__temp[8U] = vlSymsp->TOP__v__core.__PVT__temp[8U];
    vlSymsp->TOP__v__core.__Vdly__temp[9U] = vlSymsp->TOP__v__core.__PVT__temp[9U];
    vlSymsp->TOP__v__core.__Vdly__temp[0xaU] = vlSymsp->TOP__v__core.__PVT__temp[0xaU];
    vlSymsp->TOP__v__core.__Vdly__temp[0xbU] = vlSymsp->TOP__v__core.__PVT__temp[0xbU];
    vlSymsp->TOP__v__core.__Vdly__temp[0xcU] = vlSymsp->TOP__v__core.__PVT__temp[0xcU];
    vlSymsp->TOP__v__core.__Vdly__temp[0xdU] = vlSymsp->TOP__v__core.__PVT__temp[0xdU];
    vlSymsp->TOP__v__core.__Vdly__temp[0xeU] = vlSymsp->TOP__v__core.__PVT__temp[0xeU];
    vlSymsp->TOP__v__core.__Vdly__temp[0xfU] = vlSymsp->TOP__v__core.__PVT__temp[0xfU];
    vlSymsp->TOP__v__core.__Vdly__fetch_offset = vlSymsp->TOP__v__core.__PVT__fetch_offset;
    // ALWAYS at Core.sv:307
    if (((IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset_temp) 
	 > (IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset))) {
	vlSymsp->TOP__v__core.__PVT__fetch_offset_wrap = 1U;
    }
    // ALWAYS at Core.sv:317
    if (((IData)(vlSymsp->TOP__v__core.__PVT__decode_offset_temp) 
	 > (IData)(vlSymsp->TOP__v__core.__PVT__decode_offset))) {
	vlSymsp->TOP__v__core.__PVT__decode_offset_wrap = 1U;
    }
    // ALWAYS at Core.sv:811
    if (vlSymsp->TOP__v__core.__PVT__alu_done) {
	vlSymsp->TOP__v__core.__PVT__alu_val_temp = vlSymsp->TOP__v__core.__PVT__alu_val;
	vlSymsp->TOP__v__core.__Vdly__ready_for_wb = 1U;
    }
    // ALWAYS at SRAM.sv:24
    if (vlTOPp->reset) {
	vlSymsp->TOP__v__core.__PVT__DC__DOT__state__DOT__i = 0U;
	while (VL_GTS_III(1,32,32, 0x200U, vlSymsp->TOP__v__core.__PVT__DC__DOT__state__DOT__i)) {
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__state__DOT__mem[(0x1ffU 
								   & vlSymsp->TOP__v__core.__PVT__DC__DOT__state__DOT__i)] = 0U;
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__state__DOT__i 
		= ((IData)(1U) + vlSymsp->TOP__v__core.__PVT__DC__DOT__state__DOT__i);
	}
    } else {
	vlSymsp->TOP__v__core.__PVT__DC__DOT__state__DOT__i = 1U;
	vlSymsp->TOP__v__core.__Vdly__DC__DOT__state_r 
	    = (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__state__DOT__mem)
	    [(IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index)];
	if (vlSymsp->TOP__v__core.__PVT__DC__DOT__state_en) {
	    vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__state__DOT__mem__v0 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__state_w;
	    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__state__DOT__mem__v0 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__state__DOT__mem__v0 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	}
    }
    // ALWAYS at SRAM.sv:24
    if (vlTOPp->reset) {
	vlSymsp->TOP__v__core.__PVT__DC__DOT__tag__DOT__i = 0U;
	while (VL_GTS_III(1,32,32, 0x200U, vlSymsp->TOP__v__core.__PVT__DC__DOT__tag__DOT__i)) {
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__tag__DOT__mem[(0x1ffU 
								 & vlSymsp->TOP__v__core.__PVT__DC__DOT__tag__DOT__i)] = VL_ULL(0);
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__tag__DOT__i 
		= ((IData)(1U) + vlSymsp->TOP__v__core.__PVT__DC__DOT__tag__DOT__i);
	}
    } else {
	vlSymsp->TOP__v__core.__PVT__DC__DOT__tag__DOT__i = 1U;
	vlSymsp->TOP__v__core.__Vdly__DC__DOT__tag_r 
	    = vlSymsp->TOP__v__core.__PVT__DC__DOT__tag__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index)];
	if (vlSymsp->TOP__v__core.__PVT__DC__DOT__tag_en) {
	    vlSymsp->TOP__v__core.DC__DOT__tag__DOT____Vlvbound1 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__tag_w;
	    vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__tag__DOT__mem__v0 
		= vlSymsp->TOP__v__core.DC__DOT__tag__DOT____Vlvbound1;
	    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__tag__DOT__mem__v0 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__tag__DOT__mem__v0 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	}
    }
    // ALWAYS at SRAM.sv:24
    if (vlTOPp->reset) {
	vlSymsp->TOP__v__core.__PVT__IC__DOT__state__DOT__i = 0U;
	while (VL_GTS_III(1,32,32, 0x200U, vlSymsp->TOP__v__core.__PVT__IC__DOT__state__DOT__i)) {
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__state__DOT__mem[(0x1ffU 
								   & vlSymsp->TOP__v__core.__PVT__IC__DOT__state__DOT__i)] = 0U;
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__state__DOT__i 
		= ((IData)(1U) + vlSymsp->TOP__v__core.__PVT__IC__DOT__state__DOT__i);
	}
    } else {
	vlSymsp->TOP__v__core.__PVT__IC__DOT__state__DOT__i = 1U;
	vlSymsp->TOP__v__core.__Vdly__IC__DOT____Vcellout__state__readData 
	    = (IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__state__DOT__mem)
	    [(IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index)];
	if (vlSymsp->TOP__v__core.__PVT__IC__DOT__state_en) {
	    vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__state__DOT__mem__v0 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__state_w;
	    vlSymsp->TOP__v__core.__Vdlyvset__IC__DOT__state__DOT__mem__v0 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__state__DOT__mem__v0 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__index;
	}
    }
    // ALWAYS at SRAM.sv:24
    if (vlTOPp->reset) {
	vlSymsp->TOP__v__core.__PVT__IC__DOT__tag__DOT__i = 0U;
	while (VL_GTS_III(1,32,32, 0x200U, vlSymsp->TOP__v__core.__PVT__IC__DOT__tag__DOT__i)) {
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__tag__DOT__mem[(0x1ffU 
								 & vlSymsp->TOP__v__core.__PVT__IC__DOT__tag__DOT__i)] = VL_ULL(0);
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__tag__DOT__i 
		= ((IData)(1U) + vlSymsp->TOP__v__core.__PVT__IC__DOT__tag__DOT__i);
	}
    } else {
	vlSymsp->TOP__v__core.__PVT__IC__DOT__tag__DOT__i = 1U;
	vlSymsp->TOP__v__core.__Vdly__IC__DOT__tag_r 
	    = vlSymsp->TOP__v__core.__PVT__IC__DOT__tag__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index)];
	if (vlSymsp->TOP__v__core.__PVT__IC__DOT__tag_en) {
	    vlSymsp->TOP__v__core.IC__DOT__tag__DOT____Vlvbound1 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__tag_w;
	    vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__tag__DOT__mem__v0 
		= vlSymsp->TOP__v__core.IC__DOT__tag__DOT____Vlvbound1;
	    vlSymsp->TOP__v__core.__Vdlyvset__IC__DOT__tag__DOT__mem__v0 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__tag__DOT__mem__v0 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__index;
	}
    }
    // ALWAYSPOST at SRAM.sv:36
    if (vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__state__DOT__mem__v0) {
	vlSymsp->TOP__v__core.__PVT__DC__DOT__state__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__state__DOT__mem__v0)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__state__DOT__mem__v0;
    }
    // ALWAYSPOST at SRAM.sv:36
    if (vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__tag__DOT__mem__v0) {
	vlSymsp->TOP__v__core.__PVT__DC__DOT__tag__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__tag__DOT__mem__v0)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__tag__DOT__mem__v0;
    }
    // ALWAYSPOST at SRAM.sv:36
    if (vlSymsp->TOP__v__core.__Vdlyvset__IC__DOT__state__DOT__mem__v0) {
	vlSymsp->TOP__v__core.__PVT__IC__DOT__state__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__state__DOT__mem__v0)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__state__DOT__mem__v0;
    }
    // ALWAYSPOST at SRAM.sv:36
    if (vlSymsp->TOP__v__core.__Vdlyvset__IC__DOT__tag__DOT__mem__v0) {
	vlSymsp->TOP__v__core.__PVT__IC__DOT__tag__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__tag__DOT__mem__v0)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__tag__DOT__mem__v0;
    }
    // ALWAYS at Core.sv:306
    vlSymsp->TOP__v__core.__PVT__fetch_offset_temp 
	= vlSymsp->TOP__v__core.__PVT__fetch_offset;
    // ALWAYS at Core.sv:315
    vlSymsp->TOP__v__core.__PVT__decode_offset_temp 
	= vlSymsp->TOP__v__core.__PVT__decode_offset;
    // ALWAYS at ALU.sv:64
    if ((0U == vlSymsp->TOP__v__core.__PVT__alu__DOT__ALU_state)) {
	vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber15 = 0U;
	vlSymsp->TOP__v__core.__Vdly__alu_busy = 0U;
	vlSymsp->TOP__v__core.__Vdly__alu_reqack = 0U;
	vlSymsp->TOP__v__core.__PVT__alu_val = 0U;
	vlSymsp->TOP__v__core.__PVT__alu_done = 0U;
	if (((IData)(vlSymsp->TOP__v__core.__PVT__alu_req) 
	     & (~ (IData)(vlSymsp->TOP__v__core.__PVT__alu_busy)))) {
	    vlSymsp->TOP__v__core.__Vdly__alu_reqack = 1U;
	    vlSymsp->TOP__v__core.__Vdly__alu__DOT__ALU_state = 1U;
	    vlSymsp->TOP__v__core.__Vdly__alu_busy = 1U;
	}
    } else {
	if ((1U == vlSymsp->TOP__v__core.__PVT__alu__DOT__ALU_state)) {
	    if ((2U == (3U & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
			      >> 0x16U)))) {
		// Function: result at ALU.sv:110
		if ((0x200000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
		    if ((0x100000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
			if (VL_UNLIKELY((0x80000U & 
					 vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
			    VL_WRITEF("Instruction Doesn't exist \n");
			} else {
			    if (VL_UNLIKELY((0x40000U 
					     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
				VL_WRITEF("Instruction Doesn't exist \n");
			    } else {
				if (VL_UNLIKELY((0x20000U 
						 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
				    VL_WRITEF("Instruction Doesn't exist \n");
				} else {
				    if (VL_UNLIKELY(
						    (0x10000U 
						     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
					VL_WRITEF("Instruction Doesn't exist \n");
				    } else {
					vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber15 
					    = (vlSymsp->TOP__v__core.__PVT__source1 
					       ^ vlSymsp->TOP__v__core.__PVT__source2);
				    }
				}
			    }
			}
		    } else {
			if (VL_UNLIKELY((0x80000U & 
					 vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
			    VL_WRITEF("Instruction Doesn't exist \n");
			} else {
			    if ((0x40000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
				if ((0x20000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
				    if ((0x10000U & 
					 vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
					// Function: Shift at ALU.sv:180
					vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt 
					    = (0x1fU 
					       & vlSymsp->TOP__v__core.__PVT__source2);
					vlSymsp->TOP__v__core.__PVT__alu__DOT__temp 
					    = (1U & 
					       (vlSymsp->TOP__v__core.__PVT__source1 
						>> 0x1fU));
					if ((0x25U 
					     == (0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U)))) {
					    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Shift__85__Vfuncout 
						= (vlSymsp->TOP__v__core.__PVT__source1 
						   << (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt));
					} else {
					    if ((0x26U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U)))) {
						vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Shift__85__Vfuncout 
						    = 
						    (vlSymsp->TOP__v__core.__PVT__source1 
						     >> (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt));
					    } else {
						if (VL_LIKELY(
							      (0x27U 
							       == 
							       (0x3fU 
								& (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
								   >> 0x10U))))) {
						    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Shift__85__Vfuncout 
							= 
							(vlSymsp->TOP__v__core.__PVT__source1 
							 >> (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt));
						} else {
						    VL_WRITEF("No such instruction\n");
						}
					    }
					}
					if (VL_UNLIKELY(
							((0x27U 
							  == 
							  (0x3fU 
							   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							      >> 0x10U))) 
							 & (vlSymsp->TOP__v__core.__PVT__source1 
							    >> 0x1fU)))) {
					    VL_WRITEF("pivot is: 11111111111111111111111111111111\n");
					    vlSymsp->TOP__v__core.__PVT__alu__DOT__pivot 
						= (
						   (0x1fU 
						    >= 
						    ((IData)(0x20U) 
						     - (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt)))
						    ? 
						   ((IData)(0xffffffffU) 
						    << 
						    ((IData)(0x20U) 
						     - (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt)))
						    : 0U);
					    VL_WRITEF("pivot becomes: %b\n",
						      32,
						      vlSymsp->TOP__v__core.__PVT__alu__DOT__pivot);
					    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Shift__85__Vfuncout 
						= (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Shift__85__Vfuncout 
						   | vlSymsp->TOP__v__core.__PVT__alu__DOT__pivot);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Shift__85__Vfuncout;
				    } else {
					// Function: Shift at ALU.sv:178
					vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt 
					    = (0x1fU 
					       & vlSymsp->TOP__v__core.__PVT__source2);
					vlSymsp->TOP__v__core.__PVT__alu__DOT__temp 
					    = (1U & 
					       (vlSymsp->TOP__v__core.__PVT__source1 
						>> 0x1fU));
					if ((0x25U 
					     == (0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U)))) {
					    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Shift__86__Vfuncout 
						= (vlSymsp->TOP__v__core.__PVT__source1 
						   << (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt));
					} else {
					    if ((0x26U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U)))) {
						vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Shift__86__Vfuncout 
						    = 
						    (vlSymsp->TOP__v__core.__PVT__source1 
						     >> (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt));
					    } else {
						if (VL_LIKELY(
							      (0x27U 
							       == 
							       (0x3fU 
								& (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
								   >> 0x10U))))) {
						    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Shift__86__Vfuncout 
							= 
							(vlSymsp->TOP__v__core.__PVT__source1 
							 >> (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt));
						} else {
						    VL_WRITEF("No such instruction\n");
						}
					    }
					}
					if (VL_UNLIKELY(
							((0x27U 
							  == 
							  (0x3fU 
							   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							      >> 0x10U))) 
							 & (vlSymsp->TOP__v__core.__PVT__source1 
							    >> 0x1fU)))) {
					    VL_WRITEF("pivot is: 11111111111111111111111111111111\n");
					    vlSymsp->TOP__v__core.__PVT__alu__DOT__pivot 
						= (
						   (0x1fU 
						    >= 
						    ((IData)(0x20U) 
						     - (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt)))
						    ? 
						   ((IData)(0xffffffffU) 
						    << 
						    ((IData)(0x20U) 
						     - (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt)))
						    : 0U);
					    VL_WRITEF("pivot becomes: %b\n",
						      32,
						      vlSymsp->TOP__v__core.__PVT__alu__DOT__pivot);
					    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Shift__86__Vfuncout 
						= (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Shift__86__Vfuncout 
						   | vlSymsp->TOP__v__core.__PVT__alu__DOT__pivot);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Shift__86__Vfuncout;
				    }
				} else {
				    if ((0x10000U & 
					 vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
					// Function: Shift at ALU.sv:176
					vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt 
					    = (0x1fU 
					       & vlSymsp->TOP__v__core.__PVT__source2);
					vlSymsp->TOP__v__core.__PVT__alu__DOT__temp 
					    = (1U & 
					       (vlSymsp->TOP__v__core.__PVT__source1 
						>> 0x1fU));
					if ((0x25U 
					     == (0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U)))) {
					    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Shift__87__Vfuncout 
						= (vlSymsp->TOP__v__core.__PVT__source1 
						   << (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt));
					} else {
					    if ((0x26U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U)))) {
						vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Shift__87__Vfuncout 
						    = 
						    (vlSymsp->TOP__v__core.__PVT__source1 
						     >> (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt));
					    } else {
						if (VL_LIKELY(
							      (0x27U 
							       == 
							       (0x3fU 
								& (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
								   >> 0x10U))))) {
						    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Shift__87__Vfuncout 
							= 
							(vlSymsp->TOP__v__core.__PVT__source1 
							 >> (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt));
						} else {
						    VL_WRITEF("No such instruction\n");
						}
					    }
					}
					if (VL_UNLIKELY(
							((0x27U 
							  == 
							  (0x3fU 
							   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							      >> 0x10U))) 
							 & (vlSymsp->TOP__v__core.__PVT__source1 
							    >> 0x1fU)))) {
					    VL_WRITEF("pivot is: 11111111111111111111111111111111\n");
					    vlSymsp->TOP__v__core.__PVT__alu__DOT__pivot 
						= (
						   (0x1fU 
						    >= 
						    ((IData)(0x20U) 
						     - (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt)))
						    ? 
						   ((IData)(0xffffffffU) 
						    << 
						    ((IData)(0x20U) 
						     - (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__shcnt)))
						    : 0U);
					    VL_WRITEF("pivot becomes: %b\n",
						      32,
						      vlSymsp->TOP__v__core.__PVT__alu__DOT__pivot);
					    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Shift__87__Vfuncout 
						= (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Shift__87__Vfuncout 
						   | vlSymsp->TOP__v__core.__PVT__alu__DOT__pivot);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Shift__87__Vfuncout;
				    } else {
					// Function: MultS at ALU.sv:206
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__MultS__88__Vfuncout 
					    = (vlSymsp->TOP__v__core.__PVT__source1 
					       + vlSymsp->TOP__v__core.__PVT__source2);
					vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
					    = (1U & 
					       (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__MultS__88__Vfuncout 
						>> 0x1fU));
					vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
					    = (0U != vlSymsp->TOP__v__core.__Vfunc_alu__DOT__MultS__88__Vfuncout);
					vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 
					    = (1U & 
					       ((((vlSymsp->TOP__v__core.__PVT__source1 
						   & vlSymsp->TOP__v__core.__PVT__source2) 
						  >> 0x1fU) 
						 & (~ 
						    (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__MultS__88__Vfuncout 
						     >> 0x1fU))) 
						| (((~ 
						     (vlSymsp->TOP__v__core.__PVT__source1 
						      >> 0x1fU)) 
						    & (~ 
						       (vlSymsp->TOP__v__core.__PVT__source2 
							>> 0x1fU))) 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__MultS__88__Vfuncout 
						      >> 0x1fU))));
					vlSymsp->TOP__v__core.__Vcellout__alu__C 
					    = (1U & 
					       (((vlSymsp->TOP__v__core.__PVT__source1 
						  & vlSymsp->TOP__v__core.__PVT__source2) 
						 >> 0x1fU) 
						| ((~ 
						    (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__MultS__88__Vfuncout 
						     >> 0x1fU)) 
						   & ((vlSymsp->TOP__v__core.__PVT__source1 
						       | vlSymsp->TOP__v__core.__PVT__source2) 
						      >> 0x1fU))));
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__MultS__88__Vfuncout;
				    }
				}
			    } else {
				if ((0x20000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
				    if ((0x10000U & 
					 vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
					// Function: TagSUB at ALU.sv:204
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagSUB__89__Vfuncout 
					    = (vlSymsp->TOP__v__core.__PVT__source1 
					       - vlSymsp->TOP__v__core.__PVT__source2);
					vlSymsp->TOP__v__core.__PVT__alu__DOT__temp 
					    = (1U & 
					       (((((vlSymsp->TOP__v__core.__PVT__source1 
						    >> 0x1fU) 
						   & (~ 
						      (vlSymsp->TOP__v__core.__PVT__source2 
						       >> 0x1fU))) 
						  & (~ 
						     (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagSUB__89__Vfuncout 
						      >> 0x1fU))) 
						 | (((~ 
						      (vlSymsp->TOP__v__core.__PVT__source1 
						       >> 0x1fU)) 
						     & (vlSymsp->TOP__v__core.__PVT__source2 
							>> 0x1fU)) 
						    & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagSUB__89__Vfuncout 
						       >> 0x1fU))) 
						| ((0U 
						    != 
						    (3U 
						     & vlSymsp->TOP__v__core.__PVT__source1)) 
						   | (0U 
						      != 
						      (3U 
						       & vlSymsp->TOP__v__core.__PVT__source2)))));
					if (((0x23U 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     & (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__temp))) {
					    vlSymsp->TOP__v__core.__PVT__trap = 1U;
					    vlSymsp->TOP__v__core.__PVT__tag_overflow = 1U;
					} else {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagSUB__89__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 
						= vlSymsp->TOP__v__core.__PVT__alu__DOT__temp;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   != vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagSUB__89__Vfuncout);
					    vlSymsp->TOP__v__core.__Vcellout__alu__C 
						= (1U 
						   & (((~ 
							(vlSymsp->TOP__v__core.__PVT__source1 
							 >> 0x1fU)) 
						       & (vlSymsp->TOP__v__core.__PVT__source2 
							  >> 0x1fU)) 
						      | ((vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagSUB__89__Vfuncout 
							  >> 0x1fU) 
							 & ((~ 
							     (vlSymsp->TOP__v__core.__PVT__source1 
							      >> 0x1fU)) 
							    | (vlSymsp->TOP__v__core.__PVT__source2 
							       >> 0x1fU)))));
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagSUB__89__Vfuncout;
				    } else {
					// Function: TagADD at ALU.sv:192
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagADD__90__Vfuncout 
					    = (vlSymsp->TOP__v__core.__PVT__source1 
					       + vlSymsp->TOP__v__core.__PVT__source2);
					vlSymsp->TOP__v__core.__PVT__alu__DOT__temp 
					    = (1U & 
					       (((((vlSymsp->TOP__v__core.__PVT__source1 
						    & vlSymsp->TOP__v__core.__PVT__source2) 
						   >> 0x1fU) 
						  & (~ 
						     (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagADD__90__Vfuncout 
						      >> 0x1fU))) 
						 | (((~ 
						      (vlSymsp->TOP__v__core.__PVT__source1 
						       >> 0x1fU)) 
						     & (~ 
							(vlSymsp->TOP__v__core.__PVT__source2 
							 >> 0x1fU))) 
						    & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagADD__90__Vfuncout 
						       >> 0x1fU))) 
						| ((0U 
						    != 
						    (3U 
						     & vlSymsp->TOP__v__core.__PVT__source1)) 
						   | (0U 
						      != 
						      (3U 
						       & vlSymsp->TOP__v__core.__PVT__source2)))));
					if (((0x22U 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     & (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__temp))) {
					    vlSymsp->TOP__v__core.__PVT__trap = 1U;
					    vlSymsp->TOP__v__core.__PVT__tag_overflow = 1U;
					} else {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagADD__90__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 
						= vlSymsp->TOP__v__core.__PVT__alu__DOT__temp;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   != vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagADD__90__Vfuncout);
					    vlSymsp->TOP__v__core.__Vcellout__alu__C 
						= (1U 
						   & (((vlSymsp->TOP__v__core.__PVT__source1 
							& vlSymsp->TOP__v__core.__PVT__source2) 
						       >> 0x1fU) 
						      | ((~ 
							  (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagADD__90__Vfuncout 
							   >> 0x1fU)) 
							 & ((vlSymsp->TOP__v__core.__PVT__source1 
							     | vlSymsp->TOP__v__core.__PVT__source2) 
							    >> 0x1fU))));
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagADD__90__Vfuncout;
				    }
				} else {
				    if ((0x10000U & 
					 vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
					// Function: TagSUB at ALU.sv:202
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagSUB__91__Vfuncout 
					    = (vlSymsp->TOP__v__core.__PVT__source1 
					       - vlSymsp->TOP__v__core.__PVT__source2);
					vlSymsp->TOP__v__core.__PVT__alu__DOT__temp 
					    = (1U & 
					       (((((vlSymsp->TOP__v__core.__PVT__source1 
						    >> 0x1fU) 
						   & (~ 
						      (vlSymsp->TOP__v__core.__PVT__source2 
						       >> 0x1fU))) 
						  & (~ 
						     (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagSUB__91__Vfuncout 
						      >> 0x1fU))) 
						 | (((~ 
						      (vlSymsp->TOP__v__core.__PVT__source1 
						       >> 0x1fU)) 
						     & (vlSymsp->TOP__v__core.__PVT__source2 
							>> 0x1fU)) 
						    & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagSUB__91__Vfuncout 
						       >> 0x1fU))) 
						| ((0U 
						    != 
						    (3U 
						     & vlSymsp->TOP__v__core.__PVT__source1)) 
						   | (0U 
						      != 
						      (3U 
						       & vlSymsp->TOP__v__core.__PVT__source2)))));
					if (((0x23U 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     & (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__temp))) {
					    vlSymsp->TOP__v__core.__PVT__trap = 1U;
					    vlSymsp->TOP__v__core.__PVT__tag_overflow = 1U;
					} else {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagSUB__91__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 
						= vlSymsp->TOP__v__core.__PVT__alu__DOT__temp;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   != vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagSUB__91__Vfuncout);
					    vlSymsp->TOP__v__core.__Vcellout__alu__C 
						= (1U 
						   & (((~ 
							(vlSymsp->TOP__v__core.__PVT__source1 
							 >> 0x1fU)) 
						       & (vlSymsp->TOP__v__core.__PVT__source2 
							  >> 0x1fU)) 
						      | ((vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagSUB__91__Vfuncout 
							  >> 0x1fU) 
							 & ((~ 
							     (vlSymsp->TOP__v__core.__PVT__source1 
							      >> 0x1fU)) 
							    | (vlSymsp->TOP__v__core.__PVT__source2 
							       >> 0x1fU)))));
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagSUB__91__Vfuncout;
				    } else {
					// Function: TagADD at ALU.sv:190
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagADD__92__Vfuncout 
					    = (vlSymsp->TOP__v__core.__PVT__source1 
					       + vlSymsp->TOP__v__core.__PVT__source2);
					vlSymsp->TOP__v__core.__PVT__alu__DOT__temp 
					    = (1U & 
					       (((((vlSymsp->TOP__v__core.__PVT__source1 
						    & vlSymsp->TOP__v__core.__PVT__source2) 
						   >> 0x1fU) 
						  & (~ 
						     (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagADD__92__Vfuncout 
						      >> 0x1fU))) 
						 | (((~ 
						      (vlSymsp->TOP__v__core.__PVT__source1 
						       >> 0x1fU)) 
						     & (~ 
							(vlSymsp->TOP__v__core.__PVT__source2 
							 >> 0x1fU))) 
						    & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagADD__92__Vfuncout 
						       >> 0x1fU))) 
						| ((0U 
						    != 
						    (3U 
						     & vlSymsp->TOP__v__core.__PVT__source1)) 
						   | (0U 
						      != 
						      (3U 
						       & vlSymsp->TOP__v__core.__PVT__source2)))));
					if (((0x22U 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     & (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__temp))) {
					    vlSymsp->TOP__v__core.__PVT__trap = 1U;
					    vlSymsp->TOP__v__core.__PVT__tag_overflow = 1U;
					} else {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagADD__92__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 
						= vlSymsp->TOP__v__core.__PVT__alu__DOT__temp;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   != vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagADD__92__Vfuncout);
					    vlSymsp->TOP__v__core.__Vcellout__alu__C 
						= (1U 
						   & (((vlSymsp->TOP__v__core.__PVT__source1 
							& vlSymsp->TOP__v__core.__PVT__source2) 
						       >> 0x1fU) 
						      | ((~ 
							  (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagADD__92__Vfuncout 
							   >> 0x1fU)) 
							 & ((vlSymsp->TOP__v__core.__PVT__source1 
							     | vlSymsp->TOP__v__core.__PVT__source2) 
							    >> 0x1fU))));
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__TagADD__92__Vfuncout;
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x100000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
			if ((0x80000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
			    if ((0x40000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
				if ((0x20000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
				    if ((0x10000U & 
					 vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
					// Function: Divide at ALU.sv:224
					if (VL_UNLIKELY(
							(0U 
							 == vlSymsp->TOP__v__core.__PVT__source2))) {
					    VL_WRITEF("you no allowed divide by zero\n");
					}
					if (((0xeU 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x1eU 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
						= VL_DIV_QQQ(64, 
							     (((QData)((IData)(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber15)) 
							       << 0x20U) 
							      | (QData)((IData)(vlSymsp->TOP__v__core.__PVT__source1))), (QData)((IData)(vlSymsp->TOP__v__core.__PVT__source2)));
					    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__93__Vfuncout 
						= (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64);
					    vlSymsp->TOP__v__core.__PVT__alu__DOT__temp 
						= (0U 
						   != (IData)(
							      (vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
							       >> 0x20U)));
					} else {
					    vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
						= VL_DIVS_QQQ(64, 
							      (((QData)((IData)(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber15)) 
								<< 0x20U) 
							       | (QData)((IData)(vlSymsp->TOP__v__core.__PVT__source1))), 
							      VL_EXTENDS_QI(64,32, vlSymsp->TOP__v__core.__PVT__source2));
					    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__93__Vfuncout 
						= (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64);
					    vlSymsp->TOP__v__core.__PVT__alu__DOT__temp 
						= (1U 
						   & (~ 
						      ((VL_ULL(0) 
							== 
							(VL_ULL(0x1ffffffff) 
							 & (vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
							    >> 0x1fU))) 
						       | (VL_ULL(0x100000000) 
							  == 
							  (VL_ULL(0x1ffffffff) 
							   & (vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
							      >> 0x1fU))))));
					}
					if (vlSymsp->TOP__v__core.__PVT__alu__DOT__temp) {
					    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__93__Vfuncout 
						= (
						   ((0xeU 
						     == 
						     (0x3fU 
						      & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							 >> 0x10U))) 
						    | (0x1eU 
						       == 
						       (0x3fU 
							& (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							   >> 0x10U))))
						    ? 0x80000000U
						    : 
						   (VL_LTS_IQQ(1,64,64, VL_ULL(0), vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64)
						     ? 0x40000000U
						     : 0U));
					}
					if (((0x1eU 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x1fU 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__93__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 
						= vlSymsp->TOP__v__core.__PVT__alu__DOT__temp;
					    vlSymsp->TOP__v__core.__Vcellout__alu__C = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__93__Vfuncout);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__93__Vfuncout;
				    } else {
					// Function: Divide at ALU.sv:222
					if (VL_UNLIKELY(
							(0U 
							 == vlSymsp->TOP__v__core.__PVT__source2))) {
					    VL_WRITEF("you no allowed divide by zero\n");
					}
					if (((0xeU 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x1eU 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
						= VL_DIV_QQQ(64, 
							     (((QData)((IData)(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber15)) 
							       << 0x20U) 
							      | (QData)((IData)(vlSymsp->TOP__v__core.__PVT__source1))), (QData)((IData)(vlSymsp->TOP__v__core.__PVT__source2)));
					    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__94__Vfuncout 
						= (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64);
					    vlSymsp->TOP__v__core.__PVT__alu__DOT__temp 
						= (0U 
						   != (IData)(
							      (vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
							       >> 0x20U)));
					} else {
					    vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
						= VL_DIVS_QQQ(64, 
							      (((QData)((IData)(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber15)) 
								<< 0x20U) 
							       | (QData)((IData)(vlSymsp->TOP__v__core.__PVT__source1))), 
							      VL_EXTENDS_QI(64,32, vlSymsp->TOP__v__core.__PVT__source2));
					    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__94__Vfuncout 
						= (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64);
					    vlSymsp->TOP__v__core.__PVT__alu__DOT__temp 
						= (1U 
						   & (~ 
						      ((VL_ULL(0) 
							== 
							(VL_ULL(0x1ffffffff) 
							 & (vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
							    >> 0x1fU))) 
						       | (VL_ULL(0x100000000) 
							  == 
							  (VL_ULL(0x1ffffffff) 
							   & (vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
							      >> 0x1fU))))));
					}
					if (vlSymsp->TOP__v__core.__PVT__alu__DOT__temp) {
					    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__94__Vfuncout 
						= (
						   ((0xeU 
						     == 
						     (0x3fU 
						      & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							 >> 0x10U))) 
						    | (0x1eU 
						       == 
						       (0x3fU 
							& (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							   >> 0x10U))))
						    ? 0x80000000U
						    : 
						   (VL_LTS_IQQ(1,64,64, VL_ULL(0), vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64)
						     ? 0x40000000U
						     : 0U));
					}
					if (((0x1eU 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x1fU 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__94__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 
						= vlSymsp->TOP__v__core.__PVT__alu__DOT__temp;
					    vlSymsp->TOP__v__core.__Vcellout__alu__C = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__94__Vfuncout);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__94__Vfuncout;
				    }
				} else {
				    if (VL_UNLIKELY(
						    (0x10000U 
						     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
					VL_WRITEF("Instruction Doesn't exist \n");
				    } else {
					// Function: Subtract at ALU.sv:200
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__95__Vfuncout 
					    = (((4U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
						| (0x14U 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U))))
					        ? (vlSymsp->TOP__v__core.__PVT__source1 
						   - vlSymsp->TOP__v__core.__PVT__source2)
					        : (
						   (vlSymsp->TOP__v__core.__PVT__source1 
						    - vlSymsp->TOP__v__core.__PVT__source2) 
						   - (IData)(vlSymsp->TOP__v__core.__Vcellout__alu__C)));
					if (((0x14U 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x1cU 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__95__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__95__Vfuncout);
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 
						= (1U 
						   & ((((vlSymsp->TOP__v__core.__PVT__source1 
							 >> 0x1fU) 
							& (~ 
							   (vlSymsp->TOP__v__core.__PVT__source2 
							    >> 0x1fU))) 
						       & (~ 
							  (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__95__Vfuncout 
							   >> 0x1fU))) 
						      | (((~ 
							   (vlSymsp->TOP__v__core.__PVT__source1 
							    >> 0x1fU)) 
							  & (vlSymsp->TOP__v__core.__PVT__source2 
							     >> 0x1fU)) 
							 & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__95__Vfuncout 
							    >> 0x1fU))));
					    vlSymsp->TOP__v__core.__Vcellout__alu__C 
						= (1U 
						   & (((~ 
							(vlSymsp->TOP__v__core.__PVT__source1 
							 >> 0x1fU)) 
						       & (vlSymsp->TOP__v__core.__PVT__source2 
							  >> 0x1fU)) 
						      | ((vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__95__Vfuncout 
							  >> 0x1fU) 
							 & ((~ 
							     (vlSymsp->TOP__v__core.__PVT__source1 
							      >> 0x1fU)) 
							    | (vlSymsp->TOP__v__core.__PVT__source2 
							       >> 0x1fU)))));
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__95__Vfuncout;
				    }
				}
			    } else {
				if ((0x20000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
				    if ((0x10000U & 
					 vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
					// Function: Multiply at ALU.sv:214
					vlSymsp->TOP__v__core.__PVT__alu__DOT__product 
					    = (((0xaU 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
						| (0x1aU 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U))))
					        ? ((QData)((IData)(vlSymsp->TOP__v__core.__PVT__source2)) 
						   * (QData)((IData)(vlSymsp->TOP__v__core.__PVT__source1)))
					        : VL_MULS_QQQ(64,64,64, 
							      VL_EXTENDS_QI(64,32, vlSymsp->TOP__v__core.__PVT__source2), 
							      VL_EXTENDS_QI(64,32, vlSymsp->TOP__v__core.__PVT__source1)));
					vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber15 
					    = (IData)(
						      (vlSymsp->TOP__v__core.__PVT__alu__DOT__product 
						       >> 0x20U));
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Multiply__96__Vfuncout 
					    = (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__product);
					if (((0x1aU 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x1bU 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Multiply__96__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu__C = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Multiply__96__Vfuncout);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Multiply__96__Vfuncout;
				    } else {
					// Function: Multiply at ALU.sv:212
					vlSymsp->TOP__v__core.__PVT__alu__DOT__product 
					    = (((0xaU 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
						| (0x1aU 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U))))
					        ? ((QData)((IData)(vlSymsp->TOP__v__core.__PVT__source2)) 
						   * (QData)((IData)(vlSymsp->TOP__v__core.__PVT__source1)))
					        : VL_MULS_QQQ(64,64,64, 
							      VL_EXTENDS_QI(64,32, vlSymsp->TOP__v__core.__PVT__source2), 
							      VL_EXTENDS_QI(64,32, vlSymsp->TOP__v__core.__PVT__source1)));
					vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber15 
					    = (IData)(
						      (vlSymsp->TOP__v__core.__PVT__alu__DOT__product 
						       >> 0x20U));
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Multiply__97__Vfuncout 
					    = (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__product);
					if (((0x1aU 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x1bU 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Multiply__97__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu__C = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Multiply__97__Vfuncout);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Multiply__97__Vfuncout;
				    }
				} else {
				    if (VL_UNLIKELY(
						    (0x10000U 
						     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
					VL_WRITEF("Instruction Doesn't exist \n");
				    } else {
					// Function: Add at ALU.sv:188
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__98__Vfuncout 
					    = (((0U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
						| (0x10U 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U))))
					        ? (vlSymsp->TOP__v__core.__PVT__source1 
						   + vlSymsp->TOP__v__core.__PVT__source2)
					        : (
						   (vlSymsp->TOP__v__core.__PVT__source1 
						    + vlSymsp->TOP__v__core.__PVT__source2) 
						   + (IData)(vlSymsp->TOP__v__core.__Vcellout__alu__C)));
					if (((0x10U 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x18U 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__98__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__98__Vfuncout);
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 
						= (1U 
						   & ((((vlSymsp->TOP__v__core.__PVT__source1 
							 & vlSymsp->TOP__v__core.__PVT__source2) 
							>> 0x1fU) 
						       & (~ 
							  (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__98__Vfuncout 
							   >> 0x1fU))) 
						      | (((~ 
							   (vlSymsp->TOP__v__core.__PVT__source1 
							    >> 0x1fU)) 
							  & (~ 
							     (vlSymsp->TOP__v__core.__PVT__source2 
							      >> 0x1fU))) 
							 & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__98__Vfuncout 
							    >> 0x1fU))));
					    vlSymsp->TOP__v__core.__Vcellout__alu__C 
						= (1U 
						   & (((vlSymsp->TOP__v__core.__PVT__source1 
							& vlSymsp->TOP__v__core.__PVT__source2) 
						       >> 0x1fU) 
						      | ((~ 
							  (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__98__Vfuncout 
							   >> 0x1fU)) 
							 & ((vlSymsp->TOP__v__core.__PVT__source1 
							     | vlSymsp->TOP__v__core.__PVT__source2) 
							    >> 0x1fU))));
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__98__Vfuncout;
				    }
				}
			    }
			} else {
			    if ((0x40000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
				if ((0x20000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
				    if ((0x10000U & 
					 vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
					// Function: Logical at ALU.sv:174
					if (VL_UNLIKELY(
							(0x200000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
					    VL_WRITEF("No such Instruction\n");
					} else {
					    if ((0x100000U 
						 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (VL_LIKELY(
								      (0x20000U 
								       & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__99__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    VL_WRITEF("No such Instruction\n");
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__99__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__99__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    } else {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__99__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__99__Vfuncout 
								    = 
								    (~ 
								     (vlSymsp->TOP__v__core.__PVT__source1 
								      & vlSymsp->TOP__v__core.__PVT__source2));
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__99__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__99__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    }
					}
					if (((((((0x11U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U))) 
						 | (0x11U 
						    == 
						    (0x3fU 
						     & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							>> 0x10U)))) 
						| (0x12U 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U)))) 
					       | (0x16U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U)))) 
					      | (0x13U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U)))) 
					     | (0x17U 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__99__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu__C = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__99__Vfuncout);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__99__Vfuncout;
				    } else {
					// Function: Logical at ALU.sv:166
					if (VL_UNLIKELY(
							(0x200000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
					    VL_WRITEF("No such Instruction\n");
					} else {
					    if ((0x100000U 
						 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (VL_LIKELY(
								      (0x20000U 
								       & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__100__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    VL_WRITEF("No such Instruction\n");
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__100__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__100__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    } else {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__100__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__100__Vfuncout 
								    = 
								    (~ 
								     (vlSymsp->TOP__v__core.__PVT__source1 
								      & vlSymsp->TOP__v__core.__PVT__source2));
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__100__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__100__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    }
					}
					if (((((((0x11U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U))) 
						 | (0x11U 
						    == 
						    (0x3fU 
						     & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							>> 0x10U)))) 
						| (0x12U 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U)))) 
					       | (0x16U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U)))) 
					      | (0x13U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U)))) 
					     | (0x17U 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__100__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu__C = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__100__Vfuncout);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__100__Vfuncout;
				    }
				} else {
				    if (VL_UNLIKELY(
						    (0x10000U 
						     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
					VL_WRITEF("Instruction Doesn't exist \n");
				    } else {
					// Function: Subtract at ALU.sv:196
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__101__Vfuncout 
					    = (((4U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
						| (0x14U 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U))))
					        ? (vlSymsp->TOP__v__core.__PVT__source1 
						   - vlSymsp->TOP__v__core.__PVT__source2)
					        : (
						   (vlSymsp->TOP__v__core.__PVT__source1 
						    - vlSymsp->TOP__v__core.__PVT__source2) 
						   - (IData)(vlSymsp->TOP__v__core.__Vcellout__alu__C)));
					if (((0x14U 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x1cU 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__101__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__101__Vfuncout);
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 
						= (1U 
						   & ((((vlSymsp->TOP__v__core.__PVT__source1 
							 >> 0x1fU) 
							& (~ 
							   (vlSymsp->TOP__v__core.__PVT__source2 
							    >> 0x1fU))) 
						       & (~ 
							  (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__101__Vfuncout 
							   >> 0x1fU))) 
						      | (((~ 
							   (vlSymsp->TOP__v__core.__PVT__source1 
							    >> 0x1fU)) 
							  & (vlSymsp->TOP__v__core.__PVT__source2 
							     >> 0x1fU)) 
							 & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__101__Vfuncout 
							    >> 0x1fU))));
					    vlSymsp->TOP__v__core.__Vcellout__alu__C 
						= (1U 
						   & (((~ 
							(vlSymsp->TOP__v__core.__PVT__source1 
							 >> 0x1fU)) 
						       & (vlSymsp->TOP__v__core.__PVT__source2 
							  >> 0x1fU)) 
						      | ((vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__101__Vfuncout 
							  >> 0x1fU) 
							 & ((~ 
							     (vlSymsp->TOP__v__core.__PVT__source1 
							      >> 0x1fU)) 
							    | (vlSymsp->TOP__v__core.__PVT__source2 
							       >> 0x1fU)))));
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__101__Vfuncout;
				    }
				}
			    } else {
				if ((0x20000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
				    if ((0x10000U & 
					 vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
					// Function: Logical at ALU.sv:170
					if (VL_UNLIKELY(
							(0x200000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
					    VL_WRITEF("No such Instruction\n");
					} else {
					    if ((0x100000U 
						 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (VL_LIKELY(
								      (0x20000U 
								       & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__102__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    VL_WRITEF("No such Instruction\n");
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__102__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__102__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    } else {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__102__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__102__Vfuncout 
								    = 
								    (~ 
								     (vlSymsp->TOP__v__core.__PVT__source1 
								      & vlSymsp->TOP__v__core.__PVT__source2));
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__102__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__102__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    }
					}
					if (((((((0x11U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U))) 
						 | (0x11U 
						    == 
						    (0x3fU 
						     & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							>> 0x10U)))) 
						| (0x12U 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U)))) 
					       | (0x16U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U)))) 
					      | (0x13U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U)))) 
					     | (0x17U 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__102__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu__C = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__102__Vfuncout);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__102__Vfuncout;
				    } else {
					// Function: Logical at ALU.sv:162
					if (VL_UNLIKELY(
							(0x200000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
					    VL_WRITEF("No such Instruction\n");
					} else {
					    if ((0x100000U 
						 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (VL_LIKELY(
								      (0x20000U 
								       & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__103__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    VL_WRITEF("No such Instruction\n");
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__103__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__103__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    } else {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__103__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__103__Vfuncout 
								    = 
								    (~ 
								     (vlSymsp->TOP__v__core.__PVT__source1 
								      & vlSymsp->TOP__v__core.__PVT__source2));
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__103__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__103__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    }
					}
					if (((((((0x11U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U))) 
						 | (0x11U 
						    == 
						    (0x3fU 
						     & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							>> 0x10U)))) 
						| (0x12U 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U)))) 
					       | (0x16U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U)))) 
					      | (0x13U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U)))) 
					     | (0x17U 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__103__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu__C = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__103__Vfuncout);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__103__Vfuncout;
				    }
				} else {
				    if ((0x10000U & 
					 vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
					// Function: Logical at ALU.sv:154
					if (VL_UNLIKELY(
							(0x200000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
					    VL_WRITEF("No such Instruction\n");
					} else {
					    if ((0x100000U 
						 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (VL_LIKELY(
								      (0x20000U 
								       & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__104__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    VL_WRITEF("No such Instruction\n");
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__104__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__104__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    } else {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__104__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__104__Vfuncout 
								    = 
								    (~ 
								     (vlSymsp->TOP__v__core.__PVT__source1 
								      & vlSymsp->TOP__v__core.__PVT__source2));
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__104__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__104__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    }
					}
					if (((((((0x11U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U))) 
						 | (0x11U 
						    == 
						    (0x3fU 
						     & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							>> 0x10U)))) 
						| (0x12U 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U)))) 
					       | (0x16U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U)))) 
					      | (0x13U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U)))) 
					     | (0x17U 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__104__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu__C = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__104__Vfuncout);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__104__Vfuncout;
				    } else {
					// Function: Add at ALU.sv:184
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__105__Vfuncout 
					    = (((0U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
						| (0x10U 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U))))
					        ? (vlSymsp->TOP__v__core.__PVT__source1 
						   + vlSymsp->TOP__v__core.__PVT__source2)
					        : (
						   (vlSymsp->TOP__v__core.__PVT__source1 
						    + vlSymsp->TOP__v__core.__PVT__source2) 
						   + (IData)(vlSymsp->TOP__v__core.__Vcellout__alu__C)));
					if (((0x10U 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x18U 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__105__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__105__Vfuncout);
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 
						= (1U 
						   & ((((vlSymsp->TOP__v__core.__PVT__source1 
							 & vlSymsp->TOP__v__core.__PVT__source2) 
							>> 0x1fU) 
						       & (~ 
							  (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__105__Vfuncout 
							   >> 0x1fU))) 
						      | (((~ 
							   (vlSymsp->TOP__v__core.__PVT__source1 
							    >> 0x1fU)) 
							  & (~ 
							     (vlSymsp->TOP__v__core.__PVT__source2 
							      >> 0x1fU))) 
							 & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__105__Vfuncout 
							    >> 0x1fU))));
					    vlSymsp->TOP__v__core.__Vcellout__alu__C 
						= (1U 
						   & (((vlSymsp->TOP__v__core.__PVT__source1 
							& vlSymsp->TOP__v__core.__PVT__source2) 
						       >> 0x1fU) 
						      | ((~ 
							  (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__105__Vfuncout 
							   >> 0x1fU)) 
							 & ((vlSymsp->TOP__v__core.__PVT__source1 
							     | vlSymsp->TOP__v__core.__PVT__source2) 
							    >> 0x1fU))));
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__105__Vfuncout;
				    }
				}
			    }
			}
		    } else {
			if ((0x80000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
			    if ((0x40000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
				if ((0x20000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
				    if ((0x10000U & 
					 vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
					// Function: Divide at ALU.sv:220
					if (VL_UNLIKELY(
							(0U 
							 == vlSymsp->TOP__v__core.__PVT__source2))) {
					    VL_WRITEF("you no allowed divide by zero\n");
					}
					if (((0xeU 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x1eU 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
						= VL_DIV_QQQ(64, 
							     (((QData)((IData)(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber15)) 
							       << 0x20U) 
							      | (QData)((IData)(vlSymsp->TOP__v__core.__PVT__source1))), (QData)((IData)(vlSymsp->TOP__v__core.__PVT__source2)));
					    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__106__Vfuncout 
						= (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64);
					    vlSymsp->TOP__v__core.__PVT__alu__DOT__temp 
						= (0U 
						   != (IData)(
							      (vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
							       >> 0x20U)));
					} else {
					    vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
						= VL_DIVS_QQQ(64, 
							      (((QData)((IData)(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber15)) 
								<< 0x20U) 
							       | (QData)((IData)(vlSymsp->TOP__v__core.__PVT__source1))), 
							      VL_EXTENDS_QI(64,32, vlSymsp->TOP__v__core.__PVT__source2));
					    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__106__Vfuncout 
						= (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64);
					    vlSymsp->TOP__v__core.__PVT__alu__DOT__temp 
						= (1U 
						   & (~ 
						      ((VL_ULL(0) 
							== 
							(VL_ULL(0x1ffffffff) 
							 & (vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
							    >> 0x1fU))) 
						       | (VL_ULL(0x100000000) 
							  == 
							  (VL_ULL(0x1ffffffff) 
							   & (vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
							      >> 0x1fU))))));
					}
					if (vlSymsp->TOP__v__core.__PVT__alu__DOT__temp) {
					    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__106__Vfuncout 
						= (
						   ((0xeU 
						     == 
						     (0x3fU 
						      & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							 >> 0x10U))) 
						    | (0x1eU 
						       == 
						       (0x3fU 
							& (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							   >> 0x10U))))
						    ? 0x80000000U
						    : 
						   (VL_LTS_IQQ(1,64,64, VL_ULL(0), vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64)
						     ? 0x40000000U
						     : 0U));
					}
					if (((0x1eU 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x1fU 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__106__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 
						= vlSymsp->TOP__v__core.__PVT__alu__DOT__temp;
					    vlSymsp->TOP__v__core.__Vcellout__alu__C = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__106__Vfuncout);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__106__Vfuncout;
				    } else {
					// Function: Divide at ALU.sv:218
					if (VL_UNLIKELY(
							(0U 
							 == vlSymsp->TOP__v__core.__PVT__source2))) {
					    VL_WRITEF("you no allowed divide by zero\n");
					}
					if (((0xeU 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x1eU 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
						= VL_DIV_QQQ(64, 
							     (((QData)((IData)(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber15)) 
							       << 0x20U) 
							      | (QData)((IData)(vlSymsp->TOP__v__core.__PVT__source1))), (QData)((IData)(vlSymsp->TOP__v__core.__PVT__source2)));
					    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__107__Vfuncout 
						= (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64);
					    vlSymsp->TOP__v__core.__PVT__alu__DOT__temp 
						= (0U 
						   != (IData)(
							      (vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
							       >> 0x20U)));
					} else {
					    vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
						= VL_DIVS_QQQ(64, 
							      (((QData)((IData)(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber15)) 
								<< 0x20U) 
							       | (QData)((IData)(vlSymsp->TOP__v__core.__PVT__source1))), 
							      VL_EXTENDS_QI(64,32, vlSymsp->TOP__v__core.__PVT__source2));
					    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__107__Vfuncout 
						= (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64);
					    vlSymsp->TOP__v__core.__PVT__alu__DOT__temp 
						= (1U 
						   & (~ 
						      ((VL_ULL(0) 
							== 
							(VL_ULL(0x1ffffffff) 
							 & (vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
							    >> 0x1fU))) 
						       | (VL_ULL(0x100000000) 
							  == 
							  (VL_ULL(0x1ffffffff) 
							   & (vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64 
							      >> 0x1fU))))));
					}
					if (vlSymsp->TOP__v__core.__PVT__alu__DOT__temp) {
					    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__107__Vfuncout 
						= (
						   ((0xeU 
						     == 
						     (0x3fU 
						      & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							 >> 0x10U))) 
						    | (0x1eU 
						       == 
						       (0x3fU 
							& (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							   >> 0x10U))))
						    ? 0x80000000U
						    : 
						   (VL_LTS_IQQ(1,64,64, VL_ULL(0), vlSymsp->TOP__v__core.__PVT__alu__DOT__temp_64)
						     ? 0x40000000U
						     : 0U));
					}
					if (((0x1eU 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x1fU 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__107__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 
						= vlSymsp->TOP__v__core.__PVT__alu__DOT__temp;
					    vlSymsp->TOP__v__core.__Vcellout__alu__C = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__107__Vfuncout);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Divide__107__Vfuncout;
				    }
				} else {
				    if (VL_UNLIKELY(
						    (0x10000U 
						     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
					VL_WRITEF("Instruction Doesn't exist \n");
				    } else {
					// Function: Subtract at ALU.sv:198
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__108__Vfuncout 
					    = (((4U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
						| (0x14U 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U))))
					        ? (vlSymsp->TOP__v__core.__PVT__source1 
						   - vlSymsp->TOP__v__core.__PVT__source2)
					        : (
						   (vlSymsp->TOP__v__core.__PVT__source1 
						    - vlSymsp->TOP__v__core.__PVT__source2) 
						   - (IData)(vlSymsp->TOP__v__core.__Vcellout__alu__C)));
					if (((0x14U 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x1cU 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__108__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__108__Vfuncout);
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 
						= (1U 
						   & ((((vlSymsp->TOP__v__core.__PVT__source1 
							 >> 0x1fU) 
							& (~ 
							   (vlSymsp->TOP__v__core.__PVT__source2 
							    >> 0x1fU))) 
						       & (~ 
							  (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__108__Vfuncout 
							   >> 0x1fU))) 
						      | (((~ 
							   (vlSymsp->TOP__v__core.__PVT__source1 
							    >> 0x1fU)) 
							  & (vlSymsp->TOP__v__core.__PVT__source2 
							     >> 0x1fU)) 
							 & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__108__Vfuncout 
							    >> 0x1fU))));
					    vlSymsp->TOP__v__core.__Vcellout__alu__C 
						= (1U 
						   & (((~ 
							(vlSymsp->TOP__v__core.__PVT__source1 
							 >> 0x1fU)) 
						       & (vlSymsp->TOP__v__core.__PVT__source2 
							  >> 0x1fU)) 
						      | ((vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__108__Vfuncout 
							  >> 0x1fU) 
							 & ((~ 
							     (vlSymsp->TOP__v__core.__PVT__source1 
							      >> 0x1fU)) 
							    | (vlSymsp->TOP__v__core.__PVT__source2 
							       >> 0x1fU)))));
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__108__Vfuncout;
				    }
				}
			    } else {
				if ((0x20000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
				    if ((0x10000U & 
					 vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
					// Function: Multiply at ALU.sv:210
					vlSymsp->TOP__v__core.__PVT__alu__DOT__product 
					    = (((0xaU 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
						| (0x1aU 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U))))
					        ? ((QData)((IData)(vlSymsp->TOP__v__core.__PVT__source2)) 
						   * (QData)((IData)(vlSymsp->TOP__v__core.__PVT__source1)))
					        : VL_MULS_QQQ(64,64,64, 
							      VL_EXTENDS_QI(64,32, vlSymsp->TOP__v__core.__PVT__source2), 
							      VL_EXTENDS_QI(64,32, vlSymsp->TOP__v__core.__PVT__source1)));
					vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber15 
					    = (IData)(
						      (vlSymsp->TOP__v__core.__PVT__alu__DOT__product 
						       >> 0x20U));
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Multiply__109__Vfuncout 
					    = (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__product);
					if (((0x1aU 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x1bU 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Multiply__109__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu__C = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Multiply__109__Vfuncout);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Multiply__109__Vfuncout;
				    } else {
					// Function: Multiply at ALU.sv:208
					vlSymsp->TOP__v__core.__PVT__alu__DOT__product 
					    = (((0xaU 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
						| (0x1aU 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U))))
					        ? ((QData)((IData)(vlSymsp->TOP__v__core.__PVT__source2)) 
						   * (QData)((IData)(vlSymsp->TOP__v__core.__PVT__source1)))
					        : VL_MULS_QQQ(64,64,64, 
							      VL_EXTENDS_QI(64,32, vlSymsp->TOP__v__core.__PVT__source2), 
							      VL_EXTENDS_QI(64,32, vlSymsp->TOP__v__core.__PVT__source1)));
					vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber15 
					    = (IData)(
						      (vlSymsp->TOP__v__core.__PVT__alu__DOT__product 
						       >> 0x20U));
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Multiply__110__Vfuncout 
					    = (IData)(vlSymsp->TOP__v__core.__PVT__alu__DOT__product);
					if (((0x1aU 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x1bU 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Multiply__110__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu__C = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Multiply__110__Vfuncout);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Multiply__110__Vfuncout;
				    }
				} else {
				    if (VL_UNLIKELY(
						    (0x10000U 
						     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
					VL_WRITEF("Instruction Doesn't exist \n");
				    } else {
					// Function: Add at ALU.sv:186
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__111__Vfuncout 
					    = (((0U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
						| (0x10U 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U))))
					        ? (vlSymsp->TOP__v__core.__PVT__source1 
						   + vlSymsp->TOP__v__core.__PVT__source2)
					        : (
						   (vlSymsp->TOP__v__core.__PVT__source1 
						    + vlSymsp->TOP__v__core.__PVT__source2) 
						   + (IData)(vlSymsp->TOP__v__core.__Vcellout__alu__C)));
					if (((0x10U 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x18U 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__111__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__111__Vfuncout);
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 
						= (1U 
						   & ((((vlSymsp->TOP__v__core.__PVT__source1 
							 & vlSymsp->TOP__v__core.__PVT__source2) 
							>> 0x1fU) 
						       & (~ 
							  (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__111__Vfuncout 
							   >> 0x1fU))) 
						      | (((~ 
							   (vlSymsp->TOP__v__core.__PVT__source1 
							    >> 0x1fU)) 
							  & (~ 
							     (vlSymsp->TOP__v__core.__PVT__source2 
							      >> 0x1fU))) 
							 & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__111__Vfuncout 
							    >> 0x1fU))));
					    vlSymsp->TOP__v__core.__Vcellout__alu__C 
						= (1U 
						   & (((vlSymsp->TOP__v__core.__PVT__source1 
							& vlSymsp->TOP__v__core.__PVT__source2) 
						       >> 0x1fU) 
						      | ((~ 
							  (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__111__Vfuncout 
							   >> 0x1fU)) 
							 & ((vlSymsp->TOP__v__core.__PVT__source1 
							     | vlSymsp->TOP__v__core.__PVT__source2) 
							    >> 0x1fU))));
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__111__Vfuncout;
				    }
				}
			    }
			} else {
			    if ((0x40000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
				if ((0x20000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
				    if ((0x10000U & 
					 vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
					// Function: Logical at ALU.sv:172
					if (VL_UNLIKELY(
							(0x200000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
					    VL_WRITEF("No such Instruction\n");
					} else {
					    if ((0x100000U 
						 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (VL_LIKELY(
								      (0x20000U 
								       & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__112__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    VL_WRITEF("No such Instruction\n");
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__112__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__112__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    } else {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__112__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__112__Vfuncout 
								    = 
								    (~ 
								     (vlSymsp->TOP__v__core.__PVT__source1 
								      & vlSymsp->TOP__v__core.__PVT__source2));
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__112__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__112__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    }
					}
					if (((((((0x11U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U))) 
						 | (0x11U 
						    == 
						    (0x3fU 
						     & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							>> 0x10U)))) 
						| (0x12U 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U)))) 
					       | (0x16U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U)))) 
					      | (0x13U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U)))) 
					     | (0x17U 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__112__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu__C = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__112__Vfuncout);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__112__Vfuncout;
				    } else {
					// Function: Logical at ALU.sv:164
					if (VL_UNLIKELY(
							(0x200000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
					    VL_WRITEF("No such Instruction\n");
					} else {
					    if ((0x100000U 
						 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (VL_LIKELY(
								      (0x20000U 
								       & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__113__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    VL_WRITEF("No such Instruction\n");
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__113__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__113__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    } else {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__113__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__113__Vfuncout 
								    = 
								    (~ 
								     (vlSymsp->TOP__v__core.__PVT__source1 
								      & vlSymsp->TOP__v__core.__PVT__source2));
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__113__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__113__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    }
					}
					if (((((((0x11U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U))) 
						 | (0x11U 
						    == 
						    (0x3fU 
						     & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							>> 0x10U)))) 
						| (0x12U 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U)))) 
					       | (0x16U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U)))) 
					      | (0x13U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U)))) 
					     | (0x17U 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__113__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu__C = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__113__Vfuncout);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__113__Vfuncout;
				    }
				} else {
				    if ((0x10000U & 
					 vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
					// Function: Logical at ALU.sv:156
					if (VL_UNLIKELY(
							(0x200000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
					    VL_WRITEF("No such Instruction\n");
					} else {
					    if ((0x100000U 
						 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (VL_LIKELY(
								      (0x20000U 
								       & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__114__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    VL_WRITEF("No such Instruction\n");
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__114__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__114__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    } else {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__114__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__114__Vfuncout 
								    = 
								    (~ 
								     (vlSymsp->TOP__v__core.__PVT__source1 
								      & vlSymsp->TOP__v__core.__PVT__source2));
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__114__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__114__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    }
					}
					if (((((((0x11U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U))) 
						 | (0x11U 
						    == 
						    (0x3fU 
						     & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							>> 0x10U)))) 
						| (0x12U 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U)))) 
					       | (0x16U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U)))) 
					      | (0x13U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U)))) 
					     | (0x17U 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__114__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu__C = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__114__Vfuncout);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__114__Vfuncout;
				    } else {
					// Function: Subtract at ALU.sv:194
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__115__Vfuncout 
					    = (((4U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
						| (0x14U 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U))))
					        ? (vlSymsp->TOP__v__core.__PVT__source1 
						   - vlSymsp->TOP__v__core.__PVT__source2)
					        : (
						   (vlSymsp->TOP__v__core.__PVT__source1 
						    - vlSymsp->TOP__v__core.__PVT__source2) 
						   - (IData)(vlSymsp->TOP__v__core.__Vcellout__alu__C)));
					if (((0x14U 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x1cU 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__115__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__115__Vfuncout);
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 
						= (1U 
						   & ((((vlSymsp->TOP__v__core.__PVT__source1 
							 >> 0x1fU) 
							& (~ 
							   (vlSymsp->TOP__v__core.__PVT__source2 
							    >> 0x1fU))) 
						       & (~ 
							  (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__115__Vfuncout 
							   >> 0x1fU))) 
						      | (((~ 
							   (vlSymsp->TOP__v__core.__PVT__source1 
							    >> 0x1fU)) 
							  & (vlSymsp->TOP__v__core.__PVT__source2 
							     >> 0x1fU)) 
							 & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__115__Vfuncout 
							    >> 0x1fU))));
					    vlSymsp->TOP__v__core.__Vcellout__alu__C 
						= (1U 
						   & (((~ 
							(vlSymsp->TOP__v__core.__PVT__source1 
							 >> 0x1fU)) 
						       & (vlSymsp->TOP__v__core.__PVT__source2 
							  >> 0x1fU)) 
						      | ((vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__115__Vfuncout 
							  >> 0x1fU) 
							 & ((~ 
							     (vlSymsp->TOP__v__core.__PVT__source1 
							      >> 0x1fU)) 
							    | (vlSymsp->TOP__v__core.__PVT__source2 
							       >> 0x1fU)))));
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Subtract__115__Vfuncout;
				    }
				}
			    } else {
				if ((0x20000U & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
				    if ((0x10000U & 
					 vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
					// Function: Logical at ALU.sv:168
					if (VL_UNLIKELY(
							(0x200000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
					    VL_WRITEF("No such Instruction\n");
					} else {
					    if ((0x100000U 
						 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (VL_LIKELY(
								      (0x20000U 
								       & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__116__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    VL_WRITEF("No such Instruction\n");
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__116__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__116__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    } else {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__116__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__116__Vfuncout 
								    = 
								    (~ 
								     (vlSymsp->TOP__v__core.__PVT__source1 
								      & vlSymsp->TOP__v__core.__PVT__source2));
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__116__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__116__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    }
					}
					if (((((((0x11U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U))) 
						 | (0x11U 
						    == 
						    (0x3fU 
						     & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							>> 0x10U)))) 
						| (0x12U 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U)))) 
					       | (0x16U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U)))) 
					      | (0x13U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U)))) 
					     | (0x17U 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__116__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu__C = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__116__Vfuncout);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__116__Vfuncout;
				    } else {
					// Function: Logical at ALU.sv:160
					if (VL_UNLIKELY(
							(0x200000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
					    VL_WRITEF("No such Instruction\n");
					} else {
					    if ((0x100000U 
						 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (VL_LIKELY(
								      (0x20000U 
								       & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__117__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    VL_WRITEF("No such Instruction\n");
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__117__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__117__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    } else {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__117__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__117__Vfuncout 
								    = 
								    (~ 
								     (vlSymsp->TOP__v__core.__PVT__source1 
								      & vlSymsp->TOP__v__core.__PVT__source2));
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__117__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__117__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    }
					}
					if (((((((0x11U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U))) 
						 | (0x11U 
						    == 
						    (0x3fU 
						     & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							>> 0x10U)))) 
						| (0x12U 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U)))) 
					       | (0x16U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U)))) 
					      | (0x13U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U)))) 
					     | (0x17U 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__117__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu__C = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__117__Vfuncout);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__117__Vfuncout;
				    }
				} else {
				    if ((0x10000U & 
					 vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
					// Function: Logical at ALU.sv:152
					if (VL_UNLIKELY(
							(0x200000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
					    VL_WRITEF("No such Instruction\n");
					} else {
					    if ((0x100000U 
						 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (VL_LIKELY(
								      (0x20000U 
								       & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__118__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    VL_WRITEF("No such Instruction\n");
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__118__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__118__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    } else {
						if (VL_UNLIKELY(
								(0x80000U 
								 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
						    VL_WRITEF("No such Instruction\n");
						} else {
						    if (
							(0x40000U 
							 & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__118__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   ^ vlSymsp->TOP__v__core.__PVT__source2))
								  : 
								 (~ 
								  (vlSymsp->TOP__v__core.__PVT__source1 
								   | vlSymsp->TOP__v__core.__PVT__source2)));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__118__Vfuncout 
								    = 
								    (~ 
								     (vlSymsp->TOP__v__core.__PVT__source1 
								      & vlSymsp->TOP__v__core.__PVT__source2));
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    } else {
							if (
							    (0x20000U 
							     & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])) {
							    vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__118__Vfuncout 
								= 
								((0x10000U 
								  & vlSymsp->TOP__v__core.__PVT__decoded_val[4U])
								  ? 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  ^ vlSymsp->TOP__v__core.__PVT__source2)
								  : 
								 (vlSymsp->TOP__v__core.__PVT__source1 
								  | vlSymsp->TOP__v__core.__PVT__source2));
							} else {
							    if (VL_LIKELY(
									  (0x10000U 
									   & vlSymsp->TOP__v__core.__PVT__decoded_val[4U]))) {
								vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__118__Vfuncout 
								    = 
								    (vlSymsp->TOP__v__core.__PVT__source1 
								     & vlSymsp->TOP__v__core.__PVT__source2);
							    } else {
								VL_WRITEF("No such Instruction\n");
							    }
							}
						    }
						}
					    }
					}
					if (((((((0x11U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U))) 
						 | (0x11U 
						    == 
						    (0x3fU 
						     & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							>> 0x10U)))) 
						| (0x12U 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U)))) 
					       | (0x16U 
						  == 
						  (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U)))) 
					      | (0x13U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U)))) 
					     | (0x17U 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__118__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu__C = 0U;
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__118__Vfuncout);
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Logical__118__Vfuncout;
				    } else {
					// Function: Add at ALU.sv:182
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__119__Vfuncout 
					    = (((0U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
						| (0x10U 
						   == 
						   (0x3fU 
						    & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       >> 0x10U))))
					        ? (vlSymsp->TOP__v__core.__PVT__source1 
						   + vlSymsp->TOP__v__core.__PVT__source2)
					        : (
						   (vlSymsp->TOP__v__core.__PVT__source1 
						    + vlSymsp->TOP__v__core.__PVT__source2) 
						   + (IData)(vlSymsp->TOP__v__core.__Vcellout__alu__C)));
					if (((0x10U 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))) 
					     | (0x18U 
						== 
						(0x3fU 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x10U))))) {
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11 
						= (1U 
						   & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__119__Vfuncout 
						      >> 0x1fU));
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12 
						= (0U 
						   == vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__119__Vfuncout);
					    vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13 
						= (1U 
						   & ((((vlSymsp->TOP__v__core.__PVT__source1 
							 & vlSymsp->TOP__v__core.__PVT__source2) 
							>> 0x1fU) 
						       & (~ 
							  (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__119__Vfuncout 
							   >> 0x1fU))) 
						      | (((~ 
							   (vlSymsp->TOP__v__core.__PVT__source1 
							    >> 0x1fU)) 
							  & (~ 
							     (vlSymsp->TOP__v__core.__PVT__source2 
							      >> 0x1fU))) 
							 & (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__119__Vfuncout 
							    >> 0x1fU))));
					    vlSymsp->TOP__v__core.__Vcellout__alu__C 
						= (1U 
						   & (((vlSymsp->TOP__v__core.__PVT__source1 
							& vlSymsp->TOP__v__core.__PVT__source2) 
						       >> 0x1fU) 
						      | ((~ 
							  (vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__119__Vfuncout 
							   >> 0x1fU)) 
							 & ((vlSymsp->TOP__v__core.__PVT__source1 
							     | vlSymsp->TOP__v__core.__PVT__source2) 
							    >> 0x1fU))));
					}
					vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_alu__DOT__Add__119__Vfuncout;
				    }
				}
			    }
			}
		    }
		}
		vlSymsp->TOP__v__core.__PVT__alu_val 
		    = ((0x38U == (0x3fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					   >> 0x10U)))
		        ? (vlSymsp->TOP__v__core.__PVT__source1 
			   + vlSymsp->TOP__v__core.__PVT__source2)
		        : vlSymsp->TOP__v__core.__Vfunc_alu__DOT__result__84__Vfuncout);
	    } else {
		if (((0U == (3U & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
				   >> 0x16U))) & (4U 
						  == 
						  (7U 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x13U))))) {
		    vlSymsp->TOP__v__core.__PVT__alu_val 
			= vlSymsp->TOP__v__core.__PVT__source1;
		}
	    }
	    vlSymsp->TOP__v__core.__Vdly__alu__DOT__ALU_state = 0U;
	    vlSymsp->TOP__v__core.__PVT__alu_done = 1U;
	}
    }
    vlSymsp->TOP__v__core.__PVT__alu__DOT__ALU_state 
	= vlSymsp->TOP__v__core.__Vdly__alu__DOT__ALU_state;
    vlSymsp->TOP__v__core.__PVT__alu_busy = vlSymsp->TOP__v__core.__Vdly__alu_busy;
}

VL_INLINE_OPT void Vtop_Core__B0::_sequent__TOP__v__core__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_Core__B0::_sequent__TOP__v__core__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__core.__Vdly__branch_taken_ch = vlSymsp->TOP__v__core.__PVT__branch_taken_ch;
    vlSymsp->TOP__v__core.__Vdly__new_fetch_rip = vlSymsp->TOP__v__core.__PVT__new_fetch_rip;
    vlSymsp->TOP__v__core.__Vdly__dcache_reqack = vlSymsp->TOP__v__core.__PVT__dcache_reqack;
    vlSymsp->TOP__v__core.__Vdly__dcache_comp = vlSymsp->TOP__v__core.__PVT__dcache_comp;
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_en 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en;
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0U] 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0U];
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[1U] 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[1U];
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[2U] 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[2U];
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[3U] 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[3U];
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[4U] 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[4U];
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[5U] 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[5U];
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[6U] 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[6U];
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[7U] 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[7U];
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[8U] 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[8U];
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[9U] 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[9U];
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0xaU] 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0xaU];
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0xbU] 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0xbU];
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0xcU] 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0xcU];
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0xdU] 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0xdU];
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0xeU] 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0xeU];
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0xfU] 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0xfU];
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__counter 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__counter;
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__cache_state 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__cache_state;
    vlSymsp->TOP__v__core.__Vdly__DC__DOT__set_counter 
	= vlSymsp->TOP__v__core.__PVT__DC__DOT__set_counter;
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_en 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_en;
    vlSymsp->TOP__v__core.__Vdly__icache_bus_req = vlSymsp->TOP__v__core.__PVT__icache_bus_req;
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0U] 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0U];
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[1U] 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[1U];
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[2U] 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[2U];
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[3U] 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[3U];
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[4U] 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[4U];
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[5U] 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[5U];
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[6U] 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[6U];
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[7U] 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[7U];
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[8U] 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[8U];
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[9U] 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[9U];
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0xaU] 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0xaU];
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0xbU] 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0xbU];
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0xcU] 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0xcU];
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0xdU] 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0xdU];
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0xeU] 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0xeU];
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0xfU] 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0xfU];
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__cache_state 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__cache_state;
    vlSymsp->TOP__v__core.__Vdly__IC__DOT__set_counter 
	= vlSymsp->TOP__v__core.__PVT__IC__DOT__set_counter;
}

VL_INLINE_OPT void Vtop_Core__B0::_sequent__TOP__v__core__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_Core__B0::_sequent__TOP__v__core__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__core.__Vdly__go_to_mem = vlSymsp->TOP__v__core.__PVT__go_to_mem;
    vlSymsp->TOP__v__core.__Vdly__go_to_wb = vlSymsp->TOP__v__core.__PVT__go_to_wb;
    vlSymsp->TOP__v__core.__Vdly__go_to_sys = vlSymsp->TOP__v__core.__PVT__go_to_sys;
    vlSymsp->TOP__v__core.__Vdly__go_to_nonsense = vlSymsp->TOP__v__core.__PVT__go_to_nonsense;
    vlSymsp->TOP__v__core.__Vdly__go_to_branch = vlSymsp->TOP__v__core.__PVT__go_to_branch;
    vlSymsp->TOP__v__core.__Vdly__go_to_save = vlSymsp->TOP__v__core.__PVT__go_to_save;
    vlSymsp->TOP__v__core.__Vdlyvset__regs__v0 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__regs__v517 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__regs__v524 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__regs__v525 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__regs__v526 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__regs__v527 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__regs__v528 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__regs__v529 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__regs__v530 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__regs__v531 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__regs__v518 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__regs__v519 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__regs__v520 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__regs__v521 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__regs__v522 = 0U;
    vlSymsp->TOP__v__core.__Vdlyvset__regs__v523 = 0U;
    vlSymsp->TOP__v__core.__Vdly__fetch_state = vlSymsp->TOP__v__core.__PVT__fetch_state;
    vlSymsp->TOP__v__core.__Vdly__branch_taken = vlSymsp->TOP__v__core.__PVT__branch_taken;
    vlSymsp->TOP__v__core.__Vdly__decode_offset = vlSymsp->TOP__v__core.__PVT__decode_offset;
    vlSymsp->TOP__v__core.__Vdly__fetch_rip = vlSymsp->TOP__v__core.__PVT__fetch_rip;
    vlSymsp->TOP__v__core.__Vdly__decode_rip = vlSymsp->TOP__v__core.__PVT__decode_rip;
    vlSymsp->TOP__v__core.__Vdly__fetch_skip = vlSymsp->TOP__v__core.__PVT__fetch_skip;
    vlSymsp->TOP__v__core.__Vdly__alu_working = vlSymsp->TOP__v__core.__PVT__alu_working;
    vlSymsp->TOP__v__core.__Vdly__icache_line_addr 
	= vlSymsp->TOP__v__core.__PVT__icache_line_addr;
}

VL_INLINE_OPT void Vtop_Core__B0::_sequent__TOP__v__core__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_Core__B0::_sequent__TOP__v__core__7\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at Core.sv:806
    if (vlSymsp->TOP__v__core.__PVT__alu_reqack) {
	vlSymsp->TOP__v__core.__PVT__alu_req = 0U;
    }
    // ALWAYS at Core.sv:365
    if (vlTOPp->reset) {
	vlSymsp->TOP__v__core.__Vdly__decode_offset = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[1U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[2U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[3U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[4U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[5U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[6U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[7U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[8U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[9U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0xaU] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0xbU] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0xcU] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0xdU] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0xeU] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0xfU] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0x10U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0x11U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0x12U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0x13U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0x14U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0x15U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0x16U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0x17U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0x18U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0x19U] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0x1aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0x1bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0x1cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0x1dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0x1eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_buffer[0x1fU] = 0U;
    } else {
	if (vlSymsp->TOP__v__core.__PVT__decode_ack) {
	    vlSymsp->TOP__v__core.__Vdly__decode_offset 
		= (0x7fU & ((IData)(4U) + (IData)(vlSymsp->TOP__v__core.__PVT__decode_offset)));
	}
    }
    // ALWAYS at Core.sv:913
    if (vlSymsp->TOP__v__core.__PVT__go_to_memory) {
	if ((0U == (IData)(vlSymsp->TOP__v__core.__PVT__op3))) {
	    vlSymsp->TOP__v__core.__Vlvbound12 = vlSymsp->TOP__v__core.__PVT__dcache_data_out;
	    // Function: get_index at Core.sv:920
	    vlSymsp->TOP__v__core.__Vfunc_get_index__72__index 
		= (0x1fU & vlSymsp->TOP__v__core.__PVT__rd);
	    {
		if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__72__index))) {
		    vlSymsp->TOP__v__core.__Vfunc_get_index__72__Vfuncout 
			= vlSymsp->TOP__v__core.__Vfunc_get_index__72__index;
		    goto __Vlabel1;
		} else {
		    vlSymsp->TOP__v__core.__Vfunc_get_index__72__Vfuncout 
			= ((0x1f0U & (vlSymsp->TOP__v__core.__PVT__psr 
				      << 4U)) + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__72__index));
		    goto __Vlabel1;
		}
	    }
	    __Vlabel1: ;
	    if ((0x205U >= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__72__Vfuncout))) {
		// Function: get_index at Core.sv:920
		vlSymsp->TOP__v__core.__Vfunc_get_index__73__index 
		    = (0x1fU & vlSymsp->TOP__v__core.__PVT__rd);
		{
		    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__73__index))) {
			vlSymsp->TOP__v__core.__Vfunc_get_index__73__Vfuncout 
			    = vlSymsp->TOP__v__core.__Vfunc_get_index__73__index;
			goto __Vlabel2;
		    } else {
			vlSymsp->TOP__v__core.__Vfunc_get_index__73__Vfuncout 
			    = ((0x1f0U & (vlSymsp->TOP__v__core.__PVT__psr 
					  << 4U)) + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__73__index));
			goto __Vlabel2;
		    }
		}
		__Vlabel2: ;
		vlSymsp->TOP__v__core.__Vdlyvval__regs__v518 
		    = vlSymsp->TOP__v__core.__Vlvbound12;
		vlSymsp->TOP__v__core.__Vdlyvset__regs__v518 = 1U;
		vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v518 
		    = (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__73__Vfuncout);
	    }
	} else {
	    if ((1U == (IData)(vlSymsp->TOP__v__core.__PVT__op3))) {
		vlSymsp->TOP__v__core.__Vlvbound13 
		    = (0xffU & (vlSymsp->TOP__v__core.__PVT__dcache_data_out 
				>> (0x1fU & ((IData)(vlSymsp->TOP__v__core.__PVT__byte_select) 
					     << 3U))));
		// Function: get_index at Core.sv:925
		vlSymsp->TOP__v__core.__Vfunc_get_index__74__index 
		    = (0x1fU & vlSymsp->TOP__v__core.__PVT__rd);
		{
		    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__74__index))) {
			vlSymsp->TOP__v__core.__Vfunc_get_index__74__Vfuncout 
			    = vlSymsp->TOP__v__core.__Vfunc_get_index__74__index;
			goto __Vlabel3;
		    } else {
			vlSymsp->TOP__v__core.__Vfunc_get_index__74__Vfuncout 
			    = ((0x1f0U & (vlSymsp->TOP__v__core.__PVT__psr 
					  << 4U)) + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__74__index));
			goto __Vlabel3;
		    }
		}
		__Vlabel3: ;
		if ((0x205U >= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__74__Vfuncout))) {
		    // Function: get_index at Core.sv:925
		    vlSymsp->TOP__v__core.__Vfunc_get_index__75__index 
			= (0x1fU & vlSymsp->TOP__v__core.__PVT__rd);
		    {
			if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__75__index))) {
			    vlSymsp->TOP__v__core.__Vfunc_get_index__75__Vfuncout 
				= vlSymsp->TOP__v__core.__Vfunc_get_index__75__index;
			    goto __Vlabel4;
			} else {
			    vlSymsp->TOP__v__core.__Vfunc_get_index__75__Vfuncout 
				= ((0x1f0U & (vlSymsp->TOP__v__core.__PVT__psr 
					      << 4U)) 
				   + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__75__index));
			    goto __Vlabel4;
			}
		    }
		    __Vlabel4: ;
		    vlSymsp->TOP__v__core.__Vdlyvval__regs__v519 
			= vlSymsp->TOP__v__core.__Vlvbound13;
		    vlSymsp->TOP__v__core.__Vdlyvset__regs__v519 = 1U;
		    vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v519 
			= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__75__Vfuncout);
		}
	    } else {
		if ((2U == (IData)(vlSymsp->TOP__v__core.__PVT__op3))) {
		    vlSymsp->TOP__v__core.__Vlvbound14 
			= (0xffffU & (vlSymsp->TOP__v__core.__PVT__dcache_data_out 
				      >> (0x10U & ((IData)(vlSymsp->TOP__v__core.__PVT__byte_select) 
						   << 3U))));
		    // Function: get_index at Core.sv:930
		    vlSymsp->TOP__v__core.__Vfunc_get_index__76__index 
			= (0x1fU & vlSymsp->TOP__v__core.__PVT__rd);
		    {
			if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__76__index))) {
			    vlSymsp->TOP__v__core.__Vfunc_get_index__76__Vfuncout 
				= vlSymsp->TOP__v__core.__Vfunc_get_index__76__index;
			    goto __Vlabel5;
			} else {
			    vlSymsp->TOP__v__core.__Vfunc_get_index__76__Vfuncout 
				= ((0x1f0U & (vlSymsp->TOP__v__core.__PVT__psr 
					      << 4U)) 
				   + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__76__index));
			    goto __Vlabel5;
			}
		    }
		    __Vlabel5: ;
		    if ((0x205U >= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__76__Vfuncout))) {
			// Function: get_index at Core.sv:930
			vlSymsp->TOP__v__core.__Vfunc_get_index__77__index 
			    = (0x1fU & vlSymsp->TOP__v__core.__PVT__rd);
			{
			    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__77__index))) {
				vlSymsp->TOP__v__core.__Vfunc_get_index__77__Vfuncout 
				    = vlSymsp->TOP__v__core.__Vfunc_get_index__77__index;
				goto __Vlabel6;
			    } else {
				vlSymsp->TOP__v__core.__Vfunc_get_index__77__Vfuncout 
				    = ((0x1f0U & (vlSymsp->TOP__v__core.__PVT__psr 
						  << 4U)) 
				       + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__77__index));
				goto __Vlabel6;
			    }
			}
			__Vlabel6: ;
			vlSymsp->TOP__v__core.__Vdlyvval__regs__v520 
			    = vlSymsp->TOP__v__core.__Vlvbound14;
			vlSymsp->TOP__v__core.__Vdlyvset__regs__v520 = 1U;
			vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v520 
			    = (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__77__Vfuncout);
		    }
		} else {
		    if ((9U == (IData)(vlSymsp->TOP__v__core.__PVT__op3))) {
			vlSymsp->TOP__v__core.__Vlvbound15 
			    = ((0xffffff00U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlSymsp->TOP__v__core.__PVT__dcache_data_out 
								       >> 
								       (0x1fU 
									& ((IData)(7U) 
									   + 
									   ((IData)(vlSymsp->TOP__v__core.__PVT__byte_select) 
									    << 3U))))))) 
					       << 8U)) 
			       | (0xffU & (vlSymsp->TOP__v__core.__PVT__dcache_data_out 
					   >> (0x1fU 
					       & ((IData)(vlSymsp->TOP__v__core.__PVT__byte_select) 
						  << 3U)))));
			// Function: get_index at Core.sv:935
			vlSymsp->TOP__v__core.__Vfunc_get_index__78__index 
			    = (0x1fU & vlSymsp->TOP__v__core.__PVT__rd);
			{
			    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__78__index))) {
				vlSymsp->TOP__v__core.__Vfunc_get_index__78__Vfuncout 
				    = vlSymsp->TOP__v__core.__Vfunc_get_index__78__index;
				goto __Vlabel7;
			    } else {
				vlSymsp->TOP__v__core.__Vfunc_get_index__78__Vfuncout 
				    = ((0x1f0U & (vlSymsp->TOP__v__core.__PVT__psr 
						  << 4U)) 
				       + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__78__index));
				goto __Vlabel7;
			    }
			}
			__Vlabel7: ;
			if ((0x205U >= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__78__Vfuncout))) {
			    // Function: get_index at Core.sv:935
			    vlSymsp->TOP__v__core.__Vfunc_get_index__79__index 
				= (0x1fU & vlSymsp->TOP__v__core.__PVT__rd);
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__79__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__79__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__79__index;
				    goto __Vlabel8;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__79__Vfuncout 
					= ((0x1f0U 
					    & (vlSymsp->TOP__v__core.__PVT__psr 
					       << 4U)) 
					   + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__79__index));
				    goto __Vlabel8;
				}
			    }
			    __Vlabel8: ;
			    vlSymsp->TOP__v__core.__Vdlyvval__regs__v521 
				= vlSymsp->TOP__v__core.__Vlvbound15;
			    vlSymsp->TOP__v__core.__Vdlyvset__regs__v521 = 1U;
			    vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v521 
				= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__79__Vfuncout);
			}
		    } else {
			if ((0xaU == (IData)(vlSymsp->TOP__v__core.__PVT__op3))) {
			    vlSymsp->TOP__v__core.__Vlvbound16 
				= ((0xffff0000U & (
						   VL_NEGATE_I((IData)(
								       (1U 
									& (vlSymsp->TOP__v__core.__PVT__dcache_data_out 
									   >> 
									   (0x1fU 
									    & ((IData)(0x10U) 
									       + 
									       (0x10U 
										& ((IData)(vlSymsp->TOP__v__core.__PVT__byte_select) 
										<< 3U)))))))) 
						   << 0x10U)) 
				   | (0xffffU & (vlSymsp->TOP__v__core.__PVT__dcache_data_out 
						 >> 
						 (0x10U 
						  & ((IData)(vlSymsp->TOP__v__core.__PVT__byte_select) 
						     << 3U)))));
			    // Function: get_index at Core.sv:939
			    vlSymsp->TOP__v__core.__Vfunc_get_index__80__index 
				= (0x1fU & vlSymsp->TOP__v__core.__PVT__rd);
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__80__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__80__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__80__index;
				    goto __Vlabel9;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__80__Vfuncout 
					= ((0x1f0U 
					    & (vlSymsp->TOP__v__core.__PVT__psr 
					       << 4U)) 
					   + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__80__index));
				    goto __Vlabel9;
				}
			    }
			    __Vlabel9: ;
			    if ((0x205U >= (0x3ffU 
					    & vlSymsp->TOP__v__core.__Vfunc_get_index__80__Vfuncout))) {
				// Function: get_index at Core.sv:939
				vlSymsp->TOP__v__core.__Vfunc_get_index__81__index 
				    = (0x1fU & vlSymsp->TOP__v__core.__PVT__rd);
				{
				    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__81__index))) {
					vlSymsp->TOP__v__core.__Vfunc_get_index__81__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_get_index__81__index;
					goto __Vlabel10;
				    } else {
					vlSymsp->TOP__v__core.__Vfunc_get_index__81__Vfuncout 
					    = ((0x1f0U 
						& (vlSymsp->TOP__v__core.__PVT__psr 
						   << 4U)) 
					       + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__81__index));
					goto __Vlabel10;
				    }
				}
				__Vlabel10: ;
				vlSymsp->TOP__v__core.__Vdlyvval__regs__v522 
				    = vlSymsp->TOP__v__core.__Vlvbound16;
				vlSymsp->TOP__v__core.__Vdlyvset__regs__v522 = 1U;
				vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v522 
				    = (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__81__Vfuncout);
			    }
			}
		    }
		}
	    }
	}
	vlSymsp->TOP__v__core.__Vdly__alu_working = 0U;
	vlSymsp->TOP__v__core.__Vdly__go_to_memory = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__v__core.__PVT__go_to_wb) 
	     & (IData)(vlSymsp->TOP__v__core.__PVT__ready_for_wb))) {
	    vlSymsp->TOP__v__core.__Vdly__ready_for_wb = 0U;
	    vlSymsp->TOP__v__core.__Vlvbound17 = vlSymsp->TOP__v__core.__PVT__alu_val_temp;
	    // Function: get_index at Core.sv:958
	    vlSymsp->TOP__v__core.__Vfunc_get_index__82__index 
		= (0x1fU & vlSymsp->TOP__v__core.__PVT__rd);
	    {
		if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__82__index))) {
		    vlSymsp->TOP__v__core.__Vfunc_get_index__82__Vfuncout 
			= vlSymsp->TOP__v__core.__Vfunc_get_index__82__index;
		    goto __Vlabel11;
		} else {
		    vlSymsp->TOP__v__core.__Vfunc_get_index__82__Vfuncout 
			= ((0x1f0U & (vlSymsp->TOP__v__core.__PVT__psr 
				      << 4U)) + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__82__index));
		    goto __Vlabel11;
		}
	    }
	    __Vlabel11: ;
	    if ((0x205U >= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__82__Vfuncout))) {
		// Function: get_index at Core.sv:958
		vlSymsp->TOP__v__core.__Vfunc_get_index__83__index 
		    = (0x1fU & vlSymsp->TOP__v__core.__PVT__rd);
		{
		    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__83__index))) {
			vlSymsp->TOP__v__core.__Vfunc_get_index__83__Vfuncout 
			    = vlSymsp->TOP__v__core.__Vfunc_get_index__83__index;
			goto __Vlabel12;
		    } else {
			vlSymsp->TOP__v__core.__Vfunc_get_index__83__Vfuncout 
			    = ((0x1f0U & (vlSymsp->TOP__v__core.__PVT__psr 
					  << 4U)) + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__83__index));
			goto __Vlabel12;
		    }
		}
		__Vlabel12: ;
		vlSymsp->TOP__v__core.__Vdlyvval__regs__v523 
		    = vlSymsp->TOP__v__core.__Vlvbound17;
		vlSymsp->TOP__v__core.__Vdlyvset__regs__v523 = 1U;
		vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v523 
		    = (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__83__Vfuncout);
	    }
	    vlSymsp->TOP__v__core.__Vdly__alu_working = 0U;
	    vlSymsp->TOP__v__core.__Vdly__go_to_wb = 0U;
	} else {
	    if (vlSymsp->TOP__v__core.__PVT__go_to_sys) {
		vlSymsp->TOP__v__core.__Vdly__go_to_sys = 0U;
		vlSymsp->TOP__v__core.__Vdly__alu_working = 0U;
	    } else {
		if (vlSymsp->TOP__v__core.__PVT__go_to_call) {
		    vlSymsp->TOP__v__core.__Vdly__alu_working = 0U;
		    vlSymsp->TOP__v__core.__Vdly__fetch_rip 
			= vlSymsp->TOP__v__core.__PVT__new_fetch_rip;
		    vlSymsp->TOP__v__core.__Vdly__icache_line_addr 
			= (QData)((IData)((0x3ffffffU 
					   & (IData)(
						     (vlSymsp->TOP__v__core.__PVT__new_fetch_rip 
						      >> 6U)))));
		    vlSymsp->TOP__v__core.__Vdly__fetch_skip 
			= (0x3fU & (IData)(vlSymsp->TOP__v__core.__PVT__new_fetch_rip));
		    vlSymsp->TOP__v__core.__Vdly__go_to_call = 0U;
		    vlSymsp->TOP__v__core.__Vdly__decode_rip 
			= vlSymsp->TOP__v__core.__PVT__new_fetch_rip;
		} else {
		    if (vlSymsp->TOP__v__core.__PVT__go_to_nonsense) {
			vlSymsp->TOP__v__core.__Vdly__alu_working = 0U;
			vlSymsp->TOP__v__core.__Vdly__go_to_nonsense = 0U;
		    } else {
			if (vlSymsp->TOP__v__core.__PVT__go_to_branch) {
			    vlSymsp->TOP__v__core.__Vdly__alu_working = 0U;
			    if (vlSymsp->TOP__v__core.__PVT__branch_taken) {
				vlSymsp->TOP__v__core.__Vdly__icache_line_addr 
				    = (QData)((IData)(
						      (0x3ffffffU 
						       & (IData)(
								 (vlSymsp->TOP__v__core.__PVT__new_fetch_rip 
								  >> 6U)))));
				vlSymsp->TOP__v__core.__Vdly__fetch_rip 
				    = vlSymsp->TOP__v__core.__PVT__new_fetch_rip;
				vlSymsp->TOP__v__core.__Vdly__fetch_skip 
				    = (0x3fU & (IData)(vlSymsp->TOP__v__core.__PVT__new_fetch_rip));
				vlSymsp->TOP__v__core.__Vdly__decode_rip 
				    = vlSymsp->TOP__v__core.__PVT__new_fetch_rip;
			    }
			    vlSymsp->TOP__v__core.__Vdly__go_to_branch = 0U;
			} else {
			    if (vlSymsp->TOP__v__core.__PVT__go_to_save) {
				vlSymsp->TOP__v__core.__Vdly__alu_working = 0U;
				vlSymsp->TOP__v__core.__Vdly__go_to_save = 0U;
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at Core.sv:170
    if (vlTOPp->reset) {
	vlSymsp->TOP__v__core.__Vdly__fetch_state = 0U;
	vlSymsp->TOP__v__core.__Vdly__fetch_rip = vlTOPp->entry;
	vlSymsp->TOP__v__core.__Vdly__fetch_offset = 0U;
	vlSymsp->TOP__v__core.__Vdly__decode_offset = 0U;
	vlSymsp->TOP__v__core.__Vdly__alu_working = 0U;
	vlSymsp->TOP__v__core.__Vdly__branch_flag = 0U;
	vlSymsp->TOP__v__core.__Vdly__decode_rip = vlTOPp->entry;
	vlSymsp->TOP__v__core.__Vdly__fetch_skip = 
	    (0x3fU & (IData)(vlTOPp->entry));
    } else {
	if ((((IData)(vlSymsp->TOP__v__core.__PVT__branch_taken) 
	      & (~ (IData)(vlSymsp->TOP__v__core.__PVT__branch_taken_ch))) 
	     & (~ (IData)(vlSymsp->TOP__v__core.__PVT__branch_flag)))) {
	    vlSymsp->TOP__v__core.__PVT__can_decode = 0U;
	    vlSymsp->TOP__v__core.__Vdly__fetch_state = 0U;
	    vlSymsp->TOP__v__core.__Vdly__icache_req = 0U;
	    vlSymsp->TOP__v__core.__Vdly__branch_flag = 1U;
	    vlSymsp->TOP__v__core.__Vdly__fetch_skip 
		= (0x3fU & (IData)(vlSymsp->TOP__v__core.__PVT__new_fetch_rip));
	    vlSymsp->TOP__v__core.__Vdly__icache_line_addr 
		= (QData)((IData)((0x3ffffffU & (IData)(
							(vlSymsp->TOP__v__core.__PVT__fetch_rip 
							 >> 6U)))));
	    vlSymsp->TOP__v__core.__Vdly__decode_offset 
		= (0x7fU & (((0U == (0xfU & (IData)(vlSymsp->TOP__v__core.__PVT__new_fetch_rip))) 
			     | (8U == (0xfU & (IData)(vlSymsp->TOP__v__core.__PVT__new_fetch_rip))))
			     ? (IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset)
			     : ((IData)(4U) + (IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset))));
	    vlSymsp->TOP__v__core.__PVT__icache_set_index 
		= (0xfU & (IData)((vlSymsp->TOP__v__core.__PVT__fetch_rip 
				   >> 6U)));
	}
	if ((0U == vlSymsp->TOP__v__core.__PVT__fetch_state)) {
	    vlSymsp->TOP__v__core.__PVT__icache_set_index 
		= (0xfU & (IData)((vlSymsp->TOP__v__core.__PVT__fetch_rip 
				   >> 6U)));
	    vlSymsp->TOP__v__core.__Vdly__word_counter = 0U;
	    if (vlSymsp->TOP__v__core.__PVT__icache_req) {
		vlSymsp->TOP__v__core.__Vdly__fetch_state = 1U;
	    }
	    vlSymsp->TOP__v__core.__Vdly__icache_line_addr 
		= (QData)((IData)((0x3ffffffU & (IData)(
							(vlSymsp->TOP__v__core.__PVT__fetch_rip 
							 >> 6U)))));
	    vlSymsp->TOP__v__core.__Vdly__icache_req 
		= ((IData)(vlSymsp->TOP__v__core.__PVT__send_fetch_req) 
		   | (IData)(vlSymsp->TOP__v__core.__PVT__branch_taken));
	} else {
	    if ((1U == vlSymsp->TOP__v__core.__PVT__fetch_state)) {
		if (vlSymsp->TOP__v__core.__PVT__icache_reqack) {
		    vlSymsp->TOP__v__core.__Vdly__word_counter = 0U;
		    vlSymsp->TOP__v__core.__Vdly__icache_req = 0U;
		}
		if (vlSymsp->TOP__v__core.__PVT__icache_comp) {
		    vlSymsp->TOP__v__core.__Vdly__fetch_state = 2U;
		    vlSymsp->TOP__v__core.__Vdly__temp[0U] 
			= vlSymsp->TOP__v__core.__PVT__icache_data_out[0U];
		    vlSymsp->TOP__v__core.__Vdly__temp[1U] 
			= vlSymsp->TOP__v__core.__PVT__icache_data_out[1U];
		    vlSymsp->TOP__v__core.__Vdly__temp[2U] 
			= vlSymsp->TOP__v__core.__PVT__icache_data_out[2U];
		    vlSymsp->TOP__v__core.__Vdly__temp[3U] 
			= vlSymsp->TOP__v__core.__PVT__icache_data_out[3U];
		    vlSymsp->TOP__v__core.__Vdly__temp[4U] 
			= vlSymsp->TOP__v__core.__PVT__icache_data_out[4U];
		    vlSymsp->TOP__v__core.__Vdly__temp[5U] 
			= vlSymsp->TOP__v__core.__PVT__icache_data_out[5U];
		    vlSymsp->TOP__v__core.__Vdly__temp[6U] 
			= vlSymsp->TOP__v__core.__PVT__icache_data_out[6U];
		    vlSymsp->TOP__v__core.__Vdly__temp[7U] 
			= vlSymsp->TOP__v__core.__PVT__icache_data_out[7U];
		    vlSymsp->TOP__v__core.__Vdly__temp[8U] 
			= vlSymsp->TOP__v__core.__PVT__icache_data_out[8U];
		    vlSymsp->TOP__v__core.__Vdly__temp[9U] 
			= vlSymsp->TOP__v__core.__PVT__icache_data_out[9U];
		    vlSymsp->TOP__v__core.__Vdly__temp[0xaU] 
			= vlSymsp->TOP__v__core.__PVT__icache_data_out[0xaU];
		    vlSymsp->TOP__v__core.__Vdly__temp[0xbU] 
			= vlSymsp->TOP__v__core.__PVT__icache_data_out[0xbU];
		    vlSymsp->TOP__v__core.__Vdly__temp[0xcU] 
			= vlSymsp->TOP__v__core.__PVT__icache_data_out[0xcU];
		    vlSymsp->TOP__v__core.__Vdly__temp[0xdU] 
			= vlSymsp->TOP__v__core.__PVT__icache_data_out[0xdU];
		    vlSymsp->TOP__v__core.__Vdly__temp[0xeU] 
			= vlSymsp->TOP__v__core.__PVT__icache_data_out[0xeU];
		    vlSymsp->TOP__v__core.__Vdly__temp[0xfU] 
			= vlSymsp->TOP__v__core.__PVT__icache_data_out[0xfU];
		}
	    } else {
		if ((2U == vlSymsp->TOP__v__core.__PVT__fetch_state)) {
		    if (((8U < (IData)(vlSymsp->TOP__v__core.__PVT__fetch_skip)) 
			 | (8U == (IData)(vlSymsp->TOP__v__core.__PVT__fetch_skip)))) {
			vlSymsp->TOP__v__core.__Vdly__fetch_skip 
			    = (0x3fU & ((IData)(vlSymsp->TOP__v__core.__PVT__fetch_skip) 
					- (IData)(8U)));
			vlSymsp->TOP__v__core.__Vdly__word_counter 
			    = ((IData)(1U) + vlSymsp->TOP__v__core.__PVT__word_counter);
		    } else {
			if (((0U < (IData)(vlSymsp->TOP__v__core.__PVT__fetch_skip)) 
			     & (8U > (IData)(vlSymsp->TOP__v__core.__PVT__fetch_skip)))) {
			    vlSymsp->TOP__v__core.__Vdly__fetch_skip = 0U;
			} else {
			    if ((0U == (IData)(vlSymsp->TOP__v__core.__PVT__fetch_skip))) {
				if (VL_GTS_III(1,32,32, 8U, vlSymsp->TOP__v__core.__PVT__word_counter)) {
				    VL_ASSIGNSEL_WIIQ(64,
						      (0x3ffU 
						       & ((IData)(0x3c0U) 
							  - 
							  ((IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset) 
							   << 3U))), vlSymsp->TOP__v__core.__PVT__decode_buffer, 
						      (((0U 
							 == 
							 (0x1fU 
							  & ((IData)(0x1c0U) 
							     + 
							     (((IData)(1U) 
							       + vlSymsp->TOP__v__core.__PVT__word_counter) 
							      << 6U))))
							 ? VL_ULL(0)
							 : 
							((QData)((IData)(
									 vlSymsp->TOP__v__core.__PVT__temp[
									 ((IData)(2U) 
									  + 
									  (0xfU 
									   & (((IData)(0x1c0U) 
									       + 
									       (((IData)(1U) 
										+ vlSymsp->TOP__v__core.__PVT__word_counter) 
										<< 6U)) 
									      >> 5U)))])) 
							 << 
							 ((IData)(0x40U) 
							  - 
							  (0x1fU 
							   & ((IData)(0x1c0U) 
							      + 
							      (((IData)(1U) 
								+ vlSymsp->TOP__v__core.__PVT__word_counter) 
							       << 6U)))))) 
						       | (((QData)((IData)(
									   vlSymsp->TOP__v__core.__PVT__temp[
									   ((IData)(1U) 
									    + 
									    (0xfU 
									     & (((IData)(0x1c0U) 
										+ 
										(((IData)(1U) 
										+ vlSymsp->TOP__v__core.__PVT__word_counter) 
										<< 6U)) 
										>> 5U)))])) 
							   << 
							   ((0U 
							     == 
							     (0x1fU 
							      & ((IData)(0x1c0U) 
								 + 
								 (((IData)(1U) 
								   + vlSymsp->TOP__v__core.__PVT__word_counter) 
								  << 6U))))
							     ? 0x20U
							     : 
							    ((IData)(0x20U) 
							     - 
							     (0x1fU 
							      & ((IData)(0x1c0U) 
								 + 
								 (((IData)(1U) 
								   + vlSymsp->TOP__v__core.__PVT__word_counter) 
								  << 6U)))))) 
							  | ((QData)((IData)(
									     vlSymsp->TOP__v__core.__PVT__temp[
									     (0xfU 
									      & (((IData)(0x1c0U) 
										+ 
										(((IData)(1U) 
										+ vlSymsp->TOP__v__core.__PVT__word_counter) 
										<< 6U)) 
										>> 5U))])) 
							     >> 
							     (0x1fU 
							      & ((IData)(0x1c0U) 
								 + 
								 (((IData)(1U) 
								   + vlSymsp->TOP__v__core.__PVT__word_counter) 
								  << 6U)))))));
				    vlSymsp->TOP__v__core.__Vdly__fetch_offset 
					= (0x7fU & 
					   ((IData)(8U) 
					    + (IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset)));
				    vlSymsp->TOP__v__core.__Vdly__word_counter 
					= ((IData)(1U) 
					   + vlSymsp->TOP__v__core.__PVT__word_counter);
				} else {
				    vlSymsp->TOP__v__core.__Vdly__fetch_rip 
					= (VL_ULL(0x40) 
					   + vlSymsp->TOP__v__core.__PVT__fetch_rip);
				    vlSymsp->TOP__v__core.__Vdly__fetch_state = 3U;
				    vlSymsp->TOP__v__core.__Vdly__fetch_skip = 0U;
				    vlSymsp->TOP__v__core.__Vdly__word_counter = 0U;
				}
			    }
			}
		    }
		} else {
		    if ((3U == vlSymsp->TOP__v__core.__PVT__fetch_state)) {
			vlSymsp->TOP__v__core.__Vdly__fetch_state = 0U;
			vlSymsp->TOP__v__core.__Vdly__branch_taken = 0U;
			vlSymsp->TOP__v__core.__Vdly__branch_flag = 0U;
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__v__core.__PVT__alu_reqack = vlSymsp->TOP__v__core.__Vdly__alu_reqack;
    vlSymsp->TOP__v__core.__PVT__ready_for_wb = vlSymsp->TOP__v__core.__Vdly__ready_for_wb;
    vlSymsp->TOP__v__core.__PVT__go_to_call = vlSymsp->TOP__v__core.__Vdly__go_to_call;
    vlSymsp->TOP__v__core.__PVT__branch_flag = vlSymsp->TOP__v__core.__Vdly__branch_flag;
    vlSymsp->TOP__v__core.__PVT__word_counter = vlSymsp->TOP__v__core.__Vdly__word_counter;
    vlSymsp->TOP__v__core.__PVT__temp[0U] = vlSymsp->TOP__v__core.__Vdly__temp[0U];
    vlSymsp->TOP__v__core.__PVT__temp[1U] = vlSymsp->TOP__v__core.__Vdly__temp[1U];
    vlSymsp->TOP__v__core.__PVT__temp[2U] = vlSymsp->TOP__v__core.__Vdly__temp[2U];
    vlSymsp->TOP__v__core.__PVT__temp[3U] = vlSymsp->TOP__v__core.__Vdly__temp[3U];
    vlSymsp->TOP__v__core.__PVT__temp[4U] = vlSymsp->TOP__v__core.__Vdly__temp[4U];
    vlSymsp->TOP__v__core.__PVT__temp[5U] = vlSymsp->TOP__v__core.__Vdly__temp[5U];
    vlSymsp->TOP__v__core.__PVT__temp[6U] = vlSymsp->TOP__v__core.__Vdly__temp[6U];
    vlSymsp->TOP__v__core.__PVT__temp[7U] = vlSymsp->TOP__v__core.__Vdly__temp[7U];
    vlSymsp->TOP__v__core.__PVT__temp[8U] = vlSymsp->TOP__v__core.__Vdly__temp[8U];
    vlSymsp->TOP__v__core.__PVT__temp[9U] = vlSymsp->TOP__v__core.__Vdly__temp[9U];
    vlSymsp->TOP__v__core.__PVT__temp[0xaU] = vlSymsp->TOP__v__core.__Vdly__temp[0xaU];
    vlSymsp->TOP__v__core.__PVT__temp[0xbU] = vlSymsp->TOP__v__core.__Vdly__temp[0xbU];
    vlSymsp->TOP__v__core.__PVT__temp[0xcU] = vlSymsp->TOP__v__core.__Vdly__temp[0xcU];
    vlSymsp->TOP__v__core.__PVT__temp[0xdU] = vlSymsp->TOP__v__core.__Vdly__temp[0xdU];
    vlSymsp->TOP__v__core.__PVT__temp[0xeU] = vlSymsp->TOP__v__core.__Vdly__temp[0xeU];
    vlSymsp->TOP__v__core.__PVT__temp[0xfU] = vlSymsp->TOP__v__core.__Vdly__temp[0xfU];
}

VL_INLINE_OPT void Vtop_Core__B0::_sequent__TOP__v__core__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_Core__B0::_sequent__TOP__v__core__8\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at Icache.sv:157
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if ((0U == vlSymsp->TOP__v__core.__PVT__IC__DOT__cache_state)) {
	    if (vlSymsp->TOP__v__core.__PVT__icache_req) {
		vlSymsp->TOP__v__core.__PVT__icache_reqack = 1U;
		vlSymsp->TOP__v__core.__Vdly__IC__DOT__cache_state = 1U;
		vlSymsp->TOP__v__core.__Vdly__IC__DOT__set_counter = 0U;
		vlSymsp->TOP__v__core.__PVT__icache_data_out[0U] = 0U;
		vlSymsp->TOP__v__core.__PVT__icache_data_out[1U] = 0U;
		vlSymsp->TOP__v__core.__PVT__icache_data_out[2U] = 0U;
		vlSymsp->TOP__v__core.__PVT__icache_data_out[3U] = 0U;
		vlSymsp->TOP__v__core.__PVT__icache_data_out[4U] = 0U;
		vlSymsp->TOP__v__core.__PVT__icache_data_out[5U] = 0U;
		vlSymsp->TOP__v__core.__PVT__icache_data_out[6U] = 0U;
		vlSymsp->TOP__v__core.__PVT__icache_data_out[7U] = 0U;
		vlSymsp->TOP__v__core.__PVT__icache_data_out[8U] = 0U;
		vlSymsp->TOP__v__core.__PVT__icache_data_out[9U] = 0U;
		vlSymsp->TOP__v__core.__PVT__icache_data_out[0xaU] = 0U;
		vlSymsp->TOP__v__core.__PVT__icache_data_out[0xbU] = 0U;
		vlSymsp->TOP__v__core.__PVT__icache_data_out[0xcU] = 0U;
		vlSymsp->TOP__v__core.__PVT__icache_data_out[0xdU] = 0U;
		vlSymsp->TOP__v__core.__PVT__icache_data_out[0xeU] = 0U;
		vlSymsp->TOP__v__core.__PVT__icache_data_out[0xfU] = 0U;
		vlSymsp->TOP__v__core.__PVT__icache_comp = 0U;
		vlSymsp->TOP__v__core.__PVT__IC__DOT__hit = 0U;
	    }
	} else {
	    if ((1U == vlSymsp->TOP__v__core.__PVT__IC__DOT__cache_state)) {
		if (((vlSymsp->TOP__v__core.__PVT__IC__DOT__tag_r 
		      == (VL_ULL(0x3fffffffffffff) 
			  & (vlSymsp->TOP__v__core.__PVT__icache_line_addr 
			     >> 4U))) & (IData)(vlSymsp->TOP__v__core.IC__DOT____Vcellout__state__readData))) {
		    vlSymsp->TOP__v__core.__Vdly__IC__DOT__cache_state = 3U;
		    vlSymsp->TOP__v__core.__PVT__IC__DOT__hit = 1U;
		    vlSymsp->TOP__v__core.__PVT__icache_data_out[0U] 
			= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[0U];
		    vlSymsp->TOP__v__core.__PVT__icache_data_out[1U] 
			= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[1U];
		    vlSymsp->TOP__v__core.__PVT__icache_data_out[2U] 
			= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[2U];
		    vlSymsp->TOP__v__core.__PVT__icache_data_out[3U] 
			= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[3U];
		    vlSymsp->TOP__v__core.__PVT__icache_data_out[4U] 
			= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[4U];
		    vlSymsp->TOP__v__core.__PVT__icache_data_out[5U] 
			= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[5U];
		    vlSymsp->TOP__v__core.__PVT__icache_data_out[6U] 
			= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[6U];
		    vlSymsp->TOP__v__core.__PVT__icache_data_out[7U] 
			= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[7U];
		    vlSymsp->TOP__v__core.__PVT__icache_data_out[8U] 
			= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[8U];
		    vlSymsp->TOP__v__core.__PVT__icache_data_out[9U] 
			= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[9U];
		    vlSymsp->TOP__v__core.__PVT__icache_data_out[0xaU] 
			= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[0xaU];
		    vlSymsp->TOP__v__core.__PVT__icache_data_out[0xbU] 
			= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[0xbU];
		    vlSymsp->TOP__v__core.__PVT__icache_data_out[0xcU] 
			= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[0xcU];
		    vlSymsp->TOP__v__core.__PVT__icache_data_out[0xdU] 
			= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[0xdU];
		    vlSymsp->TOP__v__core.__PVT__icache_data_out[0xeU] 
			= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[0xeU];
		    vlSymsp->TOP__v__core.__PVT__icache_data_out[0xfU] 
			= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[0xfU];
		    vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_en = 0U;
		    vlSymsp->TOP__v__core.__PVT__IC__DOT__state_en = 0U;
		    vlSymsp->TOP__v__core.__PVT__IC__DOT__tag_en = 0U;
		} else {
		    if ((0x1fU > (IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__set_counter))) {
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__set_counter 
			    = (0x1fU & ((vlSymsp->TOP__v__core.__PVT__IC__DOT__age_r 
					 > vlSymsp->TOP__v__core.__PVT__IC__DOT__max_age)
					 ? ((IData)(1U) 
					    + (IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__set_counter))
					 : ((IData)(1U) 
					    + (IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__set_counter))));
		    } else {
			vlSymsp->TOP__v__core.__Vdly__icache_line_addr 
			    = vlSymsp->TOP__v__core.__PVT__icache_line_addr;
			vlSymsp->TOP__v__core.__PVT__IC__DOT__hit = 0U;
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__cache_state = 2U;
			vlSymsp->TOP__v__core.__Vdly__icache_bus_req = 1U;
		    }
		}
	    } else {
		if ((2U == vlSymsp->TOP__v__core.__PVT__IC__DOT__cache_state)) {
		    if (vlSymsp->TOP__v__core__Arbiter.__PVT__icache_reqack) {
			vlSymsp->TOP__v__core.__Vdly__icache_bus_req = 0U;
		    }
		    if (vlSymsp->TOP__v__core__Arbiter.__PVT__icache_comp) {
			vlSymsp->TOP__v__core.__PVT__IC__DOT__tag_en = 1U;
			vlSymsp->TOP__v__core.__PVT__IC__DOT__tag_w 
			    = (VL_ULL(0x3fffffffffffff) 
			       & (vlSymsp->TOP__v__core.__PVT__icache_line_addr 
				  >> 4U));
			vlSymsp->TOP__v__core.__PVT__IC__DOT__state_en = 1U;
			vlSymsp->TOP__v__core.__PVT__IC__DOT__state_w = 1U;
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_en = 1U;
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0U] 
			    = vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0U];
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[1U] 
			    = vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[1U];
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[2U] 
			    = vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[2U];
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[3U] 
			    = vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[3U];
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[4U] 
			    = vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[4U];
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[5U] 
			    = vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[5U];
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[6U] 
			    = vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[6U];
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[7U] 
			    = vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[7U];
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[8U] 
			    = vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[8U];
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[9U] 
			    = vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[9U];
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0xaU] 
			    = vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xaU];
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0xbU] 
			    = vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xbU];
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0xcU] 
			    = vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xcU];
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0xdU] 
			    = vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xdU];
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0xeU] 
			    = vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xeU];
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0xfU] 
			    = vlSymsp->TOP__v__core__Arbiter.__PVT__icache_data_out[0xfU];
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__cache_state = 4U;
		    }
		} else {
		    if ((4U == vlSymsp->TOP__v__core.__PVT__IC__DOT__cache_state)) {
			vlSymsp->TOP__v__core.__PVT__IC__DOT__tag_en = 0U;
			vlSymsp->TOP__v__core.__PVT__IC__DOT__state_en = 0U;
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_en = 0U;
			vlSymsp->TOP__v__core.__Vdly__IC__DOT__cache_state = 1U;
		    } else {
			if ((3U == vlSymsp->TOP__v__core.__PVT__IC__DOT__cache_state)) {
			    if (vlSymsp->TOP__v__core.__PVT__IC__DOT__update_done) {
				vlSymsp->TOP__v__core.__PVT__icache_comp = 1U;
				vlSymsp->TOP__v__core.__Vdly__IC__DOT__cache_state = 0U;
				vlSymsp->TOP__v__core.__PVT__icache_reqack = 0U;
			    }
			}
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__v__core.__PVT__IC__DOT__cache_state 
	= vlSymsp->TOP__v__core.__Vdly__IC__DOT__cache_state;
    vlSymsp->TOP__v__core.__PVT__IC__DOT__set_counter 
	= vlSymsp->TOP__v__core.__Vdly__IC__DOT__set_counter;
}

VL_INLINE_OPT void Vtop_Core__B0::_sequent__TOP__v__core__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_Core__B0::_sequent__TOP__v__core__9\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__core.__PVT__IC__DOT__tag_r = vlSymsp->TOP__v__core.__Vdly__IC__DOT__tag_r;
    vlSymsp->TOP__v__core.IC__DOT____Vcellout__state__readData 
	= vlSymsp->TOP__v__core.__Vdly__IC__DOT____Vcellout__state__readData;
    vlSymsp->TOP__v__core.__PVT__icache_req = vlSymsp->TOP__v__core.__Vdly__icache_req;
    // ALWAYS at SRAM.sv:24
    if (vlTOPp->reset) {
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i = 0U;
	while (VL_GTS_III(1,32,32, 0x200U, vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i)) {
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i)][0U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i)][1U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i)][2U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i)][3U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i)][4U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i)][5U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i)][6U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i)][7U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i)][8U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i)][9U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i)][0xaU] = 0U;
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i)][0xbU] = 0U;
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i)][0xcU] = 0U;
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i)][0xdU] = 0U;
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i)][0xeU] = 0U;
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i)][0xfU] = 0U;
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i 
		= ((IData)(1U) + vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i);
	}
    } else {
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__i = 1U;
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[0U] 
	    = vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index)][0U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[1U] 
	    = vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index)][1U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[2U] 
	    = vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index)][2U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[3U] 
	    = vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index)][3U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[4U] 
	    = vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index)][4U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[5U] 
	    = vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index)][5U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[6U] 
	    = vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index)][6U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[7U] 
	    = vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index)][7U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[8U] 
	    = vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index)][8U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[9U] 
	    = vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index)][9U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[0xaU] 
	    = vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index)][0xaU];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[0xbU] 
	    = vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index)][0xbU];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[0xcU] 
	    = vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index)][0xcU];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[0xdU] 
	    = vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index)][0xdU];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[0xeU] 
	    = vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index)][0xeU];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data_r[0xfU] 
	    = vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index)][0xfU];
	if (vlSymsp->TOP__v__core.__PVT__IC__DOT__data_en) {
	    vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[0U] 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0U];
	    vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[1U] 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[1U];
	    vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[2U] 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[2U];
	    vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[3U] 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[3U];
	    vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[4U] 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[4U];
	    vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[5U] 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[5U];
	    vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[6U] 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[6U];
	    vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[7U] 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[7U];
	    vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[8U] 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[8U];
	    vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[9U] 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[9U];
	    vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[0xaU] 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0xaU];
	    vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[0xbU] 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0xbU];
	    vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[0xcU] 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0xcU];
	    vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[0xdU] 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0xdU];
	    vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[0xeU] 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0xeU];
	    vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[0xfU] 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0xfU];
	    vlSymsp->TOP__v__core.__Vdlyvset__IC__DOT__data__DOT__mem__v0 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__data__DOT__mem__v0 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__index;
	}
    }
    // ALWAYS at SRAM.sv:24
    if (vlTOPp->reset) {
	vlSymsp->TOP__v__core.__PVT__IC__DOT__age__DOT__i = 0U;
	while (VL_GTS_III(1,32,32, 0x200U, vlSymsp->TOP__v__core.__PVT__IC__DOT__age__DOT__i)) {
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__age__DOT__mem[(0x1ffU 
								 & vlSymsp->TOP__v__core.__PVT__IC__DOT__age__DOT__i)] = 0U;
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__age__DOT__i 
		= ((IData)(1U) + vlSymsp->TOP__v__core.__PVT__IC__DOT__age__DOT__i);
	}
    } else {
	vlSymsp->TOP__v__core.__PVT__IC__DOT__age__DOT__i = 1U;
	vlSymsp->TOP__v__core.__PVT__IC__DOT__age_r 
	    = vlSymsp->TOP__v__core.__PVT__IC__DOT__age__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index)];
	if (vlSymsp->TOP__v__core.__PVT__IC__DOT__data_en) {
	    vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__age__DOT__mem__v0 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__age_w;
	    vlSymsp->TOP__v__core.__Vdlyvset__IC__DOT__age__DOT__mem__v0 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__age__DOT__mem__v0 
		= vlSymsp->TOP__v__core.__PVT__IC__DOT__index;
	}
    }
    // ALWAYSPOST at SRAM.sv:36
    if (vlSymsp->TOP__v__core.__Vdlyvset__IC__DOT__data__DOT__mem__v0) {
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__data__DOT__mem__v0)][0U] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[0U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__data__DOT__mem__v0)][1U] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[1U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__data__DOT__mem__v0)][2U] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[2U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__data__DOT__mem__v0)][3U] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[3U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__data__DOT__mem__v0)][4U] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[4U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__data__DOT__mem__v0)][5U] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[5U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__data__DOT__mem__v0)][6U] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[6U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__data__DOT__mem__v0)][7U] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[7U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__data__DOT__mem__v0)][8U] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[8U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__data__DOT__mem__v0)][9U] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[9U];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__data__DOT__mem__v0)][0xaU] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[0xaU];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__data__DOT__mem__v0)][0xbU] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[0xbU];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__data__DOT__mem__v0)][0xcU] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[0xcU];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__data__DOT__mem__v0)][0xdU] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[0xdU];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__data__DOT__mem__v0)][0xeU] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[0xeU];
	vlSymsp->TOP__v__core.__PVT__IC__DOT__data__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__data__DOT__mem__v0)][0xfU] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__data__DOT__mem__v0[0xfU];
    }
    // ALWAYSPOST at SRAM.sv:36
    if (vlSymsp->TOP__v__core.__Vdlyvset__IC__DOT__age__DOT__mem__v0) {
	vlSymsp->TOP__v__core.__PVT__IC__DOT__age__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__IC__DOT__age__DOT__mem__v0)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__IC__DOT__age__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vtop_Core__B0::_sequent__TOP__v__core__10(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_Core__B0::_sequent__TOP__v__core__10\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0U] 
	= vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0U];
    vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[1U] 
	= vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[1U];
    vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[2U] 
	= vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[2U];
    vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[3U] 
	= vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[3U];
    vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[4U] 
	= vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[4U];
    vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[5U] 
	= vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[5U];
    vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[6U] 
	= vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[6U];
    vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[7U] 
	= vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[7U];
    vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[8U] 
	= vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[8U];
    vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[9U] 
	= vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[9U];
    vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0xaU] 
	= vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0xaU];
    vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0xbU] 
	= vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0xbU];
    vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0xcU] 
	= vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0xcU];
    vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0xdU] 
	= vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0xdU];
    vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0xeU] 
	= vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0xeU];
    vlSymsp->TOP__v__core.__PVT__IC__DOT__data_w[0xfU] 
	= vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_w[0xfU];
    vlSymsp->TOP__v__core.__PVT__IC__DOT__data_en = vlSymsp->TOP__v__core.__Vdly__IC__DOT__data_en;
    vlSymsp->TOP__v__core.__PVT__icache_bus_req = vlSymsp->TOP__v__core.__Vdly__icache_bus_req;
    // ALWAYS at Dcache.sv:146
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if ((0U == vlSymsp->TOP__v__core.__PVT__DC__DOT__cache_state)) {
	    if (vlSymsp->TOP__v__core.__PVT__dcache_req) {
		vlSymsp->TOP__v__core.__Vdly__dcache_reqack = 1U;
		vlSymsp->TOP__v__core.__Vdly__DC__DOT__cache_state = 1U;
		vlSymsp->TOP__v__core.__Vdly__DC__DOT__set_counter = 0U;
		vlSymsp->TOP__v__core.__Vdly__dcache_comp = 0U;
		vlSymsp->TOP__v__core.__PVT__DC__DOT__hit = 0U;
	    }
	} else {
	    if ((1U == vlSymsp->TOP__v__core.__PVT__DC__DOT__cache_state)) {
		if (((vlSymsp->TOP__v__core.__PVT__DC__DOT__tag_r 
		      == (VL_ULL(0x3fffffffffffff) 
			  & (vlSymsp->TOP__v__core.__PVT__dcache_line_addr 
			     >> 4U))) & (0U != (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__state_r)))) {
		    if (vlSymsp->TOP__v__core.__PVT__dcache_rw) {
			vlSymsp->TOP__v__core.__Vdly__DC__DOT__cache_state = 4U;
			vlSymsp->TOP__v__core.__PVT__DC__DOT__hit = 1U;
			vlSymsp->TOP__v__core.__PVT__dcache_data_out 
			    = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
						 << 5U)))
				 ? 0U : (vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[
					 ((IData)(1U) 
					  + (0xfU & (IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select)))] 
					 << ((IData)(0x20U) 
					     - (0x1fU 
						& ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
						   << 5U))))) 
			       | (vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[
				  (0xfU & (IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select))] 
				  >> (0x1fU & ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
					       << 5U))));
			vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_en = 0U;
			vlSymsp->TOP__v__core.__PVT__DC__DOT__state_en = 0U;
			vlSymsp->TOP__v__core.__PVT__DC__DOT__tag_en = 0U;
		    } else {
			vlSymsp->TOP__v__core.__Vdly__DC__DOT__cache_state = 5U;
			vlSymsp->TOP__v__core.__PVT__DC__DOT__hit = 1U;
			vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_en 
			    = ((IData)(vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_en) 
			       | ((IData)(1U) << (IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select)));
			if (vlSymsp->TOP__v__core.__PVT__byte_access) {
			    if ((0U == (IData)(vlSymsp->TOP__v__core.__PVT__byte_select))) {
				VL_ASSIGNSEL_WIII(32,
						  (0x1ffU 
						   & ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
						      << 5U)), vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w, 
						  ((0xffffff00U 
						    & ((((0U 
							  == 
							  (0x1fU 
							   & ((IData)(0x18U) 
							      + 
							      ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
							       << 5U))))
							  ? 0U
							  : 
							 (vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[
							  ((IData)(1U) 
							   + 
							   (0xfU 
							    & (((IData)(0x18U) 
								+ 
								((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
								 << 5U)) 
							       >> 5U)))] 
							  << 
							  ((IData)(0x20U) 
							   - 
							   (0x1fU 
							    & ((IData)(0x18U) 
							       + 
							       ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
								<< 5U)))))) 
							| (vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[
							   (0xfU 
							    & (((IData)(0x18U) 
								+ 
								((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
								 << 5U)) 
							       >> 5U))] 
							   >> 
							   (0x1fU 
							    & ((IData)(0x18U) 
							       + 
							       ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
								<< 5U))))) 
						       << 8U)) 
						   | (0xffU 
						      & vlSymsp->TOP__v__core.__PVT__dcache_data_in)));
			    } else {
				if ((1U == (IData)(vlSymsp->TOP__v__core.__PVT__byte_select))) {
				    VL_ASSIGNSEL_WIII(32,
						      (0x1ffU 
						       & ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
							  << 5U)), vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w, 
						      ((0xffff0000U 
							& ((((0U 
							      == 
							      (0x1fU 
							       & ((IData)(0x10U) 
								  + 
								  ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
								   << 5U))))
							      ? 0U
							      : 
							     (vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[
							      ((IData)(1U) 
							       + 
							       (0xfU 
								& (((IData)(0x10U) 
								    + 
								    ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
								     << 5U)) 
								   >> 5U)))] 
							      << 
							      ((IData)(0x20U) 
							       - 
							       (0x1fU 
								& ((IData)(0x10U) 
								   + 
								   ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
								    << 5U)))))) 
							    | (vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[
							       (0xfU 
								& (((IData)(0x10U) 
								    + 
								    ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
								     << 5U)) 
								   >> 5U))] 
							       >> 
							       (0x1fU 
								& ((IData)(0x10U) 
								   + 
								   ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
								    << 5U))))) 
							   << 0x10U)) 
						       | ((0xff00U 
							   & (vlSymsp->TOP__v__core.__PVT__dcache_data_in 
							      << 8U)) 
							  | (0xffU 
							     & (((0U 
								  == 
								  (0x1fU 
								   & ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
								      << 5U)))
								  ? 0U
								  : 
								 (vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[
								  ((IData)(1U) 
								   + 
								   (0xfU 
								    & (IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select)))] 
								  << 
								  ((IData)(0x20U) 
								   - 
								   (0x1fU 
								    & ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
								       << 5U))))) 
								| (vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[
								   (0xfU 
								    & (IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select))] 
								   >> 
								   (0x1fU 
								    & ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
								       << 5U))))))));
				} else {
				    if ((2U == (IData)(vlSymsp->TOP__v__core.__PVT__byte_select))) {
					VL_ASSIGNSEL_WIII(32,
							  (0x1ffU 
							   & ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
							      << 5U)), vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w, 
							  ((0xff000000U 
							    & ((((0U 
								  == 
								  (0x1fU 
								   & ((IData)(0x18U) 
								      + 
								      ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
								       << 5U))))
								  ? 0U
								  : 
								 (vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[
								  ((IData)(1U) 
								   + 
								   (0xfU 
								    & (((IData)(0x18U) 
									+ 
									((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
									 << 5U)) 
								       >> 5U)))] 
								  << 
								  ((IData)(0x20U) 
								   - 
								   (0x1fU 
								    & ((IData)(0x18U) 
								       + 
								       ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
									<< 5U)))))) 
								| (vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[
								   (0xfU 
								    & (((IData)(0x18U) 
									+ 
									((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
									 << 5U)) 
								       >> 5U))] 
								   >> 
								   (0x1fU 
								    & ((IData)(0x18U) 
								       + 
								       ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
									<< 5U))))) 
							       << 0x18U)) 
							   | ((0xff0000U 
							       & (vlSymsp->TOP__v__core.__PVT__dcache_data_in 
								  << 0x10U)) 
							      | (0xffffU 
								 & (((0U 
								      == 
								      (0x1fU 
								       & ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
									  << 5U)))
								      ? 0U
								      : 
								     (vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[
								      ((IData)(1U) 
								       + 
								       (0xfU 
									& (IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select)))] 
								      << 
								      ((IData)(0x20U) 
								       - 
								       (0x1fU 
									& ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
									   << 5U))))) 
								    | (vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[
								       (0xfU 
									& (IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select))] 
								       >> 
								       (0x1fU 
									& ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
									   << 5U))))))));
				    } else {
					VL_ASSIGNSEL_WIII(32,
							  (0x1ffU 
							   & ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
							      << 5U)), vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w, 
							  ((0xff000000U 
							    & (vlSymsp->TOP__v__core.__PVT__dcache_data_in 
							       << 0x18U)) 
							   | (0xffffffU 
							      & (((0U 
								   == 
								   (0x1fU 
								    & ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
								       << 5U)))
								   ? 0U
								   : 
								  (vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[
								   ((IData)(1U) 
								    + 
								    (0xfU 
								     & (IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select)))] 
								   << 
								   ((IData)(0x20U) 
								    - 
								    (0x1fU 
								     & ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
									<< 5U))))) 
								 | (vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[
								    (0xfU 
								     & (IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select))] 
								    >> 
								    (0x1fU 
								     & ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
									<< 5U)))))));
				    }
				}
			    }
			} else {
			    VL_ASSIGNSEL_WIII(32,(0x1ffU 
						  & ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_word_select) 
						     << 5U)), vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w, vlSymsp->TOP__v__core.__PVT__dcache_data_in);
			}
			vlSymsp->TOP__v__core.__PVT__DC__DOT__state_en = 0U;
			vlSymsp->TOP__v__core.__PVT__DC__DOT__tag_en = 0U;
			vlSymsp->TOP__v__core.__Vdly__DC__DOT__counter = 1U;
		    }
		} else {
		    if ((0x1fU > (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__set_counter))) {
			vlSymsp->TOP__v__core.__Vdly__DC__DOT__set_counter 
			    = (0x1fU & ((vlSymsp->TOP__v__core.__PVT__DC__DOT__age_r 
					 > vlSymsp->TOP__v__core.__PVT__DC__DOT__max_age)
					 ? ((IData)(1U) 
					    + (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__set_counter))
					 : ((IData)(1U) 
					    + (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__set_counter))));
		    } else {
			vlSymsp->TOP__v__core.__PVT__DC__DOT__hit = 0U;
			if ((3U == (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__state_r))) {
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__cache_state = 3U;
			    vlSymsp->TOP__v__core.__PVT__dcache_bus_req = 1U;
			    vlSymsp->TOP__v__core.__Vcellout__DC__bus_req_addr 
				= vlSymsp->TOP__v__core.__PVT__DC__DOT__tag_r;
			    vlSymsp->TOP__v__core.__PVT__dcache_bus_rw = 0U;
			} else {
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__cache_state = 2U;
			    vlSymsp->TOP__v__core.__PVT__dcache_bus_req = 1U;
			    vlSymsp->TOP__v__core.__Vcellout__DC__bus_req_addr 
				= vlSymsp->TOP__v__core.__PVT__dcache_line_addr;
			    vlSymsp->TOP__v__core.__PVT__dcache_bus_rw = 1U;
			}
		    }
		}
	    } else {
		if ((5U == vlSymsp->TOP__v__core.__PVT__DC__DOT__cache_state)) {
		    if (VL_GTS_III(1,32,32, 6U, vlSymsp->TOP__v__core.__PVT__DC__DOT__counter)) {
			vlSymsp->TOP__v__core.__Vdly__DC__DOT__counter 
			    = ((IData)(1U) + vlSymsp->TOP__v__core.__PVT__DC__DOT__counter);
		    } else {
			vlSymsp->TOP__v__core.__Vdly__DC__DOT__cache_state = 4U;
		    }
		} else {
		    if ((2U == vlSymsp->TOP__v__core.__PVT__DC__DOT__cache_state)) {
			if (vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_reqack) {
			    vlSymsp->TOP__v__core.__PVT__dcache_bus_req = 0U;
			}
			if (vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_comp) {
			    vlSymsp->TOP__v__core.__PVT__DC__DOT__tag_en = 1U;
			    vlSymsp->TOP__v__core.__PVT__DC__DOT__tag_w 
				= (VL_ULL(0x3fffffffffffff) 
				   & (vlSymsp->TOP__v__core.__PVT__dcache_line_addr 
				      >> 4U));
			    vlSymsp->TOP__v__core.__PVT__DC__DOT__state_en = 1U;
			    vlSymsp->TOP__v__core.__PVT__DC__DOT__state_w = 2U;
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_en = 0xffffU;
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0U] 
				= vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0U];
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[1U] 
				= vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[1U];
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[2U] 
				= vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[2U];
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[3U] 
				= vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[3U];
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[4U] 
				= vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[4U];
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[5U] 
				= vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[5U];
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[6U] 
				= vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[6U];
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[7U] 
				= vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[7U];
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[8U] 
				= vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[8U];
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[9U] 
				= vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[9U];
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0xaU] 
				= vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xaU];
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0xbU] 
				= vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xbU];
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0xcU] 
				= vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xcU];
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0xdU] 
				= vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xdU];
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0xeU] 
				= vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xeU];
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0xfU] 
				= vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_data_out[0xfU];
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__cache_state = 6U;
			}
		    } else {
			if ((6U == vlSymsp->TOP__v__core.__PVT__DC__DOT__cache_state)) {
			    vlSymsp->TOP__v__core.__PVT__DC__DOT__tag_en = 0U;
			    vlSymsp->TOP__v__core.__PVT__DC__DOT__state_en = 0U;
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_en = 0U;
			    vlSymsp->TOP__v__core.__Vdly__DC__DOT__cache_state = 1U;
			} else {
			    if ((3U == vlSymsp->TOP__v__core.__PVT__DC__DOT__cache_state)) {
				if (vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_reqack) {
				    vlSymsp->TOP__v__core.__PVT__dcache_bus_req = 0U;
				    vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0U] 
					= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[0U];
				    vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[1U] 
					= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[1U];
				    vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[2U] 
					= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[2U];
				    vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[3U] 
					= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[3U];
				    vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[4U] 
					= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[4U];
				    vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[5U] 
					= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[5U];
				    vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[6U] 
					= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[6U];
				    vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[7U] 
					= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[7U];
				    vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[8U] 
					= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[8U];
				    vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[9U] 
					= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[9U];
				    vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xaU] 
					= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[0xaU];
				    vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xbU] 
					= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[0xbU];
				    vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xcU] 
					= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[0xcU];
				    vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xdU] 
					= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[0xdU];
				    vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xeU] 
					= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[0xeU];
				    vlSymsp->TOP__v__core.__PVT__dcache_bus_data_out[0xfU] 
					= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[0xfU];
				}
				if (vlSymsp->TOP__v__core__Arbiter.__PVT__dcache_comp) {
				    vlSymsp->TOP__v__core.__PVT__DC__DOT__state_en = 1U;
				    vlSymsp->TOP__v__core.__PVT__DC__DOT__state_w = 0U;
				    vlSymsp->TOP__v__core.__Vdly__DC__DOT__cache_state = 1U;
				}
			    } else {
				if ((4U == vlSymsp->TOP__v__core.__PVT__DC__DOT__cache_state)) {
				    if (vlSymsp->TOP__v__core.__PVT__DC__DOT__update_done) {
					vlSymsp->TOP__v__core.__Vdly__dcache_comp = 1U;
					vlSymsp->TOP__v__core.__Vdly__DC__DOT__cache_state = 0U;
					vlSymsp->TOP__v__core.__Vdly__dcache_reqack = 0U;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__v__core.__PVT__DC__DOT__counter = vlSymsp->TOP__v__core.__Vdly__DC__DOT__counter;
    vlSymsp->TOP__v__core.__PVT__DC__DOT__cache_state 
	= vlSymsp->TOP__v__core.__Vdly__DC__DOT__cache_state;
    vlSymsp->TOP__v__core.__PVT__DC__DOT__set_counter 
	= vlSymsp->TOP__v__core.__Vdly__DC__DOT__set_counter;
}

VL_INLINE_OPT void Vtop_Core__B0::_sequent__TOP__v__core__11(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_Core__B0::_sequent__TOP__v__core__11\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__core.__PVT__DC__DOT__tag_r = vlSymsp->TOP__v__core.__Vdly__DC__DOT__tag_r;
    vlSymsp->TOP__v__core.__PVT__DC__DOT__state_r = vlSymsp->TOP__v__core.__Vdly__DC__DOT__state_r;
    // ALWAYS at SRAM.sv:24
    if (vlTOPp->reset) {
	vlSymsp->TOP__v__core.__PVT__DC__DOT__age__DOT__i = 0U;
	while (VL_GTS_III(1,32,32, 0x200U, vlSymsp->TOP__v__core.__PVT__DC__DOT__age__DOT__i)) {
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__age__DOT__mem[(0x1ffU 
								 & vlSymsp->TOP__v__core.__PVT__DC__DOT__age__DOT__i)] = 0U;
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__age__DOT__i 
		= ((IData)(1U) + vlSymsp->TOP__v__core.__PVT__DC__DOT__age__DOT__i);
	}
    } else {
	vlSymsp->TOP__v__core.__PVT__DC__DOT__age__DOT__i = 1U;
	vlSymsp->TOP__v__core.__PVT__DC__DOT__age_r 
	    = vlSymsp->TOP__v__core.__PVT__DC__DOT__age__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index)];
	if ((1U & (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en))) {
	    vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__age__DOT__mem__v0 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__age_w;
	    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__age__DOT__mem__v0 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__age__DOT__mem__v0 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	}
    }
    // ALWAYS at SRAM.sv:24
    if (vlTOPp->reset) {
	vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i = 0U;
	while (VL_GTS_III(1,32,32, 0x200U, vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i)) {
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i)][0U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i)][1U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i)][2U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i)][3U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i)][4U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i)][5U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i)][6U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i)][7U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i)][8U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i)][9U] = 0U;
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i)][0xaU] = 0U;
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i)][0xbU] = 0U;
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i)][0xcU] = 0U;
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i)][0xdU] = 0U;
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i)][0xeU] = 0U;
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem[(0x1ffU 
								  & vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i)][0xfU] = 0U;
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i 
		= ((IData)(1U) + vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i);
	}
    } else {
	vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__i = 0x10U;
	vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[0U] 
	    = vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index)][0U];
	vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[1U] 
	    = vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index)][1U];
	vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[2U] 
	    = vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index)][2U];
	vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[3U] 
	    = vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index)][3U];
	vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[4U] 
	    = vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index)][4U];
	vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[5U] 
	    = vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index)][5U];
	vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[6U] 
	    = vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index)][6U];
	vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[7U] 
	    = vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index)][7U];
	vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[8U] 
	    = vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index)][8U];
	vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[9U] 
	    = vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index)][9U];
	vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[0xaU] 
	    = vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index)][0xaU];
	vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[0xbU] 
	    = vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index)][0xbU];
	vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[0xcU] 
	    = vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index)][0xcU];
	vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[0xdU] 
	    = vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index)][0xdU];
	vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[0xeU] 
	    = vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index)][0xeU];
	vlSymsp->TOP__v__core.__PVT__DC__DOT__data_r[0xfU] 
	    = vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
	    [(IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index)][0xfU];
	if ((1U & (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en))) {
	    vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v0 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0U];
	    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v0 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v0 = 0U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v0 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	}
	if ((2U & (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en))) {
	    vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v1 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[1U];
	    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v1 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v1 = 0x20U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v1 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	}
	if ((4U & (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en))) {
	    vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v2 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[2U];
	    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v2 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v2 = 0x40U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v2 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	}
	if ((8U & (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en))) {
	    vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v3 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[3U];
	    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v3 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v3 = 0x60U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v3 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	}
	if ((0x10U & (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en))) {
	    vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v4 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[4U];
	    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v4 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v4 = 0x80U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v4 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	}
	if ((0x20U & (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en))) {
	    vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v5 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[5U];
	    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v5 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v5 = 0xa0U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v5 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	}
	if ((0x40U & (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en))) {
	    vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v6 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[6U];
	    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v6 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v6 = 0xc0U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v6 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	}
	if ((0x80U & (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en))) {
	    vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v7 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[7U];
	    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v7 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v7 = 0xe0U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v7 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	}
	if ((0x100U & (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en))) {
	    vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v8 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[8U];
	    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v8 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v8 = 0x100U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v8 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	}
	if ((0x200U & (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en))) {
	    vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v9 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[9U];
	    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v9 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v9 = 0x120U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v9 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	}
	if ((0x400U & (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en))) {
	    vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v10 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0xaU];
	    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v10 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v10 = 0x140U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v10 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	}
	if ((0x800U & (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en))) {
	    vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v11 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0xbU];
	    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v11 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v11 = 0x160U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v11 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	}
	if ((0x1000U & (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en))) {
	    vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v12 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0xcU];
	    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v12 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v12 = 0x180U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v12 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	}
	if ((0x2000U & (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en))) {
	    vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v13 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0xdU];
	    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v13 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v13 = 0x1a0U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v13 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	}
	if ((0x4000U & (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en))) {
	    vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v14 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0xeU];
	    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v14 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v14 = 0x1c0U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v14 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	}
	if ((0x8000U & (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en))) {
	    vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v15 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0xfU];
	    vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v15 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v15 = 0x1e0U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v15 
		= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	}
    }
    // ALWAYS at Core.sv:819
    if (vlSymsp->TOP__v__core.__PVT__go_to_mem) {
	if ((0U == vlSymsp->TOP__v__core.__PVT__mem_state)) {
	    if (((3U == (IData)(vlSymsp->TOP__v__core.__PVT__op)) 
		 & (((4U > (IData)(vlSymsp->TOP__v__core.__PVT__op3)) 
		     | (9U == (IData)(vlSymsp->TOP__v__core.__PVT__op3))) 
		    | (0xaU == (IData)(vlSymsp->TOP__v__core.__PVT__op3))))) {
		vlSymsp->TOP__v__core.__Vdly__mem_state = 1U;
		vlSymsp->TOP__v__core.__PVT__dcache_req = 1U;
		vlSymsp->TOP__v__core.__PVT__dcache_rw = 1U;
		vlSymsp->TOP__v__core.__PVT__dcache_line_addr 
		    = (VL_ULL(0x3ffffffffffffc0) & 
		       ((QData)((IData)((0x3ffffffU 
					 & (vlSymsp->TOP__v__core.__PVT__destination 
					    >> 6U)))) 
			<< 6U));
		if ((4U & vlSymsp->TOP__v__core.__PVT__destination)) {
		    vlSymsp->TOP__v__core.__PVT__byte_select 
			= (3U & vlSymsp->TOP__v__core.__PVT__destination);
		    vlSymsp->TOP__v__core.__PVT__dcache_word_select 
			= (0xfU & ((vlSymsp->TOP__v__core.__PVT__destination 
				    >> 2U) - (IData)(1U)));
		} else {
		    vlSymsp->TOP__v__core.__PVT__byte_select 
			= (3U & vlSymsp->TOP__v__core.__PVT__destination);
		    vlSymsp->TOP__v__core.__PVT__dcache_word_select 
			= (0xfU & ((IData)(1U) + (vlSymsp->TOP__v__core.__PVT__destination 
						  >> 2U)));
		}
		vlSymsp->TOP__v__core.__PVT__dcache_set_index 
		    = (0xfU & (vlSymsp->TOP__v__core.__PVT__destination 
			       >> 6U));
	    } else {
		if ((((3U == (IData)(vlSymsp->TOP__v__core.__PVT__op)) 
		      & (3U < (IData)(vlSymsp->TOP__v__core.__PVT__op3))) 
		     & (7U > (IData)(vlSymsp->TOP__v__core.__PVT__op3)))) {
		    vlSymsp->TOP__v__core.__Vdly__mem_state = 1U;
		    vlSymsp->TOP__v__core.__PVT__dcache_req = 1U;
		    vlSymsp->TOP__v__core.__PVT__dcache_rw = 0U;
		    vlSymsp->TOP__v__core.__PVT__dcache_line_addr 
			= (VL_ULL(0x3ffffffffffffc0) 
			   & ((QData)((IData)((0x3ffffffU 
					       & (vlSymsp->TOP__v__core.__PVT__destination 
						  >> 6U)))) 
			      << 6U));
		    vlSymsp->TOP__v__core.__PVT__dcache_set_index 
			= (0xfU & (vlSymsp->TOP__v__core.__PVT__destination 
				   >> 6U));
		    vlSymsp->TOP__v__core.__PVT__dcache_word_select 
			= (0xfU & ((4U & vlSymsp->TOP__v__core.__PVT__destination)
				    ? ((vlSymsp->TOP__v__core.__PVT__destination 
					>> 2U) - (IData)(1U))
				    : ((IData)(1U) 
				       + (vlSymsp->TOP__v__core.__PVT__destination 
					  >> 2U))));
		    if ((4U == (IData)(vlSymsp->TOP__v__core.__PVT__op3))) {
			// Function: get_index at Core.sv:869
			// Function: get_index at Core.sv:869
			vlSymsp->TOP__v__core.__Vfunc_get_index__67__index 
			    = (0x1fU & vlSymsp->TOP__v__core.__PVT__rd);
			{
			    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__67__index))) {
				vlSymsp->TOP__v__core.__Vfunc_get_index__67__Vfuncout 
				    = vlSymsp->TOP__v__core.__Vfunc_get_index__67__index;
				goto __Vlabel13;
			    } else {
				vlSymsp->TOP__v__core.__Vfunc_get_index__67__Vfuncout 
				    = ((0x1f0U & (vlSymsp->TOP__v__core.__PVT__psr 
						  << 4U)) 
				       + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__67__index));
				goto __Vlabel13;
			    }
			}
			__Vlabel13: ;
			vlSymsp->TOP__v__core.__Vfunc_get_index__66__index 
			    = (0x1fU & vlSymsp->TOP__v__core.__PVT__rd);
			{
			    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__66__index))) {
				vlSymsp->TOP__v__core.__Vfunc_get_index__66__Vfuncout 
				    = vlSymsp->TOP__v__core.__Vfunc_get_index__66__index;
				goto __Vlabel14;
			    } else {
				vlSymsp->TOP__v__core.__Vfunc_get_index__66__Vfuncout 
				    = ((0x1f0U & (vlSymsp->TOP__v__core.__PVT__psr 
						  << 4U)) 
				       + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__66__index));
				goto __Vlabel14;
			    }
			}
			__Vlabel14: ;
			vlSymsp->TOP__v__core.__PVT__dcache_data_in 
			    = ((0x205U >= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__66__Vfuncout))
			        ? vlSymsp->TOP__v__core.__PVT__regs
			       [(0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__67__Vfuncout)]
			        : 0U);
			vlSymsp->TOP__v__core.__PVT__byte_access = 0U;
		    } else {
			if ((5U == (IData)(vlSymsp->TOP__v__core.__PVT__op3))) {
			    // Function: get_index at Core.sv:874
			    // Function: get_index at Core.sv:874
			    vlSymsp->TOP__v__core.__Vfunc_get_index__69__index 
				= (0x1fU & vlSymsp->TOP__v__core.__PVT__rd);
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__69__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__69__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__69__index;
				    goto __Vlabel15;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__69__Vfuncout 
					= ((0x1f0U 
					    & (vlSymsp->TOP__v__core.__PVT__psr 
					       << 4U)) 
					   + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__69__index));
				    goto __Vlabel15;
				}
			    }
			    __Vlabel15: ;
			    vlSymsp->TOP__v__core.__Vfunc_get_index__68__index 
				= (0x1fU & vlSymsp->TOP__v__core.__PVT__rd);
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__68__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__68__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__68__index;
				    goto __Vlabel16;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__68__Vfuncout 
					= ((0x1f0U 
					    & (vlSymsp->TOP__v__core.__PVT__psr 
					       << 4U)) 
					   + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__68__index));
				    goto __Vlabel16;
				}
			    }
			    __Vlabel16: ;
			    vlSymsp->TOP__v__core.__PVT__dcache_data_in 
				= (IData)((QData)((IData)(
							  (0x1ffU 
							   & ((0x205U 
							       >= 
							       (0x3ffU 
								& vlSymsp->TOP__v__core.__Vfunc_get_index__68__Vfuncout))
							       ? 
							      vlSymsp->TOP__v__core.__PVT__regs
							      [
							      (0x3ffU 
							       & vlSymsp->TOP__v__core.__Vfunc_get_index__69__Vfuncout)]
							       : 0U)))));
			    vlSymsp->TOP__v__core.__PVT__byte_access = 1U;
			    vlSymsp->TOP__v__core.__PVT__byte_select 
				= (3U & vlSymsp->TOP__v__core.__PVT__destination);
			} else {
			    if ((6U == (IData)(vlSymsp->TOP__v__core.__PVT__op3))) {
				// Function: get_index at Core.sv:881
				// Function: get_index at Core.sv:881
				vlSymsp->TOP__v__core.__Vfunc_get_index__71__index 
				    = (0x1fU & vlSymsp->TOP__v__core.__PVT__rd);
				{
				    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__71__index))) {
					vlSymsp->TOP__v__core.__Vfunc_get_index__71__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_get_index__71__index;
					goto __Vlabel17;
				    } else {
					vlSymsp->TOP__v__core.__Vfunc_get_index__71__Vfuncout 
					    = ((0x1f0U 
						& (vlSymsp->TOP__v__core.__PVT__psr 
						   << 4U)) 
					       + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__71__index));
					goto __Vlabel17;
				    }
				}
				__Vlabel17: ;
				vlSymsp->TOP__v__core.__Vfunc_get_index__70__index 
				    = (0x1fU & vlSymsp->TOP__v__core.__PVT__rd);
				{
				    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__70__index))) {
					vlSymsp->TOP__v__core.__Vfunc_get_index__70__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_get_index__70__index;
					goto __Vlabel18;
				    } else {
					vlSymsp->TOP__v__core.__Vfunc_get_index__70__Vfuncout 
					    = ((0x1f0U 
						& (vlSymsp->TOP__v__core.__PVT__psr 
						   << 4U)) 
					       + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__70__index));
					goto __Vlabel18;
				    }
				}
				__Vlabel18: ;
				vlSymsp->TOP__v__core.__PVT__dcache_data_in 
				    = (0xffffU & ((0x205U 
						   >= 
						   (0x3ffU 
						    & vlSymsp->TOP__v__core.__Vfunc_get_index__70__Vfuncout))
						   ? 
						  vlSymsp->TOP__v__core.__PVT__regs
						  [
						  (0x3ffU 
						   & vlSymsp->TOP__v__core.__Vfunc_get_index__71__Vfuncout)]
						   : 0U));
			    }
			}
		    }
		}
	    }
	} else {
	    if ((1U == vlSymsp->TOP__v__core.__PVT__mem_state)) {
		if (vlSymsp->TOP__v__core.__PVT__dcache_reqack) {
		    vlSymsp->TOP__v__core.__PVT__dcache_req = 0U;
		}
		if (vlSymsp->TOP__v__core.__PVT__dcache_comp) {
		    vlSymsp->TOP__v__core.__Vdly__mem_state = 0U;
		    vlSymsp->TOP__v__core.__Vdly__go_to_memory = 1U;
		    vlSymsp->TOP__v__core.__Vdly__go_to_mem = 0U;
		}
	    }
	}
    }
    // ALWAYSPOST at SRAM.sv:36
    if (vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__age__DOT__mem__v0) {
	vlSymsp->TOP__v__core.__PVT__DC__DOT__age__DOT__mem[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__age__DOT__mem__v0)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__age__DOT__mem__v0;
    }
    // ALWAYSPOST at SRAM.sv:36
    if (vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v0) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v0), 
			  vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
			  [(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v0)], vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v0);
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v1) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v1), 
			  vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
			  [(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v1)], vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v1);
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v2) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v2), 
			  vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
			  [(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v2)], vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v2);
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v3) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v3), 
			  vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
			  [(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v3)], vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v3);
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v4) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v4), 
			  vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
			  [(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v4)], vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v4);
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v5) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v5), 
			  vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
			  [(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v5)], vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v5);
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v6) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v6), 
			  vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
			  [(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v6)], vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v6);
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v7) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v7), 
			  vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
			  [(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v7)], vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v7);
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v8) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v8), 
			  vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
			  [(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v8)], vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v8);
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v9) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v9), 
			  vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
			  [(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v9)], vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v9);
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v10) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v10), 
			  vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
			  [(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v10)], vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v10);
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v11) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v11), 
			  vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
			  [(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v11)], vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v11);
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v12) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v12), 
			  vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
			  [(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v12)], vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v12);
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v13) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v13), 
			  vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
			  [(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v13)], vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v13);
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v14) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v14), 
			  vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
			  [(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v14)], vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v14);
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__DC__DOT__data__DOT__mem__v15) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v__core.__Vdlyvlsb__DC__DOT__data__DOT__mem__v15), 
			  vlSymsp->TOP__v__core.__PVT__DC__DOT__data__DOT__mem
			  [(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__DC__DOT__data__DOT__mem__v15)], vlSymsp->TOP__v__core.__Vdlyvval__DC__DOT__data__DOT__mem__v15);
    }
    vlSymsp->TOP__v__core.__PVT__mem_state = vlSymsp->TOP__v__core.__Vdly__mem_state;
    vlSymsp->TOP__v__core.__PVT__go_to_memory = vlSymsp->TOP__v__core.__Vdly__go_to_memory;
}

VL_INLINE_OPT void Vtop_Core__B0::_sequent__TOP__v__core__12(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_Core__B0::_sequent__TOP__v__core__12\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp35,95,0,3);
    //char	__VpadToAlign236[4];
    VL_SIGW(__Vtemp36,95,0,3);
    //char	__VpadToAlign252[4];
    VL_SIGW(__Vtemp37,95,0,3);
    //char	__VpadToAlign268[4];
    VL_SIGW(__Vtemp38,95,0,3);
    // Body
    vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0U] 
	= vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0U];
    vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[1U] 
	= vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[1U];
    vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[2U] 
	= vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[2U];
    vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[3U] 
	= vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[3U];
    vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[4U] 
	= vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[4U];
    vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[5U] 
	= vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[5U];
    vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[6U] 
	= vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[6U];
    vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[7U] 
	= vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[7U];
    vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[8U] 
	= vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[8U];
    vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[9U] 
	= vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[9U];
    vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0xaU] 
	= vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0xaU];
    vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0xbU] 
	= vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0xbU];
    vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0xcU] 
	= vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0xcU];
    vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0xdU] 
	= vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0xdU];
    vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0xeU] 
	= vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0xeU];
    vlSymsp->TOP__v__core.__PVT__DC__DOT__data_w[0xfU] 
	= vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_w[0xfU];
    vlSymsp->TOP__v__core.__PVT__DC__DOT__data_en = vlSymsp->TOP__v__core.__Vdly__DC__DOT__data_en;
    vlSymsp->TOP__v__core.__PVT__dcache_reqack = vlSymsp->TOP__v__core.__Vdly__dcache_reqack;
    vlSymsp->TOP__v__core.__PVT__dcache_comp = vlSymsp->TOP__v__core.__Vdly__dcache_comp;
    // ALWAYS at Core.sv:512
    if (((IData)(vlSymsp->TOP__v__core.__PVT__decode_ack) 
	 & (~ (IData)(vlSymsp->TOP__v__core.__PVT__alu_working)))) {
	vlSymsp->TOP__v__core.__Vdly__alu_working = 1U;
	if (vlSymsp->TOP__v__core.__PVT__branch_taken_ch) {
	    vlSymsp->TOP__v__core.__PVT__can_decode = 0U;
	    vlSymsp->TOP__v__core.__Vdly__branch_taken_ch = 0U;
	    vlSymsp->TOP__v__core.__Vdly__icache_line_addr 
		= (QData)((IData)((0x3ffffffU & (IData)(
							(vlSymsp->TOP__v__core.__PVT__new_fetch_rip 
							 >> 6U)))));
	    vlSymsp->TOP__v__core.__Vdly__fetch_rip 
		= vlSymsp->TOP__v__core.__PVT__new_fetch_rip;
	    vlSymsp->TOP__v__core.__Vdly__fetch_skip 
		= (0x3fU & (IData)(vlSymsp->TOP__v__core.__PVT__new_fetch_rip));
	    vlSymsp->TOP__v__core.__Vdly__decode_rip 
		= vlSymsp->TOP__v__core.__PVT__new_fetch_rip;
	    vlSymsp->TOP__v__core.__Vdly__branch_taken = 1U;
	    vlSymsp->TOP__v__core.__Vdly__fetch_state = 0U;
	}
	if (((2U == (3U & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
			   >> 0x16U))) & (0x3cU == 
					  (0x3fU & 
					   (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					    >> 0x10U))))) {
	    vlSymsp->TOP__v__core.__Vdly__go_to_save = 1U;
	    vlSymsp->TOP__v__core.__PVT__psr = ((0xffffffe0U 
						 & vlSymsp->TOP__v__core.__PVT__psr) 
						| (0x1fU 
						   & (vlSymsp->TOP__v__core.__PVT__psr 
						      - (IData)(1U))));
	    if (VL_UNLIKELY((0U != (vlSymsp->TOP__v__core.__PVT__wim 
				    & VL_POWSS_III(32,32,5, (IData)(2U), 
						   (0x1fU 
						    & vlSymsp->TOP__v__core.__PVT__psr), 1,0))))) {
		VL_WRITEF("save error wim %b psr %b\n",
			  32,vlSymsp->TOP__v__core.__PVT__wim,
			  5,(0x1fU & vlSymsp->TOP__v__core.__PVT__psr));
	    } else {
		if ((1U & (~ (IData)(vlSymsp->TOP__v__core.__PVT__branch_taken_ch)))) {
		    vlSymsp->TOP__v__core.__Vdly__decode_rip 
			= (VL_ULL(4) + vlSymsp->TOP__v__core.__PVT__decode_rip);
		}
		if ((0x20U & vlSymsp->TOP__v__core.__PVT__decoded_val[1U])) {
		    // Function: get_index at Core.sv:547
		    // Function: get_index at Core.sv:547
		    vlSymsp->TOP__v__core.__Vfunc_get_index__5__index 
			= (0x1fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
				    >> 3U));
		    {
			if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__5__index))) {
			    vlSymsp->TOP__v__core.__Vfunc_get_index__5__Vfuncout 
				= vlSymsp->TOP__v__core.__Vfunc_get_index__5__index;
			    goto __Vlabel19;
			} else {
			    vlSymsp->TOP__v__core.__Vfunc_get_index__5__Vfuncout 
				= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
				    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__5__index)) 
				   - (IData)(8U));
			    goto __Vlabel19;
			}
		    }
		    __Vlabel19: ;
		    vlSymsp->TOP__v__core.__Vfunc_get_index__4__index 
			= (0x1fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
				    >> 3U));
		    {
			if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__4__index))) {
			    vlSymsp->TOP__v__core.__Vfunc_get_index__4__Vfuncout 
				= vlSymsp->TOP__v__core.__Vfunc_get_index__4__index;
			    goto __Vlabel20;
			} else {
			    vlSymsp->TOP__v__core.__Vfunc_get_index__4__Vfuncout 
				= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
				    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__4__index)) 
				   - (IData)(8U));
			    goto __Vlabel20;
			}
		    }
		    __Vlabel20: ;
		    vlSymsp->TOP__v__core.__Vlvbound5 
			= (((0x205U >= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__4__Vfuncout))
			     ? vlSymsp->TOP__v__core.__PVT__regs
			    [(0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__5__Vfuncout)]
			     : 0U) + vlSymsp->TOP__v__core.__PVT__decoded_val[0U]);
		    // Function: reg_win at Core.sv:547
		    vlSymsp->TOP__v__core.__Vfunc_reg_win__6__win 
			= (0x1fU & vlSymsp->TOP__v__core.__PVT__psr);
		    vlSymsp->TOP__v__core.__Vfunc_reg_win__6__index 
			= (0x1fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
				    >> 8U));
		    {
			vlSymsp->TOP__v__core.__Vfunc_reg_win__6__cwpt 
			    = vlSymsp->TOP__v__core.__Vfunc_reg_win__6__win;
			vlSymsp->TOP__v__core.__Vfunc_reg_win__6__oregt 
			    = ((IData)(8U) + (vlSymsp->TOP__v__core.__Vfunc_reg_win__6__cwpt 
					      << 4U));
			if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_reg_win__6__index))) {
			    vlSymsp->TOP__v__core.__Vfunc_reg_win__6__Vfuncout 
				= vlSymsp->TOP__v__core.__Vfunc_reg_win__6__index;
			    goto __Vlabel21;
			} else {
			    vlSymsp->TOP__v__core.__Vfunc_reg_win__6__Vfuncout 
				= ((vlSymsp->TOP__v__core.__Vfunc_reg_win__6__oregt 
				    + (IData)(vlSymsp->TOP__v__core.__Vfunc_reg_win__6__index)) 
				   - (IData)(8U));
			    goto __Vlabel21;
			}
		    }
		    __Vlabel21: ;
		    if ((0x205U >= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_reg_win__6__Vfuncout))) {
			// Function: reg_win at Core.sv:547
			vlSymsp->TOP__v__core.__Vfunc_reg_win__7__win 
			    = (0x1fU & vlSymsp->TOP__v__core.__PVT__psr);
			vlSymsp->TOP__v__core.__Vfunc_reg_win__7__index 
			    = (0x1fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					>> 8U));
			{
			    vlSymsp->TOP__v__core.__Vfunc_reg_win__7__cwpt 
				= vlSymsp->TOP__v__core.__Vfunc_reg_win__7__win;
			    vlSymsp->TOP__v__core.__Vfunc_reg_win__7__oregt 
				= ((IData)(8U) + (vlSymsp->TOP__v__core.__Vfunc_reg_win__7__cwpt 
						  << 4U));
			    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_reg_win__7__index))) {
				vlSymsp->TOP__v__core.__Vfunc_reg_win__7__Vfuncout 
				    = vlSymsp->TOP__v__core.__Vfunc_reg_win__7__index;
				goto __Vlabel22;
			    } else {
				vlSymsp->TOP__v__core.__Vfunc_reg_win__7__Vfuncout 
				    = ((vlSymsp->TOP__v__core.__Vfunc_reg_win__7__oregt 
					+ (IData)(vlSymsp->TOP__v__core.__Vfunc_reg_win__7__index)) 
				       - (IData)(8U));
				goto __Vlabel22;
			    }
			}
			__Vlabel22: ;
			vlSymsp->TOP__v__core.__Vdlyvval__regs__v524 
			    = vlSymsp->TOP__v__core.__Vlvbound5;
			vlSymsp->TOP__v__core.__Vdlyvset__regs__v524 = 1U;
			vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v524 
			    = (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_reg_win__7__Vfuncout);
		    }
		} else {
		    // Function: get_index at Core.sv:544
		    // Function: get_index at Core.sv:544
		    // Function: get_index at Core.sv:544
		    // Function: get_index at Core.sv:544
		    vlSymsp->TOP__v__core.__Vfunc_get_index__11__index 
			= (0x1fU & ((vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
				     << 2U) | (vlSymsp->TOP__v__core.__PVT__decoded_val[3U] 
					       >> 0x1eU)));
		    {
			if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__11__index))) {
			    vlSymsp->TOP__v__core.__Vfunc_get_index__11__Vfuncout 
				= vlSymsp->TOP__v__core.__Vfunc_get_index__11__index;
			    goto __Vlabel23;
			} else {
			    vlSymsp->TOP__v__core.__Vfunc_get_index__11__Vfuncout 
				= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
				    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__11__index)) 
				   - (IData)(8U));
			    goto __Vlabel23;
			}
		    }
		    __Vlabel23: ;
		    vlSymsp->TOP__v__core.__Vfunc_get_index__10__index 
			= (0x1fU & ((vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
				     << 2U) | (vlSymsp->TOP__v__core.__PVT__decoded_val[3U] 
					       >> 0x1eU)));
		    {
			if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__10__index))) {
			    vlSymsp->TOP__v__core.__Vfunc_get_index__10__Vfuncout 
				= vlSymsp->TOP__v__core.__Vfunc_get_index__10__index;
			    goto __Vlabel24;
			} else {
			    vlSymsp->TOP__v__core.__Vfunc_get_index__10__Vfuncout 
				= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
				    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__10__index)) 
				   - (IData)(8U));
			    goto __Vlabel24;
			}
		    }
		    __Vlabel24: ;
		    vlSymsp->TOP__v__core.__Vfunc_get_index__9__index 
			= (0x1fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
				    >> 3U));
		    {
			if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__9__index))) {
			    vlSymsp->TOP__v__core.__Vfunc_get_index__9__Vfuncout 
				= vlSymsp->TOP__v__core.__Vfunc_get_index__9__index;
			    goto __Vlabel25;
			} else {
			    vlSymsp->TOP__v__core.__Vfunc_get_index__9__Vfuncout 
				= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
				    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__9__index)) 
				   - (IData)(8U));
			    goto __Vlabel25;
			}
		    }
		    __Vlabel25: ;
		    vlSymsp->TOP__v__core.__Vfunc_get_index__8__index 
			= (0x1fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
				    >> 3U));
		    {
			if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__8__index))) {
			    vlSymsp->TOP__v__core.__Vfunc_get_index__8__Vfuncout 
				= vlSymsp->TOP__v__core.__Vfunc_get_index__8__index;
			    goto __Vlabel26;
			} else {
			    vlSymsp->TOP__v__core.__Vfunc_get_index__8__Vfuncout 
				= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
				    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__8__index)) 
				   - (IData)(8U));
			    goto __Vlabel26;
			}
		    }
		    __Vlabel26: ;
		    vlSymsp->TOP__v__core.__Vlvbound4 
			= (((0x205U >= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__8__Vfuncout))
			     ? vlSymsp->TOP__v__core.__PVT__regs
			    [(0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__9__Vfuncout)]
			     : 0U) + ((0x205U >= (0x3ffU 
						  & vlSymsp->TOP__v__core.__Vfunc_get_index__10__Vfuncout))
				       ? vlSymsp->TOP__v__core.__PVT__regs
				      [(0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__11__Vfuncout)]
				       : 0U));
		    // Function: reg_win at Core.sv:544
		    vlSymsp->TOP__v__core.__Vfunc_reg_win__12__win 
			= (0x1fU & vlSymsp->TOP__v__core.__PVT__psr);
		    vlSymsp->TOP__v__core.__Vfunc_reg_win__12__index 
			= (0x1fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
				    >> 8U));
		    {
			vlSymsp->TOP__v__core.__Vfunc_reg_win__12__cwpt 
			    = vlSymsp->TOP__v__core.__Vfunc_reg_win__12__win;
			vlSymsp->TOP__v__core.__Vfunc_reg_win__12__oregt 
			    = ((IData)(8U) + (vlSymsp->TOP__v__core.__Vfunc_reg_win__12__cwpt 
					      << 4U));
			if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_reg_win__12__index))) {
			    vlSymsp->TOP__v__core.__Vfunc_reg_win__12__Vfuncout 
				= vlSymsp->TOP__v__core.__Vfunc_reg_win__12__index;
			    goto __Vlabel27;
			} else {
			    vlSymsp->TOP__v__core.__Vfunc_reg_win__12__Vfuncout 
				= ((vlSymsp->TOP__v__core.__Vfunc_reg_win__12__oregt 
				    + (IData)(vlSymsp->TOP__v__core.__Vfunc_reg_win__12__index)) 
				   - (IData)(8U));
			    goto __Vlabel27;
			}
		    }
		    __Vlabel27: ;
		    if ((0x205U >= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_reg_win__12__Vfuncout))) {
			// Function: reg_win at Core.sv:544
			vlSymsp->TOP__v__core.__Vfunc_reg_win__13__win 
			    = (0x1fU & vlSymsp->TOP__v__core.__PVT__psr);
			vlSymsp->TOP__v__core.__Vfunc_reg_win__13__index 
			    = (0x1fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					>> 8U));
			{
			    vlSymsp->TOP__v__core.__Vfunc_reg_win__13__cwpt 
				= vlSymsp->TOP__v__core.__Vfunc_reg_win__13__win;
			    vlSymsp->TOP__v__core.__Vfunc_reg_win__13__oregt 
				= ((IData)(8U) + (vlSymsp->TOP__v__core.__Vfunc_reg_win__13__cwpt 
						  << 4U));
			    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_reg_win__13__index))) {
				vlSymsp->TOP__v__core.__Vfunc_reg_win__13__Vfuncout 
				    = vlSymsp->TOP__v__core.__Vfunc_reg_win__13__index;
				goto __Vlabel28;
			    } else {
				vlSymsp->TOP__v__core.__Vfunc_reg_win__13__Vfuncout 
				    = ((vlSymsp->TOP__v__core.__Vfunc_reg_win__13__oregt 
					+ (IData)(vlSymsp->TOP__v__core.__Vfunc_reg_win__13__index)) 
				       - (IData)(8U));
				goto __Vlabel28;
			    }
			}
			__Vlabel28: ;
			vlSymsp->TOP__v__core.__Vdlyvval__regs__v525 
			    = vlSymsp->TOP__v__core.__Vlvbound4;
			vlSymsp->TOP__v__core.__Vdlyvset__regs__v525 = 1U;
			vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v525 
			    = (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_reg_win__13__Vfuncout);
		    }
		}
	    }
	} else {
	    if (((2U == (3U & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
			       >> 0x16U))) & (0x3dU 
					      == (0x3fU 
						  & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						     >> 0x10U))))) {
		vlSymsp->TOP__v__core.__Vdly__go_to_save = 1U;
		vlSymsp->TOP__v__core.__PVT__psr = 
		    ((0xffffffe0U & vlSymsp->TOP__v__core.__PVT__psr) 
		     | (0x1fU & ((IData)(1U) + vlSymsp->TOP__v__core.__PVT__psr)));
		if (VL_UNLIKELY((0U != (vlSymsp->TOP__v__core.__PVT__wim 
					& VL_POWSS_III(32,32,5, (IData)(2U), 
						       (0x1fU 
							& vlSymsp->TOP__v__core.__PVT__psr), 1,0))))) {
		    VL_WRITEF("restore error wim %b psr %b\n",
			      32,vlSymsp->TOP__v__core.__PVT__wim,
			      5,(0x1fU & vlSymsp->TOP__v__core.__PVT__psr));
		} else {
		    if ((1U & (~ (IData)(vlSymsp->TOP__v__core.__PVT__branch_taken_ch)))) {
			vlSymsp->TOP__v__core.__Vdly__decode_rip 
			    = (VL_ULL(4) + vlSymsp->TOP__v__core.__PVT__decode_rip);
		    }
		    if ((0x20U & vlSymsp->TOP__v__core.__PVT__decoded_val[1U])) {
			// Function: get_index at Core.sv:569
			// Function: get_index at Core.sv:569
			vlSymsp->TOP__v__core.__Vfunc_get_index__15__index 
			    = (0x1fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					>> 3U));
			{
			    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__15__index))) {
				vlSymsp->TOP__v__core.__Vfunc_get_index__15__Vfuncout 
				    = vlSymsp->TOP__v__core.__Vfunc_get_index__15__index;
				goto __Vlabel29;
			    } else {
				vlSymsp->TOP__v__core.__Vfunc_get_index__15__Vfuncout 
				    = ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					+ (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__15__index)) 
				       - (IData)(8U));
				goto __Vlabel29;
			    }
			}
			__Vlabel29: ;
			vlSymsp->TOP__v__core.__Vfunc_get_index__14__index 
			    = (0x1fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					>> 3U));
			{
			    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__14__index))) {
				vlSymsp->TOP__v__core.__Vfunc_get_index__14__Vfuncout 
				    = vlSymsp->TOP__v__core.__Vfunc_get_index__14__index;
				goto __Vlabel30;
			    } else {
				vlSymsp->TOP__v__core.__Vfunc_get_index__14__Vfuncout 
				    = ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					+ (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__14__index)) 
				       - (IData)(8U));
				goto __Vlabel30;
			    }
			}
			__Vlabel30: ;
			vlSymsp->TOP__v__core.__Vlvbound7 
			    = (((0x205U >= (0x3ffU 
					    & vlSymsp->TOP__v__core.__Vfunc_get_index__14__Vfuncout))
				 ? vlSymsp->TOP__v__core.__PVT__regs
				[(0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__15__Vfuncout)]
				 : 0U) + vlSymsp->TOP__v__core.__PVT__decoded_val[0U]);
			// Function: reg_win at Core.sv:569
			vlSymsp->TOP__v__core.__Vfunc_reg_win__16__win 
			    = (0x1fU & vlSymsp->TOP__v__core.__PVT__psr);
			vlSymsp->TOP__v__core.__Vfunc_reg_win__16__index 
			    = (0x1fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					>> 8U));
			{
			    vlSymsp->TOP__v__core.__Vfunc_reg_win__16__cwpt 
				= vlSymsp->TOP__v__core.__Vfunc_reg_win__16__win;
			    vlSymsp->TOP__v__core.__Vfunc_reg_win__16__oregt 
				= ((IData)(8U) + (vlSymsp->TOP__v__core.__Vfunc_reg_win__16__cwpt 
						  << 4U));
			    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_reg_win__16__index))) {
				vlSymsp->TOP__v__core.__Vfunc_reg_win__16__Vfuncout 
				    = vlSymsp->TOP__v__core.__Vfunc_reg_win__16__index;
				goto __Vlabel31;
			    } else {
				vlSymsp->TOP__v__core.__Vfunc_reg_win__16__Vfuncout 
				    = ((vlSymsp->TOP__v__core.__Vfunc_reg_win__16__oregt 
					+ (IData)(vlSymsp->TOP__v__core.__Vfunc_reg_win__16__index)) 
				       - (IData)(8U));
				goto __Vlabel31;
			    }
			}
			__Vlabel31: ;
			if ((0x205U >= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_reg_win__16__Vfuncout))) {
			    // Function: reg_win at Core.sv:569
			    vlSymsp->TOP__v__core.__Vfunc_reg_win__17__win 
				= (0x1fU & vlSymsp->TOP__v__core.__PVT__psr);
			    vlSymsp->TOP__v__core.__Vfunc_reg_win__17__index 
				= (0x1fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					    >> 8U));
			    {
				vlSymsp->TOP__v__core.__Vfunc_reg_win__17__cwpt 
				    = vlSymsp->TOP__v__core.__Vfunc_reg_win__17__win;
				vlSymsp->TOP__v__core.__Vfunc_reg_win__17__oregt 
				    = ((IData)(8U) 
				       + (vlSymsp->TOP__v__core.__Vfunc_reg_win__17__cwpt 
					  << 4U));
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_reg_win__17__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_reg_win__17__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_reg_win__17__index;
				    goto __Vlabel32;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_reg_win__17__Vfuncout 
					= ((vlSymsp->TOP__v__core.__Vfunc_reg_win__17__oregt 
					    + (IData)(vlSymsp->TOP__v__core.__Vfunc_reg_win__17__index)) 
					   - (IData)(8U));
				    goto __Vlabel32;
				}
			    }
			    __Vlabel32: ;
			    vlSymsp->TOP__v__core.__Vdlyvval__regs__v526 
				= vlSymsp->TOP__v__core.__Vlvbound7;
			    vlSymsp->TOP__v__core.__Vdlyvset__regs__v526 = 1U;
			    vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v526 
				= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_reg_win__17__Vfuncout);
			}
		    } else {
			// Function: get_index at Core.sv:566
			// Function: get_index at Core.sv:566
			// Function: get_index at Core.sv:566
			// Function: get_index at Core.sv:566
			vlSymsp->TOP__v__core.__Vfunc_get_index__21__index 
			    = (0x1fU & ((vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					 << 2U) | (
						   vlSymsp->TOP__v__core.__PVT__decoded_val[3U] 
						   >> 0x1eU)));
			{
			    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__21__index))) {
				vlSymsp->TOP__v__core.__Vfunc_get_index__21__Vfuncout 
				    = vlSymsp->TOP__v__core.__Vfunc_get_index__21__index;
				goto __Vlabel33;
			    } else {
				vlSymsp->TOP__v__core.__Vfunc_get_index__21__Vfuncout 
				    = ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					+ (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__21__index)) 
				       - (IData)(8U));
				goto __Vlabel33;
			    }
			}
			__Vlabel33: ;
			vlSymsp->TOP__v__core.__Vfunc_get_index__20__index 
			    = (0x1fU & ((vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					 << 2U) | (
						   vlSymsp->TOP__v__core.__PVT__decoded_val[3U] 
						   >> 0x1eU)));
			{
			    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__20__index))) {
				vlSymsp->TOP__v__core.__Vfunc_get_index__20__Vfuncout 
				    = vlSymsp->TOP__v__core.__Vfunc_get_index__20__index;
				goto __Vlabel34;
			    } else {
				vlSymsp->TOP__v__core.__Vfunc_get_index__20__Vfuncout 
				    = ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					+ (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__20__index)) 
				       - (IData)(8U));
				goto __Vlabel34;
			    }
			}
			__Vlabel34: ;
			vlSymsp->TOP__v__core.__Vfunc_get_index__19__index 
			    = (0x1fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					>> 3U));
			{
			    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__19__index))) {
				vlSymsp->TOP__v__core.__Vfunc_get_index__19__Vfuncout 
				    = vlSymsp->TOP__v__core.__Vfunc_get_index__19__index;
				goto __Vlabel35;
			    } else {
				vlSymsp->TOP__v__core.__Vfunc_get_index__19__Vfuncout 
				    = ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					+ (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__19__index)) 
				       - (IData)(8U));
				goto __Vlabel35;
			    }
			}
			__Vlabel35: ;
			vlSymsp->TOP__v__core.__Vfunc_get_index__18__index 
			    = (0x1fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					>> 3U));
			{
			    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__18__index))) {
				vlSymsp->TOP__v__core.__Vfunc_get_index__18__Vfuncout 
				    = vlSymsp->TOP__v__core.__Vfunc_get_index__18__index;
				goto __Vlabel36;
			    } else {
				vlSymsp->TOP__v__core.__Vfunc_get_index__18__Vfuncout 
				    = ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					+ (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__18__index)) 
				       - (IData)(8U));
				goto __Vlabel36;
			    }
			}
			__Vlabel36: ;
			vlSymsp->TOP__v__core.__Vlvbound6 
			    = (((0x205U >= (0x3ffU 
					    & vlSymsp->TOP__v__core.__Vfunc_get_index__18__Vfuncout))
				 ? vlSymsp->TOP__v__core.__PVT__regs
				[(0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__19__Vfuncout)]
				 : 0U) + ((0x205U >= 
					   (0x3ffU 
					    & vlSymsp->TOP__v__core.__Vfunc_get_index__20__Vfuncout))
					   ? vlSymsp->TOP__v__core.__PVT__regs
					  [(0x3ffU 
					    & vlSymsp->TOP__v__core.__Vfunc_get_index__21__Vfuncout)]
					   : 0U));
			// Function: reg_win at Core.sv:566
			vlSymsp->TOP__v__core.__Vfunc_reg_win__22__win 
			    = (0x1fU & vlSymsp->TOP__v__core.__PVT__psr);
			vlSymsp->TOP__v__core.__Vfunc_reg_win__22__index 
			    = (0x1fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					>> 8U));
			{
			    vlSymsp->TOP__v__core.__Vfunc_reg_win__22__cwpt 
				= vlSymsp->TOP__v__core.__Vfunc_reg_win__22__win;
			    vlSymsp->TOP__v__core.__Vfunc_reg_win__22__oregt 
				= ((IData)(8U) + (vlSymsp->TOP__v__core.__Vfunc_reg_win__22__cwpt 
						  << 4U));
			    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_reg_win__22__index))) {
				vlSymsp->TOP__v__core.__Vfunc_reg_win__22__Vfuncout 
				    = vlSymsp->TOP__v__core.__Vfunc_reg_win__22__index;
				goto __Vlabel37;
			    } else {
				vlSymsp->TOP__v__core.__Vfunc_reg_win__22__Vfuncout 
				    = ((vlSymsp->TOP__v__core.__Vfunc_reg_win__22__oregt 
					+ (IData)(vlSymsp->TOP__v__core.__Vfunc_reg_win__22__index)) 
				       - (IData)(8U));
				goto __Vlabel37;
			    }
			}
			__Vlabel37: ;
			if ((0x205U >= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_reg_win__22__Vfuncout))) {
			    // Function: reg_win at Core.sv:566
			    vlSymsp->TOP__v__core.__Vfunc_reg_win__23__win 
				= (0x1fU & vlSymsp->TOP__v__core.__PVT__psr);
			    vlSymsp->TOP__v__core.__Vfunc_reg_win__23__index 
				= (0x1fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					    >> 8U));
			    {
				vlSymsp->TOP__v__core.__Vfunc_reg_win__23__cwpt 
				    = vlSymsp->TOP__v__core.__Vfunc_reg_win__23__win;
				vlSymsp->TOP__v__core.__Vfunc_reg_win__23__oregt 
				    = ((IData)(8U) 
				       + (vlSymsp->TOP__v__core.__Vfunc_reg_win__23__cwpt 
					  << 4U));
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_reg_win__23__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_reg_win__23__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_reg_win__23__index;
				    goto __Vlabel38;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_reg_win__23__Vfuncout 
					= ((vlSymsp->TOP__v__core.__Vfunc_reg_win__23__oregt 
					    + (IData)(vlSymsp->TOP__v__core.__Vfunc_reg_win__23__index)) 
					   - (IData)(8U));
				    goto __Vlabel38;
				}
			    }
			    __Vlabel38: ;
			    vlSymsp->TOP__v__core.__Vdlyvval__regs__v527 
				= vlSymsp->TOP__v__core.__Vlvbound6;
			    vlSymsp->TOP__v__core.__Vdlyvset__regs__v527 = 1U;
			    vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v527 
				= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_reg_win__23__Vfuncout);
			}
		    }
		}
	    } else {
		if (((0U == (3U & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
				   >> 0x16U))) & (2U 
						  == 
						  (7U 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0xdU))))) {
		    if ((8U == (0xfU & ((vlSymsp->TOP__v__core.__PVT__decoded_val[2U] 
					 << 0x1fU) 
					| (vlSymsp->TOP__v__core.__PVT__decoded_val[1U] 
					   >> 1U))))) {
			if ((0x40U & vlSymsp->TOP__v__core.__PVT__decoded_val[1U])) {
			    VL_EXTEND_WQ(65,33, __Vtemp35, 
					 (VL_ULL(0x1ffffffff) 
					  & ((QData)((IData)(vlSymsp->TOP__v__core.__PVT__decode_rip)) 
					     + (((QData)((IData)(
								 vlSymsp->TOP__v__core.__PVT__decoded_val[1U])) 
						 << 0x22U) 
						| ((QData)((IData)(
								   vlSymsp->TOP__v__core.__PVT__decoded_val[0U])) 
						   << 2U)))));
			    vlSymsp->TOP__v__core.__Vdly__new_fetch_rip 
				= (VL_ULL(0x3ffffffffffffff) 
				   & (((QData)((IData)(
						       __Vtemp35[1U])) 
				       << 0x20U) | (QData)((IData)(
								   __Vtemp35[0U]))));
			    vlSymsp->TOP__v__core.__Vdly__decode_offset 
				= vlSymsp->TOP__v__core.__PVT__fetch_offset;
			    vlSymsp->TOP__v__core.__Vdly__branch_taken = 1U;
			    vlSymsp->TOP__v__core.__PVT__can_decode = 0U;
			    vlSymsp->TOP__v__core.__Vdly__go_to_branch = 1U;
			} else {
			    VL_EXTEND_WQ(65,33, __Vtemp36, 
					 (VL_ULL(0x1ffffffff) 
					  & ((QData)((IData)(vlSymsp->TOP__v__core.__PVT__decode_rip)) 
					     + (((QData)((IData)(
								 vlSymsp->TOP__v__core.__PVT__decoded_val[1U])) 
						 << 0x22U) 
						| ((QData)((IData)(
								   vlSymsp->TOP__v__core.__PVT__decoded_val[0U])) 
						   << 2U)))));
			    vlSymsp->TOP__v__core.__Vdly__new_fetch_rip 
				= (VL_ULL(0x3ffffffffffffff) 
				   & (((QData)((IData)(
						       __Vtemp36[1U])) 
				       << 0x20U) | (QData)((IData)(
								   __Vtemp36[0U]))));
			    vlSymsp->TOP__v__core.__Vdly__branch_taken_ch = 1U;
			    vlSymsp->TOP__v__core.__Vdly__decode_rip 
				= (VL_ULL(4) + vlSymsp->TOP__v__core.__PVT__decode_rip);
			    vlSymsp->TOP__v__core.__Vdly__go_to_nonsense = 1U;
			}
		    } else {
			if ((0U == (0xfU & ((vlSymsp->TOP__v__core.__PVT__decoded_val[2U] 
					     << 0x1fU) 
					    | (vlSymsp->TOP__v__core.__PVT__decoded_val[1U] 
					       >> 1U))))) {
			    vlSymsp->TOP__v__core.__Vdly__decode_rip 
				= (VL_ULL(4) + vlSymsp->TOP__v__core.__PVT__decode_rip);
			    if ((0x40U & vlSymsp->TOP__v__core.__PVT__decoded_val[1U])) {
				vlSymsp->TOP__v__core.__Vdly__decode_offset 
				    = (0x7fU & ((IData)(4U) 
						+ (IData)(vlSymsp->TOP__v__core.__PVT__decode_offset)));
			    }
			    vlSymsp->TOP__v__core.__Vdly__go_to_branch = 1U;
			} else {
			    // Function: branch_eval at Core.sv:616
			    vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__V 
				= vlSymsp->TOP__v__core.__PVT__V;
			    vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__C 
				= vlSymsp->TOP__v__core.__PVT__C;
			    vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Z 
				= vlSymsp->TOP__v__core.__PVT__Z;
			    vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__N 
				= vlSymsp->TOP__v__core.__PVT__N;
			    vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__cond 
				= (0xfU & ((vlSymsp->TOP__v__core.__PVT__decoded_val[2U] 
					    << 0x1fU) 
					   | (vlSymsp->TOP__v__core.__PVT__decoded_val[1U] 
					      >> 1U)));
			    {
				if (((9U == (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__cond)) 
				     & (~ (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Z)))) {
				    vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Vfuncout = 1U;
				    goto __Vlabel39;
				} else {
				    if (((1U == (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__cond)) 
					 & (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Z))) {
					vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Vfuncout = 1U;
					goto __Vlabel39;
				    } else {
					if (((0xaU 
					      == (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__cond)) 
					     & (~ ((IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Z) 
						   | ((IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__N) 
						      ^ (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__V)))))) {
					    vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Vfuncout = 1U;
					    goto __Vlabel39;
					} else {
					    if (((2U 
						  == (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__cond)) 
						 & ((IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Z) 
						    | ((IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__N) 
						       ^ (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__V))))) {
						vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Vfuncout = 1U;
						goto __Vlabel39;
					    } else {
						if (
						    ((0xbU 
						      == (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__cond)) 
						     & (~ 
							((IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__N) 
							 ^ (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__V))))) {
						    vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Vfuncout = 1U;
						    goto __Vlabel39;
						} else {
						    if (
							((3U 
							  == (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__cond)) 
							 & ((IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__N) 
							    ^ (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__V)))) {
							vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Vfuncout = 1U;
							goto __Vlabel39;
						    } else {
							if (
							    ((0xcU 
							      == (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__cond)) 
							     & (~ 
								((IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__C) 
								 | (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Z))))) {
							    vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Vfuncout = 1U;
							    goto __Vlabel39;
							} else {
							    if (
								((4U 
								  == (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__cond)) 
								 & ((IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__C) 
								    | (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Z)))) {
								vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Vfuncout = 1U;
								goto __Vlabel39;
							    } else {
								if (
								    ((0xdU 
								      == (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__cond)) 
								     & (~ (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__C)))) {
								    vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Vfuncout = 1U;
								    goto __Vlabel39;
								} else {
								    if (
									((5U 
									  == (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__cond)) 
									 & (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__C))) {
									vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Vfuncout = 1U;
									goto __Vlabel39;
								    } else {
									if (
									    ((0xeU 
									      == (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__cond)) 
									     & (~ (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__N)))) {
									    vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Vfuncout = 1U;
									    goto __Vlabel39;
									} else {
									    if (
										((6U 
										== (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__cond)) 
										& (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__N))) {
										vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Vfuncout = 1U;
										goto __Vlabel39;
									    } else {
										if (
										((0xfU 
										== (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__cond)) 
										& (~ (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__V)))) {
										vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Vfuncout = 1U;
										goto __Vlabel39;
										} else {
										if (
										((7U 
										== (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__cond)) 
										& (IData)(vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__V))) {
										vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Vfuncout = 1U;
										goto __Vlabel39;
										} else {
										vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Vfuncout = 0U;
										goto __Vlabel39;
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
					    }
					}
				    }
				}
			    }
			    __Vlabel39: ;
			    if (vlSymsp->TOP__v__core.__Vfunc_branch_eval__24__Vfuncout) {
				VL_EXTEND_WQ(65,33, __Vtemp37, 
					     (VL_ULL(0x1ffffffff) 
					      & ((QData)((IData)(vlSymsp->TOP__v__core.__PVT__decode_rip)) 
						 + 
						 (((QData)((IData)(
								   vlSymsp->TOP__v__core.__PVT__decoded_val[1U])) 
						   << 0x22U) 
						  | ((QData)((IData)(
								     vlSymsp->TOP__v__core.__PVT__decoded_val[0U])) 
						     << 2U)))));
				vlSymsp->TOP__v__core.__Vdly__new_fetch_rip 
				    = (VL_ULL(0x3ffffffffffffff) 
				       & (((QData)((IData)(
							   __Vtemp37[1U])) 
					   << 0x20U) 
					  | (QData)((IData)(
							    __Vtemp37[0U]))));
				vlSymsp->TOP__v__core.__Vdly__branch_taken_ch = 1U;
				vlSymsp->TOP__v__core.__Vdly__decode_rip 
				    = (VL_ULL(4) + vlSymsp->TOP__v__core.__PVT__decode_rip);
			    } else {
				vlSymsp->TOP__v__core.__Vdly__decode_rip 
				    = (VL_ULL(4) + vlSymsp->TOP__v__core.__PVT__decode_rip);
				if ((0x40U & vlSymsp->TOP__v__core.__PVT__decoded_val[1U])) {
				    vlSymsp->TOP__v__core.__Vdly__decode_offset 
					= (0x7fU & 
					   ((IData)(4U) 
					    + (IData)(vlSymsp->TOP__v__core.__PVT__decode_offset)));
				}
			    }
			    vlSymsp->TOP__v__core.__Vdly__go_to_branch = 1U;
			}
		    }
		} else {
		    if ((1U == (3U & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
				      >> 0x16U)))) {
			vlSymsp->TOP__v__core.__Vdly__go_to_nonsense = 1U;
			vlSymsp->TOP__v__core.__Vdly__new_fetch_rip 
			    = (VL_ULL(0x3ffffffffffffff) 
			       & (QData)((IData)(((IData)(vlSymsp->TOP__v__core.__PVT__decode_rip) 
						  + 
						  (0xfffffffcU 
						   & ((vlSymsp->TOP__v__core.__PVT__decoded_val[3U] 
						       << 0xfU) 
						      | (0x7ffcU 
							 & (vlSymsp->TOP__v__core.__PVT__decoded_val[2U] 
							    >> 0x11U))))))));
			vlSymsp->TOP__v__core.__Vdly__branch_taken_ch = 1U;
			vlSymsp->TOP__v__core.__Vdly__decode_rip 
			    = (VL_ULL(4) + vlSymsp->TOP__v__core.__PVT__decode_rip);
			vlSymsp->TOP__v__core.__Vlvbound8 
			    = (IData)(vlSymsp->TOP__v__core.__PVT__decode_rip);
			// Function: get_index at Core.sv:649
			vlSymsp->TOP__v__core.__Vfunc_get_index__25__index = 0xfU;
			{
			    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__25__index))) {
				vlSymsp->TOP__v__core.__Vfunc_get_index__25__Vfuncout 
				    = vlSymsp->TOP__v__core.__Vfunc_get_index__25__index;
				goto __Vlabel40;
			    } else {
				vlSymsp->TOP__v__core.__Vfunc_get_index__25__Vfuncout 
				    = ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					+ (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__25__index)) 
				       - (IData)(8U));
				goto __Vlabel40;
			    }
			}
			__Vlabel40: ;
			if ((0x205U >= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__25__Vfuncout))) {
			    // Function: get_index at Core.sv:649
			    vlSymsp->TOP__v__core.__Vfunc_get_index__26__index = 0xfU;
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__26__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__26__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__26__index;
				    goto __Vlabel41;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__26__Vfuncout 
					= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__26__index)) 
					   - (IData)(8U));
				    goto __Vlabel41;
				}
			    }
			    __Vlabel41: ;
			    vlSymsp->TOP__v__core.__Vdlyvval__regs__v528 
				= vlSymsp->TOP__v__core.__Vlvbound8;
			    vlSymsp->TOP__v__core.__Vdlyvset__regs__v528 = 1U;
			    vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v528 
				= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__26__Vfuncout);
			}
		    } else {
			if ((((2U == (3U & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					    >> 0x16U))) 
			      & (8U == (0xfU & ((vlSymsp->TOP__v__core.__PVT__decoded_val[2U] 
						 << 0x1fU) 
						| (vlSymsp->TOP__v__core.__PVT__decoded_val[1U] 
						   >> 1U))))) 
			     & (0x3aU == (0x3fU & (
						   vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						   >> 0x10U))))) {
			    if ((1U & (~ (IData)(vlSymsp->TOP__v__core.__PVT__branch_taken_ch)))) {
				vlSymsp->TOP__v__core.__Vdly__decode_rip 
				    = (VL_ULL(4) + vlSymsp->TOP__v__core.__PVT__decode_rip);
			    }
			    // Function: syscall_cse502 at Core.sv:664
			    // Function: get_index at Core.sv:664
			    // Function: get_index at Core.sv:664
			    // Function: get_index at Core.sv:664
			    // Function: get_index at Core.sv:664
			    // Function: get_index at Core.sv:664
			    // Function: get_index at Core.sv:664
			    // Function: get_index at Core.sv:664
			    // Function: get_index at Core.sv:664
			    // Function: get_index at Core.sv:664
			    // Function: get_index at Core.sv:664
			    // Function: get_index at Core.sv:664
			    // Function: get_index at Core.sv:664
			    // Function: get_index at Core.sv:664
			    // Function: get_index at Core.sv:664
			    vlSymsp->TOP__v__core.__Vfunc_get_index__41__index = 0xdU;
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__41__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__41__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__41__index;
				    goto __Vlabel42;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__41__Vfuncout 
					= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__41__index)) 
					   - (IData)(8U));
				    goto __Vlabel42;
				}
			    }
			    __Vlabel42: ;
			    vlSymsp->TOP__v__core.__Vfunc_get_index__40__index = 0xdU;
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__40__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__40__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__40__index;
				    goto __Vlabel43;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__40__Vfuncout 
					= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__40__index)) 
					   - (IData)(8U));
				    goto __Vlabel43;
				}
			    }
			    __Vlabel43: ;
			    vlSymsp->TOP__v__core.__Vfunc_get_index__39__index = 0xcU;
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__39__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__39__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__39__index;
				    goto __Vlabel44;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__39__Vfuncout 
					= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__39__index)) 
					   - (IData)(8U));
				    goto __Vlabel44;
				}
			    }
			    __Vlabel44: ;
			    vlSymsp->TOP__v__core.__Vfunc_get_index__38__index = 0xcU;
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__38__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__38__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__38__index;
				    goto __Vlabel45;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__38__Vfuncout 
					= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__38__index)) 
					   - (IData)(8U));
				    goto __Vlabel45;
				}
			    }
			    __Vlabel45: ;
			    vlSymsp->TOP__v__core.__Vfunc_get_index__37__index = 0xbU;
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__37__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__37__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__37__index;
				    goto __Vlabel46;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__37__Vfuncout 
					= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__37__index)) 
					   - (IData)(8U));
				    goto __Vlabel46;
				}
			    }
			    __Vlabel46: ;
			    vlSymsp->TOP__v__core.__Vfunc_get_index__36__index = 0xbU;
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__36__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__36__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__36__index;
				    goto __Vlabel47;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__36__Vfuncout 
					= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__36__index)) 
					   - (IData)(8U));
				    goto __Vlabel47;
				}
			    }
			    __Vlabel47: ;
			    vlSymsp->TOP__v__core.__Vfunc_get_index__35__index = 0xaU;
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__35__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__35__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__35__index;
				    goto __Vlabel48;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__35__Vfuncout 
					= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__35__index)) 
					   - (IData)(8U));
				    goto __Vlabel48;
				}
			    }
			    __Vlabel48: ;
			    vlSymsp->TOP__v__core.__Vfunc_get_index__34__index = 0xaU;
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__34__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__34__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__34__index;
				    goto __Vlabel49;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__34__Vfuncout 
					= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__34__index)) 
					   - (IData)(8U));
				    goto __Vlabel49;
				}
			    }
			    __Vlabel49: ;
			    vlSymsp->TOP__v__core.__Vfunc_get_index__33__index = 9U;
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__33__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__33__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__33__index;
				    goto __Vlabel50;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__33__Vfuncout 
					= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__33__index)) 
					   - (IData)(8U));
				    goto __Vlabel50;
				}
			    }
			    __Vlabel50: ;
			    vlSymsp->TOP__v__core.__Vfunc_get_index__32__index = 9U;
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__32__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__32__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__32__index;
				    goto __Vlabel51;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__32__Vfuncout 
					= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__32__index)) 
					   - (IData)(8U));
				    goto __Vlabel51;
				}
			    }
			    __Vlabel51: ;
			    vlSymsp->TOP__v__core.__Vfunc_get_index__31__index = 8U;
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__31__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__31__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__31__index;
				    goto __Vlabel52;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__31__Vfuncout 
					= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__31__index)) 
					   - (IData)(8U));
				    goto __Vlabel52;
				}
			    }
			    __Vlabel52: ;
			    vlSymsp->TOP__v__core.__Vfunc_get_index__30__index = 8U;
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__30__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__30__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__30__index;
				    goto __Vlabel53;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__30__Vfuncout 
					= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__30__index)) 
					   - (IData)(8U));
				    goto __Vlabel53;
				}
			    }
			    __Vlabel53: ;
			    vlSymsp->TOP__v__core.__Vfunc_get_index__29__index = 1U;
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__29__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__29__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__29__index;
				    goto __Vlabel54;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__29__Vfuncout 
					= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__29__index)) 
					   - (IData)(8U));
				    goto __Vlabel54;
				}
			    }
			    __Vlabel54: ;
			    vlSymsp->TOP__v__core.__Vfunc_get_index__28__index = 1U;
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__28__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__28__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__28__index;
				    goto __Vlabel55;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__28__Vfuncout 
					= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__28__index)) 
					   - (IData)(8U));
				    goto __Vlabel55;
				}
			    }
			    __Vlabel55: ;
			    vlSymsp->TOP__v__core.__Vdpiimwrap_syscall_cse502_TOP__v__core(
										((0x205U 
										>= 
										(0x3ffU 
										& vlSymsp->TOP__v__core.__Vfunc_get_index__28__Vfuncout))
										 ? 
										vlSymsp->TOP__v__core.__PVT__regs
										[
										(0x3ffU 
										& vlSymsp->TOP__v__core.__Vfunc_get_index__29__Vfuncout)]
										 : 0U), 
										((0x205U 
										>= 
										(0x3ffU 
										& vlSymsp->TOP__v__core.__Vfunc_get_index__30__Vfuncout))
										 ? 
										vlSymsp->TOP__v__core.__PVT__regs
										[
										(0x3ffU 
										& vlSymsp->TOP__v__core.__Vfunc_get_index__31__Vfuncout)]
										 : 0U), 
										((0x205U 
										>= 
										(0x3ffU 
										& vlSymsp->TOP__v__core.__Vfunc_get_index__32__Vfuncout))
										 ? 
										vlSymsp->TOP__v__core.__PVT__regs
										[
										(0x3ffU 
										& vlSymsp->TOP__v__core.__Vfunc_get_index__33__Vfuncout)]
										 : 0U), 
										((0x205U 
										>= 
										(0x3ffU 
										& vlSymsp->TOP__v__core.__Vfunc_get_index__34__Vfuncout))
										 ? 
										vlSymsp->TOP__v__core.__PVT__regs
										[
										(0x3ffU 
										& vlSymsp->TOP__v__core.__Vfunc_get_index__35__Vfuncout)]
										 : 0U), 
										((0x205U 
										>= 
										(0x3ffU 
										& vlSymsp->TOP__v__core.__Vfunc_get_index__36__Vfuncout))
										 ? 
										vlSymsp->TOP__v__core.__PVT__regs
										[
										(0x3ffU 
										& vlSymsp->TOP__v__core.__Vfunc_get_index__37__Vfuncout)]
										 : 0U), 
										((0x205U 
										>= 
										(0x3ffU 
										& vlSymsp->TOP__v__core.__Vfunc_get_index__38__Vfuncout))
										 ? 
										vlSymsp->TOP__v__core.__PVT__regs
										[
										(0x3ffU 
										& vlSymsp->TOP__v__core.__Vfunc_get_index__39__Vfuncout)]
										 : 0U), 
										((0x205U 
										>= 
										(0x3ffU 
										& vlSymsp->TOP__v__core.__Vfunc_get_index__40__Vfuncout))
										 ? 
										vlSymsp->TOP__v__core.__PVT__regs
										[
										(0x3ffU 
										& vlSymsp->TOP__v__core.__Vfunc_get_index__41__Vfuncout)]
										 : 0U), vlSymsp->TOP__v__core.__Vfunc_syscall_cse502__27__Vfuncout);
			    vlSymsp->TOP__v__core.__Vlvbound9 
				= vlSymsp->TOP__v__core.__Vfunc_syscall_cse502__27__Vfuncout;
			    // Function: get_index at Core.sv:664
			    vlSymsp->TOP__v__core.__Vfunc_get_index__42__index = 8U;
			    {
				if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__42__index))) {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__42__Vfuncout 
					= vlSymsp->TOP__v__core.__Vfunc_get_index__42__index;
				    goto __Vlabel56;
				} else {
				    vlSymsp->TOP__v__core.__Vfunc_get_index__42__Vfuncout 
					= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
					    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__42__index)) 
					   - (IData)(8U));
				    goto __Vlabel56;
				}
			    }
			    __Vlabel56: ;
			    if ((0x205U >= (0x3ffU 
					    & vlSymsp->TOP__v__core.__Vfunc_get_index__42__Vfuncout))) {
				// Function: get_index at Core.sv:664
				vlSymsp->TOP__v__core.__Vfunc_get_index__43__index = 8U;
				{
				    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__43__index))) {
					vlSymsp->TOP__v__core.__Vfunc_get_index__43__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_get_index__43__index;
					goto __Vlabel57;
				    } else {
					vlSymsp->TOP__v__core.__Vfunc_get_index__43__Vfuncout 
					    = ((vlSymsp->TOP__v__core.__PVT__oreg_start 
						+ (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__43__index)) 
					       - (IData)(8U));
					goto __Vlabel57;
				    }
				}
				__Vlabel57: ;
				vlSymsp->TOP__v__core.__Vdlyvval__regs__v529 
				    = vlSymsp->TOP__v__core.__Vlvbound9;
				vlSymsp->TOP__v__core.__Vdlyvset__regs__v529 = 1U;
				vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v529 
				    = (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__43__Vfuncout);
			    }
			    vlSymsp->TOP__v__core.__Vdly__go_to_sys = 1U;
			} else {
			    if ((((2U == (3U & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						>> 0x16U))) 
				  & (0x38U == (0x3fU 
					       & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						  >> 0x10U)))) 
				 & (~ (vlSymsp->TOP__v__core.__PVT__decoded_val[1U] 
				       >> 5U)))) {
				vlSymsp->TOP__v__core.__Vlvbound10 
				    = (IData)(vlSymsp->TOP__v__core.__PVT__decode_rip);
				// Function: get_index at Core.sv:671
				vlSymsp->TOP__v__core.__Vfunc_get_index__44__index 
				    = (0x1fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						>> 8U));
				{
				    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__44__index))) {
					vlSymsp->TOP__v__core.__Vfunc_get_index__44__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_get_index__44__index;
					goto __Vlabel58;
				    } else {
					vlSymsp->TOP__v__core.__Vfunc_get_index__44__Vfuncout 
					    = ((vlSymsp->TOP__v__core.__PVT__oreg_start 
						+ (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__44__index)) 
					       - (IData)(8U));
					goto __Vlabel58;
				    }
				}
				__Vlabel58: ;
				if ((0x205U >= (0x3ffU 
						& vlSymsp->TOP__v__core.__Vfunc_get_index__44__Vfuncout))) {
				    // Function: get_index at Core.sv:671
				    vlSymsp->TOP__v__core.__Vfunc_get_index__45__index 
					= (0x1fU & 
					   (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					    >> 8U));
				    {
					if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__45__index))) {
					    vlSymsp->TOP__v__core.__Vfunc_get_index__45__Vfuncout 
						= vlSymsp->TOP__v__core.__Vfunc_get_index__45__index;
					    goto __Vlabel59;
					} else {
					    vlSymsp->TOP__v__core.__Vfunc_get_index__45__Vfuncout 
						= (
						   (vlSymsp->TOP__v__core.__PVT__oreg_start 
						    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__45__index)) 
						   - (IData)(8U));
					    goto __Vlabel59;
					}
				    }
				    __Vlabel59: ;
				    vlSymsp->TOP__v__core.__Vdlyvval__regs__v530 
					= vlSymsp->TOP__v__core.__Vlvbound10;
				    vlSymsp->TOP__v__core.__Vdlyvset__regs__v530 = 1U;
				    vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v530 
					= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__45__Vfuncout);
				}
				// Function: get_index at Core.sv:673
				// Function: get_index at Core.sv:673
				// Function: get_index at Core.sv:673
				// Function: get_index at Core.sv:673
				vlSymsp->TOP__v__core.__Vfunc_get_index__49__index 
				    = (0x1fU & ((vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						 << 2U) 
						| (vlSymsp->TOP__v__core.__PVT__decoded_val[3U] 
						   >> 0x1eU)));
				{
				    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__49__index))) {
					vlSymsp->TOP__v__core.__Vfunc_get_index__49__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_get_index__49__index;
					goto __Vlabel60;
				    } else {
					vlSymsp->TOP__v__core.__Vfunc_get_index__49__Vfuncout 
					    = ((vlSymsp->TOP__v__core.__PVT__oreg_start 
						+ (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__49__index)) 
					       - (IData)(8U));
					goto __Vlabel60;
				    }
				}
				__Vlabel60: ;
				vlSymsp->TOP__v__core.__Vfunc_get_index__48__index 
				    = (0x1fU & ((vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						 << 2U) 
						| (vlSymsp->TOP__v__core.__PVT__decoded_val[3U] 
						   >> 0x1eU)));
				{
				    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__48__index))) {
					vlSymsp->TOP__v__core.__Vfunc_get_index__48__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_get_index__48__index;
					goto __Vlabel61;
				    } else {
					vlSymsp->TOP__v__core.__Vfunc_get_index__48__Vfuncout 
					    = ((vlSymsp->TOP__v__core.__PVT__oreg_start 
						+ (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__48__index)) 
					       - (IData)(8U));
					goto __Vlabel61;
				    }
				}
				__Vlabel61: ;
				vlSymsp->TOP__v__core.__Vfunc_get_index__47__index 
				    = (0x1fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						>> 3U));
				{
				    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__47__index))) {
					vlSymsp->TOP__v__core.__Vfunc_get_index__47__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_get_index__47__index;
					goto __Vlabel62;
				    } else {
					vlSymsp->TOP__v__core.__Vfunc_get_index__47__Vfuncout 
					    = ((vlSymsp->TOP__v__core.__PVT__oreg_start 
						+ (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__47__index)) 
					       - (IData)(8U));
					goto __Vlabel62;
				    }
				}
				__Vlabel62: ;
				vlSymsp->TOP__v__core.__Vfunc_get_index__46__index 
				    = (0x1fU & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						>> 3U));
				{
				    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__46__index))) {
					vlSymsp->TOP__v__core.__Vfunc_get_index__46__Vfuncout 
					    = vlSymsp->TOP__v__core.__Vfunc_get_index__46__index;
					goto __Vlabel63;
				    } else {
					vlSymsp->TOP__v__core.__Vfunc_get_index__46__Vfuncout 
					    = ((vlSymsp->TOP__v__core.__PVT__oreg_start 
						+ (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__46__index)) 
					       - (IData)(8U));
					goto __Vlabel63;
				    }
				}
				__Vlabel63: ;
				vlSymsp->TOP__v__core.__Vdly__new_fetch_rip 
				    = (VL_ULL(0x3ffffffffffffff) 
				       & (QData)((IData)(
							 (((0x205U 
							    >= 
							    (0x3ffU 
							     & vlSymsp->TOP__v__core.__Vfunc_get_index__46__Vfuncout))
							    ? 
							   vlSymsp->TOP__v__core.__PVT__regs
							   [
							   (0x3ffU 
							    & vlSymsp->TOP__v__core.__Vfunc_get_index__47__Vfuncout)]
							    : 0U) 
							  + 
							  ((0x205U 
							    >= 
							    (0x3ffU 
							     & vlSymsp->TOP__v__core.__Vfunc_get_index__48__Vfuncout))
							    ? 
							   vlSymsp->TOP__v__core.__PVT__regs
							   [
							   (0x3ffU 
							    & vlSymsp->TOP__v__core.__Vfunc_get_index__49__Vfuncout)]
							    : 0U)))));
				vlSymsp->TOP__v__core.__Vdly__branch_taken_ch = 1U;
				vlSymsp->TOP__v__core.__Vdly__decode_rip 
				    = (VL_ULL(4) + vlSymsp->TOP__v__core.__PVT__decode_rip);
				vlSymsp->TOP__v__core.__Vdly__go_to_nonsense = 1U;
			    } else {
				if ((((2U == (3U & 
					      (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					       >> 0x16U))) 
				      & (0x38U == (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U)))) 
				     & (vlSymsp->TOP__v__core.__PVT__decoded_val[1U] 
					>> 5U))) {
				    vlSymsp->TOP__v__core.__Vlvbound11 
					= (IData)(vlSymsp->TOP__v__core.__PVT__decode_rip);
				    // Function: get_index at Core.sv:681
				    vlSymsp->TOP__v__core.__Vfunc_get_index__50__index 
					= (0x1fU & 
					   (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					    >> 8U));
				    {
					if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__50__index))) {
					    vlSymsp->TOP__v__core.__Vfunc_get_index__50__Vfuncout 
						= vlSymsp->TOP__v__core.__Vfunc_get_index__50__index;
					    goto __Vlabel64;
					} else {
					    vlSymsp->TOP__v__core.__Vfunc_get_index__50__Vfuncout 
						= (
						   (vlSymsp->TOP__v__core.__PVT__oreg_start 
						    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__50__index)) 
						   - (IData)(8U));
					    goto __Vlabel64;
					}
				    }
				    __Vlabel64: ;
				    if ((0x205U >= 
					 (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__50__Vfuncout))) {
					// Function: get_index at Core.sv:681
					vlSymsp->TOP__v__core.__Vfunc_get_index__51__index 
					    = (0x1fU 
					       & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						  >> 8U));
					{
					    if ((8U 
						 > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__51__index))) {
						vlSymsp->TOP__v__core.__Vfunc_get_index__51__Vfuncout 
						    = vlSymsp->TOP__v__core.__Vfunc_get_index__51__index;
						goto __Vlabel65;
					    } else {
						vlSymsp->TOP__v__core.__Vfunc_get_index__51__Vfuncout 
						    = 
						    ((vlSymsp->TOP__v__core.__PVT__oreg_start 
						      + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__51__index)) 
						     - (IData)(8U));
						goto __Vlabel65;
					    }
					}
					__Vlabel65: ;
					vlSymsp->TOP__v__core.__Vdlyvval__regs__v531 
					    = vlSymsp->TOP__v__core.__Vlvbound11;
					vlSymsp->TOP__v__core.__Vdlyvset__regs__v531 = 1U;
					vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v531 
					    = (0x3ffU 
					       & vlSymsp->TOP__v__core.__Vfunc_get_index__51__Vfuncout);
				    }
				    // Function: get_index at Core.sv:683
				    // Function: get_index at Core.sv:683
				    vlSymsp->TOP__v__core.__Vfunc_get_index__53__index 
					= (0x1fU & 
					   (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					    >> 3U));
				    {
					if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__53__index))) {
					    vlSymsp->TOP__v__core.__Vfunc_get_index__53__Vfuncout 
						= vlSymsp->TOP__v__core.__Vfunc_get_index__53__index;
					    goto __Vlabel66;
					} else {
					    vlSymsp->TOP__v__core.__Vfunc_get_index__53__Vfuncout 
						= (
						   (vlSymsp->TOP__v__core.__PVT__oreg_start 
						    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__53__index)) 
						   - (IData)(8U));
					    goto __Vlabel66;
					}
				    }
				    __Vlabel66: ;
				    vlSymsp->TOP__v__core.__Vfunc_get_index__52__index 
					= (0x1fU & 
					   (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
					    >> 3U));
				    {
					if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__52__index))) {
					    vlSymsp->TOP__v__core.__Vfunc_get_index__52__Vfuncout 
						= vlSymsp->TOP__v__core.__Vfunc_get_index__52__index;
					    goto __Vlabel67;
					} else {
					    vlSymsp->TOP__v__core.__Vfunc_get_index__52__Vfuncout 
						= (
						   (vlSymsp->TOP__v__core.__PVT__oreg_start 
						    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__52__index)) 
						   - (IData)(8U));
					    goto __Vlabel67;
					}
				    }
				    __Vlabel67: ;
				    VL_EXTEND_WQ(65,33, __Vtemp38, 
						 (VL_ULL(0x1ffffffff) 
						  & ((QData)((IData)(
								     ((0x205U 
								       >= 
								       (0x3ffU 
									& vlSymsp->TOP__v__core.__Vfunc_get_index__52__Vfuncout))
								       ? 
								      vlSymsp->TOP__v__core.__PVT__regs
								      [
								      (0x3ffU 
								       & vlSymsp->TOP__v__core.__Vfunc_get_index__53__Vfuncout)]
								       : 0U))) 
						     + 
						     (((QData)((IData)(
								       vlSymsp->TOP__v__core.__PVT__decoded_val[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlSymsp->TOP__v__core.__PVT__decoded_val[0U]))))));
				    vlSymsp->TOP__v__core.__Vdly__new_fetch_rip 
					= (VL_ULL(0x3ffffffffffffff) 
					   & (((QData)((IData)(
							       __Vtemp38[1U])) 
					       << 0x20U) 
					      | (QData)((IData)(
								__Vtemp38[0U]))));
				    vlSymsp->TOP__v__core.__Vdly__branch_taken_ch = 1U;
				    vlSymsp->TOP__v__core.__Vdly__go_to_nonsense = 1U;
				    vlSymsp->TOP__v__core.__Vdly__decode_rip 
					= (VL_ULL(4) 
					   + vlSymsp->TOP__v__core.__PVT__decode_rip);
				} else {
				    if (((2U == (3U 
						 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						    >> 0x16U))) 
					 & (vlSymsp->TOP__v__core.__PVT__decoded_val[1U] 
					    >> 5U))) {
					vlSymsp->TOP__v__core.__Vdly__go_to_wb = 1U;
					vlSymsp->TOP__v__core.__PVT__source2 
					    = vlSymsp->TOP__v__core.__PVT__decoded_val[0U];
					vlSymsp->TOP__v__core.__PVT__alu_req = 1U;
					// Function: get_index at Core.sv:697
					// Function: get_index at Core.sv:697
					vlSymsp->TOP__v__core.__Vfunc_get_index__55__index 
					    = (0x1fU 
					       & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						  >> 3U));
					{
					    if ((8U 
						 > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__55__index))) {
						vlSymsp->TOP__v__core.__Vfunc_get_index__55__Vfuncout 
						    = vlSymsp->TOP__v__core.__Vfunc_get_index__55__index;
						goto __Vlabel68;
					    } else {
						vlSymsp->TOP__v__core.__Vfunc_get_index__55__Vfuncout 
						    = 
						    ((vlSymsp->TOP__v__core.__PVT__oreg_start 
						      + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__55__index)) 
						     - (IData)(8U));
						goto __Vlabel68;
					    }
					}
					__Vlabel68: ;
					vlSymsp->TOP__v__core.__Vfunc_get_index__54__index 
					    = (0x1fU 
					       & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						  >> 3U));
					{
					    if ((8U 
						 > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__54__index))) {
						vlSymsp->TOP__v__core.__Vfunc_get_index__54__Vfuncout 
						    = vlSymsp->TOP__v__core.__Vfunc_get_index__54__index;
						goto __Vlabel69;
					    } else {
						vlSymsp->TOP__v__core.__Vfunc_get_index__54__Vfuncout 
						    = 
						    ((vlSymsp->TOP__v__core.__PVT__oreg_start 
						      + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__54__index)) 
						     - (IData)(8U));
						goto __Vlabel69;
					    }
					}
					__Vlabel69: ;
					vlSymsp->TOP__v__core.__PVT__source1 
					    = ((0x205U 
						>= 
						(0x3ffU 
						 & vlSymsp->TOP__v__core.__Vfunc_get_index__54__Vfuncout))
					        ? vlSymsp->TOP__v__core.__PVT__regs
					       [(0x3ffU 
						 & vlSymsp->TOP__v__core.__Vfunc_get_index__55__Vfuncout)]
					        : 0U);
					vlSymsp->TOP__v__core.__PVT__rd 
					    = (0x1fU 
					       & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						  >> 8U));
					vlSymsp->TOP__v__core.__PVT__op3 
					    = (0x3fU 
					       & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						  >> 0x10U));
					vlSymsp->TOP__v__core.__PVT__op 
					    = (3U & 
					       (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						>> 0x16U));
					if ((1U & (~ (IData)(vlSymsp->TOP__v__core.__PVT__branch_taken_ch)))) {
					    vlSymsp->TOP__v__core.__Vdly__decode_rip 
						= (VL_ULL(4) 
						   + vlSymsp->TOP__v__core.__PVT__decode_rip);
					}
				    } else {
					if (((2U == 
					      (3U & 
					       (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						>> 0x16U))) 
					     & (~ (
						   vlSymsp->TOP__v__core.__PVT__decoded_val[1U] 
						   >> 5U)))) {
					    vlSymsp->TOP__v__core.__Vdly__go_to_wb = 1U;
					    // Function: get_index at Core.sv:709
					    // Function: get_index at Core.sv:709
					    vlSymsp->TOP__v__core.__Vfunc_get_index__57__index 
						= (0x1fU 
						   & ((vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       << 2U) 
						      | (vlSymsp->TOP__v__core.__PVT__decoded_val[3U] 
							 >> 0x1eU)));
					    {
						if (
						    (8U 
						     > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__57__index))) {
						    vlSymsp->TOP__v__core.__Vfunc_get_index__57__Vfuncout 
							= vlSymsp->TOP__v__core.__Vfunc_get_index__57__index;
						    goto __Vlabel70;
						} else {
						    vlSymsp->TOP__v__core.__Vfunc_get_index__57__Vfuncout 
							= 
							((vlSymsp->TOP__v__core.__PVT__oreg_start 
							  + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__57__index)) 
							 - (IData)(8U));
						    goto __Vlabel70;
						}
					    }
					    __Vlabel70: ;
					    vlSymsp->TOP__v__core.__Vfunc_get_index__56__index 
						= (0x1fU 
						   & ((vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						       << 2U) 
						      | (vlSymsp->TOP__v__core.__PVT__decoded_val[3U] 
							 >> 0x1eU)));
					    {
						if (
						    (8U 
						     > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__56__index))) {
						    vlSymsp->TOP__v__core.__Vfunc_get_index__56__Vfuncout 
							= vlSymsp->TOP__v__core.__Vfunc_get_index__56__index;
						    goto __Vlabel71;
						} else {
						    vlSymsp->TOP__v__core.__Vfunc_get_index__56__Vfuncout 
							= 
							((vlSymsp->TOP__v__core.__PVT__oreg_start 
							  + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__56__index)) 
							 - (IData)(8U));
						    goto __Vlabel71;
						}
					    }
					    __Vlabel71: ;
					    vlSymsp->TOP__v__core.__PVT__source2 
						= (
						   (0x205U 
						    >= 
						    (0x3ffU 
						     & vlSymsp->TOP__v__core.__Vfunc_get_index__56__Vfuncout))
						    ? 
						   vlSymsp->TOP__v__core.__PVT__regs
						   [
						   (0x3ffU 
						    & vlSymsp->TOP__v__core.__Vfunc_get_index__57__Vfuncout)]
						    : 0U);
					    vlSymsp->TOP__v__core.__PVT__alu_req = 1U;
					    // Function: get_index at Core.sv:713
					    // Function: get_index at Core.sv:713
					    vlSymsp->TOP__v__core.__Vfunc_get_index__59__index 
						= (0x1fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 3U));
					    {
						if (
						    (8U 
						     > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__59__index))) {
						    vlSymsp->TOP__v__core.__Vfunc_get_index__59__Vfuncout 
							= vlSymsp->TOP__v__core.__Vfunc_get_index__59__index;
						    goto __Vlabel72;
						} else {
						    vlSymsp->TOP__v__core.__Vfunc_get_index__59__Vfuncout 
							= 
							((vlSymsp->TOP__v__core.__PVT__oreg_start 
							  + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__59__index)) 
							 - (IData)(8U));
						    goto __Vlabel72;
						}
					    }
					    __Vlabel72: ;
					    vlSymsp->TOP__v__core.__Vfunc_get_index__58__index 
						= (0x1fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 3U));
					    {
						if (
						    (8U 
						     > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__58__index))) {
						    vlSymsp->TOP__v__core.__Vfunc_get_index__58__Vfuncout 
							= vlSymsp->TOP__v__core.__Vfunc_get_index__58__index;
						    goto __Vlabel73;
						} else {
						    vlSymsp->TOP__v__core.__Vfunc_get_index__58__Vfuncout 
							= 
							((vlSymsp->TOP__v__core.__PVT__oreg_start 
							  + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__58__index)) 
							 - (IData)(8U));
						    goto __Vlabel73;
						}
					    }
					    __Vlabel73: ;
					    vlSymsp->TOP__v__core.__PVT__source1 
						= (
						   (0x205U 
						    >= 
						    (0x3ffU 
						     & vlSymsp->TOP__v__core.__Vfunc_get_index__58__Vfuncout))
						    ? 
						   vlSymsp->TOP__v__core.__PVT__regs
						   [
						   (0x3ffU 
						    & vlSymsp->TOP__v__core.__Vfunc_get_index__59__Vfuncout)]
						    : 0U);
					    vlSymsp->TOP__v__core.__PVT__rd 
						= (0x1fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 8U));
					    vlSymsp->TOP__v__core.__PVT__op3 
						= (0x3fU 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x10U));
					    vlSymsp->TOP__v__core.__PVT__op 
						= (3U 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x16U));
					    if ((1U 
						 & (~ (IData)(vlSymsp->TOP__v__core.__PVT__branch_taken_ch)))) {
						vlSymsp->TOP__v__core.__Vdly__decode_rip 
						    = 
						    (VL_ULL(4) 
						     + vlSymsp->TOP__v__core.__PVT__decode_rip);
					    }
					} else {
					    if (((0U 
						  == 
						  (3U 
						   & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
						      >> 0x16U))) 
						 & (4U 
						    == 
						    (7U 
						     & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							>> 0xdU))))) {
						vlSymsp->TOP__v__core.__Vdly__go_to_wb = 1U;
						vlSymsp->TOP__v__core.__PVT__source1 
						    = 
						    vlSymsp->TOP__v__core.__PVT__decoded_val[0U];
						vlSymsp->TOP__v__core.__PVT__alu_req = 1U;
						vlSymsp->TOP__v__core.__PVT__rd 
						    = 
						    (0x1fU 
						     & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							>> 8U));
						vlSymsp->TOP__v__core.__PVT__op3 
						    = 
						    (0x3fU 
						     & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							>> 0x10U));
						vlSymsp->TOP__v__core.__PVT__op 
						    = 
						    (3U 
						     & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							>> 0x16U));
						if (
						    (1U 
						     & (~ (IData)(vlSymsp->TOP__v__core.__PVT__branch_taken_ch)))) {
						    vlSymsp->TOP__v__core.__Vdly__decode_rip 
							= 
							(VL_ULL(4) 
							 + vlSymsp->TOP__v__core.__PVT__decode_rip);
						}
					    } else {
						if (
						    (3U 
						     == 
						     (3U 
						      & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							 >> 0x16U)))) {
						    if (
							(1U 
							 & (~ (IData)(vlSymsp->TOP__v__core.__PVT__branch_taken_ch)))) {
							vlSymsp->TOP__v__core.__Vdly__decode_rip 
							    = 
							    (VL_ULL(4) 
							     + vlSymsp->TOP__v__core.__PVT__decode_rip);
						    }
						    vlSymsp->TOP__v__core.__PVT__rd 
							= 
							(0x1fU 
							 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							    >> 8U));
						    vlSymsp->TOP__v__core.__PVT__op3 
							= 
							(0x3fU 
							 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							    >> 0x10U));
						    vlSymsp->TOP__v__core.__PVT__op 
							= 
							(3U 
							 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							    >> 0x16U));
						    vlSymsp->TOP__v__core.__Vdly__go_to_mem = 1U;
						    // Function: get_index at Core.sv:756
						    // Function: get_index at Core.sv:756
						    // Function: get_index at Core.sv:754
						    // Function: get_index at Core.sv:754
						    // Function: get_index at Core.sv:754
						    // Function: get_index at Core.sv:754
						    vlSymsp->TOP__v__core.__Vfunc_get_index__65__index 
							= 
							(0x1fU 
							 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							    >> 3U));
						    {
							if (
							    (8U 
							     > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__65__index))) {
							    vlSymsp->TOP__v__core.__Vfunc_get_index__65__Vfuncout 
								= vlSymsp->TOP__v__core.__Vfunc_get_index__65__index;
							    goto __Vlabel74;
							} else {
							    vlSymsp->TOP__v__core.__Vfunc_get_index__65__Vfuncout 
								= 
								((vlSymsp->TOP__v__core.__PVT__oreg_start 
								  + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__65__index)) 
								 - (IData)(8U));
							    goto __Vlabel74;
							}
						    }
						    __Vlabel74: ;
						    vlSymsp->TOP__v__core.__Vfunc_get_index__64__index 
							= 
							(0x1fU 
							 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							    >> 3U));
						    {
							if (
							    (8U 
							     > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__64__index))) {
							    vlSymsp->TOP__v__core.__Vfunc_get_index__64__Vfuncout 
								= vlSymsp->TOP__v__core.__Vfunc_get_index__64__index;
							    goto __Vlabel75;
							} else {
							    vlSymsp->TOP__v__core.__Vfunc_get_index__64__Vfuncout 
								= 
								((vlSymsp->TOP__v__core.__PVT__oreg_start 
								  + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__64__index)) 
								 - (IData)(8U));
							    goto __Vlabel75;
							}
						    }
						    __Vlabel75: ;
						    vlSymsp->TOP__v__core.__Vfunc_get_index__63__index 
							= 
							(0x1fU 
							 & ((vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							     << 2U) 
							    | (vlSymsp->TOP__v__core.__PVT__decoded_val[3U] 
							       >> 0x1eU)));
						    {
							if (
							    (8U 
							     > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__63__index))) {
							    vlSymsp->TOP__v__core.__Vfunc_get_index__63__Vfuncout 
								= vlSymsp->TOP__v__core.__Vfunc_get_index__63__index;
							    goto __Vlabel76;
							} else {
							    vlSymsp->TOP__v__core.__Vfunc_get_index__63__Vfuncout 
								= 
								((vlSymsp->TOP__v__core.__PVT__oreg_start 
								  + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__63__index)) 
								 - (IData)(8U));
							    goto __Vlabel76;
							}
						    }
						    __Vlabel76: ;
						    vlSymsp->TOP__v__core.__Vfunc_get_index__62__index 
							= 
							(0x1fU 
							 & ((vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							     << 2U) 
							    | (vlSymsp->TOP__v__core.__PVT__decoded_val[3U] 
							       >> 0x1eU)));
						    {
							if (
							    (8U 
							     > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__62__index))) {
							    vlSymsp->TOP__v__core.__Vfunc_get_index__62__Vfuncout 
								= vlSymsp->TOP__v__core.__Vfunc_get_index__62__index;
							    goto __Vlabel77;
							} else {
							    vlSymsp->TOP__v__core.__Vfunc_get_index__62__Vfuncout 
								= 
								((vlSymsp->TOP__v__core.__PVT__oreg_start 
								  + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__62__index)) 
								 - (IData)(8U));
							    goto __Vlabel77;
							}
						    }
						    __Vlabel77: ;
						    vlSymsp->TOP__v__core.__Vfunc_get_index__61__index 
							= 
							(0x1fU 
							 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							    >> 3U));
						    {
							if (
							    (8U 
							     > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__61__index))) {
							    vlSymsp->TOP__v__core.__Vfunc_get_index__61__Vfuncout 
								= vlSymsp->TOP__v__core.__Vfunc_get_index__61__index;
							    goto __Vlabel78;
							} else {
							    vlSymsp->TOP__v__core.__Vfunc_get_index__61__Vfuncout 
								= 
								((vlSymsp->TOP__v__core.__PVT__oreg_start 
								  + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__61__index)) 
								 - (IData)(8U));
							    goto __Vlabel78;
							}
						    }
						    __Vlabel78: ;
						    vlSymsp->TOP__v__core.__Vfunc_get_index__60__index 
							= 
							(0x1fU 
							 & (vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
							    >> 3U));
						    {
							if (
							    (8U 
							     > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__60__index))) {
							    vlSymsp->TOP__v__core.__Vfunc_get_index__60__Vfuncout 
								= vlSymsp->TOP__v__core.__Vfunc_get_index__60__index;
							    goto __Vlabel79;
							} else {
							    vlSymsp->TOP__v__core.__Vfunc_get_index__60__Vfuncout 
								= 
								((vlSymsp->TOP__v__core.__PVT__oreg_start 
								  + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__60__index)) 
								 - (IData)(8U));
							    goto __Vlabel79;
							}
						    }
						    __Vlabel79: ;
						    vlSymsp->TOP__v__core.__PVT__destination 
							= 
							((0x20U 
							  & vlSymsp->TOP__v__core.__PVT__decoded_val[1U])
							  ? 
							 (vlSymsp->TOP__v__core.__PVT__decoded_val[0U] 
							  + 
							  ((0x205U 
							    >= 
							    (0x3ffU 
							     & vlSymsp->TOP__v__core.__Vfunc_get_index__60__Vfuncout))
							    ? 
							   vlSymsp->TOP__v__core.__PVT__regs
							   [
							   (0x3ffU 
							    & vlSymsp->TOP__v__core.__Vfunc_get_index__61__Vfuncout)]
							    : 0U))
							  : 
							 (((0x205U 
							    >= 
							    (0x3ffU 
							     & vlSymsp->TOP__v__core.__Vfunc_get_index__62__Vfuncout))
							    ? 
							   vlSymsp->TOP__v__core.__PVT__regs
							   [
							   (0x3ffU 
							    & vlSymsp->TOP__v__core.__Vfunc_get_index__63__Vfuncout)]
							    : 0U) 
							  + 
							  ((0x205U 
							    >= 
							    (0x3ffU 
							     & vlSymsp->TOP__v__core.__Vfunc_get_index__64__Vfuncout))
							    ? 
							   vlSymsp->TOP__v__core.__PVT__regs
							   [
							   (0x3ffU 
							    & vlSymsp->TOP__v__core.__Vfunc_get_index__65__Vfuncout)]
							    : 0U)));
						} else {
						    vlSymsp->TOP__v__core.__Vdly__go_to_nonsense = 1U;
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
	}
    }
    vlSymsp->TOP__v__core.__PVT__branch_taken_ch = vlSymsp->TOP__v__core.__Vdly__branch_taken_ch;
    vlSymsp->TOP__v__core.__PVT__new_fetch_rip = vlSymsp->TOP__v__core.__Vdly__new_fetch_rip;
}

VL_INLINE_OPT void Vtop_Core__B0::_combo__TOP__v__core__13(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_Core__B0::_combo__TOP__v__core__13\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at Dcache.sv:107
    if ((0U == vlSymsp->TOP__v__core.__PVT__DC__DOT__cache_state)) {
	vlSymsp->TOP__v__core.__PVT__DC__DOT__max_index 
	    = (0x1e0U & ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_line_addr) 
			 << 5U));
	vlSymsp->TOP__v__core.__PVT__DC__DOT__update_done = 0U;
	vlSymsp->TOP__v__core.__PVT__DC__DOT__max_age = 0U;
    } else {
	if ((1U == vlSymsp->TOP__v__core.__PVT__DC__DOT__cache_state)) {
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__index 
		= (((IData)(vlSymsp->TOP__v__core.__PVT__dcache_set_index) 
		    << 5U) | (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__set_counter));
	    if (vlSymsp->TOP__v__core.__PVT__DC__DOT__hit) {
		vlSymsp->TOP__v__core.__PVT__DC__DOT__max_index 
		    = vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	    } else {
		if ((vlSymsp->TOP__v__core.__PVT__DC__DOT__age_r 
		     > vlSymsp->TOP__v__core.__PVT__DC__DOT__max_age)) {
		    vlSymsp->TOP__v__core.__PVT__DC__DOT__max_index 
			= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
		}
	    }
	} else {
	    if ((4U == vlSymsp->TOP__v__core.__PVT__DC__DOT__cache_state)) {
		while ((0x1fU > (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__check_counter))) {
		    vlSymsp->TOP__v__core.__PVT__DC__DOT__index 
			= (((IData)(vlSymsp->TOP__v__core.__PVT__dcache_set_index) 
			    << 5U) | (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__check_counter));
		    vlSymsp->TOP__v__core.__PVT__DC__DOT__age_w 
			= (((IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index) 
			    == (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__max_index))
			    ? 0U : ((IData)(1U) + vlSymsp->TOP__v__core.__PVT__DC__DOT__age_r));
		    vlSymsp->TOP__v__core.__PVT__DC__DOT__age_en = 0U;
		    vlSymsp->TOP__v__core.__PVT__DC__DOT__check_counter 
			= (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__check_counter)));
		}
		vlSymsp->TOP__v__core.__PVT__DC__DOT__update_done = 1U;
	    }
	}
    }
}

void Vtop_Core__B0::_settle__TOP__v__core__14(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_Core__B0::_settle__TOP__v__core__14\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at Dcache.sv:107
    if ((0U == vlSymsp->TOP__v__core.__PVT__DC__DOT__cache_state)) {
	vlSymsp->TOP__v__core.__PVT__DC__DOT__max_index 
	    = (0x1e0U & ((IData)(vlSymsp->TOP__v__core.__PVT__dcache_line_addr) 
			 << 5U));
	vlSymsp->TOP__v__core.__PVT__DC__DOT__update_done = 0U;
	vlSymsp->TOP__v__core.__PVT__DC__DOT__max_age = 0U;
    } else {
	if ((1U == vlSymsp->TOP__v__core.__PVT__DC__DOT__cache_state)) {
	    vlSymsp->TOP__v__core.__PVT__DC__DOT__index 
		= (((IData)(vlSymsp->TOP__v__core.__PVT__dcache_set_index) 
		    << 5U) | (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__set_counter));
	    if (vlSymsp->TOP__v__core.__PVT__DC__DOT__hit) {
		vlSymsp->TOP__v__core.__PVT__DC__DOT__max_index 
		    = vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
	    } else {
		if ((vlSymsp->TOP__v__core.__PVT__DC__DOT__age_r 
		     > vlSymsp->TOP__v__core.__PVT__DC__DOT__max_age)) {
		    vlSymsp->TOP__v__core.__PVT__DC__DOT__max_index 
			= vlSymsp->TOP__v__core.__PVT__DC__DOT__index;
		}
	    }
	} else {
	    if ((4U == vlSymsp->TOP__v__core.__PVT__DC__DOT__cache_state)) {
		while ((0x1fU > (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__check_counter))) {
		    vlSymsp->TOP__v__core.__PVT__DC__DOT__index 
			= (((IData)(vlSymsp->TOP__v__core.__PVT__dcache_set_index) 
			    << 5U) | (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__check_counter));
		    vlSymsp->TOP__v__core.__PVT__DC__DOT__age_w 
			= (((IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__index) 
			    == (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__max_index))
			    ? 0U : ((IData)(1U) + vlSymsp->TOP__v__core.__PVT__DC__DOT__age_r));
		    vlSymsp->TOP__v__core.__PVT__DC__DOT__age_en = 0U;
		    vlSymsp->TOP__v__core.__PVT__DC__DOT__check_counter 
			= (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__v__core.__PVT__DC__DOT__check_counter)));
		}
		vlSymsp->TOP__v__core.__PVT__DC__DOT__update_done = 1U;
	    }
	}
    }
    vlSymsp->TOP__v__core.__PVT__psr = ((0xffefffffU 
					 & vlSymsp->TOP__v__core.__PVT__psr) 
					| ((IData)(vlSymsp->TOP__v__core.__Vcellout__alu__C) 
					   << 0x14U));
    vlSymsp->TOP__v__core.__PVT__psr = ((0xffdfffffU 
					 & vlSymsp->TOP__v__core.__PVT__psr) 
					| ((IData)(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13) 
					   << 0x15U));
    vlSymsp->TOP__v__core.__PVT__psr = ((0xffbfffffU 
					 & vlSymsp->TOP__v__core.__PVT__psr) 
					| ((IData)(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12) 
					   << 0x16U));
    vlSymsp->TOP__v__core.__PVT__psr = ((0xff7fffffU 
					 & vlSymsp->TOP__v__core.__PVT__psr) 
					| ((IData)(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11) 
					   << 0x17U));
}

VL_INLINE_OPT void Vtop_Core__B0::_sequent__TOP__v__core__15(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_Core__B0::_sequent__TOP__v__core__15\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__core.__PVT__decode_rip = vlSymsp->TOP__v__core.__Vdly__decode_rip;
    vlSymsp->TOP__v__core.__PVT__go_to_save = vlSymsp->TOP__v__core.__Vdly__go_to_save;
    vlSymsp->TOP__v__core.__PVT__go_to_branch = vlSymsp->TOP__v__core.__Vdly__go_to_branch;
    vlSymsp->TOP__v__core.__PVT__go_to_nonsense = vlSymsp->TOP__v__core.__Vdly__go_to_nonsense;
    vlSymsp->TOP__v__core.__PVT__go_to_sys = vlSymsp->TOP__v__core.__Vdly__go_to_sys;
    vlSymsp->TOP__v__core.__PVT__go_to_wb = vlSymsp->TOP__v__core.__Vdly__go_to_wb;
    vlSymsp->TOP__v__core.__PVT__go_to_mem = vlSymsp->TOP__v__core.__Vdly__go_to_mem;
    vlSymsp->TOP__v__core.__PVT__fetch_rip = vlSymsp->TOP__v__core.__Vdly__fetch_rip;
    vlSymsp->TOP__v__core.__PVT__fetch_skip = vlSymsp->TOP__v__core.__Vdly__fetch_skip;
    vlSymsp->TOP__v__core.__PVT__fetch_state = vlSymsp->TOP__v__core.__Vdly__fetch_state;
    vlSymsp->TOP__v__core.__PVT__alu_working = vlSymsp->TOP__v__core.__Vdly__alu_working;
    vlSymsp->TOP__v__core.__PVT__branch_taken = vlSymsp->TOP__v__core.__Vdly__branch_taken;
    vlSymsp->TOP__v__core.__PVT__icache_line_addr = vlSymsp->TOP__v__core.__Vdly__icache_line_addr;
    vlSymsp->TOP__v__core.__PVT__decode_offset = vlSymsp->TOP__v__core.__Vdly__decode_offset;
    vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
	= (((0U == (0x1fU & ((IData)(0x3e0U) - ((IData)(vlSymsp->TOP__v__core.__PVT__decode_offset) 
						<< 3U))))
	     ? 0U : (vlSymsp->TOP__v__core.__PVT__decode_buffer[
		     ((IData)(1U) + (0x1fU & (((IData)(0x3e0U) 
					       - ((IData)(vlSymsp->TOP__v__core.__PVT__decode_offset) 
						  << 3U)) 
					      >> 5U)))] 
		     << ((IData)(0x20U) - (0x1fU & 
					   ((IData)(0x3e0U) 
					    - ((IData)(vlSymsp->TOP__v__core.__PVT__decode_offset) 
					       << 3U)))))) 
	   | (vlSymsp->TOP__v__core.__PVT__decode_buffer[
	      (0x1fU & (((IData)(0x3e0U) - ((IData)(vlSymsp->TOP__v__core.__PVT__decode_offset) 
					    << 3U)) 
			>> 5U))] >> (0x1fU & ((IData)(0x3e0U) 
					      - ((IData)(vlSymsp->TOP__v__core.__PVT__decode_offset) 
						 << 3U)))));
}

VL_INLINE_OPT void Vtop_Core__B0::_sequent__TOP__v__core__16(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_Core__B0::_sequent__TOP__v__core__16\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__core.__PVT__fetch_offset = vlSymsp->TOP__v__core.__Vdly__fetch_offset;
    vlSymsp->TOP__v__core.__PVT__psr = ((0xffefffffU 
					 & vlSymsp->TOP__v__core.__PVT__psr) 
					| ((IData)(vlSymsp->TOP__v__core.__Vcellout__alu__C) 
					   << 0x14U));
    vlSymsp->TOP__v__core.__PVT__psr = ((0xffdfffffU 
					 & vlSymsp->TOP__v__core.__PVT__psr) 
					| ((IData)(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber13) 
					   << 0x15U));
    vlSymsp->TOP__v__core.__PVT__psr = ((0xffbfffffU 
					 & vlSymsp->TOP__v__core.__PVT__psr) 
					| ((IData)(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber12) 
					   << 0x16U));
    vlSymsp->TOP__v__core.__PVT__psr = ((0xff7fffffU 
					 & vlSymsp->TOP__v__core.__PVT__psr) 
					| ((IData)(vlSymsp->TOP__v__core.__Vcellout__alu____pinNumber11) 
					   << 0x17U));
    // ALWAYS at Decoder.sv:58
    if ((0U == vlSymsp->TOP__v__core.__PVT__decode__DOT__decode_state)) {
	vlSymsp->TOP__v__core.__PVT__decode__DOT__done = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_ack = 0U;
	if (vlSymsp->TOP__v__core.__PVT__can_decode) {
	    vlSymsp->TOP__v__core.__Vdly__decode__DOT__decode_state = 1U;
	}
    } else {
	if ((1U == vlSymsp->TOP__v__core.__PVT__decode__DOT__decode_state)) {
	    if (vlSymsp->TOP__v__core.__PVT__decode__DOT__comb_done) {
		vlSymsp->TOP__v__core.__Vdly__decode__DOT__decode_state = 2U;
	    }
	} else {
	    if ((2U == vlSymsp->TOP__v__core.__PVT__decode__DOT__decode_state)) {
		vlSymsp->TOP__v__core.__PVT__decode_ack = 1U;
		vlSymsp->TOP__v__core.__PVT__decoded_val[0U] 
		    = vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[0U];
		vlSymsp->TOP__v__core.__PVT__decoded_val[1U] 
		    = vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U];
		vlSymsp->TOP__v__core.__PVT__decoded_val[2U] 
		    = vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[2U];
		vlSymsp->TOP__v__core.__PVT__decoded_val[3U] 
		    = vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[3U];
		vlSymsp->TOP__v__core.__PVT__decoded_val[4U] 
		    = vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U];
		vlSymsp->TOP__v__core.__Vdly__decode__DOT__decode_state = 0U;
	    }
	}
    }
    // ALWAYS at Core.sv:54
    if (vlTOPp->reset) {
	vlSymsp->TOP__v__core.__Vdlyvset__regs__v0 = 1U;
	vlSymsp->TOP__v__core.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x211U;
	vlSymsp->TOP__v__core.__PVT__unnamedblk1__DOT__i = 0x211U;
	vlSymsp->TOP__v__core.__PVT__reg_used = 0U;
	vlSymsp->TOP__v__core.__PVT__wim = (0x80000000U 
					    | vlSymsp->TOP__v__core.__PVT__wim);
	vlSymsp->TOP__v__core.__PVT__psr = 0x1eU;
	vlSymsp->TOP__v__core.__Vlvbound3 = 0x3fc00000U;
	// Function: get_index at Core.sv:64
	vlSymsp->TOP__v__core.__Vfunc_get_index__2__index = 0xeU;
	{
	    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__2__index))) {
		vlSymsp->TOP__v__core.__Vfunc_get_index__2__Vfuncout 
		    = vlSymsp->TOP__v__core.__Vfunc_get_index__2__index;
		goto __Vlabel80;
	    } else {
		vlSymsp->TOP__v__core.__Vfunc_get_index__2__Vfuncout 
		    = ((vlSymsp->TOP__v__core.__PVT__oreg_start 
			+ (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__2__index)) 
		       - (IData)(8U));
		goto __Vlabel80;
	    }
	}
	__Vlabel80: ;
	if ((0x205U >= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__2__Vfuncout))) {
	    // Function: get_index at Core.sv:64
	    vlSymsp->TOP__v__core.__Vfunc_get_index__3__index = 0xeU;
	    {
		if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__3__index))) {
		    vlSymsp->TOP__v__core.__Vfunc_get_index__3__Vfuncout 
			= vlSymsp->TOP__v__core.__Vfunc_get_index__3__index;
		    goto __Vlabel81;
		} else {
		    vlSymsp->TOP__v__core.__Vfunc_get_index__3__Vfuncout 
			= ((vlSymsp->TOP__v__core.__PVT__oreg_start 
			    + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__3__index)) 
			   - (IData)(8U));
		    goto __Vlabel81;
		}
	    }
	    __Vlabel81: ;
	    vlSymsp->TOP__v__core.__Vdlyvval__regs__v517 
		= vlSymsp->TOP__v__core.__Vlvbound3;
	    vlSymsp->TOP__v__core.__Vdlyvset__regs__v517 = 1U;
	    vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v517 
		= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__3__Vfuncout);
	}
    }
    vlSymsp->TOP__v__core.__PVT__decode__DOT__decode_state 
	= vlSymsp->TOP__v__core.__Vdly__decode__DOT__decode_state;
}

VL_INLINE_OPT void Vtop_Core__B0::_combo__TOP__v__core__17(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_Core__B0::_combo__TOP__v__core__17\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at Icache.sv:104
    if ((0U == vlSymsp->TOP__v__core.__PVT__IC__DOT__cache_state)) {
	vlSymsp->TOP__v__core.__PVT__IC__DOT__max_index 
	    = (0x1e0U & ((IData)(vlSymsp->TOP__v__core.__PVT__icache_line_addr) 
			 << 5U));
	vlSymsp->TOP__v__core.__PVT__IC__DOT__update_done = 0U;
	vlSymsp->TOP__v__core.__PVT__IC__DOT__max_age = 0U;
    } else {
	if ((1U == vlSymsp->TOP__v__core.__PVT__IC__DOT__cache_state)) {
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__index 
		= (((IData)(vlSymsp->TOP__v__core.__PVT__icache_set_index) 
		    << 5U) | (IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__set_counter));
	    if (vlSymsp->TOP__v__core.__PVT__IC__DOT__hit) {
		vlSymsp->TOP__v__core.__PVT__IC__DOT__max_index 
		    = vlSymsp->TOP__v__core.__PVT__IC__DOT__index;
	    } else {
		if ((vlSymsp->TOP__v__core.__PVT__IC__DOT__age_r 
		     > vlSymsp->TOP__v__core.__PVT__IC__DOT__max_age)) {
		    vlSymsp->TOP__v__core.__PVT__IC__DOT__max_index 
			= vlSymsp->TOP__v__core.__PVT__IC__DOT__index;
		}
	    }
	} else {
	    if ((3U == vlSymsp->TOP__v__core.__PVT__IC__DOT__cache_state)) {
		while ((0x1fU > (IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__check_counter))) {
		    vlSymsp->TOP__v__core.__PVT__IC__DOT__index 
			= (((IData)(vlSymsp->TOP__v__core.__PVT__icache_set_index) 
			    << 5U) | (IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__check_counter));
		    vlSymsp->TOP__v__core.__PVT__IC__DOT__age_w 
			= (((IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index) 
			    == (IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__max_index))
			    ? 0U : ((IData)(1U) + vlSymsp->TOP__v__core.__PVT__IC__DOT__age_r));
		    vlSymsp->TOP__v__core.__PVT__IC__DOT__age_en = 0U;
		    vlSymsp->TOP__v__core.__PVT__IC__DOT__check_counter 
			= (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__check_counter)));
		}
		vlSymsp->TOP__v__core.__PVT__IC__DOT__update_done = 1U;
	    }
	}
    }
}

void Vtop_Core__B0::_settle__TOP__v__core__18(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_Core__B0::_settle__TOP__v__core__18\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at Icache.sv:104
    if ((0U == vlSymsp->TOP__v__core.__PVT__IC__DOT__cache_state)) {
	vlSymsp->TOP__v__core.__PVT__IC__DOT__max_index 
	    = (0x1e0U & ((IData)(vlSymsp->TOP__v__core.__PVT__icache_line_addr) 
			 << 5U));
	vlSymsp->TOP__v__core.__PVT__IC__DOT__update_done = 0U;
	vlSymsp->TOP__v__core.__PVT__IC__DOT__max_age = 0U;
    } else {
	if ((1U == vlSymsp->TOP__v__core.__PVT__IC__DOT__cache_state)) {
	    vlSymsp->TOP__v__core.__PVT__IC__DOT__index 
		= (((IData)(vlSymsp->TOP__v__core.__PVT__icache_set_index) 
		    << 5U) | (IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__set_counter));
	    if (vlSymsp->TOP__v__core.__PVT__IC__DOT__hit) {
		vlSymsp->TOP__v__core.__PVT__IC__DOT__max_index 
		    = vlSymsp->TOP__v__core.__PVT__IC__DOT__index;
	    } else {
		if ((vlSymsp->TOP__v__core.__PVT__IC__DOT__age_r 
		     > vlSymsp->TOP__v__core.__PVT__IC__DOT__max_age)) {
		    vlSymsp->TOP__v__core.__PVT__IC__DOT__max_index 
			= vlSymsp->TOP__v__core.__PVT__IC__DOT__index;
		}
	    }
	} else {
	    if ((3U == vlSymsp->TOP__v__core.__PVT__IC__DOT__cache_state)) {
		while ((0x1fU > (IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__check_counter))) {
		    vlSymsp->TOP__v__core.__PVT__IC__DOT__index 
			= (((IData)(vlSymsp->TOP__v__core.__PVT__icache_set_index) 
			    << 5U) | (IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__check_counter));
		    vlSymsp->TOP__v__core.__PVT__IC__DOT__age_w 
			= (((IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__index) 
			    == (IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__max_index))
			    ? 0U : ((IData)(1U) + vlSymsp->TOP__v__core.__PVT__IC__DOT__age_r));
		    vlSymsp->TOP__v__core.__PVT__IC__DOT__age_en = 0U;
		    vlSymsp->TOP__v__core.__PVT__IC__DOT__check_counter 
			= (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__v__core.__PVT__IC__DOT__check_counter)));
		}
		vlSymsp->TOP__v__core.__PVT__IC__DOT__update_done = 1U;
	    }
	}
    }
    vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
	= (((0U == (0x1fU & ((IData)(0x3e0U) - ((IData)(vlSymsp->TOP__v__core.__PVT__decode_offset) 
						<< 3U))))
	     ? 0U : (vlSymsp->TOP__v__core.__PVT__decode_buffer[
		     ((IData)(1U) + (0x1fU & (((IData)(0x3e0U) 
					       - ((IData)(vlSymsp->TOP__v__core.__PVT__decode_offset) 
						  << 3U)) 
					      >> 5U)))] 
		     << ((IData)(0x20U) - (0x1fU & 
					   ((IData)(0x3e0U) 
					    - ((IData)(vlSymsp->TOP__v__core.__PVT__decode_offset) 
					       << 3U)))))) 
	   | (vlSymsp->TOP__v__core.__PVT__decode_buffer[
	      (0x1fU & (((IData)(0x3e0U) - ((IData)(vlSymsp->TOP__v__core.__PVT__decode_offset) 
					    << 3U)) 
			>> 5U))] >> (0x1fU & ((IData)(0x3e0U) 
					      - ((IData)(vlSymsp->TOP__v__core.__PVT__decode_offset) 
						 << 3U)))));
    // ALWAYS at Core.sv:20
    vlSymsp->TOP__v__core.__PVT__send_fetch_req = (
						   (0U 
						    == vlSymsp->TOP__v__core.__PVT__fetch_state) 
						   & (0x20U 
						      > 
						      (0x7fU 
						       & ((IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset) 
							  - (IData)(vlSymsp->TOP__v__core.__PVT__decode_offset)))));
    // ALWAYS at Core.sv:324
    if (((((4U < ((IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset) 
		  - (IData)(vlSymsp->TOP__v__core.__PVT__decode_offset))) 
	   & (((IData)(vlSymsp->TOP__v__core.__PVT__decode_offset) 
	       < (IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset)) 
	      | ((IData)(vlSymsp->TOP__v__core.__PVT__decode_offset) 
		 == (IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset)))) 
	  & (~ (IData)(vlSymsp->TOP__v__core.__PVT__alu_working))) 
	 & (~ (IData)(vlSymsp->TOP__v__core.__PVT__branch_taken)))) {
	vlSymsp->TOP__v__core.__PVT__can_decode = 1U;
	vlSymsp->TOP__v__core.__PVT__fetch_offset_wrap = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_offset_wrap = 0U;
    } else {
	vlSymsp->TOP__v__core.__PVT__can_decode = (
						   (((IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset_wrap) 
						     & ((IData)(vlSymsp->TOP__v__core.__PVT__decode_offset) 
							> (IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset))) 
						    & (~ (IData)(vlSymsp->TOP__v__core.__PVT__alu_working))) 
						   & (~ (IData)(vlSymsp->TOP__v__core.__PVT__branch_taken)));
    }
    vlSymsp->TOP__v__core.__PVT__oreg_start = ((IData)(8U) 
					       + (0x1f0U 
						  & (vlSymsp->TOP__v__core.__PVT__psr 
						     << 4U)));
    vlSymsp->TOP__v__core.__PVT__N = (1U & (vlSymsp->TOP__v__core.__PVT__psr 
					    >> 0x17U));
    vlSymsp->TOP__v__core.__PVT__Z = (1U & (vlSymsp->TOP__v__core.__PVT__psr 
					    >> 0x16U));
    vlSymsp->TOP__v__core.__PVT__V = (1U & (vlSymsp->TOP__v__core.__PVT__psr 
					    >> 0x15U));
    vlSymsp->TOP__v__core.__PVT__C = (1U & (vlSymsp->TOP__v__core.__PVT__psr 
					    >> 0x14U));
    // ALWAYS at Core.sv:45
    vlSymsp->TOP__v__core.__Vlvbound1 = 0U;
    // Function: get_index at Core.sv:45
    vlSymsp->TOP__v__core.__Vfunc_get_index__0__index = 0U;
    {
	if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__0__index))) {
	    vlSymsp->TOP__v__core.__Vfunc_get_index__0__Vfuncout 
		= vlSymsp->TOP__v__core.__Vfunc_get_index__0__index;
	    goto __Vlabel82;
	} else {
	    vlSymsp->TOP__v__core.__Vfunc_get_index__0__Vfuncout 
		= ((0x1f0U & (vlSymsp->TOP__v__core.__PVT__psr 
			      << 4U)) + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__0__index));
	    goto __Vlabel82;
	}
    }
    __Vlabel82: ;
    if ((0x205U >= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__0__Vfuncout))) {
	// Function: get_index at Core.sv:45
	vlSymsp->TOP__v__core.__Vfunc_get_index__1__index = 0U;
	{
	    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__1__index))) {
		vlSymsp->TOP__v__core.__Vfunc_get_index__1__Vfuncout 
		    = vlSymsp->TOP__v__core.__Vfunc_get_index__1__index;
		goto __Vlabel83;
	    } else {
		vlSymsp->TOP__v__core.__Vfunc_get_index__1__Vfuncout 
		    = ((0x1f0U & (vlSymsp->TOP__v__core.__PVT__psr 
				  << 4U)) + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__1__index));
		goto __Vlabel83;
	    }
	}
	__Vlabel83: ;
	vlSymsp->TOP__v__core.__PVT__regs[(0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__1__Vfuncout)] 
	    = vlSymsp->TOP__v__core.__Vlvbound1;
    }
    // ALWAYS at Decoder.sv:20
    if ((1U == vlSymsp->TOP__v__core.__PVT__decode__DOT__decode_state)) {
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
	    = ((0x3fffffU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U]) 
	       | (0xc00000U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			       >> 8U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__comb_done = 1U;
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
	    = ((0xc0ffffU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U]) 
	       | (0x3f0000U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			       >> 3U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
	    = ((0xff1fffU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U]) 
	       | (0xe000U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			     >> 9U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
	    = ((0xffe0ffU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U]) 
	       | (0x1f00U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			     >> 0x11U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
	    = ((0xffff07U & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U]) 
	       | (0xf8U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			   >> 0xbU)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[3U] 
	    = ((0x3fffffffU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[3U]) 
	       | (0xc0000000U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
				 << 0x1eU)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
	    = ((0xfffff8U & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U]) 
	       | (7U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			>> 2U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[3U] 
	    = ((0xc001ffffU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[3U]) 
	       | (0x3ffe0000U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
				 << 0x11U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[2U] 
	    = ((0x7ffffU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[2U]) 
	       | (0xfff80000U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
				 << 0x13U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[3U] 
	    = ((0xfffe0000U & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[3U]) 
	       | (0x1ffffU & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			      >> 0xdU)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
	    = ((0x1fffffffU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
	       | (0xe0000000U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
				 << 0x1dU)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[2U] 
	    = ((0xfff80000U & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[2U]) 
	       | (0x7ffffU & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			      >> 3U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
	    = ((0xe000007fU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
	       | (0x1ff80U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			      >> 0xeU)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
	    = ((0xffffffbfU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
	       | (0x40U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			   >> 0x17U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
	    = ((0xffffffdfU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
	       | (0x20U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			   >> 8U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
	    = ((0xffffffe1U & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
	       | (0x1eU & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			   >> 0x18U)));
	if ((0U == (3U & (vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
			  >> 0x16U)))) {
	    if ((4U == (7U & (vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
			      >> 0xdU)))) {
		vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[0U] 
		    = (IData)((QData)((IData)((0xfffffc00U 
					       & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
						  << 0xaU)))));
		vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
		    = ((0xfffffffeU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
		       | (IData)(((QData)((IData)((0xfffffc00U 
						   & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
						      << 0xaU)))) 
				  >> 0x20U)));
	    } else {
		if ((2U == (7U & (vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
				  >> 0xdU)))) {
		    vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[0U] 
			= (IData)((QData)((IData)((
						   (0xffc00000U 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
									       >> 0x15U)))) 
						       << 0x16U)) 
						   | (0x3fffffU 
						      & vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst)))));
		    vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
			= ((0xfffffffeU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
			   | (IData)(((QData)((IData)(
						      ((0xffc00000U 
							& (VL_NEGATE_I((IData)(
									       (1U 
										& (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
										>> 0x15U)))) 
							   << 0x16U)) 
						       | (0x3fffffU 
							  & vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst)))) 
				      >> 0x20U)));
		}
	    }
	} else {
	    if ((1U == (3U & (vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
			      >> 0x16U)))) {
		vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[0U] 
		    = (IData)((QData)((IData)((0xfffffffcU 
					       & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
						  << 2U)))));
		vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
		    = ((0xfffffffeU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
		       | (IData)(((QData)((IData)((0xfffffffcU 
						   & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
						      << 2U)))) 
				  >> 0x20U)));
	    } else {
		if ((2U == (3U & (vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
				  >> 0x16U)))) {
		    vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[0U] 
			= (IData)((QData)((IData)((
						   (0xffffe000U 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
									       >> 0xcU)))) 
						       << 0xdU)) 
						   | (0x1fffU 
						      & vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst)))));
		    vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
			= ((0xfffffffeU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
			   | (IData)(((QData)((IData)(
						      ((0xffffe000U 
							& (VL_NEGATE_I((IData)(
									       (1U 
										& (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
										>> 0xcU)))) 
							   << 0xdU)) 
						       | (0x1fffU 
							  & vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst)))) 
				      >> 0x20U)));
		} else {
		    if ((3U == (3U & (vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
				      >> 0x16U)))) {
			vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[0U] 
			    = (IData)((QData)((IData)(
						      ((0xffffe000U 
							& (VL_NEGATE_I((IData)(
									       (1U 
										& (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
										>> 0xcU)))) 
							   << 0xdU)) 
						       | (0x1fffU 
							  & vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst)))));
			vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
			    = ((0xfffffffeU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
			       | (IData)(((QData)((IData)(
							  ((0xffffe000U 
							    & (VL_NEGATE_I((IData)(
										(1U 
										& (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
										>> 0xcU)))) 
							       << 0xdU)) 
							   | (0x1fffU 
							      & vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst)))) 
					  >> 0x20U)));
		    }
		}
	    }
	}
    }
}

VL_INLINE_OPT void Vtop_Core__B0::_sequent__TOP__v__core__19(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_Core__B0::_sequent__TOP__v__core__19\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at Core.sv:20
    vlSymsp->TOP__v__core.__PVT__send_fetch_req = (
						   (0U 
						    == vlSymsp->TOP__v__core.__PVT__fetch_state) 
						   & (0x20U 
						      > 
						      (0x7fU 
						       & ((IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset) 
							  - (IData)(vlSymsp->TOP__v__core.__PVT__decode_offset)))));
    // ALWAYS at Core.sv:324
    if (((((4U < ((IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset) 
		  - (IData)(vlSymsp->TOP__v__core.__PVT__decode_offset))) 
	   & (((IData)(vlSymsp->TOP__v__core.__PVT__decode_offset) 
	       < (IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset)) 
	      | ((IData)(vlSymsp->TOP__v__core.__PVT__decode_offset) 
		 == (IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset)))) 
	  & (~ (IData)(vlSymsp->TOP__v__core.__PVT__alu_working))) 
	 & (~ (IData)(vlSymsp->TOP__v__core.__PVT__branch_taken)))) {
	vlSymsp->TOP__v__core.__PVT__can_decode = 1U;
	vlSymsp->TOP__v__core.__PVT__fetch_offset_wrap = 0U;
	vlSymsp->TOP__v__core.__PVT__decode_offset_wrap = 0U;
    } else {
	vlSymsp->TOP__v__core.__PVT__can_decode = (
						   (((IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset_wrap) 
						     & ((IData)(vlSymsp->TOP__v__core.__PVT__decode_offset) 
							> (IData)(vlSymsp->TOP__v__core.__PVT__fetch_offset))) 
						    & (~ (IData)(vlSymsp->TOP__v__core.__PVT__alu_working))) 
						   & (~ (IData)(vlSymsp->TOP__v__core.__PVT__branch_taken)));
    }
    vlSymsp->TOP__v__core.__PVT__oreg_start = ((IData)(8U) 
					       + (0x1f0U 
						  & (vlSymsp->TOP__v__core.__PVT__psr 
						     << 4U)));
    // ALWAYSPOST at Core.sv:58
    if (vlSymsp->TOP__v__core.__Vdlyvset__regs__v0) {
	vlSymsp->TOP__v__core.__PVT__regs[1U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[2U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[3U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[4U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[5U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[6U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[7U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[8U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[9U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xaU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xbU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xcU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xdU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xeU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xfU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x10U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x11U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x12U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x13U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x14U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x15U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x16U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x17U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x18U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x19U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1fU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x20U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x21U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x22U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x23U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x24U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x25U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x26U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x27U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x28U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x29U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x2aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x2bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x2cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x2dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x2eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x2fU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x30U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x31U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x32U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x33U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x34U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x35U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x36U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x37U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x38U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x39U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x3aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x3bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x3cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x3dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x3eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x3fU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x40U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x41U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x42U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x43U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x44U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x45U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x46U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x47U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x48U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x49U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x4aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x4bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x4cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x4dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x4eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x4fU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x50U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x51U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x52U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x53U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x54U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x55U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x56U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x57U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x58U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x59U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x5aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x5bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x5cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x5dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x5eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x5fU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x60U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x61U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x62U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x63U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x64U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x65U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x66U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x67U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x68U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x69U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x6aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x6bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x6cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x6dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x6eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x6fU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x70U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x71U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x72U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x73U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x74U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x75U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x76U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x77U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x78U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x79U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x7aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x7bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x7cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x7dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x7eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x7fU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x80U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x81U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x82U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x83U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x84U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x85U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x86U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x87U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x88U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x89U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x8aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x8bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x8cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x8dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x8eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x8fU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x90U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x91U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x92U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x93U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x94U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x95U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x96U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x97U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x98U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x99U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x9aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x9bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x9cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x9dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x9eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x9fU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xa0U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xa1U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xa2U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xa3U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xa4U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xa5U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xa6U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xa7U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xa8U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xa9U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xaaU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xabU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xacU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xadU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xaeU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xafU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xb0U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xb1U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xb2U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xb3U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xb4U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xb5U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xb6U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xb7U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xb8U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xb9U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xbaU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xbbU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xbcU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xbdU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xbeU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xbfU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xc0U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xc1U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xc2U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xc3U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xc4U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xc5U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xc6U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xc7U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xc8U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xc9U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xcaU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xcbU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xccU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xcdU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xceU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xcfU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xd0U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xd1U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xd2U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xd3U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xd4U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xd5U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xd6U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xd7U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xd8U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xd9U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xdaU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xdbU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xdcU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xddU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xdeU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xdfU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xe0U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xe1U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xe2U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xe3U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xe4U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xe5U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xe6U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xe7U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xe8U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xe9U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xeaU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xebU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xecU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xedU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xeeU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xefU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xf0U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xf1U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xf2U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xf3U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xf4U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xf5U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xf6U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xf7U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xf8U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xf9U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xfaU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xfbU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xfcU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xfdU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xfeU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0xffU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x100U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x101U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x102U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x103U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x104U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x105U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x106U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x107U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x108U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x109U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x10aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x10bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x10cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x10dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x10eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x10fU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x110U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x111U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x112U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x113U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x114U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x115U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x116U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x117U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x118U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x119U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x11aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x11bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x11cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x11dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x11eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x11fU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x120U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x121U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x122U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x123U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x124U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x125U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x126U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x127U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x128U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x129U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x12aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x12bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x12cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x12dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x12eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x12fU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x130U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x131U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x132U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x133U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x134U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x135U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x136U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x137U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x138U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x139U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x13aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x13bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x13cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x13dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x13eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x13fU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x140U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x141U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x142U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x143U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x144U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x145U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x146U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x147U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x148U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x149U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x14aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x14bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x14cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x14dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x14eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x14fU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x150U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x151U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x152U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x153U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x154U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x155U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x156U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x157U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x158U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x159U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x15aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x15bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x15cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x15dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x15eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x15fU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x160U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x161U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x162U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x163U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x164U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x165U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x166U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x167U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x168U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x169U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x16aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x16bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x16cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x16dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x16eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x16fU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x170U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x171U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x172U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x173U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x174U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x175U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x176U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x177U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x178U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x179U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x17aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x17bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x17cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x17dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x17eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x17fU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x180U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x181U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x182U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x183U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x184U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x185U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x186U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x187U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x188U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x189U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x18aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x18bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x18cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x18dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x18eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x18fU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x190U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x191U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x192U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x193U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x194U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x195U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x196U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x197U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x198U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x199U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x19aU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x19bU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x19cU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x19dU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x19eU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x19fU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1a0U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1a1U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1a2U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1a3U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1a4U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1a5U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1a6U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1a7U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1a8U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1a9U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1aaU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1abU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1acU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1adU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1aeU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1afU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1b0U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1b1U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1b2U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1b3U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1b4U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1b5U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1b6U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1b7U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1b8U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1b9U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1baU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1bbU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1bcU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1bdU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1beU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1bfU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1c0U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1c1U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1c2U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1c3U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1c4U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1c5U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1c6U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1c7U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1c8U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1c9U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1caU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1cbU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1ccU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1cdU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1ceU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1cfU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1d0U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1d1U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1d2U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1d3U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1d4U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1d5U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1d6U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1d7U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1d8U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1d9U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1daU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1dbU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1dcU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1ddU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1deU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1dfU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1e0U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1e1U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1e2U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1e3U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1e4U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1e5U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1e6U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1e7U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1e8U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1e9U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1eaU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1ebU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1ecU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1edU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1eeU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1efU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1f0U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1f1U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1f2U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1f3U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1f4U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1f5U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1f6U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1f7U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1f8U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1f9U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1faU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1fbU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1fcU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1fdU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1feU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x1ffU] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x200U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x201U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x202U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x203U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x204U] = 0U;
	vlSymsp->TOP__v__core.__PVT__regs[0x205U] = 0U;
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__regs__v517) {
	vlSymsp->TOP__v__core.__PVT__regs[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v517)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__regs__v517;
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__regs__v518) {
	vlSymsp->TOP__v__core.__PVT__regs[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v518)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__regs__v518;
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__regs__v519) {
	vlSymsp->TOP__v__core.__PVT__regs[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v519)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__regs__v519;
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__regs__v520) {
	vlSymsp->TOP__v__core.__PVT__regs[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v520)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__regs__v520;
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__regs__v521) {
	vlSymsp->TOP__v__core.__PVT__regs[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v521)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__regs__v521;
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__regs__v522) {
	vlSymsp->TOP__v__core.__PVT__regs[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v522)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__regs__v522;
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__regs__v523) {
	vlSymsp->TOP__v__core.__PVT__regs[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v523)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__regs__v523;
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__regs__v524) {
	vlSymsp->TOP__v__core.__PVT__regs[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v524)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__regs__v524;
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__regs__v525) {
	vlSymsp->TOP__v__core.__PVT__regs[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v525)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__regs__v525;
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__regs__v526) {
	vlSymsp->TOP__v__core.__PVT__regs[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v526)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__regs__v526;
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__regs__v527) {
	vlSymsp->TOP__v__core.__PVT__regs[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v527)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__regs__v527;
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__regs__v528) {
	vlSymsp->TOP__v__core.__PVT__regs[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v528)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__regs__v528;
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__regs__v529) {
	vlSymsp->TOP__v__core.__PVT__regs[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v529)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__regs__v529;
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__regs__v530) {
	vlSymsp->TOP__v__core.__PVT__regs[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v530)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__regs__v530;
    }
    if (vlSymsp->TOP__v__core.__Vdlyvset__regs__v531) {
	vlSymsp->TOP__v__core.__PVT__regs[(IData)(vlSymsp->TOP__v__core.__Vdlyvdim0__regs__v531)] 
	    = vlSymsp->TOP__v__core.__Vdlyvval__regs__v531;
    }
    vlSymsp->TOP__v__core.__PVT__N = (1U & (vlSymsp->TOP__v__core.__PVT__psr 
					    >> 0x17U));
    vlSymsp->TOP__v__core.__PVT__Z = (1U & (vlSymsp->TOP__v__core.__PVT__psr 
					    >> 0x16U));
    vlSymsp->TOP__v__core.__PVT__V = (1U & (vlSymsp->TOP__v__core.__PVT__psr 
					    >> 0x15U));
    vlSymsp->TOP__v__core.__PVT__C = (1U & (vlSymsp->TOP__v__core.__PVT__psr 
					    >> 0x14U));
    // ALWAYS at Core.sv:45
    vlSymsp->TOP__v__core.__Vlvbound1 = 0U;
    // Function: get_index at Core.sv:45
    vlSymsp->TOP__v__core.__Vfunc_get_index__0__index = 0U;
    {
	if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__0__index))) {
	    vlSymsp->TOP__v__core.__Vfunc_get_index__0__Vfuncout 
		= vlSymsp->TOP__v__core.__Vfunc_get_index__0__index;
	    goto __Vlabel84;
	} else {
	    vlSymsp->TOP__v__core.__Vfunc_get_index__0__Vfuncout 
		= ((0x1f0U & (vlSymsp->TOP__v__core.__PVT__psr 
			      << 4U)) + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__0__index));
	    goto __Vlabel84;
	}
    }
    __Vlabel84: ;
    if ((0x205U >= (0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__0__Vfuncout))) {
	// Function: get_index at Core.sv:45
	vlSymsp->TOP__v__core.__Vfunc_get_index__1__index = 0U;
	{
	    if ((8U > (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__1__index))) {
		vlSymsp->TOP__v__core.__Vfunc_get_index__1__Vfuncout 
		    = vlSymsp->TOP__v__core.__Vfunc_get_index__1__index;
		goto __Vlabel85;
	    } else {
		vlSymsp->TOP__v__core.__Vfunc_get_index__1__Vfuncout 
		    = ((0x1f0U & (vlSymsp->TOP__v__core.__PVT__psr 
				  << 4U)) + (IData)(vlSymsp->TOP__v__core.__Vfunc_get_index__1__index));
		goto __Vlabel85;
	    }
	}
	__Vlabel85: ;
	vlSymsp->TOP__v__core.__PVT__regs[(0x3ffU & vlSymsp->TOP__v__core.__Vfunc_get_index__1__Vfuncout)] 
	    = vlSymsp->TOP__v__core.__Vlvbound1;
    }
    // ALWAYS at Decoder.sv:20
    if ((1U == vlSymsp->TOP__v__core.__PVT__decode__DOT__decode_state)) {
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
	    = ((0x3fffffU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U]) 
	       | (0xc00000U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			       >> 8U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__comb_done = 1U;
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
	    = ((0xc0ffffU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U]) 
	       | (0x3f0000U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			       >> 3U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
	    = ((0xff1fffU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U]) 
	       | (0xe000U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			     >> 9U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
	    = ((0xffe0ffU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U]) 
	       | (0x1f00U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			     >> 0x11U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
	    = ((0xffff07U & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U]) 
	       | (0xf8U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			   >> 0xbU)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[3U] 
	    = ((0x3fffffffU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[3U]) 
	       | (0xc0000000U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
				 << 0x1eU)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
	    = ((0xfffff8U & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U]) 
	       | (7U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			>> 2U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[3U] 
	    = ((0xc001ffffU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[3U]) 
	       | (0x3ffe0000U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
				 << 0x11U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[2U] 
	    = ((0x7ffffU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[2U]) 
	       | (0xfff80000U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
				 << 0x13U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[3U] 
	    = ((0xfffe0000U & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[3U]) 
	       | (0x1ffffU & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			      >> 0xdU)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
	    = ((0x1fffffffU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
	       | (0xe0000000U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
				 << 0x1dU)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[2U] 
	    = ((0xfff80000U & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[2U]) 
	       | (0x7ffffU & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			      >> 3U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
	    = ((0xe000007fU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
	       | (0x1ff80U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			      >> 0xeU)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
	    = ((0xffffffbfU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
	       | (0x40U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			   >> 0x17U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
	    = ((0xffffffdfU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
	       | (0x20U & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			   >> 8U)));
	vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
	    = ((0xffffffe1U & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
	       | (0x1eU & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
			   >> 0x18U)));
	if ((0U == (3U & (vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
			  >> 0x16U)))) {
	    if ((4U == (7U & (vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
			      >> 0xdU)))) {
		vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[0U] 
		    = (IData)((QData)((IData)((0xfffffc00U 
					       & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
						  << 0xaU)))));
		vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
		    = ((0xfffffffeU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
		       | (IData)(((QData)((IData)((0xfffffc00U 
						   & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
						      << 0xaU)))) 
				  >> 0x20U)));
	    } else {
		if ((2U == (7U & (vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
				  >> 0xdU)))) {
		    vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[0U] 
			= (IData)((QData)((IData)((
						   (0xffc00000U 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
									       >> 0x15U)))) 
						       << 0x16U)) 
						   | (0x3fffffU 
						      & vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst)))));
		    vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
			= ((0xfffffffeU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
			   | (IData)(((QData)((IData)(
						      ((0xffc00000U 
							& (VL_NEGATE_I((IData)(
									       (1U 
										& (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
										>> 0x15U)))) 
							   << 0x16U)) 
						       | (0x3fffffU 
							  & vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst)))) 
				      >> 0x20U)));
		}
	    }
	} else {
	    if ((1U == (3U & (vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
			      >> 0x16U)))) {
		vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[0U] 
		    = (IData)((QData)((IData)((0xfffffffcU 
					       & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
						  << 2U)))));
		vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
		    = ((0xfffffffeU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
		       | (IData)(((QData)((IData)((0xfffffffcU 
						   & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
						      << 2U)))) 
				  >> 0x20U)));
	    } else {
		if ((2U == (3U & (vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
				  >> 0x16U)))) {
		    vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[0U] 
			= (IData)((QData)((IData)((
						   (0xffffe000U 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
									       >> 0xcU)))) 
						       << 0xdU)) 
						   | (0x1fffU 
						      & vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst)))));
		    vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
			= ((0xfffffffeU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
			   | (IData)(((QData)((IData)(
						      ((0xffffe000U 
							& (VL_NEGATE_I((IData)(
									       (1U 
										& (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
										>> 0xcU)))) 
							   << 0xdU)) 
						       | (0x1fffU 
							  & vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst)))) 
				      >> 0x20U)));
		} else {
		    if ((3U == (3U & (vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[4U] 
				      >> 0x16U)))) {
			vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[0U] 
			    = (IData)((QData)((IData)(
						      ((0xffffe000U 
							& (VL_NEGATE_I((IData)(
									       (1U 
										& (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
										>> 0xcU)))) 
							   << 0xdU)) 
						       | (0x1fffU 
							  & vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst)))));
			vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U] 
			    = ((0xfffffffeU & vlSymsp->TOP__v__core.__PVT__decode__DOT__temp_dec[1U]) 
			       | (IData)(((QData)((IData)(
							  ((0xffffe000U 
							    & (VL_NEGATE_I((IData)(
										(1U 
										& (vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst 
										>> 0xcU)))) 
							       << 0xdU)) 
							   | (0x1fffU 
							      & vlSymsp->TOP__v__core.__Vcellinp__decode__dec_inst)))) 
					  >> 0x20U)));
		    }
		}
	    }
	}
    }
}
