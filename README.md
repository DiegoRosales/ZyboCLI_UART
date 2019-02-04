# ZyboCLI_UART
![FreeRTOS](https://www.freertos.org/logo.jpg)

----
I am very new to the FreeRTOS world and I've had lots of trouble on finding the right information for me, which is why I have gathered example code from different places and placed it in this repo.

As I start to master this FreeRTOS thing, I'll expand this repo with better explanations that will help noobs like me ramp up faster.

As of right now, the only thing you need to do to enable this in your project is to include the "zybo_uart_driver.h" like in the example provided here and register the prvUARTCommandConsoleTask task in the FreeRTOS.

Right now this code is capable of initializing the UART port and starting a dummy CLI session over UART.

![DummyTerminal](https://i.imgur.com/1IdFYEu.png)

**Note**
For this to work, you need to download the FreeRTOS+CLI code as well as the FreeRTOS base code from the FreeRTOS Website. I'm only providing the extra stuff that you won't find as easily.

----
