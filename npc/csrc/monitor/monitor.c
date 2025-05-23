#include <stdlib.h>
#include <stdio.h>
#include <debug.h>
#include <defs.h>   //api

static void welcome() {
  Log("Trace and IRingTrace: %s", MUXDEF(CONFIG_TRACE,        ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  Log("MemoryTrace:          %s", MUXDEF(CONFIG_MEMORY_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  Log("FuncTrace:            %s", MUXDEF(CONFIG_FUNC_TRACE,   ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  Log("DeviceTrace:          %s", MUXDEF(CONFIG_DEVICE_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If ITrace and MemoryTrace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-npc!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
}



static char *img_file = NULL;
static char *mrom_file = NULL;
static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *elf_file = NULL;
static int   difftest_port = 1234;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }
  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

#include <getopt.h> 
static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"elf"      , required_argument, NULL, 'e'},
    {"mrom"     , required_argument, NULL, 'm'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:m:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 'e': elf_file = optarg; break;
      case 'm': mrom_file = optarg;printf("morm_img = %s\n",mrom_file); break;
      case 1: img_file = optarg;printf("img_file = %s\n",img_file); return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\t-e,--elf=FILE           parse elf form FILE\n");
        printf("\t-m,--mrom=FILE          load mrom instr to FILE\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

static const uint32_t img [] = {  
  0x00100893, //addi, x17 = 1
  0x00200113, //addi, x2 = 2
  0x00100073, //ebreak
  0x00200113,
  0x00200113,
};
//------------------------------------------mrom img--------------------------------------
static const uint32_t mrom_img [] = {  
  0x00100073, //ebreak
};

extern uint8_t* guest_to_mrom(paddr_t paddr);
void load_builded_img_and_mrom(){
 memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
 memcpy(guest_to_mrom(CONFIG_MROM), mrom_img, sizeof(mrom_img));
}

static long load_mrom() {
  if (mrom_file == NULL) {
    Log("No mrom-image is given. Use the default build-in mrom.");
    return 0;
  }
  FILE *fp = fopen(mrom_file, "rb");
  Assert(fp, "Can not open '%s'", mrom_file);
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  Log("The image is %s, size = %ld", mrom_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_mrom(CONFIG_MROM), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

//--------------------------------------------------------------------------------------
long mrom_size = 0;
void init_monitor(int argc, char **argv){
  parse_args(argc, argv);
  init_rand();
  init_log(log_file);
  init_mem();
  load_builded_img_and_mrom();
  long img_size = load_img();
  mrom_size = load_mrom();
  npc_init();
  init_difftest(diff_so_file,img_size, difftest_port);
//  init_trace();
  init_sdb();
  init_disasm("riscv32-pc-linux-gnu");
  welcome();
}

