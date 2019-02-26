#include "stdio.h"

main()
{
    float n1, n2, n3, n4, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    while(n1 <= 0 || n1 >=10){
        printf("A nota deve ser maior ou igual a zero, e menor ou igual a dez. Digite a primeira nota novamente: ");
        scanf("%f", &n1);
    }
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    while(n2 <= 0 || n2 >=10){
        printf("A nota deve ser maior ou igual a zero, e menor ou igual a dez. Digite a segunda nota novamente: ");
        scanf("%f", &n2);
    }
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    while(n3 <= 0 || n3 >=10){
        printf("A nota deve ser maior ou igual a zero, e menor ou igual a dez. Digite a terceira nota novamente: ");
        scanf("%f", &n3);
    }
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);
    while(n4 <= 0 || n4 >=10){
        printf("A nota deve ser maior ou igual a zero, e menor ou igual a dez. Digite a quarta nota novamente: ");
        scanf("%f", &n4);
    }
    media = (n1 + n2 + n3 + n4) / 4;

    if(media >= 5){
        printf("Alunx aprovadx, a media e: %.1f\n", media);
    }
    else{
        printf("Alunx reprovadx, a media e: %.1f\n", media);
    }
}

