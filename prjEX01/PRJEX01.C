#include "stdio.h"

main()
{
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    printf("O sucessor e: %d\n", x+1);
    printf("O antecessor e: %d", x-1);
}

