#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

extern void _trm_init();
extern uint8_t _data_start, _data_end, _data_lma, _data_size;
extern uint8_t _bss_start, _bss_end;

extern void _trm_init();

void copy_data() {
    uint8_t *src = &__data_lma;  // MROM地址
    uint8_t *dst = &_data_start;       // SRAM地址
    while (dst < &_data_end) {
        *dst++ = *src++;
    }
}

/**
 * 清零 BSS 段
 */
void clear_bss() {
    memcpy(_data_start, _data_lma, _data_size);
    // uint8_t *dst = &_bss_start;
    // while (dst < &_bss_end) {  // 修正为_bss_end
    //     *dst++ = 0;
    // }
}


void bootloader() {
//   clear_bss();
  mrom_to_sram();
  clear_bss();
  _trm_init();
}