TOPNAME = top

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc --trace \
 				-O3 --x-assign fast --x-initial fast --noassert


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

#===========================iverilog============================
TESTBENCH = $(shell find $(abspath ./test) -name "tb_top.v")
iv:
	@iverilog -o tb $(VSRCS) $(TESTBENCH)
	@./tb
						
all: default
clean:
	rm -rf $(BUILD_DIR)

.PHONY: default all clean run 

