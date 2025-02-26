// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"input_buffer_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"input_buffer_out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"in_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"out_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"input_buffer_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"input_buffer_out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"in_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"out_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_input_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+13,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"in_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"out_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("input_fifo[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_in_shft_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"DELAY_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+25,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("input_fifo[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_in_shft_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+52,0,"DELAY_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+32,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+33,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("input_fifo[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_in_shft_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+53,0,"DELAY_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+41,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("input_fifo[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_in_shft_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+54,0,"DELAY_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+48,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+49,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+51,(0U),32);
    bufp->fullIData(oldp+52,(1U),32);
    bufp->fullIData(oldp+53,(2U),32);
    bufp->fullIData(oldp+54,(3U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rst));
    bufp->fullBit(oldp+3,(vlSelfRef.input_buffer_load_en));
    bufp->fullBit(oldp+4,(vlSelfRef.input_buffer_out_en));
    bufp->fullIData(oldp+5,(vlSelfRef.in_act),32);
    bufp->fullIData(oldp+6,(vlSelfRef.out_act),32);
    bufp->fullBit(oldp+7,(vlSelfRef.top__DOT__clk));
    bufp->fullBit(oldp+8,(vlSelfRef.top__DOT__rst));
    bufp->fullBit(oldp+9,(vlSelfRef.top__DOT__input_buffer_load_en));
    bufp->fullBit(oldp+10,(vlSelfRef.top__DOT__input_buffer_out_en));
    bufp->fullIData(oldp+11,(vlSelfRef.top__DOT__in_act),32);
    bufp->fullIData(oldp+12,(vlSelfRef.top__DOT__out_act),32);
    bufp->fullBit(oldp+13,(vlSelfRef.top__DOT__u_input_buffer__DOT__clk));
    bufp->fullBit(oldp+14,(vlSelfRef.top__DOT__u_input_buffer__DOT__rst));
    bufp->fullBit(oldp+15,(vlSelfRef.top__DOT__u_input_buffer__DOT__load_en));
    bufp->fullBit(oldp+16,(vlSelfRef.top__DOT__u_input_buffer__DOT__out_en));
    bufp->fullIData(oldp+17,(vlSelfRef.top__DOT__u_input_buffer__DOT__in_act),32);
    bufp->fullIData(oldp+18,(vlSelfRef.top__DOT__u_input_buffer__DOT__out_act),32);
    bufp->fullBit(oldp+19,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__clk));
    bufp->fullBit(oldp+20,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__rst));
    bufp->fullBit(oldp+21,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__load_en));
    bufp->fullBit(oldp+22,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__out_en));
    bufp->fullCData(oldp+23,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__in),8);
    bufp->fullCData(oldp+24,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__out),8);
    bufp->fullQData(oldp+25,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem),56);
    bufp->fullBit(oldp+27,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__clk));
    bufp->fullBit(oldp+28,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__rst));
    bufp->fullBit(oldp+29,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__load_en));
    bufp->fullBit(oldp+30,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__out_en));
    bufp->fullCData(oldp+31,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__in),8);
    bufp->fullCData(oldp+32,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__out),8);
    bufp->fullQData(oldp+33,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem),56);
    bufp->fullBit(oldp+35,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__clk));
    bufp->fullBit(oldp+36,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__rst));
    bufp->fullBit(oldp+37,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__load_en));
    bufp->fullBit(oldp+38,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__out_en));
    bufp->fullCData(oldp+39,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__in),8);
    bufp->fullCData(oldp+40,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__out),8);
    bufp->fullQData(oldp+41,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem),56);
    bufp->fullBit(oldp+43,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__clk));
    bufp->fullBit(oldp+44,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__rst));
    bufp->fullBit(oldp+45,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__load_en));
    bufp->fullBit(oldp+46,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__out_en));
    bufp->fullCData(oldp+47,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__in),8);
    bufp->fullCData(oldp+48,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__out),8);
    bufp->fullQData(oldp+49,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem),56);
}
