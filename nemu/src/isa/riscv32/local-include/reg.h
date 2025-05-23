/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#ifndef __RISCV_REG_H__
#define __RISCV_REG_H__

#include <common.h>
#include <isa.h>

#define MSRARUS 0x300
#define MTVEC   0x305
#define MEPC    0x341
#define MCASUSE 0x342

extern CPU_state cpu ;
static inline int check_reg_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < MUXDEF(CONFIG_RVE, 16, 32)));
  return idx;
}

#define gpr(idx)  (cpu.gpr[check_reg_idx(idx)])


static inline const char* reg_name(int idx) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}

static inline word_t *check_csrs_idx(word_t idx) {
  switch (idx)
  {
  case MSRARUS://mstatus
    return &cpu.csrs.mstatus;
    break;
  case MTVEC:
    return &cpu.csrs.mtvec;
    break;
  case MEPC:
    return &cpu.csrs.mepc;    
    break;
  case MCASUSE:
    return &cpu.csrs.mcause;
    break;
  default:
    Assert(0,"ERROR addr in csrs\n");
    break;
  }

}
#define csrs(idx) (*check_csrs_idx(idx)) 
#endif
