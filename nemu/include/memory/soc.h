#ifndef __MEMORY_SOC_H__
#define __MEMORY_SOC_H__

#include <common.h>

void init_soc();
paddr_t soc_paddr_read(paddr_t addr, int len);
void soc_paddr_write(paddr_t addr, int len, word_t data);
uint8_t* soc_guest_to_host(paddr_t paddr);
bool in_socMem(paddr_t addr);

#define MROM_LEFT  ((paddr_t)0x20000000)
#define MROM_RIGHT ((paddr_t)0x20000fff)
#define SRAM_LEFT  ((paddr_t)0x0f000000)
#define SRAM_RIGHT ((paddr_t)0x0f001fff)
#define SOC_RESET_VECTOR MROM_LEFT

#define MROM_SIZE 0xfff
#define SRAM_SIZE 0x1fff

#endif