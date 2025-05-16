#include <memory/soc.h>
#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

static uint8_t *mrom = NULL;
static uint8_t *sram = NULL;

uint8_t* soc_guest_to_host(paddr_t paddr) { return mrom + paddr - MROM_LEFT;}

bool in_mrom (paddr_t addr){
    if(addr >= MROM_LEFT && addr <= MROM_RIGHT) return true;
    else return false;
}

bool in_sram (paddr_t addr){
    if(addr >= SRAM_LEFT && addr <= SRAM_RIGHT) return true;
    else return false;
}

bool in_socMem(paddr_t addr){
    return in_mrom(addr) || in_sram(addr) ;
}

paddr_t soc_paddr_read(paddr_t addr, int len){
    IFDEF(CONFIG_MTRACE, Log("(soc_paddr_read)read address = " FMT_PADDR " at pc = " FMT_WORD " with byte = %d",addr, cpu.pc, len));
    word_t ret = 0;
    if(in_mrom(addr)){
        ret = host_read(mrom + addr - MROM_LEFT, len);
    } 
    else if(in_sram(addr)){
        host_read(sram + addr - SRAM_LEFT, len);
    } 
    else {
        Log("address = " FMT_PADDR " is out of bound of mrom [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
            addr, MROM_LEFT, MROM_RIGHT, cpu.pc);
    }
    return ret;
}

void soc_paddr_write(paddr_t addr, int len, word_t data){
    IFDEF(CONFIG_MTRACE, Log("(soc_paddr_write)write address = " FMT_PADDR " at pc = " FMT_WORD " with byte = %d and data =" FMT_WORD "\n",addr, cpu.pc, len, data));
    if(in_mrom(addr)){
        host_write(mrom + addr - MROM_LEFT, len, data);
    } 
    else if(in_sram(addr)){
        host_write(sram + addr - SRAM_LEFT, len, data);
    } 
    else {
        Log("address = " FMT_PADDR " is out of bound of soc [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
            addr, MROM_LEFT, MROM_RIGHT, cpu.pc);
        assert(0);
    }
}

void init_soc() {
    mrom = malloc(0xfff);
    memset(mrom, 0, 0xfff);     // 使用实际分配的大小清零
    assert(mrom);
    Log("mrom area [" FMT_PADDR ", " FMT_PADDR "]", MROM_LEFT, MROM_LEFT + MROM_SIZE);

    sram = malloc(0x1fff);
    memset(sram, 0, 0x1fff);     // 使用实际分配的大小清零
    assert(sram);
    Log("sram area [" FMT_PADDR ", " FMT_PADDR "]", SRAM_LEFT, SRAM_LEFT + SRAM_SIZE);
}
