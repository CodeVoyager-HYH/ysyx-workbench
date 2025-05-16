/*程序开始入口*/
ENTRY(_start)
/*设置两个段头，代码段和数据段*/
PHDRS { text PT_LOAD; data PT_LOAD; }

MEMORY
  {
    sram  (rxw) : ORIGIN = 0x0f000000, LENGTH = 8K
  }

SECTIONS {
	_sram_start = ORIGIN(sram);
  _sram_end = _sram_start + LENGTH(sram);

  /* _pmem_start and _entry_offset are defined in LDFLAGS */
  . = _pmem_start + _entry_offset;
  .text : {
    *(entry)
    *(.text*)
  } : text
  etext = .;
  _etext = .;
  .rodata : {
    *(.rodata*)
  }
  .data : {
    *(.data*)
  } : data
  edata = .;
  _data = .;



	/*bss段用来存放程序中未初始化的或者初始化为0的全局变量和静态变量的一块内存区域*/
  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
		_bss_end = .;
  }
	/*字节对齐到4kb边界*/
  . = ALIGN(0x1000);

	/*SRAM分配*/
	. = _sram_start;

	/*栈区分配*/
	_stack_top = .;
  . = _stack_top + 0x400;/*1kb*/
  _stack_pointer = .;

	/*堆区分配*/
	_heap_start = ALIGN(0x1000);
	_heap_end 	= _sram_end ;
	/*程序结束位置*/
  . =  _sram_end;
	end = .;
  _end = .;
}
