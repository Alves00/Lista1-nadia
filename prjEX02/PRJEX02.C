#include "stdio.h"

main()
{
    float x;
    printf("Digite um numero qualquer: ");
    scanf("%f", &x);

    printf("O valor reajustado e: %.2f\n", x * 1.10);
}

