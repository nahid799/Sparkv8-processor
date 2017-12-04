// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _Vtop_Core__B0_H_
#define _Vtop_Core__B0_H_

#include "verilated.h"
#include "Vtop__Inlines.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;
class Vtop_arbiter__B1000;
class VerilatedVcd;

//----------

VL_MODULE(Vtop_Core__B0) {
  public:
    // CELLS
    Vtop_arbiter__B1000*	__PVT__Arbiter;
    
    // PORTS
    VL_IN64(__PVT__entry,63,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__fetch_skip,5,0);
    VL_SIG8(__PVT__fetch_offset,6,0);
    VL_SIG8(__PVT__decode_offset,6,0);
    VL_SIG8(__PVT__prev_fetch_offset,6,0);
    VL_SIG8(__PVT__fetch_offset_temp,6,0);
    VL_SIG8(__PVT__decode_offset_temp,6,0);
    VL_SIG8(__PVT__send_fetch_req,0,0);
    VL_SIG8(__PVT__N,0,0);
    VL_SIG8(__PVT__Z,0,0);
    VL_SIG8(__PVT__C,0,0);
    VL_SIG8(__PVT__V,0,0);
    VL_SIG8(__PVT__icache_bus_req,0,0);
    VL_SIG8(__PVT__dcache_bus_req,0,0);
    VL_SIG8(__PVT__dcache_bus_rw,0,0);
    VL_SIG8(__PVT__icache_comp,0,0);
    VL_SIG8(__PVT__icache_req,0,0);
    VL_SIG8(__PVT__icache_set_index,3,0);
    VL_SIG8(__PVT__dcache_req,0,0);
    VL_SIG8(__PVT__dcache_reqack,0,0);
    VL_SIG8(__PVT__dcache_rw,0,0);
    VL_SIG8(__PVT__dcache_comp,0,0);
    VL_SIG8(__PVT__dcache_word_select,3,0);
    VL_SIG8(__PVT__dcache_set_index,3,0);
    VL_SIG8(__PVT__branch_flag,0,0);
    VL_SIG8(__PVT__fetch_offset_wrap,0,0);
    VL_SIG8(__PVT__decode_offset_wrap,0,0);
    VL_SIG8(__PVT__branch_taken,0,0);
    VL_SIG8(__PVT__decode_ack,0,0);
    VL_SIG8(__PVT__can_decode,0,0);
    VL_SIG8(__PVT__bytes_decoded_this_cycle,3,0);
    VL_SIG8(__PVT__alu_working,0,0);
    VL_SIG8(__PVT__go_to_sys,0,0);
    VL_SIG8(__PVT__op,1,0);
    VL_SIG8(__PVT__go_to_call,0,0);
    VL_SIG8(__PVT__branch_taken_ch,0,0);
    VL_SIG8(__PVT__go_to_mem,0,0);
    VL_SIG8(__PVT__go_to_nonsense,0,0);
    VL_SIG8(__PVT__go_to_branch,0,0);
    VL_SIG8(__PVT__go_to_save,0,0);
    VL_SIG8(__PVT__alu_req,0,0);
    VL_SIG8(__PVT__alu_reqack,0,0);
    VL_SIG8(__PVT__op3,5,0);
    VL_SIG8(__PVT__go_to_memory,0,0);
    VL_SIG8(__PVT__ready_for_wb,0,0);
    VL_SIG8(__PVT__go_to_wb,0,0);
    VL_SIG8(__PVT__byte_select,1,0);
    VL_SIG8(__PVT__byte_access,0,0);
    VL_SIG8(__PVT__icache_reqack,0,0);
    VL_SIG8(__PVT__alu_busy,0,0);
    VL_SIG8(__PVT__alu_done,0,0);
    VL_SIG8(__PVT__tag_overflow,0,0);
    VL_SIG8(__PVT__trap,0,0);
    VL_SIG8(__PVT__IC__DOT__data_en,0,0);
    VL_SIG8(__PVT__IC__DOT__tag_en,0,0);
    VL_SIG8(__PVT__IC__DOT__state_w,0,0);
    VL_SIG8(__PVT__IC__DOT__state_en,0,0);
    VL_SIG8(__PVT__IC__DOT__age_en,0,0);
    VL_SIG8(__PVT__IC__DOT__hit,0,0);
    VL_SIG8(__PVT__IC__DOT__update_done,0,0);
    VL_SIG8(__PVT__IC__DOT__set_counter,4,0);
    VL_SIG8(__PVT__IC__DOT__check_counter,4,0);
    VL_SIG8(__PVT__DC__DOT__tag_en,0,0);
    VL_SIG8(__PVT__DC__DOT__state_r,1,0);
    VL_SIG8(__PVT__DC__DOT__state_w,1,0);
    VL_SIG8(__PVT__DC__DOT__state_en,0,0);
    VL_SIG8(__PVT__DC__DOT__age_en,0,0);
    VL_SIG8(__PVT__DC__DOT__hit,0,0);
    VL_SIG8(__PVT__DC__DOT__update_done,0,0);
    VL_SIG8(__PVT__DC__DOT__set_counter,4,0);
    VL_SIG8(__PVT__DC__DOT__check_counter,4,0);
    VL_SIG8(__PVT__decode__DOT__done,0,0);
    VL_SIG8(__PVT__decode__DOT__comb_done,0,0);
    VL_SIG8(__PVT__alu__DOT__shcnt,4,0);
    VL_SIG8(__PVT__alu__DOT__temp,0,0);
    VL_SIG16(__PVT__IC__DOT__index,8,0);
    VL_SIG16(__PVT__IC__DOT__max_index,8,0);
    VL_SIG16(__PVT__DC__DOT__data_en,15,0);
    VL_SIG16(__PVT__DC__DOT__index,8,0);
    VL_SIG16(__PVT__DC__DOT__max_index,8,0);
    VL_SIG(__PVT__fetch_state,31,0);
    //char	__VpadToAlign100[4];
    VL_SIGW(__PVT__decode_buffer,1023,0,32);
    VL_SIG(__PVT__reg_used,31,0);
    VL_SIG(__PVT__psr,31,0);
    VL_SIG(__PVT__wim,31,0);
    VL_SIG(__PVT__oreg_start,31,0);
    VL_SIGW(__PVT__dcache_bus_data_out,511,0,16);
    VL_SIGW(__PVT__icache_data_out,511,0,16);
    VL_SIG(__PVT__dcache_data_out,31,0);
    VL_SIG(__PVT__dcache_data_in,31,0);
    VL_SIGW(__PVT__temp,511,0,16);
    VL_SIG(__PVT__word_counter,31,0);
    VL_SIG(__PVT__rd,31,0);
    VL_SIG(__PVT__destination,31,0);
    VL_SIG(__PVT__alu_val,31,0);
    VL_SIG(__PVT__source1,31,0);
    VL_SIG(__PVT__source2,31,0);
    VL_SIG(__PVT__alu_val_temp,31,0);
    VL_SIG(__PVT__mem_state,31,0);
    VL_SIG(__PVT__unnamedblk1__DOT__i,31,0);
    VL_SIG(__PVT__unnamedblk1__DOT__unnamedblk2__DOT__j,31,0);
    VL_SIGW(__PVT__IC__DOT__data_r,511,0,16);
    VL_SIGW(__PVT__IC__DOT__data_w,511,0,16);
    VL_SIG(__PVT__IC__DOT__age_r,31,0);
    VL_SIG(__PVT__IC__DOT__age_w,31,0);
    VL_SIG(__PVT__IC__DOT__max_age,31,0);
    VL_SIG(__PVT__IC__DOT__cache_state,31,0);
    VL_SIG(__PVT__IC__DOT__data__DOT__i,31,0);
    VL_SIG(__PVT__IC__DOT__tag__DOT__i,31,0);
    VL_SIG(__PVT__IC__DOT__state__DOT__i,31,0);
    VL_SIG(__PVT__IC__DOT__age__DOT__i,31,0);
    VL_SIGW(__PVT__DC__DOT__data_r,511,0,16);
    VL_SIGW(__PVT__DC__DOT__data_w,511,0,16);
    VL_SIG(__PVT__DC__DOT__age_r,31,0);
    VL_SIG(__PVT__DC__DOT__age_w,31,0);
    VL_SIG(__PVT__DC__DOT__max_age,31,0);
    VL_SIG(__PVT__DC__DOT__counter,31,0);
    VL_SIG(__PVT__DC__DOT__cache_state,31,0);
    VL_SIG(__PVT__DC__DOT__data__DOT__i,31,0);
    VL_SIG(__PVT__DC__DOT__tag__DOT__i,31,0);
    VL_SIG(__PVT__DC__DOT__state__DOT__i,31,0);
    VL_SIG(__PVT__DC__DOT__age__DOT__i,31,0);
    VL_SIG(__PVT__decode__DOT__decode_state,31,0);
    VL_SIG(__PVT__alu__DOT__pivot,31,0);
    VL_SIG(__PVT__alu__DOT__ALU_state,31,0);
    VL_SIG64(__PVT__fetch_rip,63,0);
    VL_SIG64(__PVT__decode_rip,63,0);
    VL_SIG64(__PVT__icache_line_addr,57,0);
    VL_SIG64(__PVT__dcache_line_addr,57,0);
    VL_SIGW(__PVT__decoded_val,151,0,5);
    //char	__VpadToAlign876[4];
    VL_SIG64(__PVT__new_fetch_rip,57,0);
    VL_SIG64(__PVT__IC__DOT__tag_r,53,0);
    VL_SIG64(__PVT__IC__DOT__tag_w,53,0);
    VL_SIG64(__PVT__DC__DOT__tag_r,53,0);
    VL_SIG64(__PVT__DC__DOT__tag_w,53,0);
    VL_SIGW(__PVT__decode__DOT__temp_dec,151,0,5);
    //char	__VpadToAlign940[4];
    VL_SIG64(__PVT__alu__DOT__temp_64,63,0);
    VL_SIG64(__PVT__alu__DOT__product,63,0);
    VL_SIG(__PVT__regs[518],31,0);
    VL_SIGW(__PVT__IC__DOT__data__DOT__mem[512],511,0,16);
    VL_SIG64(__PVT__IC__DOT__tag__DOT__mem[512],53,0);
    VL_SIG8(__PVT__IC__DOT__state__DOT__mem[512],1,0);
    VL_SIG(__PVT__IC__DOT__age__DOT__mem[512],31,0);
    VL_SIGW(__PVT__DC__DOT__data__DOT__mem[512],511,0,16);
    VL_SIG64(__PVT__DC__DOT__tag__DOT__mem[512],53,0);
    VL_SIG8(__PVT__DC__DOT__state__DOT__mem[512],1,0);
    VL_SIG(__PVT__DC__DOT__age__DOT__mem[512],31,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vcellout__alu__C,0,0);
    VL_SIG8(__Vcellout__alu____pinNumber13,0,0);
    VL_SIG8(__Vcellout__alu____pinNumber12,0,0);
    VL_SIG8(__Vcellout__alu____pinNumber11,0,0);
    VL_SIG8(IC__DOT____Vcellout__state__readData,1,0);
    VL_SIG8(__Vfunc_get_index__0__index,4,0);
    VL_SIG8(__Vfunc_get_index__1__index,4,0);
    VL_SIG8(__Vfunc_get_index__2__index,4,0);
    VL_SIG8(__Vfunc_get_index__3__index,4,0);
    VL_SIG8(__Vfunc_get_index__4__index,4,0);
    VL_SIG8(__Vfunc_get_index__5__index,4,0);
    VL_SIG8(__Vfunc_reg_win__6__index,4,0);
    VL_SIG8(__Vfunc_reg_win__6__win,4,0);
    VL_SIG8(__Vfunc_reg_win__7__index,4,0);
    VL_SIG8(__Vfunc_reg_win__7__win,4,0);
    VL_SIG8(__Vfunc_get_index__8__index,4,0);
    VL_SIG8(__Vfunc_get_index__9__index,4,0);
    VL_SIG8(__Vfunc_get_index__10__index,4,0);
    VL_SIG8(__Vfunc_get_index__11__index,4,0);
    VL_SIG8(__Vfunc_reg_win__12__index,4,0);
    VL_SIG8(__Vfunc_reg_win__12__win,4,0);
    VL_SIG8(__Vfunc_reg_win__13__index,4,0);
    VL_SIG8(__Vfunc_reg_win__13__win,4,0);
    VL_SIG8(__Vfunc_get_index__14__index,4,0);
    VL_SIG8(__Vfunc_get_index__15__index,4,0);
    VL_SIG8(__Vfunc_reg_win__16__index,4,0);
    VL_SIG8(__Vfunc_reg_win__16__win,4,0);
    VL_SIG8(__Vfunc_reg_win__17__index,4,0);
    VL_SIG8(__Vfunc_reg_win__17__win,4,0);
    VL_SIG8(__Vfunc_get_index__18__index,4,0);
    VL_SIG8(__Vfunc_get_index__19__index,4,0);
    VL_SIG8(__Vfunc_get_index__20__index,4,0);
    VL_SIG8(__Vfunc_get_index__21__index,4,0);
    VL_SIG8(__Vfunc_reg_win__22__index,4,0);
    VL_SIG8(__Vfunc_reg_win__22__win,4,0);
    VL_SIG8(__Vfunc_reg_win__23__index,4,0);
    VL_SIG8(__Vfunc_reg_win__23__win,4,0);
    VL_SIG8(__Vfunc_branch_eval__24__Vfuncout,0,0);
    VL_SIG8(__Vfunc_branch_eval__24__cond,3,0);
    VL_SIG8(__Vfunc_branch_eval__24__N,0,0);
    VL_SIG8(__Vfunc_branch_eval__24__Z,0,0);
    VL_SIG8(__Vfunc_branch_eval__24__C,0,0);
    VL_SIG8(__Vfunc_branch_eval__24__V,0,0);
    VL_SIG8(__Vfunc_get_index__25__index,4,0);
    VL_SIG8(__Vfunc_get_index__26__index,4,0);
    VL_SIG8(__Vfunc_get_index__28__index,4,0);
    VL_SIG8(__Vfunc_get_index__29__index,4,0);
    VL_SIG8(__Vfunc_get_index__30__index,4,0);
    VL_SIG8(__Vfunc_get_index__31__index,4,0);
    VL_SIG8(__Vfunc_get_index__32__index,4,0);
    VL_SIG8(__Vfunc_get_index__33__index,4,0);
    VL_SIG8(__Vfunc_get_index__34__index,4,0);
    VL_SIG8(__Vfunc_get_index__35__index,4,0);
    VL_SIG8(__Vfunc_get_index__36__index,4,0);
    VL_SIG8(__Vfunc_get_index__37__index,4,0);
    VL_SIG8(__Vfunc_get_index__38__index,4,0);
    VL_SIG8(__Vfunc_get_index__39__index,4,0);
    VL_SIG8(__Vfunc_get_index__40__index,4,0);
    VL_SIG8(__Vfunc_get_index__41__index,4,0);
    VL_SIG8(__Vfunc_get_index__42__index,4,0);
    VL_SIG8(__Vfunc_get_index__43__index,4,0);
    VL_SIG8(__Vfunc_get_index__44__index,4,0);
    VL_SIG8(__Vfunc_get_index__45__index,4,0);
    VL_SIG8(__Vfunc_get_index__46__index,4,0);
    VL_SIG8(__Vfunc_get_index__47__index,4,0);
    VL_SIG8(__Vfunc_get_index__48__index,4,0);
    VL_SIG8(__Vfunc_get_index__49__index,4,0);
    VL_SIG8(__Vfunc_get_index__50__index,4,0);
    VL_SIG8(__Vfunc_get_index__51__index,4,0);
    VL_SIG8(__Vfunc_get_index__52__index,4,0);
    VL_SIG8(__Vfunc_get_index__53__index,4,0);
    VL_SIG8(__Vfunc_get_index__54__index,4,0);
    VL_SIG8(__Vfunc_get_index__55__index,4,0);
    VL_SIG8(__Vfunc_get_index__56__index,4,0);
    VL_SIG8(__Vfunc_get_index__57__index,4,0);
    VL_SIG8(__Vfunc_get_index__58__index,4,0);
    VL_SIG8(__Vfunc_get_index__59__index,4,0);
    VL_SIG8(__Vfunc_get_index__60__index,4,0);
    VL_SIG8(__Vfunc_get_index__61__index,4,0);
    VL_SIG8(__Vfunc_get_index__62__index,4,0);
    VL_SIG8(__Vfunc_get_index__63__index,4,0);
    VL_SIG8(__Vfunc_get_index__64__index,4,0);
    VL_SIG8(__Vfunc_get_index__65__index,4,0);
    VL_SIG8(__Vfunc_get_index__66__index,4,0);
    VL_SIG8(__Vfunc_get_index__67__index,4,0);
    VL_SIG8(__Vfunc_get_index__68__index,4,0);
    VL_SIG8(__Vfunc_get_index__69__index,4,0);
    VL_SIG8(__Vfunc_get_index__70__index,4,0);
    VL_SIG8(__Vfunc_get_index__71__index,4,0);
    VL_SIG8(__Vfunc_get_index__72__index,4,0);
    VL_SIG8(__Vfunc_get_index__73__index,4,0);
    VL_SIG8(__Vfunc_get_index__74__index,4,0);
    VL_SIG8(__Vfunc_get_index__75__index,4,0);
    VL_SIG8(__Vfunc_get_index__76__index,4,0);
    VL_SIG8(__Vfunc_get_index__77__index,4,0);
    VL_SIG8(__Vfunc_get_index__78__index,4,0);
    VL_SIG8(__Vfunc_get_index__79__index,4,0);
    VL_SIG8(__Vfunc_get_index__80__index,4,0);
    VL_SIG8(__Vfunc_get_index__81__index,4,0);
    VL_SIG8(__Vfunc_get_index__82__index,4,0);
    VL_SIG8(__Vfunc_get_index__83__index,4,0);
    VL_SIG8(__Vdlyvset__regs__v0,0,0);
    VL_SIG8(__Vdlyvset__regs__v517,0,0);
    VL_SIG8(__Vdly__fetch_offset,6,0);
    VL_SIG8(__Vdly__decode_offset,6,0);
    VL_SIG8(__Vdly__alu_working,0,0);
    VL_SIG8(__Vdly__branch_flag,0,0);
    VL_SIG8(__Vdly__fetch_skip,5,0);
    VL_SIG8(__Vdly__icache_req,0,0);
    VL_SIG8(__Vdly__branch_taken,0,0);
    VL_SIG8(__Vdly__ready_for_wb,0,0);
    VL_SIG8(__Vdly__go_to_memory,0,0);
    VL_SIG8(__Vdly__go_to_mem,0,0);
    VL_SIG8(__Vdlyvset__regs__v518,0,0);
    VL_SIG8(__Vdlyvset__regs__v519,0,0);
    VL_SIG8(__Vdlyvset__regs__v520,0,0);
    VL_SIG8(__Vdlyvset__regs__v521,0,0);
    VL_SIG8(__Vdlyvset__regs__v522,0,0);
    VL_SIG8(__Vdlyvset__regs__v523,0,0);
    VL_SIG8(__Vdly__go_to_wb,0,0);
    VL_SIG8(__Vdly__go_to_sys,0,0);
    VL_SIG8(__Vdly__go_to_call,0,0);
    VL_SIG8(__Vdly__go_to_nonsense,0,0);
    VL_SIG8(__Vdly__go_to_branch,0,0);
    VL_SIG8(__Vdly__go_to_save,0,0);
    VL_SIG8(__Vdly__branch_taken_ch,0,0);
    VL_SIG8(__Vdlyvset__regs__v524,0,0);
    VL_SIG8(__Vdlyvset__regs__v525,0,0);
    VL_SIG8(__Vdlyvset__regs__v526,0,0);
    VL_SIG8(__Vdlyvset__regs__v527,0,0);
    VL_SIG8(__Vdlyvset__regs__v528,0,0);
    VL_SIG8(__Vdlyvset__regs__v529,0,0);
    VL_SIG8(__Vdlyvset__regs__v530,0,0);
    VL_SIG8(__Vdlyvset__regs__v531,0,0);
    VL_SIG8(__Vdly__IC__DOT__set_counter,4,0);
    VL_SIG8(__Vdly__IC__DOT__data_en,0,0);
    VL_SIG8(__Vdly__icache_bus_req,0,0);
    VL_SIG8(__Vdlyvset__IC__DOT__data__DOT__mem__v0,0,0);
    VL_SIG8(__Vdlyvset__IC__DOT__tag__DOT__mem__v0,0,0);
    VL_SIG8(__Vdly__IC__DOT____Vcellout__state__readData,1,0);
    VL_SIG8(__Vdlyvval__IC__DOT__state__DOT__mem__v0,1,0);
    VL_SIG8(__Vdlyvset__IC__DOT__state__DOT__mem__v0,0,0);
    VL_SIG8(__Vdlyvset__IC__DOT__age__DOT__mem__v0,0,0);
    VL_SIG8(__Vdly__dcache_reqack,0,0);
    VL_SIG8(__Vdly__DC__DOT__set_counter,4,0);
    VL_SIG8(__Vdly__dcache_comp,0,0);
    VL_SIG8(__Vdlyvset__DC__DOT__data__DOT__mem__v0,0,0);
    VL_SIG8(__Vdlyvset__DC__DOT__data__DOT__mem__v1,0,0);
    VL_SIG8(__Vdlyvset__DC__DOT__data__DOT__mem__v2,0,0);
    VL_SIG8(__Vdlyvset__DC__DOT__data__DOT__mem__v3,0,0);
    VL_SIG8(__Vdlyvset__DC__DOT__data__DOT__mem__v4,0,0);
    VL_SIG8(__Vdlyvset__DC__DOT__data__DOT__mem__v5,0,0);
    VL_SIG8(__Vdlyvset__DC__DOT__data__DOT__mem__v6,0,0);
    VL_SIG8(__Vdlyvset__DC__DOT__data__DOT__mem__v7,0,0);
    VL_SIG8(__Vdlyvset__DC__DOT__data__DOT__mem__v8,0,0);
    VL_SIG8(__Vdlyvset__DC__DOT__data__DOT__mem__v9,0,0);
    VL_SIG8(__Vdlyvset__DC__DOT__data__DOT__mem__v10,0,0);
    VL_SIG8(__Vdlyvset__DC__DOT__data__DOT__mem__v11,0,0);
    VL_SIG8(__Vdlyvset__DC__DOT__data__DOT__mem__v12,0,0);
    VL_SIG8(__Vdlyvset__DC__DOT__data__DOT__mem__v13,0,0);
    VL_SIG8(__Vdlyvset__DC__DOT__data__DOT__mem__v14,0,0);
    VL_SIG8(__Vdlyvset__DC__DOT__data__DOT__mem__v15,0,0);
    VL_SIG8(__Vdlyvset__DC__DOT__tag__DOT__mem__v0,0,0);
    VL_SIG8(__Vdly__DC__DOT__state_r,1,0);
    VL_SIG8(__Vdlyvval__DC__DOT__state__DOT__mem__v0,1,0);
    VL_SIG8(__Vdlyvset__DC__DOT__state__DOT__mem__v0,0,0);
    VL_SIG8(__Vdlyvset__DC__DOT__age__DOT__mem__v0,0,0);
    VL_SIG8(__Vdly__alu_busy,0,0);
    VL_SIG8(__Vdly__alu_reqack,0,0);
    //char	__VpadToAlign82053[1];
    VL_SIG16(__Vdlyvdim0__regs__v517,9,0);
    VL_SIG16(__Vdlyvdim0__regs__v518,9,0);
    VL_SIG16(__Vdlyvdim0__regs__v519,9,0);
    VL_SIG16(__Vdlyvdim0__regs__v520,9,0);
    VL_SIG16(__Vdlyvdim0__regs__v521,9,0);
    VL_SIG16(__Vdlyvdim0__regs__v522,9,0);
    VL_SIG16(__Vdlyvdim0__regs__v523,9,0);
    VL_SIG16(__Vdlyvdim0__regs__v524,9,0);
    VL_SIG16(__Vdlyvdim0__regs__v525,9,0);
    VL_SIG16(__Vdlyvdim0__regs__v526,9,0);
    VL_SIG16(__Vdlyvdim0__regs__v527,9,0);
    VL_SIG16(__Vdlyvdim0__regs__v528,9,0);
    VL_SIG16(__Vdlyvdim0__regs__v529,9,0);
    VL_SIG16(__Vdlyvdim0__regs__v530,9,0);
    VL_SIG16(__Vdlyvdim0__regs__v531,9,0);
    VL_SIG16(__Vdlyvdim0__IC__DOT__data__DOT__mem__v0,8,0);
    VL_SIG16(__Vdlyvdim0__IC__DOT__tag__DOT__mem__v0,8,0);
    VL_SIG16(__Vdlyvdim0__IC__DOT__state__DOT__mem__v0,8,0);
    VL_SIG16(__Vdlyvdim0__IC__DOT__age__DOT__mem__v0,8,0);
    VL_SIG16(__Vdly__DC__DOT__data_en,15,0);
    VL_SIG16(__Vdlyvdim0__DC__DOT__data__DOT__mem__v0,8,0);
    VL_SIG16(__Vdlyvlsb__DC__DOT__data__DOT__mem__v0,8,0);
    VL_SIG16(__Vdlyvdim0__DC__DOT__data__DOT__mem__v1,8,0);
    VL_SIG16(__Vdlyvlsb__DC__DOT__data__DOT__mem__v1,8,0);
    VL_SIG16(__Vdlyvdim0__DC__DOT__data__DOT__mem__v2,8,0);
    VL_SIG16(__Vdlyvlsb__DC__DOT__data__DOT__mem__v2,8,0);
    VL_SIG16(__Vdlyvdim0__DC__DOT__data__DOT__mem__v3,8,0);
    VL_SIG16(__Vdlyvlsb__DC__DOT__data__DOT__mem__v3,8,0);
    VL_SIG16(__Vdlyvdim0__DC__DOT__data__DOT__mem__v4,8,0);
    VL_SIG16(__Vdlyvlsb__DC__DOT__data__DOT__mem__v4,8,0);
    VL_SIG16(__Vdlyvdim0__DC__DOT__data__DOT__mem__v5,8,0);
    VL_SIG16(__Vdlyvlsb__DC__DOT__data__DOT__mem__v5,8,0);
    VL_SIG16(__Vdlyvdim0__DC__DOT__data__DOT__mem__v6,8,0);
    VL_SIG16(__Vdlyvlsb__DC__DOT__data__DOT__mem__v6,8,0);
    VL_SIG16(__Vdlyvdim0__DC__DOT__data__DOT__mem__v7,8,0);
    VL_SIG16(__Vdlyvlsb__DC__DOT__data__DOT__mem__v7,8,0);
    VL_SIG16(__Vdlyvdim0__DC__DOT__data__DOT__mem__v8,8,0);
    VL_SIG16(__Vdlyvlsb__DC__DOT__data__DOT__mem__v8,8,0);
    VL_SIG16(__Vdlyvdim0__DC__DOT__data__DOT__mem__v9,8,0);
    VL_SIG16(__Vdlyvlsb__DC__DOT__data__DOT__mem__v9,8,0);
    VL_SIG16(__Vdlyvdim0__DC__DOT__data__DOT__mem__v10,8,0);
    VL_SIG16(__Vdlyvlsb__DC__DOT__data__DOT__mem__v10,8,0);
    VL_SIG16(__Vdlyvdim0__DC__DOT__data__DOT__mem__v11,8,0);
    VL_SIG16(__Vdlyvlsb__DC__DOT__data__DOT__mem__v11,8,0);
    VL_SIG16(__Vdlyvdim0__DC__DOT__data__DOT__mem__v12,8,0);
    VL_SIG16(__Vdlyvlsb__DC__DOT__data__DOT__mem__v12,8,0);
    VL_SIG16(__Vdlyvdim0__DC__DOT__data__DOT__mem__v13,8,0);
    VL_SIG16(__Vdlyvlsb__DC__DOT__data__DOT__mem__v13,8,0);
    VL_SIG16(__Vdlyvdim0__DC__DOT__data__DOT__mem__v14,8,0);
    VL_SIG16(__Vdlyvlsb__DC__DOT__data__DOT__mem__v14,8,0);
    VL_SIG16(__Vdlyvdim0__DC__DOT__data__DOT__mem__v15,8,0);
    VL_SIG16(__Vdlyvlsb__DC__DOT__data__DOT__mem__v15,8,0);
    VL_SIG16(__Vdlyvdim0__DC__DOT__tag__DOT__mem__v0,8,0);
    VL_SIG16(__Vdlyvdim0__DC__DOT__state__DOT__mem__v0,8,0);
    VL_SIG16(__Vdlyvdim0__DC__DOT__age__DOT__mem__v0,8,0);
    VL_SIG(__Vcellinp__decode__dec_inst,31,0);
    VL_SIG(__Vcellout__alu____pinNumber15,31,0);
    VL_SIG(__Vlvbound1,31,0);
    VL_SIG(__Vlvbound3,31,0);
    VL_SIG(__Vlvbound4,31,0);
    VL_SIG(__Vlvbound5,31,0);
    VL_SIG(__Vlvbound6,31,0);
    VL_SIG(__Vlvbound7,31,0);
    VL_SIG(__Vlvbound8,31,0);
    VL_SIG(__Vlvbound9,31,0);
    VL_SIG(__Vlvbound10,31,0);
    VL_SIG(__Vlvbound11,31,0);
    VL_SIG(__Vlvbound12,31,0);
    VL_SIG(__Vlvbound13,31,0);
    VL_SIG(__Vlvbound14,31,0);
    VL_SIG(__Vlvbound15,31,0);
    VL_SIG(__Vlvbound16,31,0);
    VL_SIG(__Vlvbound17,31,0);
    VL_SIG(__Vfunc_get_index__0__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__1__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__2__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__3__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__4__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__5__Vfuncout,31,0);
    VL_SIG(__Vfunc_reg_win__6__Vfuncout,31,0);
    VL_SIG(__Vfunc_reg_win__6__cwpt,31,0);
    VL_SIG(__Vfunc_reg_win__6__oregt,31,0);
    VL_SIG(__Vfunc_reg_win__7__Vfuncout,31,0);
    VL_SIG(__Vfunc_reg_win__7__cwpt,31,0);
    VL_SIG(__Vfunc_reg_win__7__oregt,31,0);
    VL_SIG(__Vfunc_get_index__8__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__9__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__10__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__11__Vfuncout,31,0);
    VL_SIG(__Vfunc_reg_win__12__Vfuncout,31,0);
    VL_SIG(__Vfunc_reg_win__12__cwpt,31,0);
    VL_SIG(__Vfunc_reg_win__12__oregt,31,0);
    VL_SIG(__Vfunc_reg_win__13__Vfuncout,31,0);
    VL_SIG(__Vfunc_reg_win__13__cwpt,31,0);
    VL_SIG(__Vfunc_reg_win__13__oregt,31,0);
    VL_SIG(__Vfunc_get_index__14__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__15__Vfuncout,31,0);
    VL_SIG(__Vfunc_reg_win__16__Vfuncout,31,0);
    VL_SIG(__Vfunc_reg_win__16__cwpt,31,0);
    VL_SIG(__Vfunc_reg_win__16__oregt,31,0);
    VL_SIG(__Vfunc_reg_win__17__Vfuncout,31,0);
    VL_SIG(__Vfunc_reg_win__17__cwpt,31,0);
    VL_SIG(__Vfunc_reg_win__17__oregt,31,0);
    VL_SIG(__Vfunc_get_index__18__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__19__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__20__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__21__Vfuncout,31,0);
    VL_SIG(__Vfunc_reg_win__22__Vfuncout,31,0);
    VL_SIG(__Vfunc_reg_win__22__cwpt,31,0);
    VL_SIG(__Vfunc_reg_win__22__oregt,31,0);
    VL_SIG(__Vfunc_reg_win__23__Vfuncout,31,0);
    VL_SIG(__Vfunc_reg_win__23__cwpt,31,0);
    VL_SIG(__Vfunc_reg_win__23__oregt,31,0);
    VL_SIG(__Vfunc_get_index__25__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__26__Vfuncout,31,0);
    VL_SIG(__Vfunc_syscall_cse502__27__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__28__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__29__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__30__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__31__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__32__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__33__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__34__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__35__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__36__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__37__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__38__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__39__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__40__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__41__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__42__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__43__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__44__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__45__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__46__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__47__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__48__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__49__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__50__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__51__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__52__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__53__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__54__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__55__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__56__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__57__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__58__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__59__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__60__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__61__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__62__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__63__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__64__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__65__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__66__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__67__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__68__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__69__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__70__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__71__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__72__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__73__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__74__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__75__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__76__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__77__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__78__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__79__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__80__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__81__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__82__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_index__83__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__result__84__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Shift__85__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Shift__86__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Shift__87__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__MultS__88__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__TagSUB__89__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__TagADD__90__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__TagSUB__91__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__TagADD__92__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Divide__93__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Divide__94__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Subtract__95__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Multiply__96__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Multiply__97__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Add__98__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Logical__99__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Logical__100__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Subtract__101__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Logical__102__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Logical__103__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Logical__104__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Add__105__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Divide__106__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Divide__107__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Subtract__108__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Multiply__109__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Multiply__110__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Add__111__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Logical__112__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Logical__113__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Logical__114__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Subtract__115__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Logical__116__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Logical__117__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Logical__118__Vfuncout,31,0);
    VL_SIG(__Vfunc_alu__DOT__Add__119__Vfuncout,31,0);
    VL_SIG(__Vdlyvval__regs__v517,31,0);
    VL_SIG(__Vdly__fetch_state,31,0);
    VL_SIG(__Vdly__word_counter,31,0);
    //char	__VpadToAlign82788[4];
    VL_SIGW(__Vdly__temp,511,0,16);
    VL_SIG(__Vdly__mem_state,31,0);
    VL_SIG(__Vdlyvval__regs__v518,31,0);
    VL_SIG(__Vdlyvval__regs__v519,31,0);
    VL_SIG(__Vdlyvval__regs__v520,31,0);
    VL_SIG(__Vdlyvval__regs__v521,31,0);
    VL_SIG(__Vdlyvval__regs__v522,31,0);
    VL_SIG(__Vdlyvval__regs__v523,31,0);
    VL_SIG(__Vdlyvval__regs__v524,31,0);
    VL_SIG(__Vdlyvval__regs__v525,31,0);
    VL_SIG(__Vdlyvval__regs__v526,31,0);
    VL_SIG(__Vdlyvval__regs__v527,31,0);
    VL_SIG(__Vdlyvval__regs__v528,31,0);
    VL_SIG(__Vdlyvval__regs__v529,31,0);
    VL_SIG(__Vdlyvval__regs__v530,31,0);
    VL_SIG(__Vdlyvval__regs__v531,31,0);
    VL_SIG(__Vdly__IC__DOT__cache_state,31,0);
    VL_SIGW(__Vdly__IC__DOT__data_w,511,0,16);
    VL_SIGW(__Vdlyvval__IC__DOT__data__DOT__mem__v0,511,0,16);
    VL_SIG(__Vdlyvval__IC__DOT__age__DOT__mem__v0,31,0);
    VL_SIG(__Vdly__DC__DOT__cache_state,31,0);
    VL_SIGW(__Vdly__DC__DOT__data_w,511,0,16);
    VL_SIG(__Vdly__DC__DOT__counter,31,0);
    VL_SIG(__Vdlyvval__DC__DOT__data__DOT__mem__v0,31,0);
    VL_SIG(__Vdlyvval__DC__DOT__data__DOT__mem__v1,31,0);
    VL_SIG(__Vdlyvval__DC__DOT__data__DOT__mem__v2,31,0);
    VL_SIG(__Vdlyvval__DC__DOT__data__DOT__mem__v3,31,0);
    VL_SIG(__Vdlyvval__DC__DOT__data__DOT__mem__v4,31,0);
    VL_SIG(__Vdlyvval__DC__DOT__data__DOT__mem__v5,31,0);
    VL_SIG(__Vdlyvval__DC__DOT__data__DOT__mem__v6,31,0);
    VL_SIG(__Vdlyvval__DC__DOT__data__DOT__mem__v7,31,0);
    VL_SIG(__Vdlyvval__DC__DOT__data__DOT__mem__v8,31,0);
    VL_SIG(__Vdlyvval__DC__DOT__data__DOT__mem__v9,31,0);
    VL_SIG(__Vdlyvval__DC__DOT__data__DOT__mem__v10,31,0);
    VL_SIG(__Vdlyvval__DC__DOT__data__DOT__mem__v11,31,0);
    VL_SIG(__Vdlyvval__DC__DOT__data__DOT__mem__v12,31,0);
    VL_SIG(__Vdlyvval__DC__DOT__data__DOT__mem__v13,31,0);
    VL_SIG(__Vdlyvval__DC__DOT__data__DOT__mem__v14,31,0);
    VL_SIG(__Vdlyvval__DC__DOT__data__DOT__mem__v15,31,0);
    VL_SIG(__Vdlyvval__DC__DOT__age__DOT__mem__v0,31,0);
    VL_SIG(__Vdly__decode__DOT__decode_state,31,0);
    VL_SIG(__Vdly__alu__DOT__ALU_state,31,0);
    VL_SIG64(__Vcellout__DC__bus_req_addr,63,0);
    VL_SIG64(IC__DOT__tag__DOT____Vlvbound1,53,0);
    VL_SIG64(DC__DOT__tag__DOT____Vlvbound1,53,0);
    VL_SIG64(__Vdly__fetch_rip,63,0);
    VL_SIG64(__Vdly__decode_rip,63,0);
    VL_SIG64(__Vdly__icache_line_addr,57,0);
    VL_SIG64(__Vdly__new_fetch_rip,57,0);
    VL_SIG64(__Vdly__IC__DOT__tag_r,53,0);
    VL_SIG64(__Vdlyvval__IC__DOT__tag__DOT__mem__v0,53,0);
    VL_SIG64(__Vdly__DC__DOT__tag_r,53,0);
    VL_SIG64(__Vdlyvval__DC__DOT__tag__DOT__mem__v0,53,0);
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign83292[4];
    Vtop__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vtop_Core__B0& operator= (const Vtop_Core__B0&);	///< Copying not allowed
    Vtop_Core__B0(const Vtop_Core__B0&);	///< Copying not allowed
  public:
    Vtop_Core__B0(const char* name="TOP");
    ~Vtop_Core__B0();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    void	__Vdpiimwrap_syscall_cse502_TOP__v__core(IData g1, IData o0, IData o1, IData o2, IData o3, IData o4, IData o5, IData& syscall_cse502__Vfuncrtn);
    static void	_combo__TOP__v__core__13(Vtop__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__core__17(Vtop__Syms* __restrict vlSymsp);
    static void	_initial__TOP__v__core__1(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__core__10(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__core__11(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__core__12(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__core__15(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__core__16(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__core__19(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__core__4(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__core__5(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__core__6(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__core__7(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__core__8(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__core__9(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__core__14(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__core__18(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__core__2(Vtop__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
