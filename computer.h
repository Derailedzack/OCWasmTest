#include "config.h"
OC_EXTERN(COMPUTER_MOD_NAME,beep) void beep(unsigned long freq,unsigned long dur);
OC_EXTERN(COMPUTER_MOD_NAME,beepPattern) void beep_pattern(const char* freq,unsigned long dur);
OC_EXTERN (COMPUTER_MOD_NAME,debug)  unsigned long debug(unsigned char* address,size_t size);

//__attributr
