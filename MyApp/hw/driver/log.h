#ifndef _HW_DRIVER_LOG_H_
#define _HW_DRIVER_LOG_H_

#include "hw_def.h"
#include "log_def.h"

bool logInit();
void logSetLevel(uint8_t level);
uint8_t logGetLevel();



#endif //_HW_DRIVER_LOG_H_