#!/bin/bash

PROJECT_NAME=softmax
# top module
VIVADO_TOP_MODULES=softmax

###########################################
# for tcl flow
###########################################
# device definition
VIVADO_DEVICE=xcvu9p
VIVADO_PACKAGE=-flga2104
VIVADO_SPEED=-2-i
VIVADO_PART=\$device\$package\$speed



# block deisgn module
VIVADO_BD_TOP_MODULES=

# source files
VIVADO_VERILOG_FILELIST=(
    # rtl/input_buffer.v
    # rtl/input_shifter_register.v
    # rtl/output_buffer.v
    # rtl/PE_row.v
    # rtl/PE.v
    # rtl/shift_regster.v
    # rtl/systolic_array.v
    # rtl/top.v
    # rtl/weight_buffer.v
    # rtl/weight_shifter_register.v
    rtl/register.v
    rtl/config.v

    # rtl/relu_pe.v
    # rtl/relu.v
    rtl/softmax/systolic_odd_even_sort/systolic_odd_even_sort.v
    rtl/softmax/systolic_odd_even_sort/sort_pe.v
    rtl/softmax/systolic_odd_even_sort/sort4.v
    rtl/softmax/systolic_odd_even_sort/sort_controller.v

    rtl/softmax/ln/constant_multipler_ln2.v 
    rtl/softmax/ln/leading_one_detector.v 
    rtl/softmax/ln/ln.v 
    rtl/softmax/ln/shift.v

    rtl/softmax/exp/exp.v 
    rtl/softmax/exp/kb_lut.v 
    rtl/softmax/exp/preprocess.v

    rtl/softmax/sum_add_tree.v
    rtl/softmax/softmax_ctrl.v 
    rtl/softmax/softmax.v
)
VIVADO_INC_PATH_FILELIST=(
    rtl
)
VIVADO_GLOBAL_INC_FILE_LIST=
VIVADO_XCI_FILELIST=(
)
VIVADO_BD_FILE=
VIVADO_BD_TCL_FILELIST=
VIVADO_XDC_FILELIST=
VIVADO_SIM_FILELIST=(
    tb/tb_softmax.v
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