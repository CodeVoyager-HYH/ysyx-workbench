#include <am.h>
#include <klib-macros.h>
#include "npc.h"

/*
1.可以用来自由计算的内存区间 - 堆区
  堆区需要分配在可写的内存区间, 因此可以分配在SRAM中-- SRAM的地址空间是0x0f00_0000~0x0fff_ffff
2.程序 "入口" - main(const char *args)
  main()函数由AM上的程序提供, 但我们需要考虑整个运行时环境的入口, 即需要将程序链接到MROM的地址空间, 并保证TRM的第一条指令与NPC复位后的PC值一致
3."退出"程序的方式 - halt()
  ysyxSoC不支持"关机"等功能, 为方便起见, 可借助ebreak指令让仿真环境结束仿真
4.打印字符 - putch()
  可通过ysyxSoC中的UART16550进行输出
*/

#define soc_ebreak(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))
extern char _sram_start;
extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
static const char mainargs[MAINARGS_MAX_LEN] = MAINARGS_PLACEHOLDER; // defined in CFLAGS

void putch(char ch) {
  outb(UART_REG_TX, ch);
}

void halt(int code) {
  soc_ebreak(code);
  while (1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
