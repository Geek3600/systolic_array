#include "verilated.h"
#include "verilated_dpi.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include "svdpi.h"
#include <stdlib.h>

static Vtop *top;
VerilatedContext *contextp = NULL;
VerilatedVcdC* tfp = NULL;
#define MAX_SIM_TIME 20
int sim_time = 0;

void step_and_dump_wave()
{
	top->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
}
void single_cycle()
{
	top->clk = 0; 
	step_and_dump_wave();
	top->clk = 1; 
	step_and_dump_wave();
}
void sim_reset()
{
	top->rst = 1;
	top->clk = 0; 
	step_and_dump_wave();
	top->clk = 1; 
	step_and_dump_wave();
	top->rst = 0;
	step_and_dump_wave();
}
void sim_init(int argc, char* argv[])
{
	contextp = new VerilatedContext;
	tfp = new VerilatedVcdC;
	top = new Vtop;

	contextp->traceEverOn(true);
	top->trace(tfp, 0);
	tfp->open("wave.vcd");

	sim_reset();
	printf("\033[47;31m-----------simulation start--------------\033[0m\n");
}

void sim_exit()
{
	step_and_dump_wave();
	tfp->close();
	delete tfp;
	delete contextp;
	printf("\033[47;31m-----------simulation  exit--------------\033[0m\n");
}


// void pe_sim()
// {
	// top->write_weight_en = 1;
	// top->in_up_weight = 2;	
	// single_cycle();

	// top->write_weight_en = 0;
	// top->in_up_psum = 2;
	// top->in_left_act = 2;
	// single_cycle();

	// top->write_weight_en = 0;
	// top->in_up_psum = 1;
	// top->in_left_act = 1;
	// single_cycle();
// }
// void pe_row_sim()
// {
	// top->write_weight_en = 1;
	// top->in_up_weight = 0x04030201;	
	// single_cycle();

	// top->write_weight_en = 0;
	// top->in_up_psum = 0x0004000300020001;
	// top->in_left_act = 2;
	// single_cycle();

	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
// }

// void input_buffer_sim()
// {
	// top->load_en = 1;
	// top->in_act0 = 0x04030201;
	// single_cycle();

	// top->load_en = 1;
	// top->in_act1 = 0x08070605;
	// single_cycle();

	// top->load_en = 1;
	// top->in_act2 = 0x0c0b0a09;
	// single_cycle();
	
	// top->load_en = 1;
	// top->in_act3 = 0x100f0e0d;
	// single_cycle();

	// top->load_en = 0;
	// single_cycle();

	
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();


// }


// void output_buffer_sim()
// {
	
	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_res = 0x0000000000000001;
	// single_cycle();

	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_res = 0x0000000000020005;
	// single_cycle();
	
	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_res = 0x0000000300060009;
	// single_cycle();
	
	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_res = 0x00040007000a000d;
	// single_cycle();
	
	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_res = 0x0008000b000e0000;
	// single_cycle();

	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_res = 0x000c000f000000000;
	// single_cycle();

	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_res = 0x0010000000000000;
	// single_cycle();
	
	// top->out_en = 1;
	// top->load_en = 0;
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
// }
// void systolic_array_sim()
// {

	// top->in_up_weight = 0x0807060504030201;
	// top->write_weight_en = 1;
	// single_cycle();
	// top->in_up_weight = 0x100f0e0d0c0b0a09;
	// top->write_weight_en = 1;
	// single_cycle();
	// top->in_up_weight = 0x1817161514131211;
	// top->write_weight_en = 1;
	// single_cycle();
	// top->in_up_weight = 0x201f1e1d1c1b1a19;
	// top->write_weight_en = 1;
	// single_cycle();
	// top->in_up_weight = 0x2827262524232221;
	// top->write_weight_en = 1;
	// single_cycle();
	// top->in_up_weight = 0x302F2E2D2C2B2A29;
	// top->write_weight_en = 1;
	// single_cycle();
	// top->in_up_weight = 0x3837363534333231;
	// top->write_weight_en = 1;
	// single_cycle();
	// top->in_up_weight = 0x403f3e3d3c3b3a39;
	// top->write_weight_en = 1;
	// single_cycle();

	// top->in_left_act = 0x0000000000000001;
	// top->write_weight_en = 0;
	// single_cycle();
	// top->in_left_act = 0x0000000000000902;
	// top->write_weight_en = 0;
	// single_cycle();
	// top->in_left_act = 0x0000000000110a03;
	// top->write_weight_en = 0;
	// single_cycle();
	// top->in_left_act = 0x0000000019120b04;
	// top->write_weight_en = 0;
	// single_cycle();
	// top->in_left_act = 0x000000211a130c05;
	// top->write_weight_en = 0;
	// single_cycle();
	// top->in_left_act = 0x000029221b140d06;
	// top->write_weight_en = 0;
	// single_cycle();
	// top->in_left_act = 0x00312A231C150E07;
	// top->write_weight_en = 0;
	// single_cycle();
	// top->in_left_act = 0x39322b241d160f08;
	// top->write_weight_en = 0;
	// single_cycle();
	// top->in_left_act = 0x3a332c251e171000;
	// top->write_weight_en = 0;
	// single_cycle();
	// top->in_left_act = 0x3B342D261F180000;
	// top->write_weight_en = 0;
	// single_cycle();
	// top->in_left_act = 0x3C352E2720000000;
	// top->write_weight_en = 0;
	// single_cycle();
	// top->in_left_act = 0x3D362F2800000000;
	// top->write_weight_en = 0;
	// single_cycle();
	// top->in_left_act = 0x3e37300000000000;
	// top->write_weight_en = 0;
	// single_cycle();
	// top->in_left_act = 0x3f38000000000000;
	// top->write_weight_en = 0;
	// single_cycle();
	// top->in_left_act = 0x4000000000000000;
	// top->write_weight_en = 0;
	// single_cycle();

	// for (int i = 0 ; i < 14; i++)
		// single_cycle();
