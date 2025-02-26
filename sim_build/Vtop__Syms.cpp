// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_top);
    __Vhier.remove(&__Vscope_top, &__Vscope_top__u_input_buffer);
    __Vhier.remove(&__Vscope_top__u_input_buffer, &__Vscope_top__u_input_buffer__input_fifo__BRA__0__KET____u_in_shft_reg);
    __Vhier.remove(&__Vscope_top__u_input_buffer, &__Vscope_top__u_input_buffer__input_fifo__BRA__1__KET____u_in_shft_reg);
    __Vhier.remove(&__Vscope_top__u_input_buffer, &__Vscope_top__u_input_buffer__input_fifo__BRA__2__KET____u_in_shft_reg);
    __Vhier.remove(&__Vscope_top__u_input_buffer, &__Vscope_top__u_input_buffer__input_fifo__BRA__3__KET____u_in_shft_reg);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(25);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top.configure(this, name(), "top", "top", "top", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_top__u_input_buffer.configure(this, name(), "top.u_input_buffer", "u_input_buffer", "input_buffer", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_top__u_input_buffer__input_fifo__BRA__0__KET____u_in_shft_reg.configure(this, name(), "top.u_input_buffer.input_fifo[0].u_in_shft_reg", "u_in_shft_reg", "input_shifter_register", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_top__u_input_buffer__input_fifo__BRA__1__KET____u_in_shft_reg.configure(this, name(), "top.u_input_buffer.input_fifo[1].u_in_shft_reg", "u_in_shft_reg", "input_shifter_register", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_top__u_input_buffer__input_fifo__BRA__2__KET____u_in_shft_reg.configure(this, name(), "top.u_input_buffer.input_fifo[2].u_in_shft_reg", "u_in_shft_reg", "input_shifter_register", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_top__u_input_buffer__input_fifo__BRA__3__KET____u_in_shft_reg.configure(this, name(), "top.u_input_buffer.input_fifo[3].u_in_shft_reg", "u_in_shft_reg", "input_shifter_register", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_top);
    __Vhier.add(&__Vscope_top, &__Vscope_top__u_input_buffer);
    __Vhier.add(&__Vscope_top__u_input_buffer, &__Vscope_top__u_input_buffer__input_fifo__BRA__0__KET____u_in_shft_reg);
    __Vhier.add(&__Vscope_top__u_input_buffer, &__Vscope_top__u_input_buffer__input_fifo__BRA__1__KET____u_in_shft_reg);
    __Vhier.add(&__Vscope_top__u_input_buffer, &__Vscope_top__u_input_buffer__input_fifo__BRA__2__KET____u_in_shft_reg);
    __Vhier.add(&__Vscope_top__u_input_buffer, &__Vscope_top__u_input_buffer__input_fifo__BRA__3__KET____u_in_shft_reg);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"in_act", &(TOP.in_act), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"input_buffer_load_en", &(TOP.input_buffer_load_en), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"input_buffer_out_en", &(TOP.input_buffer_out_en), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"out_act", &(TOP.out_act), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOP.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"clk", &(TOP.top__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"in_act", &(TOP.top__DOT__in_act), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top.varInsert(__Vfinal,"input_buffer_load_en", &(TOP.top__DOT__input_buffer_load_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"input_buffer_out_en", &(TOP.top__DOT__input_buffer_out_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top.varInsert(__Vfinal,"out_act", &(TOP.top__DOT__out_act), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top.varInsert(__Vfinal,"rst", &(TOP.top__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer.varInsert(__Vfinal,"clk", &(TOP.top__DOT__u_input_buffer__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer.varInsert(__Vfinal,"in_act", &(TOP.top__DOT__u_input_buffer__DOT__in_act), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__u_input_buffer.varInsert(__Vfinal,"load_en", &(TOP.top__DOT__u_input_buffer__DOT__load_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer.varInsert(__Vfinal,"out_act", &(TOP.top__DOT__u_input_buffer__DOT__out_act), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__u_input_buffer.varInsert(__Vfinal,"out_en", &(TOP.top__DOT__u_input_buffer__DOT__out_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer.varInsert(__Vfinal,"rst", &(TOP.top__DOT__u_input_buffer__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__0__KET____u_in_shft_reg.varInsert(__Vfinal,"DELAY_NUM", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__DELAY_NUM))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__0__KET____u_in_shft_reg.varInsert(__Vfinal,"clk", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__0__KET____u_in_shft_reg.varInsert(__Vfinal,"in", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__0__KET____u_in_shft_reg.varInsert(__Vfinal,"load_en", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__load_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__0__KET____u_in_shft_reg.varInsert(__Vfinal,"mem", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,55,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__0__KET____u_in_shft_reg.varInsert(__Vfinal,"out", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__0__KET____u_in_shft_reg.varInsert(__Vfinal,"out_en", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__out_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__0__KET____u_in_shft_reg.varInsert(__Vfinal,"rst", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__1__KET____u_in_shft_reg.varInsert(__Vfinal,"DELAY_NUM", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__DELAY_NUM))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__1__KET____u_in_shft_reg.varInsert(__Vfinal,"clk", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__1__KET____u_in_shft_reg.varInsert(__Vfinal,"in", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__1__KET____u_in_shft_reg.varInsert(__Vfinal,"load_en", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__load_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__1__KET____u_in_shft_reg.varInsert(__Vfinal,"mem", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,55,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__1__KET____u_in_shft_reg.varInsert(__Vfinal,"out", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__1__KET____u_in_shft_reg.varInsert(__Vfinal,"out_en", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__out_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__1__KET____u_in_shft_reg.varInsert(__Vfinal,"rst", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__2__KET____u_in_shft_reg.varInsert(__Vfinal,"DELAY_NUM", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__DELAY_NUM))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__2__KET____u_in_shft_reg.varInsert(__Vfinal,"clk", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__2__KET____u_in_shft_reg.varInsert(__Vfinal,"in", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__2__KET____u_in_shft_reg.varInsert(__Vfinal,"load_en", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__load_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__2__KET____u_in_shft_reg.varInsert(__Vfinal,"mem", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,55,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__2__KET____u_in_shft_reg.varInsert(__Vfinal,"out", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__2__KET____u_in_shft_reg.varInsert(__Vfinal,"out_en", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__out_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__2__KET____u_in_shft_reg.varInsert(__Vfinal,"rst", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__3__KET____u_in_shft_reg.varInsert(__Vfinal,"DELAY_NUM", const_cast<void*>(static_cast<const void*>(&(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__DELAY_NUM))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__3__KET____u_in_shft_reg.varInsert(__Vfinal,"clk", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__3__KET____u_in_shft_reg.varInsert(__Vfinal,"in", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__3__KET____u_in_shft_reg.varInsert(__Vfinal,"load_en", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__load_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__3__KET____u_in_shft_reg.varInsert(__Vfinal,"mem", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,55,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__3__KET____u_in_shft_reg.varInsert(__Vfinal,"out", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__3__KET____u_in_shft_reg.varInsert(__Vfinal,"out_en", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__out_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top__u_input_buffer__input_fifo__BRA__3__KET____u_in_shft_reg.varInsert(__Vfinal,"rst", &(TOP.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
