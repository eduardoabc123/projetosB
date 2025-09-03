#include <stdio.h>
int main()
{

    // Define as Variaveis
    float densidade1, densidade2, pibp1, pibp2;
    float pib1, pib2, area1, area2;
    int populacao1, populacao2, pturisticos1, pturisticos2;
    char estado1, estado2, ccarta1[5], ccarta2[5], ncidade1[100], ncidade2[100];

    // Solicita informalções da Carta 1
    printf("--------------------Carta 1--------------------\n\n");
    printf("Digite as informacoes da Carta 1\n\n");

    printf("Digite a Letra do Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("\nDigite o Codigo do Estado (01-04): ");
    scanf("%s", &ccarta1);

    printf("\nDigite o Nome da Cidade: ");
    scanf("%s", &ncidade1);

    printf("\nDigite a Populacao: ");
    scanf("%d", &populacao1);

    printf("\nDigite a Area em KM Quadrados: ");
    scanf("%f", &area1);

    printf("\nDigite o PIB em Bilhoes: ");
    scanf("%f", &pib1);

    printf("\nQuantidade de Pontos Turisticos: ");
    scanf("%d", &pturisticos1);

    // Solicita informações da Carta 2
    printf("--------------------Carta 2--------------------\n\n");
    printf("Digite as informacoes da Carta 2\n\n");

    printf("Digite a Letra do Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("\nDigite o Codigo do Estado (01-04): ");
    scanf("%s", &ccarta2);

    printf("\nDigite o Nome da Cidade: ");
    scanf("%s", &ncidade2);

    printf("\nDigite a Populacao: ");
    scanf("%d", &populacao2);

    printf("\nDigite a Area em KM Quadrados: ");
    scanf("%f", &area2);

    printf("\nDigite o PIB em Bilhoes: ");
    scanf("%f", &pib2);

    printf("\nQuantidade de Pontos Turisticos: ");
    scanf("%d", &pturisticos2);

    // Faz calculos de Densidade e PIB per Capita

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibp1 = pib1 / populacao1;
    pibp2 = pib2 / populacao2;

    
    // Exibe informações Digitadas da Carta 1
    printf("--------------------Carta 1--------------------\n\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, ccarta1);
    printf("Nome da cidade: %s\n", ncidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f Bilhoes de Reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pturisticos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibp1);

    // Exibe informações Digitadas da Carta 2
    printf("--------------------Carta 2--------------------\n\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, ccarta2);
    printf("Nome da cidade: %s\n", ncidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f Bilhoes de Reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pturisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibp2);

    return 0;
}
