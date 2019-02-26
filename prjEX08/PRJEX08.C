#include "stdio.h"

main()
{
    float salarioAtual, salarioNovo;

    printf("Digite o salario atual: ");
    scanf("%f", &salarioAtual);

    if(salarioAtual < 800){
        salarioNovo = salarioAtual * 1.15;
        printf("Salario Antigo: %.2f\n", salarioAtual);
        printf("Salario Novo: %.2f\n", salarioNovo);
    }
    else{
        if(salarioAtual >= 800 && salarioAtual < 1000){
            salarioNovo = salarioAtual * 1.1;
            printf("Salario Antigo: %.2f\n", salarioAtual);
            printf("Salario Novo: %.2f\n", salarioNovo);
        }
        else{
            salarioNovo = salarioAtual * 1.05;
            printf("Salario Antigo: %.2f\n", salarioAtual);
            printf("Salario Novo: %.2f\n", salarioNovo);
        }
    }
}

