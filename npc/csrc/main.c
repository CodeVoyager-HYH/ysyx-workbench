#include <common.h>
#include <defs.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <VysyxSoCFull.h>



#include <simulator_state.h>
#include <common.h>
#include <defs.h>

int main(int argc, char **argv){
  Verilated::commandArgs(argc, argv);
  init_monitor(argc, argv);
  sdb_mainloop();
  return 0;
}
