#ifndef __DEBUG_H__
#define __DEBUG_H__

#include <stdio.h> //stdio.h方便别人debug
#include <macro.h>
#include <utils.h>
#include <assert.h>

#define Log(format, ...) \
    _Log(ANSI_FMT("[%s:%d %s] " format, ANSI_FG_BLUE) "\n", __FILE__, __LINE__, __func__, ## __VA_ARGS__)

#define Assert(cond, format, ...) \
  do { \
    if (!(cond)) { \
      MUXDEF(CONFIG_TARGET_AM, printf(ANSI_FMT(format, ANSI_FG_RED) "\n", ## __VA_ARGS__), \
        (fflush(stdout), fprintf(stderr, ANSI_FMT(format, ANSI_FG_RED) "\n", ##  __VA_ARGS__))); \
      IFNDEF(CONFIG_TARGET_AM, extern FILE* log_fp; fflush(log_fp)); \
      assert(cond); \
    } \
  } while (0)

#define panic(format, ...) Assert(0, format, ## __VA_ARGS__)
#define TODO() panic("please implement me")

//      extern void assert_fail_msg(); 
//      assert_fail_msg(); 
#endif
