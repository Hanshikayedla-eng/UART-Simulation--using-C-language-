#include <stdio.h>

char uart_data;      
int uart_ready = 1; 

void UART_Init()
{
    printf("UART Initialized\n");
}

void UART_Send(char data)
{
    if (uart_ready == 1)
    {
        uart_data = data;
        printf("UART Sent: %c\n", uart_data);
    }
}

int main()
{
    UART_Init();
    UART_Send('H');
    UART_Send('i');
    UART_Send('!');
    return 0;
}
