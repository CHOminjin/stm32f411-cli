
#include "hw_def.h"
#include <stdint.h>


void apInit(void){
    hwInit();
}
void apMain(void){
    while(1){

        ledOn();
        HAL_Delay(1000);
        ledOff();
        HAL_Delay(1000);

        uartWrite(0,(uint8_t*)"HELLOW",7);
        
    

    }
}
