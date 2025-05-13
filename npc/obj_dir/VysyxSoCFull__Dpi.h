// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/hh/ysyx-workbench/npc/vsrc/pipeline_cpu/write_back.v:21:30
    extern void dpi_ebreak(int pc);
    // DPI import at /home/hh/ysyx-workbench/npc/vsrc/pipeline_cpu/fetch.v:9:30
    extern int dpi_mem_read(int addr, int len, int instr);
    // DPI import at /home/hh/ysyx-workbench/npc/vsrc/pipeline_cpu/memory.v:24:30
    extern void dpi_mem_write(int addr, int data, int len, int instr);
    // DPI import at /home/hh/ysyx-workbench/npc/vsrc/pipeline_cpu/regfile.v:21:30
    extern void dpi_read_regfile(const svOpenArrayHandle a);
    // DPI import at /home/hh/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/hh/ysyx-workbench/npc/vsrc/pipeline_cpu/fetch.v:10:31
    extern void mrom_read(int addr, int* data);

#ifdef __cplusplus
}
#endif

#endif  // guard
