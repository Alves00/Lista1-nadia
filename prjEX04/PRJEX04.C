#include "stdio.h"

main()
{
    float horaAula, qtdeAulas, descontoInss, inss, salarioLiquido, salarioBruto;
    printf("Digite o valor da hora aula: ");
    scanf("%f", &horaAula);
    while(horaAula <= 0){
        printf("O valor da hora aula deve ser positivo! Digite novamente: ");
        scanf("%f", &horaAula);
    }
    printf("Digite a quantidade de aulas: ");
    scanf("%f", &qtdeAulas);
    while(qtdeAulas <= 0){
        printf("A quantidade de aulas deve ser maior que 0! Digite novamente: ");
        scanf("%f", &qtdeAulas);
    }
    printf("Digite o desconto do INSS: ");
    scanf("%f", &inss);

    descontoInss = (100 - inss) / 100;
    salarioBruto = horaAula * qtdeAulas;
    salarioLiquido = salarioBruto * descontoInss;

    printf("O salario liquido e: R$%.2f", salarioLiquido);
}

