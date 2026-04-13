
#include "hw_def.h"
#include "stm32f4xx_hal.h"
#include "uart.h"
#include <stdint.h>


void apInit(void){
    hwInit();
}
void apMain(void){

    uartPrintf(0, "Hello World!\r\n");
    while(1){
        
        if(uartAvailable(0)>0){
            uint8_t ch = uartRead(0);

            uartPrintf(0,"%c", ch);
        }
    }
}
