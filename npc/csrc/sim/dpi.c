#include <common.h>
#include <cstdio>
#include <defs.h>
#include "verilated_dpi.h" // For VerilatedDpiOpenVar and other DPI related definitions

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <VysyxSoCFull.h>
extern TOP_NAME dut;  			    //CPU
extern VerilatedVcdC *m_trace;  //仿真波形
extern word_t sim_time ;			//时间
extern word_t clk_count ;
extern uint32_t  *reg_ptr;

void difftest_skip_ref();
void npc_close_simulation();
extern "C" void dpi_ebreak(int pc){
	// printf("下一个要执行的指令是ebreak\n");
	SIMTRAP(pc, 0);
}

extern "C" void flash_read(int32_t addr, int32_t *data) { assert(0); }
extern "C" void mrom_read(int32_t addr, int32_t *data)  {
	if(addr >= CONFIG_MROM && addr <= CONFIG_MROM_BOUND){
		addr = addr & ~0x3u; 
		IFDEF(CONFIG_MTRACE, Log("[mrom_read]: addr = 0x%x, data = %x",addr,pmem_read(addr,4)));
		*data = pmem_read(addr,4);
	}
	else {
		Log("[mrom_read]你将要访问的内存地址是0x%x, 不属于内存地址[0x20000000, 0x20000fff], 程序即将出错退出\n", addr);
		npc_close_simulation();
		exit(1);
	}

}

extern "C" int dpi_mem_read(int addr, int len, int instr){

	IFDEF(CONFIG_MTRACE,Log("[pmem_read] addr = 0x%x,instr = %x",addr,clk_count));	
	if(addr == 0) return 0;
	if(addr >=  CONFIG_RTC_MMIO && addr <= CONFIG_RTC_MMIO + 4){
		long time = get_time();
		if(addr == CONFIG_RTC_MMIO) {
			return (uint32_t)time;
		}
		else {
			return  (uint32_t)(time>>32);
		}
	}else if(addr >= 0x80000000 && addr <= 0x8fffffff){
		unsigned int data = pmem_read(addr, len);
		return data;
	}else{
		return 0;
		Log("[read]你将要访问的内存地址是0x%x, instr = 0x%x,  不属于内存地址[0x80000000, 0x8ffffffff], 程序即将出错退出\n", addr,instr);
		IFDEF(CONFIG_MTRACE,Log("[read]你将要访问的内存地址是0x%x, 不属于内存地址[0x80000000, 0x8ffffffff], 程序即将出错退出\n", addr));
		printf("NUM\tHEX\n");
		for(int i = 0;i < 32; i++){
			printf("x[%d]\t%-8x\n",i,reg_ptr[i]);
		}
		IFDEF(CONFIG_MTRACE,Log("[read]你将要访问的内存地址是0x%x, 指令是:0x%x, 不属于内存地址[0x80000000, 0x8ffffffff], 程序即将出错退出\n", addr,instr));
		npc_close_simulation();
		exit(1);
	}
}
extern "C" void dpi_mem_write(int addr, int data, int len,int instr){
	if(addr == CONFIG_SERIAL_MMIO){
		char ch = data;
		printf("%c", ch);
		fflush(stdout);
		IFDEF(CONFIG_DIFFTEST, difftest_skip_ref());
	}else if(addr >= 0x80000000 && addr <= 0x8fffffff){
		pmem_write(addr, len, data);
	}
	// else{
	// 	Log("[wirte]你将要访问的内存地址是0x%x, instr = 0x%x,不属于内存地址[0x80000000, 0x8ffffffff], 程序即将出错退出\n", addr,instr);
	// 	IFDEF(CONFIG_MTRACE,Log("[wirte]你将要访问的内存地址是0x%x, 不属于内存地址[0x80000000, 0x8ffffffff], 程序即将出错退出\n", addr));
	// 	npc_close_simulation();
	// 	exit(1);
	// }
}

extern "C" void dpi_read_regfile(const svOpenArrayHandle r) {
  reg_ptr = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

uint32_t cpu_mstatus = 0;
uint32_t cpu_mtvec = 0;
uint32_t cpu_mcause = 0;
uint32_t cpu_mepc = 0;

extern "C" void get_csr_value(unsigned int mstatus, unsigned int  mtvec, unsigned int mcause, unsigned int mepc){
	cpu_mstatus = mstatus;
	cpu_mtvec   = mtvec;
	cpu_mcause  = mcause;
	cpu_mepc    = mepc;
}	