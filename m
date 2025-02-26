TOPNAME = top
TOPLEVEL_LANG = verilog

SIM ?= verilator
WAVES ?= 0
COCOTB_HDL_TIMEUNIT = 1ns
COCOTB_HDL_TIMEPRECISION = 1ps

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc --trace \
 				-O3 --x-assign fast --x-initial fast --noassert

# DUT名称
DUT      = top
# 顶层模块名
TOPLEVEL = $(DUT)
# python 模块名
MODULE   = test_$(DUT)
VERILOG_SOURCES = VSRCS


ifeq ($(SIM), icarus) # 使用 iverilog 的情况，传参给 iverilog
	PLUSARGS += -fst

	COMPILE_ARGS += $(foreach v,$(filter PARAM_%,$(.VARIABLES)),-P $(TOPLEVEL).$(subst PARAM_,,$(v))=$($(v))

	ifeq ($(WAVES), 1)
		VERILOG_SOURCES += iverilog_dump.v
		COMPILE_ARGS += -s iverilog_dump
	endif
else ifeq ($(SIM), verilator) # 使用 verilator 的情况，传参给 verilator
	COMPILE_ARGS += -Wno-SELRANGE -Wno-WIDTH $(VERILATOR_CFLAGS)

	ifeq ($(WAVES), 1)
		COMPILE_ARGS += --trace-fst
	endif
endif
# 调用 cocotb 的 makefile
include $(shell cocotb-config --makefiles)/Makefile.sim

# 指定build文件夹位置
BUILD_DIR = ./build
# 指定obj文件夹位置
OBJ_DIR = $(BUILD_DIR)/obj_dir

# 指定编译生成的可执行文件，以及位置
BIN = $(BUILD_DIR)/$(TOPNAME)

 default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))


# 查找源代码文件
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")


# gcc选项
CXXFLAGS += $(INCFLAGS)

# verilator编译命令
EXEC = $(BIN)
GTKWAVE = $(shell pwd)/wave.vcd

#===========================verilator============================
# verilator compile
$(BIN): $(VSRCS) $(CSRCS)
	@rm -rf $(OBJ_DIR)
	@$(VERILATOR) $(VERILATOR_CFLAGS) --top-module $(TOPNAME) $^\
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))\
				--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

#verilator execute
run:$(BIN) 
	@$(EXEC)

#check gtkwave
wave: 
	gtkwave $(GTKWAVE)
#===========================verilator============================


#===========================cocotb============================

#===========================cocotb============================

						
all: default
clean:
	rm -rf $(BUILD_DIR)

.PHONY: default all clean run 

