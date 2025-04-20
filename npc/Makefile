#可修改选项
override ARGS ?= --log=$(BUILD_DIR)/npc-log.txt
override ARGS += --diff=$(NPC_HOME)/diff/riscv32-nemu-interpreter-so
override ARGS += --batch

# 彩色输出
COLOR_RED   := $(shell tput setaf 1)
COLOR_GREEN := $(shell tput setaf 2)
COLOR_BLUE  := $(shell tput setaf 4)
COLOR_NONE  := $(shell tput sgr0)

# 工程目录
BUILD_DIR 	 := $(NPC_HOME)/build
CPU_DIR   	 := $(NPC_HOME)/csrc
VDIR	  	 := $(NPC_HOME)/vsrc	
OBJDIR 		 := $(NPC_HOME)/obj_dir
VCOMPILE 	 := $(NPC_HOME)/obj_dir/Valu
INCLUDE_PATH := $(NPC_HOME)/csrc/include 
OBJDIR 		 := $(NPC_HOME)/obj_dir

# C文件、头文件、RTL
TOP_NAME 	:= CPU
CSRC 		:= $(shell find $(CPU_DIR) -name "*.cpp")
CSRC 		+= $(shell find $(CPU_DIR) -name "*.c")
VSRC 		:= $(wildcard $(VDIR)/*.v)
IDIR 		:= $(NPC_HOME)/include
IDIR		+= $(NPC_HOME)/$(CSRC)/include 
LIBREADLINE := $(shell find / -name "libreadline.so" 2>/dev/null)

# 编译
INCLUDE 	:= $(addprefix -I, $(IDIR))
VERILATOR 	:= verilator
CFLAGS  	:= -I $(INCLUDE)
VERILATOR_FLAGS := --cc --exe --build --trace
NPC_ARGS 	:= $(VERILATOR) $(CFLAGS) --top-module $(TOP_NAME) $(VERILATOR_FLAGS) $(VSRC) $(CSRC) $(LIBREADLINE)
IMG 		?= ins.txt
IMG_DIR 	:= $(abspath ./inst/$(notdir $(IMG)))
OBJ_DIR 	:= make -C $(NPC_HOME)/obj_dir -f  VCPU.mk  VCPU

# menuconfig
-include $(NPC_HOME)/include/config/auto.conf
-include $(NPC_HOME)/csrs/include/config/auto.conf.cmd
-include $(NEMU_HOME)/../Makefile
include $(NPC_HOME)/scripts/config.mk

remove_quote = $(patsubst "%",%,$(1))
# Extract variabls from menuconfig
GUEST_ISA ?= $(call remove_quote,$(CONFIG_ISA))
# GUEST_ISA = riscv32
ENGINE ?= $(call remove_quote,$(CONFIG_ENGINE))
# ENGINE = interprete
NAME    = $(GUEST_ISA)-npc-$(ENGINE)

#命令
all:
	@echo "Write this Makefile by your self."

sim: 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "$(COLOR_RED)[riscv32-npc] $(COLOR_NONE)"
	rm -rf $(NPC_HOME)/obj_dir
	rm -rf $(NPC_HOME)/wave.vcd
	@echo "$(COLOR_BLUE)[CSRS-编译目录] $(COLOR_NONE) $(CSRC)"
	@echo "$(COLOR_BLUE)[VSRS-编译目录] $(COLOR_NONE) $(VSRC)"
	@echo "$(COLOR_GREEN)[编译命令] $(COLOR_NONE) $(NPC_ARGS)"
	$(NPC_ARGS) 
	$(OBJ_DIR)
	$(OBJDIR)/VCPU $(ARGS)  $(IMG)	

run: 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "$(COLOR_RED)[riscv32-npc] $(COLOR_NONE)"
	rm -rf $(NPC_HOME)/obj_dir
	rm -rf $(NPC_HOME)/wave.vcd
	@echo "$(COLOR_BLUE)[CSRS-编译目录] $(COLOR_NONE) $(CSRC)"
	@echo "$(COLOR_BLUE)[VSRS-编译目录] $(COLOR_NONE) $(VSRC)"	
	@echo "$(COLOR_GREEN)[编译命令] $(COLOR_NONE) $(NPC_ARGS)"
	$(NPC_ARGS) 
	$(OBJ_DIR)
	$(OBJDIR)/VCPU $(ARGS)  

wave: sim
	@echo "$(COLOR_RED)[gtkwave-open] $(COLOR_NONE)"
	gtkwave wave.vcd
	@echo "$(COLOR_RED)[gtkwave-close] $(COLOR_NONE)"

clean:
	rm -rf $(NPC_HOME)/obj_dir
	rm -rf $(NPC_HOME)/wave.vcd	
	-rm -rf $(BUILD_DIR)
	@echo "$(COLOR_GREEN)[清理成功]$(COLOR_NONE)"

.PHONY: run sim all	 NPC_ARGS clean 