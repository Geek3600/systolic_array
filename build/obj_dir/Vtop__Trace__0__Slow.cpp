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
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"input_buffer_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"input_buffer_out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"weight_buffer_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"weight_buffer_out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"output_buffer_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"output_buffer_out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+487,0,"in_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+489,0,"in_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+491,0,"out_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"input_buffer_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"input_buffer_out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"weight_buffer_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"weight_buffer_out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"output_buffer_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"output_buffer_out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+487,0,"in_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+489,0,"in_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+491,0,"out_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+1,0,"out_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"out_weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+21,0,"out_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("u_input_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+487,0,"in_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1,0,"out_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("input_fifo[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_in_shft_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+519,0,"DELAY_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+495,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+25,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("input_fifo[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_in_shft_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+520,0,"DELAY_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+496,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+29,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("input_fifo[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_in_shft_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+521,0,"DELAY_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+497,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+33,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("input_fifo[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_in_shft_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+522,0,"DELAY_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+498,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+37,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("input_fifo[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_in_shft_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+523,0,"DELAY_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+499,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+41,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("input_fifo[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_in_shft_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+524,0,"DELAY_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+500,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+45,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("input_fifo[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_in_shft_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+525,0,"DELAY_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+49,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("input_fifo[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_in_shft_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+526,0,"DELAY_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+53,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_output_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+21,0,"in_res",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+491,0,"out_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+57,0,"load_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+58,0,"load_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_shifter_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+503,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+61,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_shifter_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+504,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+67,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_shifter_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+505,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+73,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_shifter_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+506,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+79,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_shifter_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+507,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+85,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_shifter_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+508,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+91,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_shifter_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+509,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+97,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_shifter_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+510,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+102,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_systolic_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+3,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+21,0,"out_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+106,0,"out_down_psum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declArray(c+138,0,"out_down_weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->pushPrefix("pe_array[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_row", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+3,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+154,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+527,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+156,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+5,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+160,0,"out_right_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("pe_row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+162,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+531,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+163,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+165,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+166,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+531,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+167,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+164,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+168,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+169,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+170,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+531,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+171,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+168,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+172,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+173,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+174,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+531,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+175,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+172,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+176,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+177,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+178,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+531,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+179,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+176,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+180,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+181,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+182,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+531,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+183,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+180,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+184,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+185,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+186,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+531,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+187,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+184,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+188,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+189,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+190,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+531,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+191,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+188,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+192,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+193,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_array[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_row", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+154,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+194,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+156,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+196,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+6,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+200,0,"out_right_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("pe_row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+202,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+163,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+203,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+204,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+205,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+206,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+167,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+207,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+204,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+208,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+209,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+210,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+171,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+211,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+208,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+212,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+213,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+214,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+175,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+215,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+212,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+216,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+217,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+218,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+179,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+219,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+216,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+220,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+221,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+183,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+223,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+220,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+224,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+225,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+226,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+187,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+227,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+224,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+228,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+229,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+230,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+191,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+231,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+228,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+233,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_array[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_row", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+194,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+234,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+196,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+236,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+7,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+240,0,"out_right_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("pe_row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+242,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+203,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+243,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+244,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+245,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+206,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+246,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+207,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+247,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+244,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+248,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+249,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+210,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+250,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+211,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+251,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+248,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+252,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+253,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+254,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+215,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+255,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+252,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+256,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+257,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+258,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+219,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+259,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+256,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+260,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+261,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+262,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+223,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+263,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+260,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+264,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+265,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+266,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+227,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+267,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+264,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+268,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+269,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+270,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+231,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+271,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+268,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+272,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+273,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_array[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_row", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+234,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+274,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+236,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+276,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+8,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+280,0,"out_right_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("pe_row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+242,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+282,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+243,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+283,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+284,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+285,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+246,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+286,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+247,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+287,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+284,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+288,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+289,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+290,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+251,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+291,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+288,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+292,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+293,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+294,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+255,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+295,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+292,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+296,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+297,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+258,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+298,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+259,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+299,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+296,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+300,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+301,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+302,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+263,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+303,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+300,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+304,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+305,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+266,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+306,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+267,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+307,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+304,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+308,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+309,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+310,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+271,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+311,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+308,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+312,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+313,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_array[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_row", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+274,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+314,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+276,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+316,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+9,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+320,0,"out_right_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("pe_row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+322,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+283,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+323,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+324,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+325,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+286,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+326,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+287,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+327,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+324,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+328,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+329,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+290,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+330,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+291,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+331,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+328,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+332,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+333,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+334,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+295,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+335,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+332,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+336,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+337,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+298,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+338,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+299,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+339,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+336,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+340,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+341,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+342,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+303,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+343,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+340,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+344,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+345,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+306,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+346,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+307,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+347,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+344,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+348,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+349,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+310,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+350,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+311,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+351,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+348,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+352,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+353,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_array[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_row", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+314,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+354,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+316,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+356,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+10,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+360,0,"out_right_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("pe_row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+322,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+362,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+323,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+363,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+364,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+365,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+326,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+366,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+327,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+367,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+364,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+368,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+369,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+330,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+370,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+331,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+371,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+368,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+372,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+373,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+334,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+374,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+335,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+375,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+372,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+376,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+377,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+338,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+378,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+339,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+379,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+376,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+380,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+381,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+342,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+382,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+343,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+383,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+380,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+384,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+385,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+346,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+386,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+347,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+387,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+384,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+388,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+389,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+350,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+390,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+351,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+391,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+388,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+392,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+393,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_array[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_row", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+354,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+394,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+356,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+396,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+11,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+400,0,"out_right_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("pe_row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+362,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+402,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+363,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+403,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+404,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+405,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+366,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+406,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+367,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+407,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+404,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+408,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+409,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+370,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+410,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+371,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+411,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+408,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+412,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+413,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+374,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+414,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+375,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+415,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+412,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+416,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+417,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+418,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+379,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+419,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+416,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+420,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+421,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+382,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+422,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+383,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+423,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+420,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+424,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+425,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+386,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+426,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+387,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+427,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+424,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+428,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+429,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+390,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+430,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+391,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+431,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+428,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+432,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+433,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_array[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_row", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+394,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+434,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+396,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+21,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+12,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+436,0,"out_right_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("pe_row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+402,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+438,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+403,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+60,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+439,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+440,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+406,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+441,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+407,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+66,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+439,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+442,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+443,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+410,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+444,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+411,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+72,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+442,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+445,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+446,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+414,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+447,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+415,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+78,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+445,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+448,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+449,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+418,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+450,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+419,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+84,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+448,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+451,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+452,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+422,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+453,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+423,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+451,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+454,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+455,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+426,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+456,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+427,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+96,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+454,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+457,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+458,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_row[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"write_weight_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+430,0,"in_up_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+459,0,"out_down_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+431,0,"in_up_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+101,0,"out_down_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+457,0,"in_left_act",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+460,0,"out_right_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+461,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_weight_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+489,0,"in_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"out_weight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("weight_fifo[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_weight_shifter_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+511,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+462,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("weight_fifo[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_weight_shifter_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+512,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+464,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("weight_fifo[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_weight_shifter_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+513,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+466,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("weight_fifo[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_weight_shifter_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+514,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+468,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("weight_fifo[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_weight_shifter_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+515,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+470,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("weight_fifo[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_weight_shifter_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+516,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+472,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("weight_fifo[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_weight_shifter_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+517,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+474,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("weight_fifo[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_weight_shifter_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+478,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"out_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+518,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+476,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
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
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    bufp->fullIData(oldp+519,(0U),32);
    bufp->fullIData(oldp+520,(1U),32);
    bufp->fullIData(oldp+521,(2U),32);
    bufp->fullIData(oldp+522,(3U),32);
    bufp->fullIData(oldp+523,(4U),32);
    bufp->fullIData(oldp+524,(5U),32);
    bufp->fullIData(oldp+525,(6U),32);
    bufp->fullIData(oldp+526,(7U),32);
    __Vtemp_1[0U] = 0U;
    __Vtemp_1[1U] = 0U;
    __Vtemp_1[2U] = 0U;
    __Vtemp_1[3U] = 0U;
    bufp->fullWData(oldp+527,(__Vtemp_1),128);
    bufp->fullSData(oldp+531,(0U),16);
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
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_16;
    // Body
    bufp->fullQData(oldp+1,((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__out) 
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
    bufp->fullQData(oldp+3,((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__out) 
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
    bufp->fullCData(oldp+5,(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__out),8);
    bufp->fullCData(oldp+6,(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__out),8);
    bufp->fullCData(oldp+7,(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__out),8);
    bufp->fullCData(oldp+8,(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__out),8);
    bufp->fullCData(oldp+9,(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__out),8);
    bufp->fullCData(oldp+10,(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__out),8);
    bufp->fullCData(oldp+11,(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__out),8);
    bufp->fullCData(oldp+12,(vlSelfRef.top__DOT__u_input_buffer__DOT____Vcellout__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__out),8);
    bufp->fullCData(oldp+13,(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__out),8);
    bufp->fullCData(oldp+14,(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__out),8);
    bufp->fullCData(oldp+15,(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__out),8);
    bufp->fullCData(oldp+16,(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__out),8);
    bufp->fullCData(oldp+17,(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__out),8);
    bufp->fullCData(oldp+18,(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__out),8);
    bufp->fullCData(oldp+19,(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__out),8);
    bufp->fullCData(oldp+20,(vlSelfRef.top__DOT__u_weight_buffer__DOT____Vcellout__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__out),8);
    __Vtemp_2[0U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                      << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
    __Vtemp_2[1U] = (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                      << 0x10U) | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum));
    __Vtemp_2[2U] = (IData)((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                << 0x10U) 
                                               | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                              << 0x20U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                            << 0x10U) 
                                                           | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
    __Vtemp_2[3U] = (IData)(((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                             << 0x10U) 
                                                            | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                             >> 0x20U));
    bufp->fullWData(oldp+21,(__Vtemp_2),128);
    bufp->fullWData(oldp+25,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__0__KET____DOT__u_in_shft_reg__DOT__mem),120);
    bufp->fullWData(oldp+29,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__1__KET____DOT__u_in_shft_reg__DOT__mem),120);
    bufp->fullWData(oldp+33,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__2__KET____DOT__u_in_shft_reg__DOT__mem),120);
    bufp->fullWData(oldp+37,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__3__KET____DOT__u_in_shft_reg__DOT__mem),120);
    bufp->fullWData(oldp+41,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__4__KET____DOT__u_in_shft_reg__DOT__mem),120);
    bufp->fullWData(oldp+45,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__5__KET____DOT__u_in_shft_reg__DOT__mem),120);
    bufp->fullWData(oldp+49,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__6__KET____DOT__u_in_shft_reg__DOT__mem),120);
    bufp->fullWData(oldp+53,(vlSelfRef.top__DOT__u_input_buffer__DOT__input_fifo__BRA__7__KET____DOT__u_in_shft_reg__DOT__mem),120);
    bufp->fullCData(oldp+57,(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena),8);
    bufp->fullBit(oldp+58,((1U & ((IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena) 
                                  >> 7U))));
    bufp->fullBit(oldp+59,((1U & (IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena))));
    bufp->fullSData(oldp+60,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullWData(oldp+61,(vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem),128);
    bufp->fullBit(oldp+65,((1U & ((IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena) 
                                  >> 1U))));
    bufp->fullSData(oldp+66,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullWData(oldp+67,(vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem),128);
    bufp->fullBit(oldp+71,((1U & ((IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena) 
                                  >> 2U))));
    bufp->fullSData(oldp+72,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullWData(oldp+73,(vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem),128);
    bufp->fullBit(oldp+77,((1U & ((IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena) 
                                  >> 3U))));
    bufp->fullSData(oldp+78,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullWData(oldp+79,(vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem),128);
    bufp->fullBit(oldp+83,((1U & ((IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena) 
                                  >> 4U))));
    bufp->fullSData(oldp+84,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullWData(oldp+85,(vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem),128);
    bufp->fullBit(oldp+89,((1U & ((IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena) 
                                  >> 5U))));
    bufp->fullSData(oldp+90,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullWData(oldp+91,(vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem),128);
    bufp->fullBit(oldp+95,((1U & ((IData)(vlSelfRef.top__DOT__u_output_buffer__DOT__load_ena) 
                                  >> 6U))));
    bufp->fullSData(oldp+96,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullWData(oldp+97,(vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem),128);
    bufp->fullSData(oldp+101,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullWData(oldp+102,(vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem),128);
    bufp->fullWData(oldp+106,(vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_psum),1024);
    bufp->fullWData(oldp+138,(vlSelfRef.top__DOT__u_systolic_array__DOT__out_down_weight),512);
    bufp->fullQData(oldp+154,((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
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
    __Vtemp_4[2U] = (IData)((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                << 0x10U) 
                                               | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                              << 0x20U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                            << 0x10U) 
                                                           | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
    __Vtemp_4[3U] = (IData)(((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                             << 0x10U) 
                                                            | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                             >> 0x20U));
    bufp->fullWData(oldp+156,(__Vtemp_4),128);
    bufp->fullQData(oldp+160,((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
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
    bufp->fullCData(oldp+162,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+163,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+164,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+165,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+166,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+167,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+168,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+169,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+170,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+171,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+172,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+173,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+174,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+175,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+176,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+177,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+178,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+179,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+180,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+181,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+182,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+183,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+184,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+185,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+186,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+187,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+188,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+189,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+190,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+191,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+192,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+193,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__0__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullQData(oldp+194,((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
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
    __Vtemp_6[2U] = (IData)((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                << 0x10U) 
                                               | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                              << 0x20U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                            << 0x10U) 
                                                           | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
    __Vtemp_6[3U] = (IData)(((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                             << 0x10U) 
                                                            | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                             >> 0x20U));
    bufp->fullWData(oldp+196,(__Vtemp_6),128);
    bufp->fullQData(oldp+200,((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
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
    bufp->fullCData(oldp+202,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+203,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+204,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+205,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+206,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+207,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+208,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+209,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+210,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+211,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+212,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+213,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+214,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+215,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+216,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+217,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+218,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+219,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+220,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+221,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+222,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+223,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+224,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+225,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+226,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+227,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+228,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+229,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+230,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+231,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+232,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+233,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__1__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullQData(oldp+234,((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
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
    __Vtemp_8[2U] = (IData)((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                << 0x10U) 
                                               | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                              << 0x20U) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                            << 0x10U) 
                                                           | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
    __Vtemp_8[3U] = (IData)(((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                             << 0x10U) 
                                                            | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                             >> 0x20U));
    bufp->fullWData(oldp+236,(__Vtemp_8),128);
    bufp->fullQData(oldp+240,((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
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
    bufp->fullCData(oldp+242,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+243,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+244,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+245,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+246,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+247,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+248,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+249,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+250,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+251,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+252,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+253,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+254,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+255,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+256,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+257,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+258,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+259,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+260,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+261,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+262,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+263,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+264,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+265,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+266,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+267,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+268,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+269,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+270,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+271,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+272,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+273,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__2__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullQData(oldp+274,((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
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
    __Vtemp_10[2U] = (IData)((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                             << 0x10U) 
                                                            | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
    __Vtemp_10[3U] = (IData)(((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                              >> 0x20U));
    bufp->fullWData(oldp+276,(__Vtemp_10),128);
    bufp->fullQData(oldp+280,((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
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
    bufp->fullCData(oldp+282,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+283,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+284,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+285,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+286,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+287,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+288,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+289,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+290,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+291,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+292,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+293,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+294,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+295,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+296,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+297,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+298,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+299,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+300,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+301,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+302,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+303,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+304,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+305,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+306,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+307,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+308,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+309,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+310,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+311,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+312,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+313,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__3__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullQData(oldp+314,((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
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
    __Vtemp_12[2U] = (IData)((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                             << 0x10U) 
                                                            | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
    __Vtemp_12[3U] = (IData)(((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                              >> 0x20U));
    bufp->fullWData(oldp+316,(__Vtemp_12),128);
    bufp->fullQData(oldp+320,((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
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
    bufp->fullCData(oldp+322,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+323,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+324,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+325,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+326,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+327,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+328,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+329,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+330,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+331,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+332,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+333,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+334,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+335,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+336,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+337,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+338,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+339,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+340,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+341,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+342,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+343,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+344,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+345,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+346,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+347,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+348,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+349,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+350,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+351,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+352,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+353,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__4__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullQData(oldp+354,((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
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
    __Vtemp_14[2U] = (IData)((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                             << 0x10U) 
                                                            | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
    __Vtemp_14[3U] = (IData)(((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                              >> 0x20U));
    bufp->fullWData(oldp+356,(__Vtemp_14),128);
    bufp->fullQData(oldp+360,((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
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
    bufp->fullCData(oldp+362,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+363,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+364,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+365,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+366,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+367,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+368,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+369,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+370,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+371,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+372,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+373,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+374,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+375,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+376,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+377,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+378,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+379,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+380,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+381,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+382,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+383,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+384,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+385,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+386,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+387,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+388,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+389,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+390,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+391,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+392,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+393,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__5__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullQData(oldp+394,((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
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
    __Vtemp_16[2U] = (IData)((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                             << 0x10U) 
                                                            | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))));
    __Vtemp_16[3U] = (IData)(((((QData)((IData)((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum))))) 
                              >> 0x20U));
    bufp->fullWData(oldp+396,(__Vtemp_16),128);
    bufp->fullQData(oldp+400,((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
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
    bufp->fullCData(oldp+402,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+403,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+404,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+405,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+406,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+407,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+408,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+409,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+410,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+411,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+412,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+413,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+414,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+415,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+416,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+417,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+418,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+419,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+420,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+421,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+422,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+423,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+424,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+425,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+426,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+427,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+428,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+429,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+430,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullSData(oldp+431,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_psum),16);
    bufp->fullCData(oldp+432,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+433,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__6__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullQData(oldp+434,((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight) 
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
    bufp->fullQData(oldp+436,((((QData)((IData)(((((IData)(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act) 
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
    bufp->fullCData(oldp+438,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullCData(oldp+439,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+440,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__0__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+441,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullCData(oldp+442,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+443,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__1__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+444,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullCData(oldp+445,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+446,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__2__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+447,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullCData(oldp+448,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+449,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__3__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+450,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullCData(oldp+451,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+452,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__4__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+453,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullCData(oldp+454,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+455,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__5__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+456,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullCData(oldp+457,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+458,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__6__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullCData(oldp+459,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_down_weight),8);
    bufp->fullCData(oldp+460,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT____Vcellout__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__out_right_act),8);
    bufp->fullCData(oldp+461,(vlSelfRef.top__DOT__u_systolic_array__DOT__pe_array__BRA__7__KET____DOT__genblk1__DOT__pe_row__DOT__pe_row__BRA__7__KET____DOT__genblk1__DOT__u_pe__DOT__weight),8);
    bufp->fullQData(oldp+462,(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__0__KET____DOT__u_weight_shifter_register__DOT__mem),64);
    bufp->fullQData(oldp+464,(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__1__KET____DOT__u_weight_shifter_register__DOT__mem),64);
    bufp->fullQData(oldp+466,(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__2__KET____DOT__u_weight_shifter_register__DOT__mem),64);
    bufp->fullQData(oldp+468,(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__3__KET____DOT__u_weight_shifter_register__DOT__mem),64);
    bufp->fullQData(oldp+470,(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__4__KET____DOT__u_weight_shifter_register__DOT__mem),64);
    bufp->fullQData(oldp+472,(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__5__KET____DOT__u_weight_shifter_register__DOT__mem),64);
    bufp->fullQData(oldp+474,(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__6__KET____DOT__u_weight_shifter_register__DOT__mem),64);
    bufp->fullQData(oldp+476,(vlSelfRef.top__DOT__u_weight_buffer__DOT__weight_fifo__BRA__7__KET____DOT__u_weight_shifter_register__DOT__mem),64);
    bufp->fullBit(oldp+478,(vlSelfRef.clk));
    bufp->fullBit(oldp+479,(vlSelfRef.rst));
    bufp->fullBit(oldp+480,(vlSelfRef.input_buffer_load_en));
    bufp->fullBit(oldp+481,(vlSelfRef.input_buffer_out_en));
    bufp->fullBit(oldp+482,(vlSelfRef.weight_buffer_load_en));
    bufp->fullBit(oldp+483,(vlSelfRef.weight_buffer_out_en));
    bufp->fullBit(oldp+484,(vlSelfRef.output_buffer_load_en));
    bufp->fullBit(oldp+485,(vlSelfRef.output_buffer_out_en));
    bufp->fullBit(oldp+486,(vlSelfRef.write_weight_en));
    bufp->fullQData(oldp+487,(vlSelfRef.in_act),64);
    bufp->fullQData(oldp+489,(vlSelfRef.in_weight),64);
    bufp->fullWData(oldp+491,(vlSelfRef.out_res),128);
    bufp->fullCData(oldp+495,((0xffU & (IData)(vlSelfRef.in_act))),8);
    bufp->fullCData(oldp+496,((0xffU & (IData)((vlSelfRef.in_act 
                                                >> 8U)))),8);
    bufp->fullCData(oldp+497,((0xffU & (IData)((vlSelfRef.in_act 
                                                >> 0x10U)))),8);
    bufp->fullCData(oldp+498,((0xffU & (IData)((vlSelfRef.in_act 
                                                >> 0x18U)))),8);
    bufp->fullCData(oldp+499,((0xffU & (IData)((vlSelfRef.in_act 
                                                >> 0x20U)))),8);
    bufp->fullCData(oldp+500,((0xffU & (IData)((vlSelfRef.in_act 
                                                >> 0x28U)))),8);
    bufp->fullCData(oldp+501,((0xffU & (IData)((vlSelfRef.in_act 
                                                >> 0x30U)))),8);
    bufp->fullCData(oldp+502,((0xffU & (IData)((vlSelfRef.in_act 
                                                >> 0x38U)))),8);
    bufp->fullSData(oldp+503,(((IData)(vlSelfRef.output_buffer_out_en)
                                ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__0__KET____DOT__u_shifter_register__DOT__mem[0U])
                                : 0U)),16);
    bufp->fullSData(oldp+504,(((IData)(vlSelfRef.output_buffer_out_en)
                                ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__1__KET____DOT__u_shifter_register__DOT__mem[0U])
                                : 0U)),16);
    bufp->fullSData(oldp+505,(((IData)(vlSelfRef.output_buffer_out_en)
                                ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__2__KET____DOT__u_shifter_register__DOT__mem[0U])
                                : 0U)),16);
    bufp->fullSData(oldp+506,(((IData)(vlSelfRef.output_buffer_out_en)
                                ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__3__KET____DOT__u_shifter_register__DOT__mem[0U])
                                : 0U)),16);
    bufp->fullSData(oldp+507,(((IData)(vlSelfRef.output_buffer_out_en)
                                ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__4__KET____DOT__u_shifter_register__DOT__mem[0U])
                                : 0U)),16);
    bufp->fullSData(oldp+508,(((IData)(vlSelfRef.output_buffer_out_en)
                                ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__5__KET____DOT__u_shifter_register__DOT__mem[0U])
                                : 0U)),16);
    bufp->fullSData(oldp+509,(((IData)(vlSelfRef.output_buffer_out_en)
                                ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__6__KET____DOT__u_shifter_register__DOT__mem[0U])
                                : 0U)),16);
    bufp->fullSData(oldp+510,(((IData)(vlSelfRef.output_buffer_out_en)
                                ? (0xffffU & vlSelfRef.top__DOT__u_output_buffer__DOT__genblk1__BRA__7__KET____DOT__u_shifter_register__DOT__mem[0U])
                                : 0U)),16);
    bufp->fullCData(oldp+511,((0xffU & (IData)(vlSelfRef.in_weight))),8);
    bufp->fullCData(oldp+512,((0xffU & (IData)((vlSelfRef.in_weight 
                                                >> 8U)))),8);
    bufp->fullCData(oldp+513,((0xffU & (IData)((vlSelfRef.in_weight 
                                                >> 0x10U)))),8);
    bufp->fullCData(oldp+514,((0xffU & (IData)((vlSelfRef.in_weight 
                                                >> 0x18U)))),8);
    bufp->fullCData(oldp+515,((0xffU & (IData)((vlSelfRef.in_weight 
                                                >> 0x20U)))),8);
    bufp->fullCData(oldp+516,((0xffU & (IData)((vlSelfRef.in_weight 
                                                >> 0x28U)))),8);
    bufp->fullCData(oldp+517,((0xffU & (IData)((vlSelfRef.in_weight 
                                                >> 0x30U)))),8);
    bufp->fullCData(oldp+518,((0xffU & (IData)((vlSelfRef.in_weight 
                                                >> 0x38U)))),8);
}
