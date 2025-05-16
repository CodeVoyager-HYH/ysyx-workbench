AM_SRCS := riscv/soc/start.S \
           riscv/soc/trm.c \
           riscv/soc/ioe.c \
           riscv/soc/timer.c \
           riscv/soc/input.c \
           riscv/soc/cte.c \
           riscv/soc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS += -fdata-sections -ffunction-sections
LDSCRIPTS += $(AM_HOME)/scripts/soc_linker.ld
#程序入口
LDFLAGS += --defsym=_pmem_start=0x20000000 --defsym=_entry_offset=0x0
LDFLAGS += --gc-sections -e _start
#参数
SOCFLAGS += -b -l  $(shell dirname $(IMAGE).elf)/ins.txt 
SOCFLAGS += -e $(IMAGE).elf
SOCFLAGS += -d $(NEMU_HOME)/build/riscv32-nemu-interpreter-so
SOCFLAGS += --mrom=$(IMAGE).bin

MAINARGS_MAX_LEN = 64
MAINARGS_PLACEHOLDER = The insert-arg rule in Makefile will insert mainargs here.
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER=\""$(MAINARGS_PLACEHOLDER)"\"

#这里主要就是把mainargs写入MAINARGS_PLACEHOLDER
insert-arg: image
	@python $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) "$(MAINARGS_PLACEHOLDER)" "$(mainargs)"

image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: insert-arg
	@echo [SOC]
	@echo $(SOCFLAGS)
	@echo $(IMAGE)
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) sim ARGS="$(SOCFLAGS)"  IMG=$(IMAGE).bin




.PHONY: insert-arg clean