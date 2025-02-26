// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst));
    bufp->chgBit(oldp+2,(vlSelfRef.input_buffer_load_en));
    bufp->chgBit(oldp+3,(vlSelfRef.input_buffer_out_en));
    bufp->chgIData(oldp+4,(vlSelfRef.in_act),32);
    bufp->chgIData(oldp+5,(vlSelfRef.out_act),32);
    bufp->chgBit(oldp+6,(vlSelfRef.top__DOT__clk));
    bufp->chgBit(oldp+7,(vlSelfRef.top__DOT__rst));
    bufp->chgBit(oldp+8,(vlSelfRef.top__DOT__input_buffer_load_en));
    bufp->chgBit(oldp+9,(vlSelfRef.top__DOT__input_buffer_out_en));
    bufp->chgIData(oldp+10,(vlSelfRef.top__DOT__in_act),32);
    bufp->chgIData(oldp+11,(vlSelfRef.top__DOT__out_act),32);
    bufp->chgBit(oldp+12,(vlSelfRef.top__DOT__u_input_buffer__DOT__clk));
    bufp->chgBit(oldp+13,(vlSelfRef.top__DOT__u_input_buffer__DOT__rst));
    bufp->chgBit(oldp+14,(vlSelfRef.top__DOT__u_input_buffer__DOT__load_en));
    bufp->chgBit(oldp+15,(vlSelfRef.top__DOT__u_input_buffer__DOT__out_en));
    bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__u_input_buffer__DOT__in_act),32);
    bufp->chgIData(oldp+17,(vlSelfRef.top__DOT__u_input_buffer__DOT__out_act),32);
    bufp->chgBit(oldp+18,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__clk));
    bufp->chgBit(oldp+19,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__rst));
    bufp->chgBit(oldp+20,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__load_en));
    bufp->chgBit(oldp+21,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__out_en));
    bufp->chgCData(oldp+22,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__in),8);
    bufp->chgCData(oldp+23,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__out),8);
    bufp->chgQData(oldp+24,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem),56);
    bufp->chgBit(oldp+26,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__clk));
    bufp->chgBit(oldp+27,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__rst));
    bufp->chgBit(oldp+28,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__load_en));
    bufp->chgBit(oldp+29,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__out_en));
    bufp->chgCData(oldp+30,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__in),8);
    bufp->chgCData(oldp+31,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__out),8);
    bufp->chgQData(oldp+32,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem),56);
    bufp->chgBit(oldp+34,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__clk));
    bufp->chgBit(oldp+35,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__rst));
    bufp->chgBit(oldp+36,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__load_en));
    bufp->chgBit(oldp+37,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__out_en));
    bufp->chgCData(oldp+38,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__in),8);
    bufp->chgCData(oldp+39,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__out),8);
    bufp->chgQData(oldp+40,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem),56);
    bufp->chgBit(oldp+42,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__clk));
    bufp->chgBit(oldp+43,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__rst));
    bufp->chgBit(oldp+44,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__load_en));
    bufp->chgBit(oldp+45,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__out_en));
    bufp->chgCData(oldp+46,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__in),8);
    bufp->chgCData(oldp+47,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__out),8);
    bufp->chgQData(oldp+48,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem),56);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
