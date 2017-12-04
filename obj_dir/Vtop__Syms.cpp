// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop_top.h"
#include "Vtop___024unit.h"
#include "Vtop_Core__B0.h"
#include "Vtop_arbiter__B1000.h"
#include "Vtop_Sysbus__Td.h"

// FUNCTIONS
Vtop__Syms::Vtop__Syms(Vtop* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP____024unit                 (Verilated::catName(topp->name(),"$unit"))
	, TOP__v                         (Verilated::catName(topp->name(),"v"))
	, TOP__v__core                   (Verilated::catName(topp->name(),"v.core"))
	, TOP__v__core__Arbiter          (Verilated::catName(topp->name(),"v.core.Arbiter"))
	, TOP__v__uncore_bus             (Verilated::catName(topp->name(),"v.uncore_bus"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT____024unit          = &TOP____024unit;
    TOPp->__PVT__v                  = &TOP__v;
    TOPp->__PVT__v->__PVT__core     = &TOP__v__core;
    TOPp->__PVT__v->__PVT__core->__PVT__Arbiter  = &TOP__v__core__Arbiter;
    TOPp->__PVT__v->__PVT__uncore_bus  = &TOP__v__uncore_bus;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP____024unit.__Vconfigure(this, true);
    TOP__v.__Vconfigure(this, true);
    TOP__v__core.__Vconfigure(this, true);
    TOP__v__core__Arbiter.__Vconfigure(this, true);
    TOP__v__uncore_bus.__Vconfigure(this, true);
    // Setup scope names
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
