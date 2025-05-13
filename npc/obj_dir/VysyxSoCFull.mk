# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VysyxSoCFull.mk

default: VysyxSoCFull

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VysyxSoCFull
# Module prefix (from --prefix)
VM_MODPREFIX = VysyxSoCFull
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I/home/hh/ysyx-workbench/npc/csrc/include -I/home/hh/ysyx-workbench/npc/csrc/include/utils -I/home/hh/ysyx-workbench/npc/include/generated -I/home/hh/ysyx-workbench/npc/vsrc/pipeline_cpu -I/home/hh/ysyx-workbench/npc/obj_dir -I/home/hh/ysyx-workbench/ysyxSoC/perip/uart16550/rtl -I/home/hh/ysyx-workbench/ysyxSoC/perip/spi/rtl \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lreadline \
	-lhistory \
	-ldl \
	-pie \
	-lLLVM-14 \
	/usr/lib/x86_64-linux-gnu/libreadline.so \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	cpu \
	cpu_exec \
	difftest \
	main \
	memory \
	monitor \
	expr \
	sdb \
	watchpoint \
	dpi \
	npc_state \
	sim \
	instr_trace \
	disasm \
	log \
	logo \
	timer \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/hh/ysyx-workbench/npc/csrc \
	/home/hh/ysyx-workbench/npc/csrc/cpu \
	/home/hh/ysyx-workbench/npc/csrc/difftest \
	/home/hh/ysyx-workbench/npc/csrc/memory \
	/home/hh/ysyx-workbench/npc/csrc/monitor \
	/home/hh/ysyx-workbench/npc/csrc/monitor/sdb \
	/home/hh/ysyx-workbench/npc/csrc/sim \
	/home/hh/ysyx-workbench/npc/csrc/trace \
	/home/hh/ysyx-workbench/npc/csrc/utils \


### Default rules...
# Include list of all generated classes
include VysyxSoCFull_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

cpu.o: /home/hh/ysyx-workbench/npc/csrc/cpu/cpu.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
cpu_exec.o: /home/hh/ysyx-workbench/npc/csrc/cpu/cpu_exec.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
difftest.o: /home/hh/ysyx-workbench/npc/csrc/difftest/difftest.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main.o: /home/hh/ysyx-workbench/npc/csrc/main.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
memory.o: /home/hh/ysyx-workbench/npc/csrc/memory/memory.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
monitor.o: /home/hh/ysyx-workbench/npc/csrc/monitor/monitor.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/hh/ysyx-workbench/npc/csrc/monitor/sdb/expr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/hh/ysyx-workbench/npc/csrc/monitor/sdb/sdb.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
watchpoint.o: /home/hh/ysyx-workbench/npc/csrc/monitor/sdb/watchpoint.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dpi.o: /home/hh/ysyx-workbench/npc/csrc/sim/dpi.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
npc_state.o: /home/hh/ysyx-workbench/npc/csrc/sim/npc_state.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sim.o: /home/hh/ysyx-workbench/npc/csrc/sim/sim.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
instr_trace.o: /home/hh/ysyx-workbench/npc/csrc/trace/instr_trace.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: /home/hh/ysyx-workbench/npc/csrc/utils/disasm.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
log.o: /home/hh/ysyx-workbench/npc/csrc/utils/log.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
logo.o: /home/hh/ysyx-workbench/npc/csrc/utils/logo.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
timer.o: /home/hh/ysyx-workbench/npc/csrc/utils/timer.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
VysyxSoCFull: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
