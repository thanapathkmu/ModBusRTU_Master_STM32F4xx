## Modbus Library for STM32 
This library provides Modbus RTU communication functionality for STM32 microcontrollers using STM32Cube HAL.

Features
Modbus Protocol Support: Implements Modbus RTU protocol for reading holding registers.
CRC Calculation: Calculates CRC-16 checksums as per Modbus specification.
UART Communication: Utilizes UART for Modbus frame transmission and reception.
Timer Integration: Configures timers for periodic Modbus requests.
Requirements
STM32Cube HAL: Ensure your STM32Cube HAL is properly configured for UART, GPIO, and Timer peripherals.
Development Environment: ARM Cortex-M development environment (e.g., STM32CubeIDE, Keil µVision, etc.).
Usage
Installation
Clone this repository or download the source files (modbus.h and modbus.c).

Add modbus.h and modbus.c to your STM32CubeIDE project (or other IDE).

Initialization
Initialize UART and Timer peripherals as per your STM32CubeMX configuration.

Include "modbus.h" in your main application file (main.c).

Call initialization functions as necessary, e.g.:

Copy code

```c
// Initialize UART and Timer
MX_USART1_UART_Init();
MX_TIM2_Init();
```

Sending Modbus Requests
To read holding registers, use Modbus_ReadHoldingRegisters function:

Copy code

```c
// Example usage to read 2 registers starting from address 0
Modbus_ReadHoldingRegisters(0x0000, 2);
```

Handling Responses
Responses are handled asynchronously in Modbus_Receive function. Ensure UART interrupt handling is configured to receive Modbus responses.

Error Handling
Use Error_Handler() function provided by STM32Cube HAL to handle errors in your application.