// }
// void input_buffer_sim()
// {
	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_act = 0x0807060504030201;
	// single_cycle();

	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_act = 0x100F0E0D0C0B0A09;
	// single_cycle();
	
	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_act = 0x1817161514131211;
	// single_cycle();
	
	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_act = 0x201f1e1d1c1b1a19;
	// single_cycle();
	
	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_act = 0x2827262524232221;
	// single_cycle();
	
	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_act = 0x302F2E2D2C2B2A29;
	// single_cycle();
	
	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_act = 0x3837363534333231;
	// single_cycle();
	
	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_act = 0x403f3e3d3c3b3a39;
	// single_cycle();

	// top->load_en = 0;
	// top->out_en = 1;
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
	
// }
// void weight_buffer_sim()
// {
	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_weight = 0x0807060504030201;
	// single_cycle();

	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_weight = 0x100F0E0D0C0B0A09;
	// single_cycle();
	
	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_weight = 0x1817161514131211;
	// single_cycle();
	
	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_weight = 0x201f1e1d1c1b1a19;
	// single_cycle();
	
	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_weight = 0x2827262524232221;
	// single_cycle();
	
	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_weight = 0x302F2E2D2C2B2A29;
	// single_cycle();
	
	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_weight = 0x3837363534333231;
	// single_cycle();
	
	// top->load_en = 1;
	// top->out_en = 0;
	// top->in_weight = 0x403f3e3d3c3b3a39;
	// single_cycle();

	// top->load_en = 0;
	// top->out_en = 1;
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
	// single_cycle();
