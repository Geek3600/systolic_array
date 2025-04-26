#!/bin/bash

PROJECT_NAME=top
# top module
VIVADO_TOP_MODULES=top

###########################################
# for tcl flow
###########################################
# device definition
# VIVADO_DEVICE=xcvu9p
VIVADO_DEVICE=xc7z020
VIVADO_PACKAGE=clg400
# VIVADO_PACKAGE=-flga2104
# VIVADO_SPEED=-2-i
VIVADO_SPEED=-1
VIVADO_PART=\$device\$package\$speed

# block deisgn module
VIVADO_BD_TOP_MODULES=

# source files
VIVADO_VERILOG_FILELIST=(
    rtl/accelerator.v
    rtl/top.v
    
    # 输入缓冲区顶层和组件
    rtl/input_buffer.v
    rtl/input_shifter_register.v
    
    # 输出缓冲区顶层和组件
    rtl/output_buffer.v
    rtl/output_shifter_register.v
    
    # 脉动阵列的顶层和底层组件
    rtl/PE_row.v
    rtl/PE.v
    rtl/systolic_array.v

    # 权重缓冲区的顶层和组件
    rtl/weight_buffer.v
    rtl/weight_shifter_register.v

    # 通用组件
    rtl/register.v
    rtl/config.v

    # relu激活函数单元顶层和组件
    rtl/relu_pe.v
    rtl/relu.v

    # softmax顶层和所有组件
    # rtl/softmax/systolic_odd_even_sort/systolic_odd_even_sort.v
    # rtl/softmax/systolic_odd_even_sort/sort_pe.v
    # rtl/softmax/systolic_odd_even_sort/sort4.v
    # rtl/softmax/systolic_odd_even_sort/sort_controller.v
    # rtl/softmax/ln/constant_multipler_ln2.v 
    # rtl/softmax/ln/leading_one_detector.v 
    # rtl/softmax/ln/ln.v 
    # rtl/softmax/ln/shift.v
    # rtl/softmax/exp/exp.v 
    # rtl/softmax/exp/kb_lut.v 
    # rtl/softmax/exp/preprocess.v
    # rtl/softmax/sum_add_tree.v
    # rtl/softmax/softmax_ctrl.v 
    # rtl/softmax/softmax.v

    # 自动分块模块
    rtl/autotilinginput.sv
    rtl/autotilingweight.sv

    # 卷积控制器
    rtl/convctrl.sv

)
VIVADO_INC_PATH_FILELIST=(
    rtl
)
VIVADO_GLOBAL_INC_FILE_LIST=
VIVADO_XCI_FILELIST=(
    ip/dsp_macro_0/dsp_macro_0.xci
    ip/bram_input28/bram_input28.xci
    ip/bram_weight_0/bram_weight_0.xci
)
VIVADO_BD_FILE=
VIVADO_BD_TCL_FILELIST=
VIVADO_XDC_FILELIST=(
    xdc/clock.xdc
)
VIVADO_SIM_FILELIST=(
    tb/tb_top.v
)
VIVADO_POST_SYNTH_SCRIPTS_FILELIST=

# ip repository path
VIVAOD_USER_IP_REPOSITORY=

# synth oprions
VIVADO_SYNTH_OPT="-directive PerformanceOptimized -flatten_hierarchy full -keep_equivalent_registers -retiming"
VIVADO_OPT_OPT=""
VIVADO_PLACE_OPT=""
VIDODO_PHYS_OPT_OPT=""
VIVADO_ROUTE_OPT_OPT=""

###########################################
# for vcs flow
###########################################
VCS_ENABLE=1

# pre-compiled simulation library
VCS_COMPILE_LIB_DIR=${HOME}/vcs_lib

# simulation config
VCS_TIMESCALE="1ps/1ps"

# simulation_mode
# 1. RTL
# 2. POST_SYNTH
VCS_SIM_MODE=RTL

VCS_SIM_TOP_MODULE=tb_${VIVADO_TOP_MODULES}
VCS_FSDB_FILE=${VCS_SIM_TOP_MODULE}.fsdb

###########################################
# for iverilog flow
###########################################
IVERILOG_ENABLE=1

IVERILOG_SIM_TOP_MODULE=tb_${VIVADO_TOP_MODULES}
IVERILOG_VCD_FILE=${VCS_SIM_TOP_MODULE}.vcd