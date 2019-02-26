#include "stdio.h"

main()
{
    float celsius, fahrenheit;
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (1.8*celsius) + 32;

    printf("A temperatura em fahrenheits e: %.1fF", fahrenheit);
}

