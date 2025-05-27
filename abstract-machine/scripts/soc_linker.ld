/* 程序开始入口 */
ENTRY(_start)

PHDRS { 
	text PT_LOAD ; 
	data PT_LOAD ; 
}

MEMORY {
	mrom : ORIGIN = 0x20000000, LENGTH = 4K
	sram : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
	_sram_start = ORIGIN(sram);
	_sram_end = _sram_start + LENGTH(sram);

    /* _pmem_start and _entry_offset are defined in LDFLAGS */
	. = ORIGIN(mrom);
    
    /* 代码段 */
	.text : {
		*(entry)
		*(.text.boot)
		*(.text*)
		_etext = .;
	} > mrom AT > mrom : text

	etext = .;
	/* _etext = .; */
    
    /* 只读数据段 */
	.rodata : {
		*(.rodata*)
	} > mrom AT > mrom
    
    /* 数据段 - 运行时在SRAM中，加载时在MROM中 */
	.data : {
		_data_start = .;  /*SRAM地址*/
		*(.data*)
		*(.sdata*)
		_data_end = .;
	} > sram AT > mrom : data
    
	edata = .;
	_data = .;

	.bss : {
		_bss_start = .;
		*(.bss*)
		*(.sbss*)
		*(.scommon)
		_bss_end = .;
	} > sram
    

	/* SRAM分配 */
	. = _sram_start;	/*对齐到0x0F000000*/

	/* 栈区分配 */
	_stack_top =  ALIGN(0x1000);	/*riscv要求栈16字节对齐*/
	. = _stack_top + 0x800;
	_stack_pointer = .;
	end = .;
	_end = .;

    /* 堆区分配 */
	_heap_start = ALIGN(0x1000);
	_heap_end = _heap_start + 0x400;	/*3kb*/

    

    /* 获取加载地址和长度，用于 bootloader 拷贝 */
	_data_lma = LOADADDR(.data);/*MROM地址*/
	_data_size = _data_end - _data_start;
}