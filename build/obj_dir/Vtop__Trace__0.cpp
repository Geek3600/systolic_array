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
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_16;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgQData(oldp+0,((((QData)((IData)(((
                                                   ((IData)(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__out) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__out) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__out) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__out))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((IData)(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__out) 
                                                                << 0x18U) 
                                                               | ((IData)(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__out) 
                                                                  << 0x10U)) 
                                                              | (((IData)(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__out) 
                                                                  << 8U) 
                                                                 | (IData)(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__out))))))),64);
        bufp->chgQData(oldp+2,((((QData)((IData)(((
                                                   ((IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__out) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__out) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__out) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__out))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__out) 
                                                                << 0x18U) 
                                                               | ((IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__out) 
                                                                  << 0x10U)) 
                                                              | (((IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__out) 
                                                                  << 8U) 
                                                                 | (IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__out))))))),64);
        bufp->chgCData(oldp+4,(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__out),8);
        bufp->chgCData(oldp+5,(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__out),8);
        bufp->chgCData(oldp+6,(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__out),8);
        bufp->chgCData(oldp+7,(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__out),8);
        bufp->chgCData(oldp+8,(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__out),8);
        bufp->chgCData(oldp+9,(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__out),8);
        bufp->chgCData(oldp+10,(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__out),8);
        bufp->chgCData(oldp+11,(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__out),8);
        bufp->chgCData(oldp+12,(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__out),8);
        bufp->chgCData(oldp+13,(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__out),8);
        bufp->chgCData(oldp+14,(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__out),8);
        bufp->chgCData(oldp+15,(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__out),8);
        bufp->chgCData(oldp+16,(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__out),8);
        bufp->chgCData(oldp+17,(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__out),8);
        bufp->chgCData(oldp+18,(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__out),8);
        bufp->chgCData(oldp+19,(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__out),8);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        __Vtemp_2[0U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                          << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
        __Vtemp_2[1U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                          << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
        __Vtemp_2[2U] = (IData)((((QData)((IData)((
                                                   ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                                << 0x10U) 
                                                               | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
        __Vtemp_2[3U] = (IData)(((((QData)((IData)(
                                                   (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                                 << 0x10U) 
                                                                | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                                 >> 0x20U));
        bufp->chgWData(oldp+20,(__Vtemp_2),128);
        bufp->chgWData(oldp+24,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem),120);
        bufp->chgWData(oldp+28,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem),120);
        bufp->chgWData(oldp+32,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem),120);
        bufp->chgWData(oldp+36,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem),120);
        bufp->chgWData(oldp+40,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem),120);
        bufp->chgWData(oldp+44,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem),120);
        bufp->chgWData(oldp+48,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem),120);
        bufp->chgWData(oldp+52,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem),120);
        bufp->chgCData(oldp+56,(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena),8);
        bufp->chgBit(oldp+57,((1U & ((IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena) 
                                     >> 7U))));
        bufp->chgBit(oldp+58,((1U & (IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena))));
        bufp->chgSData(oldp+59,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgWData(oldp+60,(vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem),128);
        bufp->chgBit(oldp+64,((1U & ((IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena) 
                                     >> 1U))));
        bufp->chgSData(oldp+65,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgWData(oldp+66,(vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem),128);
        bufp->chgBit(oldp+70,((1U & ((IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena) 
                                     >> 2U))));
        bufp->chgSData(oldp+71,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgWData(oldp+72,(vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem),128);
        bufp->chgBit(oldp+76,((1U & ((IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena) 
                                     >> 3U))));
        bufp->chgSData(oldp+77,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgWData(oldp+78,(vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem),128);
        bufp->chgBit(oldp+82,((1U & ((IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena) 
                                     >> 4U))));
        bufp->chgSData(oldp+83,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgWData(oldp+84,(vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem),128);
        bufp->chgBit(oldp+88,((1U & ((IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena) 
                                     >> 5U))));
        bufp->chgSData(oldp+89,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgWData(oldp+90,(vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem),128);
        bufp->chgBit(oldp+94,((1U & ((IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena) 
                                     >> 6U))));
        bufp->chgSData(oldp+95,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgWData(oldp+96,(vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem),128);
        bufp->chgSData(oldp+100,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgWData(oldp+101,(vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem),128);
        bufp->chgWData(oldp+105,(vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum),1024);
        bufp->chgWData(oldp+137,(vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_weight),512);
        bufp->chgQData(oldp+153,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))))),64);
        __Vtemp_4[0U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                          << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
        __Vtemp_4[1U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                          << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
        __Vtemp_4[2U] = (IData)((((QData)((IData)((
                                                   ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                                << 0x10U) 
                                                               | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
        __Vtemp_4[3U] = (IData)(((((QData)((IData)(
                                                   (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                                 << 0x10U) 
                                                                | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                                 >> 0x20U));
        bufp->chgWData(oldp+155,(__Vtemp_4),128);
        bufp->chgQData(oldp+159,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act))))))),64);
        bufp->chgCData(oldp+161,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+162,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+163,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+164,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+165,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+166,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+167,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+168,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+169,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+170,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+171,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+172,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+173,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+174,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+175,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+176,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+177,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+178,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+179,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+180,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+181,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+182,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+183,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+184,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+185,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+186,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+187,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+188,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+189,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+190,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+191,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+192,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgQData(oldp+193,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))))),64);
        __Vtemp_6[0U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                          << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
        __Vtemp_6[1U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                          << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
        __Vtemp_6[2U] = (IData)((((QData)((IData)((
                                                   ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                                << 0x10U) 
                                                               | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
        __Vtemp_6[3U] = (IData)(((((QData)((IData)(
                                                   (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                                 << 0x10U) 
                                                                | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                                 >> 0x20U));
        bufp->chgWData(oldp+195,(__Vtemp_6),128);
        bufp->chgQData(oldp+199,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act))))))),64);
        bufp->chgCData(oldp+201,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+202,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+203,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+204,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+205,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+206,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+207,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+208,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+209,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+210,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+211,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+212,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+213,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+214,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+215,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+216,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+217,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+218,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+219,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+220,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+221,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+222,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+223,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+224,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+225,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+226,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+227,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+228,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+229,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+230,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+231,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+232,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgQData(oldp+233,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))))),64);
        __Vtemp_8[0U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                          << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
        __Vtemp_8[1U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                          << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
        __Vtemp_8[2U] = (IData)((((QData)((IData)((
                                                   ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                                << 0x10U) 
                                                               | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
        __Vtemp_8[3U] = (IData)(((((QData)((IData)(
                                                   (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                                 << 0x10U) 
                                                                | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                                 >> 0x20U));
        bufp->chgWData(oldp+235,(__Vtemp_8),128);
        bufp->chgQData(oldp+239,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act))))))),64);
        bufp->chgCData(oldp+241,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+242,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+243,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+244,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+245,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+246,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+247,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+248,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+249,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+250,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+251,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+252,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+253,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+254,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+255,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+256,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+257,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+258,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+259,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+260,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+261,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+262,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+263,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+264,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+265,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+266,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+267,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+268,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+269,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+270,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+271,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+272,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgQData(oldp+273,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))))),64);
        __Vtemp_10[0U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                           << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
        __Vtemp_10[1U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                           << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
        __Vtemp_10[2U] = (IData)((((QData)((IData)(
                                                   (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                                 << 0x10U) 
                                                                | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
        __Vtemp_10[3U] = (IData)(((((QData)((IData)(
                                                    (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                                  >> 0x20U));
        bufp->chgWData(oldp+275,(__Vtemp_10),128);
        bufp->chgQData(oldp+279,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act))))))),64);
        bufp->chgCData(oldp+281,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+282,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+283,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+284,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+285,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+286,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+287,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+288,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+289,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+290,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+291,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+292,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+293,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+294,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+295,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+296,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+297,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+298,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+299,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+300,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+301,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+302,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+303,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+304,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+305,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+306,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+307,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+308,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+309,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+310,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+311,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+312,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgQData(oldp+313,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))))),64);
        __Vtemp_12[0U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                           << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
        __Vtemp_12[1U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                           << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
        __Vtemp_12[2U] = (IData)((((QData)((IData)(
                                                   (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                                 << 0x10U) 
                                                                | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
        __Vtemp_12[3U] = (IData)(((((QData)((IData)(
                                                    (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                                  >> 0x20U));
        bufp->chgWData(oldp+315,(__Vtemp_12),128);
        bufp->chgQData(oldp+319,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act))))))),64);
        bufp->chgCData(oldp+321,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+322,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+323,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+324,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+325,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+326,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+327,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+328,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+329,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+330,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+331,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+332,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+333,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+334,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+335,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+336,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+337,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+338,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+339,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+340,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+341,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+342,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+343,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+344,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+345,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+346,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+347,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+348,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+349,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+350,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+351,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+352,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgQData(oldp+353,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))))),64);
        __Vtemp_14[0U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                           << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
        __Vtemp_14[1U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                           << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
        __Vtemp_14[2U] = (IData)((((QData)((IData)(
                                                   (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                                 << 0x10U) 
                                                                | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
        __Vtemp_14[3U] = (IData)(((((QData)((IData)(
                                                    (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                                  >> 0x20U));
        bufp->chgWData(oldp+355,(__Vtemp_14),128);
        bufp->chgQData(oldp+359,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act))))))),64);
        bufp->chgCData(oldp+361,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+362,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+363,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+364,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+365,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+366,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+367,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+368,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+369,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+370,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+371,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+372,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+373,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+374,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+375,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+376,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+377,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+378,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+379,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+380,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+381,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+382,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+383,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+384,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+385,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+386,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+387,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+388,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+389,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+390,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+391,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+392,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgQData(oldp+393,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))))),64);
        __Vtemp_16[0U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                           << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
        __Vtemp_16[1U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                           << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
        __Vtemp_16[2U] = (IData)((((QData)((IData)(
                                                   (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                                 << 0x10U) 
                                                                | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
        __Vtemp_16[3U] = (IData)(((((QData)((IData)(
                                                    (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                                  >> 0x20U));
        bufp->chgWData(oldp+395,(__Vtemp_16),128);
        bufp->chgQData(oldp+399,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act))))))),64);
        bufp->chgCData(oldp+401,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+402,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+403,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+404,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+405,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+406,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+407,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+408,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+409,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+410,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+411,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+412,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+413,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+414,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+415,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+416,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+417,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+418,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+419,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+420,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+421,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+422,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+423,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+424,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+425,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+426,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+427,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+428,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+429,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgSData(oldp+430,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
        bufp->chgCData(oldp+431,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+432,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgQData(oldp+433,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))))),64);
        bufp->chgQData(oldp+435,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act))))))),64);
        bufp->chgCData(oldp+437,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgCData(oldp+438,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+439,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+440,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgCData(oldp+441,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+442,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+443,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgCData(oldp+444,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+445,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+446,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgCData(oldp+447,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+448,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+449,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgCData(oldp+450,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+451,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+452,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgCData(oldp+453,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+454,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+455,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgCData(oldp+456,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+457,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgCData(oldp+458,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
        bufp->chgCData(oldp+459,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
        bufp->chgCData(oldp+460,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
        bufp->chgQData(oldp+461,(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__DOT__mem),64);
        bufp->chgQData(oldp+463,(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__DOT__mem),64);
        bufp->chgQData(oldp+465,(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__DOT__mem),64);
        bufp->chgQData(oldp+467,(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__DOT__mem),64);
        bufp->chgQData(oldp+469,(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__DOT__mem),64);
        bufp->chgQData(oldp+471,(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__DOT__mem),64);
        bufp->chgQData(oldp+473,(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__DOT__mem),64);
        bufp->chgQData(oldp+475,(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__DOT__mem),64);
    }
    bufp->chgBit(oldp+477,(vlSelfRef.clk));
    bufp->chgBit(oldp+478,(vlSelfRef.rst));
    bufp->chgBit(oldp+479,(vlSelfRef.input_buffer_load_en));
    bufp->chgBit(oldp+480,(vlSelfRef.input_buffer_out_en));
    bufp->chgBit(oldp+481,(vlSelfRef.weight_buffer_load_en));
    bufp->chgBit(oldp+482,(vlSelfRef.weight_buffer_out_en));
    bufp->chgBit(oldp+483,(vlSelfRef.output_buffer_load_en));
    bufp->chgBit(oldp+484,(vlSelfRef.output_buffer_out_en));
    bufp->chgBit(oldp+485,(vlSelfRef.write_weight_en));
    bufp->chgQData(oldp+486,(vlSelfRef.in_act),64);
    bufp->chgQData(oldp+488,(vlSelfRef.in_weight),64);
    bufp->chgWData(oldp+490,(vlSelfRef.out_res),128);
    bufp->chgCData(oldp+494,((0xffU & (IData)(vlSelfRef.in_act))),8);
    bufp->chgCData(oldp+495,((0xffU & (IData)((vlSelfRef.in_act 
                                               >> 8U)))),8);
    bufp->chgCData(oldp+496,((0xffU & (IData)((vlSelfRef.in_act 
                                               >> 0x10U)))),8);
    bufp->chgCData(oldp+497,((0xffU & (IData)((vlSelfRef.in_act 
                                               >> 0x18U)))),8);
    bufp->chgCData(oldp+498,((0xffU & (IData)((vlSelfRef.in_act 
                                               >> 0x20U)))),8);
    bufp->chgCData(oldp+499,((0xffU & (IData)((vlSelfRef.in_act 
                                               >> 0x28U)))),8);
    bufp->chgCData(oldp+500,((0xffU & (IData)((vlSelfRef.in_act 
                                               >> 0x30U)))),8);
    bufp->chgCData(oldp+501,((0xffU & (IData)((vlSelfRef.in_act 
                                               >> 0x38U)))),8);
    bufp->chgSData(oldp+502,(((IData)(vlSelfRef.output_buffer_out_en)
                               ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[0U])
                               : 0U)),16);
    bufp->chgSData(oldp+503,(((IData)(vlSelfRef.output_buffer_out_en)
                               ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[0U])
                               : 0U)),16);
    bufp->chgSData(oldp+504,(((IData)(vlSelfRef.output_buffer_out_en)
                               ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[0U])
                               : 0U)),16);
    bufp->chgSData(oldp+505,(((IData)(vlSelfRef.output_buffer_out_en)
                               ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[0U])
                               : 0U)),16);
    bufp->chgSData(oldp+506,(((IData)(vlSelfRef.output_buffer_out_en)
                               ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[0U])
                               : 0U)),16);
    bufp->chgSData(oldp+507,(((IData)(vlSelfRef.output_buffer_out_en)
                               ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[0U])
                               : 0U)),16);
    bufp->chgSData(oldp+508,(((IData)(vlSelfRef.output_buffer_out_en)
                               ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[0U])
                               : 0U)),16);
    bufp->chgSData(oldp+509,(((IData)(vlSelfRef.output_buffer_out_en)
                               ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[0U])
                               : 0U)),16);
    bufp->chgCData(oldp+510,((0xffU & (IData)(vlSelfRef.in_weight))),8);
    bufp->chgCData(oldp+511,((0xffU & (IData)((vlSelfRef.in_weight 
                                               >> 8U)))),8);
    bufp->chgCData(oldp+512,((0xffU & (IData)((vlSelfRef.in_weight 
                                               >> 0x10U)))),8);
    bufp->chgCData(oldp+513,((0xffU & (IData)((vlSelfRef.in_weight 
                                               >> 0x18U)))),8);
    bufp->chgCData(oldp+514,((0xffU & (IData)((vlSelfRef.in_weight 
                                               >> 0x20U)))),8);
    bufp->chgCData(oldp+515,((0xffU & (IData)((vlSelfRef.in_weight 
                                               >> 0x28U)))),8);
    bufp->chgCData(oldp+516,((0xffU & (IData)((vlSelfRef.in_weight 
                                               >> 0x30U)))),8);
    bufp->chgCData(oldp+517,((0xffU & (IData)((vlSelfRef.in_weight 
                                               >> 0x38U)))),8);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
