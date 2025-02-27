VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")

iv:
	@iverilog -o tb $(VSRCS)
	@./tb
wave:
	@gtkwave test.vcd
