#include "stdio.h"

main()
{
    float x;
    printf("Digite o preco: ");
    scanf("%f", &x);

    printf("O preco com desconto e: %.2f\n", x * 0.91);
}

