#ifndef MODBUS_H_
#define MODBUS_H_

#include "stm32f4xx_hal.h"

// Function prototypes
void Modbus_Send(uint8_t *frame, uint16_t len);
void Modbus_ReadHoldingRegisters(uint16_t start_address, uint16_t num_regs);

#endif /* MODBUS_H_ */
