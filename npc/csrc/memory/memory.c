#include "cpu.h"
#include <common.h>
#include <debug.h>
#include <defs.h>
#include <autoconf.h>

static uint8_t pmem[CONFIG_MSIZE]  = {}; 
static uint8_t mrom[CONFIG_MROM]   = {};  
static uint8_t flash[CONFIG_FLASH] = {};
static uint8_t psram[CONFIG_PSRAM] = {};

void init_mem() {
#if defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
  IFDEF(CONFIG_MEM_RANDOM, memset(pmem, rand(), CONFIG_MSIZE));
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
  IFDEF(CONFIG_MEM_RANDOM, memset(mrom, rand(), CONFIG_MSIZE));
  Log("Mrom memory area [" FMT_PADDR ", " FMT_PADDR "]", CONFIG_MROM, CONFIG_MROM_BOUND);
}

#ifdef CONFIG_SOC
uint8_t* guest_to_host(uint32_t paddr) { 
  if(paddr >= CONFIG_MROM && paddr <= CONFIG_MROM_BOUND) {
    return mrom + paddr - CONFIG_MROM;
  } 
  else if (paddr >= CONFIG_FLASH && paddr <= CONFIG_FLASH_BOUND) {
    return flash + paddr - CONFIG_FLASH;
  } 
  else if(paddr >= CONFIG_PSRAM && paddr <= CONFIG_PSRAM_BOUND){
    return pmem + paddr - CONFIG_PSRAM;
  } 
  else {
    printf("Invalid Address: 0x%0x\n", paddr);
    assert(0);
  }
}
#else
uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - RESET_VECTOR; }
#endif

static inline word_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    IFDEF(CONFIG_ISA64, case 8: return *(uint64_t *)addr);
    default: MUXDEF(CONFIG_RT_CHECK, assert(0), return 0);
  }
}
static inline void host_write(void *addr, int len, word_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    IFDEF(CONFIG_ISA64, case 8: *(uint64_t *)addr = data; return);
    IFDEF(CONFIG_RT_CHECK, default: assert(0));
  }
}


static inline bool in_pmem(paddr_t addr) {
  return addr >= CONFIG_MBASE && addr <= CONFIG_MBASE + CONFIG_MSIZE;
}


extern CPU_state cpu;

word_t pmem_read(paddr_t addr, int len){
    return host_read(guest_to_host(addr), len);
}

void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("in[npc] address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

word_t paddr_read(paddr_t addr, int len){
  if(likely(in_pmem(addr))) return pmem_read(addr, len);
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}



