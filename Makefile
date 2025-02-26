VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")

iv:
	@iverilog -o tb $(VSRCS)
	@./tb
