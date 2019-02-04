///////////////////////////////////////////////
// This is the main file that will be called //
// at the start                              //
///////////////////////////////////////////////

#include "main_rtos_program.h"

// Xilinx Includes
#include "xil_printf.h"
#include "xparameters.h" 
#include "xgpio.h"
#include "portmacro.h"

// FreeRTOS Includes
#include "FreeRTOS.h"
#include "task.h"
#include "FreeRTOS_CLI.h"

// Zybo UART Driver for FreeRTOS+CLI
#include "zybo_uart_driver.h"


void main_rtos_program() {

    vUARTCommandConsoleStart( mainUART_COMMAND_CONSOLE_STACK_SIZE, mainUART_COMMAND_CONSOLE_TASK_PRIORITY );

    vTaskStartScheduler();


    while(1);
}
