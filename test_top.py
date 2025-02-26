import logging
import os
import cocotb_test.simulator
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles
from cocotb.regression import TestFactory
from cocotb.utils import get_sim_time


class TestBench:
    def __init__(self, dut, clk_period = 10):
        self.dut = dut
        cocotb.start_soon(Clock(dut.clk, clk_period,  units="us").start())

    async def reset(self):
        self.dut.rst.value = 1;
        await RisingEdge(self.dut.clk)
        self.dut.rst.value = 0
        await RisingEdge(self.dut.clk)

@cocotb.test()
async def run_test(dut, clk_period = 10):
    tb = TestBench(dut, clk_period)
    await tb.reset()
    await ClockCycles(tb.dut.clk, 2)
    #===========test case===========
    tb.dut.input_buffer_load_en <= 1
    tb.dut.input_buffer_out_en <= 0
    tb.dut.in_act <= 0x0807060504030201
    await RisingEdge(tb.dut.clk)

    tb.dut.in_act <= 0x0C0B0A0908070605
    await RisingEdge(tb.dut.clk)

    tb.dut.in_act <= 0x100F0E0D0C0B0A09
    await RisingEdge(tb.dut.clk)

    tb.dut.in_act <= 0x100F0E0D
    await RisingEdge(tb.dut.clk)

    tb.dut.input_buffer_load_en <= 0
    tb.dut.input_buffer_out_en <= 1
    await RisingEdge(tb.dut.clk)

    for i in range(8):
        print("{:016x}".format(int(tb.dut.out_act.value)))
        await RisingEdge(tb.dut.clk)
    #===========test case===========
    await ClockCycles(tb.dut.clk, 2)

if __name__ == '_main_':
    pass
    #  factory = TestFactory(run_test)
    #  factory.add_option("clk_period", [2,4,6,8])
    #  factory.generate_tests()
