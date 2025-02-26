// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_output_buffer__DOT__load_ena;
    __Vdly__top__DOT__u_output_buffer__DOT__load_ena = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_31;
    VlWide<4>/*127:0*/ __Vtemp_43;
    VlWide<4>/*127:0*/ __Vtemp_55;
    VlWide<4>/*127:0*/ __Vtemp_65;
    VlWide<4>/*127:0*/ __Vtemp_77;
    VlWide<4>/*127:0*/ __Vtemp_97;
    VlWide<4>/*127:0*/ __Vtemp_110;
    VlWide<4>/*127:0*/ __Vtemp_123;
    VlWide<4>/*127:0*/ __Vtemp_136;
    VlWide<4>/*127:0*/ __Vtemp_149;
    VlWide<4>/*127:0*/ __Vtemp_162;
    VlWide<4>/*127:0*/ __Vtemp_175;
    VlWide<4>/*127:0*/ __Vtemp_188;
    // Body
    __Vdly__top__DOT__u_output_buffer__DOT__load_ena 
        = vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    if (vlSelfRef.rst) {
        __Vdly__top__DOT__u_output_buffer__DOT__load_ena = 1U;
        __Vtemp_1[1U] = 0U;
        __Vtemp_1[2U] = 0U;
        __Vtemp_1[3U] = 0U;
        vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[0U] = 0U;
        __Vtemp_10[1U] = 0U;
        __Vtemp_10[2U] = 0U;
        __Vtemp_10[3U] = 0U;
        vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[0U] = 0U;
        __Vtemp_19[1U] = 0U;
        __Vtemp_19[2U] = 0U;
        __Vtemp_19[3U] = 0U;
        vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[0U] = 0U;
        __Vtemp_31[1U] = 0U;
        __Vtemp_31[2U] = 0U;
        __Vtemp_31[3U] = 0U;
        vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[0U] = 0U;
        __Vtemp_43[1U] = 0U;
        __Vtemp_43[2U] = 0U;
        __Vtemp_43[3U] = 0U;
        vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[0U] = 0U;
        __Vtemp_55[1U] = 0U;
        __Vtemp_55[2U] = 0U;
        __Vtemp_55[3U] = 0U;
        vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[0U] = 0U;
        __Vtemp_65[1U] = 0U;
        __Vtemp_65[2U] = 0U;
        __Vtemp_65[3U] = 0U;
        vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[0U] = 0U;
        __Vtemp_77[1U] = 0U;
        __Vtemp_77[2U] = 0U;
        __Vtemp_77[3U] = 0U;
        vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[0U] = 0U;
        vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__DOT__mem = 0ULL;
        vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__DOT__mem = 0ULL;
        vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__DOT__mem = 0ULL;
        vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__DOT__mem = 0ULL;
        vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__DOT__mem = 0ULL;
        vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__DOT__mem = 0ULL;
        vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__DOT__mem = 0ULL;
        vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__DOT__mem = 0ULL;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight = 0U;
        __Vtemp_97[1U] = 0U;
        __Vtemp_97[2U] = 0U;
        __Vtemp_97[3U] = 0U;
        vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[0U] = 0U;
        __Vtemp_110[1U] = 0U;
        __Vtemp_110[2U] = 0U;
        __Vtemp_110[3U] = 0U;
        vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[0U] = 0U;
        __Vtemp_123[1U] = 0U;
        __Vtemp_123[2U] = 0U;
        __Vtemp_123[3U] = 0U;
        vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[0U] = 0U;
        __Vtemp_136[1U] = 0U;
        __Vtemp_136[2U] = 0U;
        __Vtemp_136[3U] = 0U;
        vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[0U] = 0U;
        __Vtemp_149[1U] = 0U;
        __Vtemp_149[2U] = 0U;
        __Vtemp_149[3U] = 0U;
        vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[0U] = 0U;
        __Vtemp_162[1U] = 0U;
        __Vtemp_162[2U] = 0U;
        __Vtemp_162[3U] = 0U;
        vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[0U] = 0U;
        __Vtemp_175[1U] = 0U;
        __Vtemp_175[2U] = 0U;
        __Vtemp_175[3U] = 0U;
        vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[0U] = 0U;
        __Vtemp_188[1U] = 0U;
        __Vtemp_188[2U] = 0U;
        __Vtemp_188[3U] = 0U;
        vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[0U] = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
    } else {
        __Vdly__top__DOT__u_output_buffer__DOT__load_ena 
            = (((IData)(vlSelfRef.output_buffer_load_en) 
                & (~ (IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_full)))
                ? (1U | (0xfeU & ((IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena) 
                                  << 1U))) : (0xfeU 
                                              & ((IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena) 
                                                 << 1U)));
        if (vlSelfRef.input_buffer_load_en) {
            __Vtemp_1[1U] = (((IData)((QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelfRef.in_act))))) 
                              << 0x18U) | (IData)((
                                                   (0xffffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[1U])) 
                                                        << 0x18U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[0U])) 
                                                          >> 8U))) 
                                                   >> 0x20U)));
            __Vtemp_1[2U] = (((IData)((QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelfRef.in_act))))) 
                              >> 8U) | ((IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelfRef.in_act)))) 
                                                 >> 0x20U)) 
                                        << 0x18U));
            __Vtemp_1[3U] = ((IData)(((QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelfRef.in_act)))) 
                                      >> 0x20U)) >> 8U);
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = (IData)((0xffffffffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[1U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[0U])) 
                                                     >> 8U))));
            __Vtemp_10[1U] = (IData)(((((QData)((IData)(
                                                        vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[2U])) 
                                        << 0x38U) | 
                                       (((QData)((IData)(
                                                         vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[1U])) 
                                         << 0x18U) 
                                        | ((QData)((IData)(
                                                           vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[0U])) 
                                           >> 8U))) 
                                      >> 0x20U));
            __Vtemp_10[2U] = (IData)((QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelfRef.in_act 
                                                                 >> 8U))))));
            __Vtemp_10[3U] = (IData)(((QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSelfRef.in_act 
                                                                  >> 8U))))) 
                                      >> 0x20U));
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = (IData)((((QData)((IData)(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[2U])) 
                            << 0x38U) | (((QData)((IData)(
                                                          vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[1U])) 
                                          << 0x18U) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[0U])) 
                                            >> 8U))));
            __Vtemp_19[1U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                                            >> 8U));
            __Vtemp_19[2U] = (((IData)((QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelfRef.in_act 
                                                                   >> 0x10U)))))) 
                               << 8U) | (0xffU & (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                                                  >> 8U)));
            __Vtemp_19[3U] = (((IData)((QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelfRef.in_act 
                                                                   >> 0x10U)))))) 
                               >> 0x18U) | ((IData)(
                                                    ((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelfRef.in_act 
                                                                                >> 0x10U))))) 
                                                     >> 0x20U)) 
                                            << 8U));
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                    << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                                 >> 8U));
            __Vtemp_31[1U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                                            >> 8U));
            __Vtemp_31[2U] = (((IData)((QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelfRef.in_act 
                                                                   >> 0x18U)))))) 
                               << 0x10U) | (0xffffU 
                                            & (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                                               >> 8U)));
            __Vtemp_31[3U] = (((IData)((QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelfRef.in_act 
                                                                   >> 0x18U)))))) 
                               >> 0x10U) | ((IData)(
                                                    ((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelfRef.in_act 
                                                                                >> 0x18U))))) 
                                                     >> 0x20U)) 
                                            << 0x10U));
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                    << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                                 >> 8U));
            __Vtemp_43[1U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                                            >> 8U));
            __Vtemp_43[2U] = (((IData)((vlSelfRef.in_act 
                                        >> 0x20U)) 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                                            >> 8U));
            __Vtemp_43[3U] = 0U;
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                    << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                                 >> 8U));
            __Vtemp_55[1U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                                            >> 8U));
            __Vtemp_55[2U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                                            >> 8U));
            __Vtemp_55[3U] = (0xffU & (IData)((vlSelfRef.in_act 
                                               >> 0x28U)));
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                    << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                                 >> 8U));
            __Vtemp_65[1U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                                            >> 8U));
            __Vtemp_65[2U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                                            >> 8U));
            __Vtemp_65[3U] = ((0xff00U & ((IData)((vlSelfRef.in_act 
                                                   >> 0x30U)) 
                                          << 8U)) | 
                              (0xffU & (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                                        >> 8U)));
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                    << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                                 >> 8U));
            __Vtemp_77[1U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                                            >> 8U));
            __Vtemp_77[2U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                                            >> 8U));
            __Vtemp_77[3U] = ((0xff0000U & ((IData)(
                                                    (vlSelfRef.in_act 
                                                     >> 0x38U)) 
                                            << 0x10U)) 
                              | (0xffffU & (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                                            >> 8U)));
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                    << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                                 >> 8U));
        } else if (vlSelfRef.input_buffer_out_en) {
            __Vtemp_1[1U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                              << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                                           >> 8U));
            __Vtemp_1[2U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                              << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                                           >> 8U));
            __Vtemp_1[3U] = (0xffffU & (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                                        >> 8U));
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                    << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                                 >> 8U));
            __Vtemp_10[1U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                                            >> 8U));
            __Vtemp_10[2U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                                            >> 8U));
            __Vtemp_10[3U] = (0xffffU & (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                                         >> 8U));
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                    << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                                 >> 8U));
            __Vtemp_19[1U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                                            >> 8U));
            __Vtemp_19[2U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                                            >> 8U));
            __Vtemp_19[3U] = (0xffffU & (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                                         >> 8U));
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                    << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                                 >> 8U));
            __Vtemp_31[1U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                                            >> 8U));
            __Vtemp_31[2U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                                            >> 8U));
            __Vtemp_31[3U] = (0xffffU & (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                                         >> 8U));
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                    << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                                 >> 8U));
            __Vtemp_43[1U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                                            >> 8U));
            __Vtemp_43[2U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                                            >> 8U));
            __Vtemp_43[3U] = (0xffffU & (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                                         >> 8U));
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                    << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                                 >> 8U));
            __Vtemp_55[1U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                                            >> 8U));
            __Vtemp_55[2U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                                            >> 8U));
            __Vtemp_55[3U] = (0xffffU & (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                                         >> 8U));
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                    << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                                 >> 8U));
            __Vtemp_65[1U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                                            >> 8U));
            __Vtemp_65[2U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                                            >> 8U));
            __Vtemp_65[3U] = (0xffffU & (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                                         >> 8U));
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                    << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                                 >> 8U));
            __Vtemp_77[1U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                                            >> 8U));
            __Vtemp_77[2U] = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                               << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
                                            >> 8U));
            __Vtemp_77[3U] = (0xffffU & (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
                                         >> 8U));
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
                    << 0x18U) | (vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                                 >> 8U));
        } else {
            __Vtemp_1[1U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[1U];
            __Vtemp_1[2U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[2U];
            __Vtemp_1[3U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[3U];
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[0U];
            __Vtemp_10[1U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[1U];
            __Vtemp_10[2U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[2U];
            __Vtemp_10[3U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[3U];
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[0U];
            __Vtemp_19[1U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[1U];
            __Vtemp_19[2U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[2U];
            __Vtemp_19[3U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[3U];
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[0U];
            __Vtemp_31[1U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[1U];
            __Vtemp_31[2U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[2U];
            __Vtemp_31[3U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[3U];
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[0U];
            __Vtemp_43[1U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[1U];
            __Vtemp_43[2U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[2U];
            __Vtemp_43[3U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[3U];
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[0U];
            __Vtemp_55[1U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[1U];
            __Vtemp_55[2U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[2U];
            __Vtemp_55[3U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[3U];
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[0U];
            __Vtemp_65[1U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[1U];
            __Vtemp_65[2U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[2U];
            __Vtemp_65[3U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[3U];
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[0U];
            __Vtemp_77[1U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[1U];
            __Vtemp_77[2U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[2U];
            __Vtemp_77[3U] = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[3U];
            vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[0U] 
                = vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[0U];
        }
        if (vlSelfRef.weight_buffer_load_en) {
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__DOT__mem 
                = ((vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__DOT__mem 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (IData)(vlSelfRef.in_weight)))));
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__DOT__mem 
                = ((vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__DOT__mem 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (IData)(
                                                        (vlSelfRef.in_weight 
                                                         >> 8U))))));
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__DOT__mem 
                = ((vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__DOT__mem 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (IData)(
                                                        (vlSelfRef.in_weight 
                                                         >> 0x10U))))));
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__DOT__mem 
                = ((vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__DOT__mem 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (IData)(
                                                        (vlSelfRef.in_weight 
                                                         >> 0x18U))))));
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__DOT__mem 
                = ((vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__DOT__mem 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (IData)(
                                                        (vlSelfRef.in_weight 
                                                         >> 0x20U))))));
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__DOT__mem 
                = ((vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__DOT__mem 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (IData)(
                                                        (vlSelfRef.in_weight 
                                                         >> 0x28U))))));
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__DOT__mem 
                = ((vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__DOT__mem 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (IData)(
                                                        (vlSelfRef.in_weight 
                                                         >> 0x30U))))));
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__DOT__mem 
                = ((vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__DOT__mem 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (IData)(
                                                        (vlSelfRef.in_weight 
                                                         >> 0x38U))))));
        } else if (vlSelfRef.weight_buffer_out_en) {
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__DOT__mem 
                = (vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__DOT__mem 
                   >> 8U);
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__DOT__mem 
                = (vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__DOT__mem 
                   >> 8U);
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__DOT__mem 
                = (vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__DOT__mem 
                   >> 8U);
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__DOT__mem 
                = (vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__DOT__mem 
                   >> 8U);
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__DOT__mem 
                = (vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__DOT__mem 
                   >> 8U);
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__DOT__mem 
                = (vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__DOT__mem 
                   >> 8U);
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__DOT__mem 
                = (vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__DOT__mem 
                   >> 8U);
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__DOT__mem 
                = (vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__DOT__mem 
                   >> 8U);
        } else {
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__DOT__mem 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__DOT__mem;
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__DOT__mem 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__DOT__mem;
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__DOT__mem 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__DOT__mem;
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__DOT__mem 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__DOT__mem;
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__DOT__mem 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__DOT__mem;
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__DOT__mem 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__DOT__mem;
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__DOT__mem 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__DOT__mem;
            vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__DOT__mem 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__DOT__mem;
        }
        if ((1U & (IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena))) {
            __Vtemp_97[1U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[2U] 
                               << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[1U] 
                                            >> 0x10U));
            __Vtemp_97[2U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[3U] 
                               << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                            >> 0x10U));
            __Vtemp_97[3U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                               << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                            >> 0x10U));
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[1U] 
                    << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[0U] 
                                 >> 0x10U));
        } else if (vlSelfRef.output_buffer_out_en) {
            __Vtemp_97[1U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[2U] 
                               << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[1U] 
                                            >> 0x10U));
            __Vtemp_97[2U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[3U] 
                               << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                            >> 0x10U));
            __Vtemp_97[3U] = (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[3U] 
                              >> 0x10U);
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[1U] 
                    << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[0U] 
                                 >> 0x10U));
        } else {
            __Vtemp_97[1U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[1U];
            __Vtemp_97[2U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[2U];
            __Vtemp_97[3U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[3U];
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[0U];
        }
        if ((2U & (IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena))) {
            __Vtemp_110[1U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[1U] 
                                             >> 0x10U));
            __Vtemp_110[2U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                             >> 0x10U));
            __Vtemp_110[3U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                             >> 0x10U));
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[1U] 
                    << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[0U] 
                                 >> 0x10U));
        } else if (vlSelfRef.output_buffer_out_en) {
            __Vtemp_110[1U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[1U] 
                                             >> 0x10U));
            __Vtemp_110[2U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                             >> 0x10U));
            __Vtemp_110[3U] = (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[3U] 
                               >> 0x10U);
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[1U] 
                    << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[0U] 
                                 >> 0x10U));
        } else {
            __Vtemp_110[1U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[1U];
            __Vtemp_110[2U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[2U];
            __Vtemp_110[3U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[3U];
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[0U];
        }
        if ((4U & (IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena))) {
            __Vtemp_123[1U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[1U] 
                                             >> 0x10U));
            __Vtemp_123[2U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                             >> 0x10U));
            __Vtemp_123[3U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                             >> 0x10U));
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[1U] 
                    << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[0U] 
                                 >> 0x10U));
        } else if (vlSelfRef.output_buffer_out_en) {
            __Vtemp_123[1U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[1U] 
                                             >> 0x10U));
            __Vtemp_123[2U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                             >> 0x10U));
            __Vtemp_123[3U] = (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[3U] 
                               >> 0x10U);
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[1U] 
                    << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[0U] 
                                 >> 0x10U));
        } else {
            __Vtemp_123[1U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[1U];
            __Vtemp_123[2U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[2U];
            __Vtemp_123[3U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[3U];
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[0U];
        }
        if ((8U & (IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena))) {
            __Vtemp_136[1U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[1U] 
                                             >> 0x10U));
            __Vtemp_136[2U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                             >> 0x10U));
            __Vtemp_136[3U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                             >> 0x10U));
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[1U] 
                    << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[0U] 
                                 >> 0x10U));
        } else if (vlSelfRef.output_buffer_out_en) {
            __Vtemp_136[1U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[1U] 
                                             >> 0x10U));
            __Vtemp_136[2U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                             >> 0x10U));
            __Vtemp_136[3U] = (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[3U] 
                               >> 0x10U);
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[1U] 
                    << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[0U] 
                                 >> 0x10U));
        } else {
            __Vtemp_136[1U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[1U];
            __Vtemp_136[2U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[2U];
            __Vtemp_136[3U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[3U];
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[0U];
        }
        if ((0x10U & (IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena))) {
            __Vtemp_149[1U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[1U] 
                                             >> 0x10U));
            __Vtemp_149[2U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                             >> 0x10U));
            __Vtemp_149[3U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                             >> 0x10U));
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[1U] 
                    << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[0U] 
                                 >> 0x10U));
        } else if (vlSelfRef.output_buffer_out_en) {
            __Vtemp_149[1U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[1U] 
                                             >> 0x10U));
            __Vtemp_149[2U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                             >> 0x10U));
            __Vtemp_149[3U] = (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[3U] 
                               >> 0x10U);
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[1U] 
                    << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[0U] 
                                 >> 0x10U));
        } else {
            __Vtemp_149[1U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[1U];
            __Vtemp_149[2U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[2U];
            __Vtemp_149[3U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[3U];
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[0U];
        }
        if ((0x20U & (IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena))) {
            __Vtemp_162[1U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[1U] 
                                             >> 0x10U));
            __Vtemp_162[2U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                             >> 0x10U));
            __Vtemp_162[3U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                             >> 0x10U));
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[1U] 
                    << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[0U] 
                                 >> 0x10U));
        } else if (vlSelfRef.output_buffer_out_en) {
            __Vtemp_162[1U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[1U] 
                                             >> 0x10U));
            __Vtemp_162[2U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                             >> 0x10U));
            __Vtemp_162[3U] = (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[3U] 
                               >> 0x10U);
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[1U] 
                    << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[0U] 
                                 >> 0x10U));
        } else {
            __Vtemp_162[1U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[1U];
            __Vtemp_162[2U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[2U];
            __Vtemp_162[3U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[3U];
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[0U];
        }
        if ((0x40U & (IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena))) {
            __Vtemp_175[1U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[1U] 
                                             >> 0x10U));
            __Vtemp_175[2U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                             >> 0x10U));
            __Vtemp_175[3U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                             >> 0x10U));
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[1U] 
                    << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[0U] 
                                 >> 0x10U));
        } else if (vlSelfRef.output_buffer_out_en) {
            __Vtemp_175[1U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[1U] 
                                             >> 0x10U));
            __Vtemp_175[2U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                             >> 0x10U));
            __Vtemp_175[3U] = (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[3U] 
                               >> 0x10U);
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[1U] 
                    << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[0U] 
                                 >> 0x10U));
        } else {
            __Vtemp_175[1U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[1U];
            __Vtemp_175[2U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[2U];
            __Vtemp_175[3U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[3U];
            vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[0U] 
                = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[0U];
        }
        if ((0x80U & (IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena))) {
            __Vtemp_188[1U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[1U] 
                                             >> 0x10U));
            __Vtemp_188[2U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                             >> 0x10U));
            __Vtemp_188[3U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                             >> 0x10U));
        } else if (vlSelfRef.output_buffer_out_en) {
            __Vtemp_188[1U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[1U] 
                                             >> 0x10U));
            __Vtemp_188[2U] = ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[3U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[2U] 
                                             >> 0x10U));
            __Vtemp_188[3U] = (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[3U] 
                               >> 0x10U);
        } else {
            __Vtemp_188[1U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[1U];
            __Vtemp_188[2U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[2U];
            __Vtemp_188[3U] = vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[3U];
        }
        if (vlSelfRef.write_weight_en) {
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__out;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__out;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__out;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__out;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__out;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__out;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__out;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__out;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__out;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__out;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__out;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__out;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__out;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__out;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__out;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight 
                = vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__out;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act = 0U;
        } else {
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__out))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__out))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__out))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__out))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__out))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__out))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__out))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                              + ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                                 * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act))));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight = 0U;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                              * (IData)(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__out)));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                              * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act)));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                              * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act)));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                              * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act)));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                              * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act)));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                              * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act)));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                              * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act)));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__out;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight) 
                              * (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act)));
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__out;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__out;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__out;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__out;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__out;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__out;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act;
            vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act 
                = vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__out;
        }
        vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[0U] 
            = ((0x80U & (IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena))
                ? ((vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[1U] 
                    << 0x10U) | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[0U] 
                                 >> 0x10U)) : ((IData)(vlSelfRef.output_buffer_out_en)
                                                ? (
                                                   (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[1U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[0U] 
                                                      >> 0x10U))
                                                : vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[0U]));
    }
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
        = __Vtemp_1[2U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
        = __Vtemp_1[3U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
        = __Vtemp_10[1U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
        = __Vtemp_10[2U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
        = __Vtemp_10[3U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
        = __Vtemp_19[1U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
        = __Vtemp_19[2U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
        = __Vtemp_19[3U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
        = __Vtemp_31[1U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
        = __Vtemp_31[2U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
        = __Vtemp_31[3U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
        = __Vtemp_43[1U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
        = __Vtemp_43[2U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
        = __Vtemp_43[3U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
        = __Vtemp_55[1U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
        = __Vtemp_55[2U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
        = __Vtemp_55[3U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
        = __Vtemp_65[1U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
        = __Vtemp_65[2U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
        = __Vtemp_65[3U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[1U] 
        = __Vtemp_77[1U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[2U] 
        = __Vtemp_77[2U];
    vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem[3U] 
        = __Vtemp_77[3U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[1U] 
        = __Vtemp_97[1U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[2U] 
        = __Vtemp_97[2U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[3U] 
        = __Vtemp_97[3U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[1U] 
        = __Vtemp_110[1U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[2U] 
        = __Vtemp_110[2U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[3U] 
        = __Vtemp_110[3U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[1U] 
        = __Vtemp_123[1U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[2U] 
        = __Vtemp_123[2U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[3U] 
        = __Vtemp_123[3U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[1U] 
        = __Vtemp_136[1U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[2U] 
        = __Vtemp_136[2U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[3U] 
        = __Vtemp_136[3U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[1U] 
        = __Vtemp_149[1U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[2U] 
        = __Vtemp_149[2U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[3U] 
        = __Vtemp_149[3U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[1U] 
        = __Vtemp_162[1U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[2U] 
        = __Vtemp_162[2U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[3U] 
        = __Vtemp_162[3U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[1U] 
        = __Vtemp_175[1U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[2U] 
        = __Vtemp_175[2U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[3U] 
        = __Vtemp_175[3U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[1U] 
        = __Vtemp_188[1U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[2U] 
        = __Vtemp_188[2U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[3U] 
        = __Vtemp_188[3U];
    vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena 
        = __Vdly__top__DOT__u_output_buffer__DOT__load_ena;
    vlSelfRef.top__DOT__u_output_buffer__DOT__load_full 
        = (1U & ((IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena) 
                 >> 7U));
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
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    if (vlSelfRef.weight_buffer_out_en) {
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__out 
            = (0xffU & (IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__DOT__mem));
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__out 
            = (0xffU & (IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__DOT__mem));
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__out 
            = (0xffU & (IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__DOT__mem));
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__out 
            = (0xffU & (IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__DOT__mem));
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__out 
            = (0xffU & (IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__DOT__mem));
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__out 
            = (0xffU & (IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__DOT__mem));
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__out 
            = (0xffU & (IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__DOT__mem));
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__out 
            = (0xffU & (IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__DOT__mem));
    } else {
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__out = 0U;
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__out = 0U;
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__out = 0U;
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__out = 0U;
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__out = 0U;
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__out = 0U;
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__out = 0U;
        vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__out = 0U;
    }
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
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
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
    vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight 
        = __Vdly__top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight;
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
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/yuanhuayang/systolic-array/vsrc/top.v", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/yuanhuayang/systolic-array/vsrc/top.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/yuanhuayang/systolic-array/vsrc/top.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelfRef.input_buffer_load_en 
                     & 0xfeU))) {
        Verilated::overWidthError("input_buffer_load_en");}
    if (VL_UNLIKELY((vlSelfRef.input_buffer_out_en 
                     & 0xfeU))) {
        Verilated::overWidthError("input_buffer_out_en");}
    if (VL_UNLIKELY((vlSelfRef.weight_buffer_load_en 
                     & 0xfeU))) {
        Verilated::overWidthError("weight_buffer_load_en");}
    if (VL_UNLIKELY((vlSelfRef.weight_buffer_out_en 
                     & 0xfeU))) {
        Verilated::overWidthError("weight_buffer_out_en");}
    if (VL_UNLIKELY((vlSelfRef.output_buffer_load_en 
                     & 0xfeU))) {
        Verilated::overWidthError("output_buffer_load_en");}
    if (VL_UNLIKELY((vlSelfRef.output_buffer_out_en 
                     & 0xfeU))) {
        Verilated::overWidthError("output_buffer_out_en");}
    if (VL_UNLIKELY((vlSelfRef.write_weight_en & 0xfeU))) {
        Verilated::overWidthError("write_weight_en");}
}
#endif  // VL_DEBUG
