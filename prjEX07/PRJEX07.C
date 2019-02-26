#include "stdio.h"

main()
{
    float precoFab, pctLucroDist, pctImpostos, vlLucroDist, vlImpostos, vlFinal;

    printf("Digite o preco de fabrica: ");
    scanf("%f", &precoFab);
    printf("Digite a porcentagem do distribuidor: ");
    scanf("%f", &pctLucroDist);
    printf("Digite a porcentagem dos impostos: ");
    scanf("%f", &pctImpostos);

    vlLucroDist = precoFab * (1.0 - ((100 - pctLucroDist) / 100));
    vlImpostos = precoFab * (1.0 - ((100 - pctImpostos) / 100));
    vlFinal = precoFab + vlLucroDist + vlImpostos;

    printf("O lucro do distribuidor e: %.2f\n", vlLucroDist);
    printf("O valor dos impostos e: %.2f\n", vlImpostos);
    printf("O valor final do Veiculo e: %.2f", vlFinal);
}

