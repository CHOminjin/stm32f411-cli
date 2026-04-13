
#include "hw_def.h"
#include "stm32f4xx_hal.h"
#include "uart.h"
#include "cli.h"
#include <stdint.h>


void apInit(void){
    hwInit();
}
void apMain(void){

    uartPrintf(0, "Hello World!\r\n");
    while(1){
        cliMain();
    }
    
}
