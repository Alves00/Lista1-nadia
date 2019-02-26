#include "stdio.h"

main()
{
    int anoNasc, anoAtual;
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    do{
        printf("Digite o ano de nascimento: ");
        scanf("%d", &anoNasc);
        if(anoNasc > anoAtual){
            printf("Seu ano de nascimento deve ser menor que o ano atual! \n");
        }
    }while(anoNasc > anoAtual);

    printf("A idade e: %d anos \n", anoAtual - anoNasc);
    printf("A idade em 2020: %d anos", 2020 - anoNasc);
}