// }
void inbuf_and_sys_sim()
{
// weight load into weight_buffer
	top->input_buffer_load_en = 0;
	top->input_buffer_out_en = 0;
	top->weight_buffer_load_en = 1;
	top->weight_buffer_out_en = 0;
	top->output_buffer_load_en = 0;
	top->output_buffer_out_en = 0;
	top->write_weight_en = 0;
	top->in_weight = 0x0807060504030201;
	single_cycle();

	top->input_buffer_load_en = 0;
	top->input_buffer_out_en = 0;
	top->weight_buffer_load_en = 1;
	top->weight_buffer_out_en = 0;
	top->output_buffer_load_en = 0;
	top->output_buffer_out_en = 0;
	top->write_weight_en = 0;
	top->in_weight = 0x100F0E0D0C0B0A09;
	single_cycle();
	
	top->input_buffer_load_en = 0;
	top->input_buffer_out_en = 0;
	top->weight_buffer_load_en = 1;
	top->weight_buffer_out_en = 0;
	top->output_buffer_load_en = 0;
	top->output_buffer_out_en = 0;
	top->write_weight_en = 0;
	top->in_weight = 0x1817161514131211;
	single_cycle();
	
	top->input_buffer_load_en = 0;
	top->input_buffer_out_en = 0;
	top->weight_buffer_load_en = 1;
	top->weight_buffer_out_en = 0;
	top->output_buffer_load_en = 0;
	top->output_buffer_out_en = 0;
	top->write_weight_en = 0;
	top->in_weight = 0x201f1e1d1c1b1a19;
	single_cycle();
	
	top->input_buffer_load_en = 0;
	top->input_buffer_out_en = 0;
	top->weight_buffer_load_en = 1;
	top->weight_buffer_out_en = 0;
	top->output_buffer_load_en = 0;
	top->output_buffer_out_en = 0;
	top->write_weight_en = 0;
	top->in_weight = 0x2827262524232221;
	single_cycle();
	
	top->input_buffer_load_en = 0;
	top->input_buffer_out_en = 0;
	top->weight_buffer_load_en = 1;
	top->weight_buffer_out_en = 0;
	top->output_buffer_load_en = 0;
	top->output_buffer_out_en = 0;
	top->write_weight_en = 0;
	top->in_weight = 0x302F2E2D2C2B2A29;
	single_cycle();
	
	top->input_buffer_load_en = 0;
	top->input_buffer_out_en = 0;
	top->weight_buffer_load_en = 1;
	top->weight_buffer_out_en = 0;
	top->output_buffer_load_en = 0;
	top->output_buffer_out_en = 0;
	top->write_weight_en = 0;
	top->in_weight = 0x3837363534333231;
	single_cycle();
	
	top->input_buffer_load_en = 0;
	top->input_buffer_out_en = 0;
	top->weight_buffer_load_en = 1;
	top->weight_buffer_out_en = 0;
	top->output_buffer_load_en = 0;
	top->output_buffer_out_en = 0;
	top->write_weight_en = 0;
	top->in_weight = 0x403f3e3d3c3b3a39;
	single_cycle();

// input load into input buffer and weight load into array
	top->input_buffer_load_en = 1;
	top->input_buffer_out_en = 0;
	top->weight_buffer_load_en = 0;
	top->weight_buffer_out_en = 1;
	top->output_buffer_load_en = 0;
	top->output_buffer_out_en = 0;
	top->write_weight_en = 1;
	top->in_act = 0x0807060504030201;
	single_cycle();

	top->input_buffer_load_en = 1;
	top->input_buffer_out_en = 0;
	top->weight_buffer_load_en = 0;
	top->weight_buffer_out_en = 1;
	top->output_buffer_load_en = 0;
	top->output_buffer_out_en = 0;
	top->write_weight_en = 1;
	top->in_act = 0x100F0E0D0C0B0A09;
	single_cycle();
	
	top->input_buffer_load_en = 1;
	top->input_buffer_out_en = 0;
	top->weight_buffer_load_en = 0;
	top->weight_buffer_out_en = 1;
	top->output_buffer_load_en = 0;
	top->output_buffer_out_en = 0;
	top->write_weight_en = 1;
	top->in_act = 0x1817161514131211;
	single_cycle();
	
	top->input_buffer_load_en = 1;
	top->input_buffer_out_en = 0;
	top->weight_buffer_load_en = 0;
	top->weight_buffer_out_en = 1;
	top->output_buffer_load_en = 0;
	top->output_buffer_out_en = 0;
	top->write_weight_en = 1;
	top->in_act = 0x201f1e1d1c1b1a19;
	single_cycle();
	
	top->input_buffer_load_en = 1;
	top->input_buffer_out_en = 0;
	top->weight_buffer_load_en = 0;
	top->weight_buffer_out_en = 1;
	top->output_buffer_load_en = 0;
	top->output_buffer_out_en = 0;
	top->write_weight_en = 1;
	top->in_act = 0x2827262524232221;
	single_cycle();
	
	top->input_buffer_load_en = 1;
	top->input_buffer_out_en = 0;
	top->weight_buffer_load_en = 0;
	top->weight_buffer_out_en = 1;
	top->output_buffer_load_en = 0;
	top->output_buffer_out_en = 0;
	top->write_weight_en = 1;
	top->in_act = 0x302F2E2D2C2B2A29;
	single_cycle();
	
	top->input_buffer_load_en = 1;
	top->input_buffer_out_en = 0;
	top->weight_buffer_load_en = 0;
	top->weight_buffer_out_en = 1;
	top->output_buffer_load_en = 0;
	top->output_buffer_out_en = 0;
	top->write_weight_en = 1;
	top->in_act = 0x3837363534333231;
	single_cycle();
	
	top->input_buffer_load_en = 1;
	top->input_buffer_out_en = 0;
	top->weight_buffer_load_en = 0;
	top->weight_buffer_out_en = 1;
	top->output_buffer_load_en = 0;
	top->output_buffer_out_en = 0;
	top->write_weight_en = 1;
	top->in_act = 0x403f3e3d3c3b3a39;
	single_cycle();

	top->input_buffer_load_en = 0;
	top->input_buffer_out_en = 1;
	top->weight_buffer_load_en = 0;
	top->weight_buffer_out_en = 0;
	top->output_buffer_load_en = 0;
	top->output_buffer_out_en = 0;
	top->write_weight_en = 0;
	for (int i = 0; i < 7; i++)
	{
		single_cycle();
	}
	top->output_buffer_load_en = 1;
	single_cycle();

	// array res start to load into output buffer
	top->input_buffer_load_en = 0;
	top->input_buffer_out_en = 1;
	top->weight_buffer_load_en = 0;
	top->weight_buffer_out_en = 0;
	top->output_buffer_load_en = 1;
	top->output_buffer_out_en = 0;
	top->write_weight_en = 0;
	for (int i = 0; i <  15; i++)
	{
		single_cycle();
	}

	// output buffer start to output result
	top->input_buffer_load_en = 0;
	top->input_buffer_out_en = 0;
	top->weight_buffer_load_en = 0;
	top->weight_buffer_out_en = 0;
	top->output_buffer_load_en = 0;
	top->output_buffer_out_en = 1;
	top->write_weight_en = 0;
	for (int i = 0; i < 7; i++)
	{
		single_cycle();
	}
	

}
int main(int argc, char* argv[])
{
	sim_init(argc, argv);
	inbuf_and_sys_sim();

	// while (sim_time < MAX_SIM_TIME) 
	// {
		// top->b = 1;
		// top->a = sim_time;
		// single_cycle();
		// sim_time++; // 更新仿真时间
	// }
	
	// systolic_array_sim();
	// output_buffer_sim();
	// input_buffer_sim();
	// weight_buffer_sim();
    sim_exit();
	return 0;
}
