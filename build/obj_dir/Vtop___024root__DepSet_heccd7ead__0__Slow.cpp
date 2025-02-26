// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/yuanhuayang/systolic-array/vsrc/top.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__u_output_buffer__DOT__load_full 
        = (1U & ((IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena) 
                 >> 7U));
    if (vlSelfRef.input_buffer_out_en) {
        vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__out 
            = (0xffU & vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[0U]);
        vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__out 
            = (0xffU & vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[0U]);
        vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__out 
            = (0xffU & vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[0U]);
        vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__out 
            = (0xffU & vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[0U]);
        vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__out 
            = (0xffU & vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[0U]);
        vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__out 
            = (0xffU & vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[0U]);
        vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__out 
            = (0xffU & vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[0U]);
        vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__out 
            = (0xffU & vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[0U]);
    } else {
        vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__out = 0U;
        vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__out = 0U;
        vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__out = 0U;
        vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__out = 0U;
        vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__out = 0U;
        vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__out = 0U;
        vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__out = 0U;
        vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__out = 0U;
    }
    if (vlSelfRef.weight_buffer_out_en) {
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__out 
            = (0xffU & (IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__DOT__mem));
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__out 
            = (0xffU & (IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__DOT__mem));
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__out 
            = (0xffU & (IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__DOT__mem));
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__out 
            = (0xffU & (IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__DOT__mem));
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__out 
            = (0xffU & (IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__DOT__mem));
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__out 
            = (0xffU & (IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__DOT__mem));
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__out 
            = (0xffU & (IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__DOT__mem));
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__out 
            = (0xffU & (IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__DOT__mem));
    } else {
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__out = 0U;
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__out = 0U;
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__out = 0U;
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__out = 0U;
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__out = 0U;
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__out = 0U;
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__out = 0U;
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__out = 0U;
    }
    vlSelfRef.out_res[0U] = ((((IData)(vlSelfRef.output_buffer_out_en)
                                ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[0U])
                                : 0U) << 0x10U) | ((IData)(vlSelfRef.output_buffer_out_en)
                                                    ? 
                                                   (0xffffU 
                                                    & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[0U])
                                                    : 0U));
    vlSelfRef.out_res[1U] = ((((IData)(vlSelfRef.output_buffer_out_en)
                                ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[0U])
                                : 0U) << 0x10U) | ((IData)(vlSelfRef.output_buffer_out_en)
                                                    ? 
                                                   (0xffffU 
                                                    & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[0U])
                                                    : 0U));
    vlSelfRef.out_res[2U] = ((((IData)(vlSelfRef.output_buffer_out_en)
                                ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[0U])
                                : 0U) << 0x10U) | ((IData)(vlSelfRef.output_buffer_out_en)
                                                    ? 
                                                   (0xffffU 
                                                    & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[0U])
                                                    : 0U));
    vlSelfRef.out_res[3U] = ((((IData)(vlSelfRef.output_buffer_out_en)
                                ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[0U])
                                : 0U) << 0x10U) | ((IData)(vlSelfRef.output_buffer_out_en)
                                                    ? 
                                                   (0xffffU 
                                                    & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[0U])
                                                    : 0U));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0U] 
        = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
            << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                      << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                       << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                   >> 0x20U));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[3U] 
        = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
            << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                      << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                       << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                   >> 0x20U));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[6U] 
        = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
            << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[7U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                      << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[8U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                       << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                   >> 0x20U));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[9U] 
        = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
            << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0xaU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                      << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0xbU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                       << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                   >> 0x20U));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0xcU] 
        = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
            << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0xdU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                      << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0xeU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                       << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                   >> 0x20U));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0xfU] 
        = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
            << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0x10U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                      << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0x11U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                       << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                   >> 0x20U));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0x12U] 
        = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
            << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0x13U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                      << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0x14U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                       << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                   >> 0x20U));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0x15U] 
        = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
            << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0x16U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                      << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0x17U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                       << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                   >> 0x20U));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0x18U] 
        = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
            << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0x19U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                      << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0x1aU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                       << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                   >> 0x20U));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0x1bU] 
        = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
            << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0x1cU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                      << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0x1dU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                       << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                   >> 0x20U));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0x1eU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                      << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum[0x1fU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                       << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                   >> 0x20U));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_weight[0U] 
        = (IData)((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 0x18U) | 
                                      ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 0x10U)) | 
                                     (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 8U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight)))))));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_weight[1U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                        << 0x18U) | 
                                       ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                        << 0x10U)) 
                                      | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                          << 8U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight)))))) 
                   >> 0x20U));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_weight[2U] 
        = (IData)((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 0x18U) | 
                                      ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 0x10U)) | 
                                     (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 8U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight)))))));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_weight[3U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                        << 0x18U) | 
                                       ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                        << 0x10U)) 
                                      | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                          << 8U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight)))))) 
                   >> 0x20U));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_weight[4U] 
        = (IData)((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 0x18U) | 
                                      ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 0x10U)) | 
                                     (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 8U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight)))))));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_weight[5U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                        << 0x18U) | 
                                       ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                        << 0x10U)) 
                                      | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                          << 8U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight)))))) 
                   >> 0x20U));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_weight[6U] 
        = (IData)((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 0x18U) | 
                                      ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 0x10U)) | 
                                     (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 8U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight)))))));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_weight[7U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                        << 0x18U) | 
                                       ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                        << 0x10U)) 
                                      | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                          << 8U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight)))))) 
                   >> 0x20U));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_weight[8U] 
        = (IData)((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 0x18U) | 
                                      ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 0x10U)) | 
                                     (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 8U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight)))))));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_weight[9U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                        << 0x18U) | 
                                       ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                        << 0x10U)) 
                                      | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                          << 8U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight)))))) 
                   >> 0x20U));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_weight[0xaU] 
        = (IData)((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 0x18U) | 
                                      ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 0x10U)) | 
                                     (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 8U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight)))))));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_weight[0xbU] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                        << 0x18U) | 
                                       ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                        << 0x10U)) 
                                      | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                          << 8U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight)))))) 
                   >> 0x20U));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_weight[0xcU] 
        = (IData)((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 0x18U) | 
                                      ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 0x10U)) | 
                                     (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 8U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight)))))));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_weight[0xdU] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                        << 0x18U) | 
                                       ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                        << 0x10U)) 
                                      | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                          << 8U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight)))))) 
                   >> 0x20U));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_weight[0xeU] 
        = (IData)((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 0x18U) | 
                                      ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 0x10U)) | 
                                     (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                       << 8U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight)))))));
    vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_weight[0xfU] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                        << 0x18U) | 
                                       ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                        << 0x10U)) 
                                      | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                          << 8U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight)))))) 
                   >> 0x20U));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->input_buffer_load_en = 0;
    vlSelf->input_buffer_out_en = 0;
    vlSelf->weight_buffer_load_en = 0;
    vlSelf->weight_buffer_out_en = 0;
    vlSelf->output_buffer_load_en = 0;
    vlSelf->output_buffer_out_en = 0;
    vlSelf->write_weight_en = 0;
    vlSelf->in_act = 0;
    vlSelf->in_weight = 0;
    VL_ZERO_RESET_W(128, vlSelf->out_res);
    vlSelf->top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__out = 0;
    vlSelf->top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__out = 0;
    vlSelf->top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__out = 0;
    vlSelf->top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__out = 0;
    vlSelf->top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__out = 0;
    vlSelf->top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__out = 0;
    vlSelf->top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__out = 0;
    vlSelf->top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__out = 0;
    VL_ZERO_RESET_W(120, vlSelf->top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem);
    VL_ZERO_RESET_W(120, vlSelf->top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem);
    VL_ZERO_RESET_W(120, vlSelf->top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem);
    VL_ZERO_RESET_W(120, vlSelf->top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem);
    VL_ZERO_RESET_W(120, vlSelf->top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem);
    VL_ZERO_RESET_W(120, vlSelf->top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem);
    VL_ZERO_RESET_W(120, vlSelf->top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem);
    VL_ZERO_RESET_W(120, vlSelf->top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem);
    VL_ZERO_RESET_W(1024, vlSelf->top__DOT__u_systolic_array__DOT__out_down_psum);
    VL_ZERO_RESET_W(512, vlSelf->top__DOT__u_systolic_array__DOT__out_down_weight);
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    vlSelf->top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__out = 0;
    vlSelf->top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__out = 0;
    vlSelf->top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__out = 0;
    vlSelf->top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__out = 0;
    vlSelf->top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__out = 0;
    vlSelf->top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__out = 0;
    vlSelf->top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__out = 0;
    vlSelf->top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__out = 0;
    vlSelf->top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__DOT__mem = 0;
    vlSelf->top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__DOT__mem = 0;
    vlSelf->top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__DOT__mem = 0;
    vlSelf->top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__DOT__mem = 0;
    vlSelf->top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__DOT__mem = 0;
    vlSelf->top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__DOT__mem = 0;
    vlSelf->top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__DOT__mem = 0;
    vlSelf->top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__DOT__mem = 0;
    vlSelf->top__DOT__u_output_buffer__DOT__load_ena = 0;
    vlSelf->top__DOT__u_output_buffer__DOT__load_full = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
