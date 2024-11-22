#include<stddef.h>
#include "computer.h"


 __attribute__((export_name("run"))) int run(int){
       char* buf = "test\0";
        //beep(32,1);
        debug(buf,sizeof(buf));
        return 0;
}