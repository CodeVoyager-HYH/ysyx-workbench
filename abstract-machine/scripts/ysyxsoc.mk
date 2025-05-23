include $(AM_HOME)/scripts/isa/riscv.mk
include $(AM_HOME)/scripts/platform/ysyxsoc.mk
COMMON_CFLAGS += -march=rv32i_zicsr -mabi=ilp32   # overwrite
LDFLAGS       += -melf32lriscv                    # overwrite

AM_SRCS += riscv/soc/libgcc/div.S \
           riscv/soc/libgcc/muldi3.S \
           riscv/soc/libgcc/multi3.c \
           riscv/soc/libgcc/ashldi3.c \
           riscv/soc/libgcc/unused.c