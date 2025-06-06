#include <stdio.h>
    // Continuação do último desafio
    // Adcionado as variáveis:
    // "pibpc" (PIB Per Capita) e "densip" (Densidade Populacional)
    // Atualizado as exibições para as informações coletadas nas novas variáveis

int main () {
    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char nomeC1[50], nomeC2[50];
    int popul1, popul2;
    float area1, area2;
    float pib1, pib2;
    float densiP1, densiP2;
    float pibpc1, pibpc2;
    int pontoT1, pontoT2;

    // Carta 1:

    printf("Carta 1: \n");

    printf("\nInsira o nome do Estado: \n");
    scanf("%s", &estado1);
    printf("\nDigite o código da carta: \n");
    scanf("%s", &codigo1);
    printf("\nDigite o nome da cidade do Estado: \n");
    scanf("%s", &nomeC1);
    printf("\nDigite a população da cidade: \n");
    scanf("%d", &popul1);
    printf("\nDigite o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("\nDigite a área da cidade: \n");
    scanf("%f", &area1);
    printf("\nDigite o número de pontos turísticos da cidade: \n");
    scanf("%i", &pontoT1);  

    // Carta 2

    printf("\nCarta 2: \n");

    printf("\nInsira o nome do Estado: \n");
    scanf("%s", &estado2);
    printf("\nDigite o código da carta: \n");
    scanf("%s", &codigo2);
    printf("\nDigite o nome da cidade do Estado: \n");
    scanf("%s", &nomeC2);
    printf("\nDigite a população da cidade: \n");
    scanf("%d", &popul2);
    printf("\nDigite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("\nDigite a área da cidade: \n");
    scanf("%f", &area2);
    printf("\nDigite o número de pontos turísticos da cidade: \n");
    scanf("%i", &pontoT2);

    densiP1 = popul1 / area1;
    pibpc1 = pib1 / popul1;

    densiP2 = popul2 / area2;
    pibpc2 = pib2 / popul2;

    // Dados CARTA 1

    printf("\nDADOS DA CARTA 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeC1);
    printf("População da cidade: %d\n", popul1);
    printf("Área da cidade: %.1f km²\n", area1);
    printf("PIB da cidade: %.1f\n", pib1);
    printf("Número de pontos turísticos da cidade: %i\n", pontoT1);
    printf("A densidade populacional da cidade é: %.2f\n", densiP1);
    printf("O PIB per capita da cidade é: %f\n", pibpc1);

    // Dados CARTA 2

    printf("\nDADOS DA CARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeC2);
    printf("População da cidade: %d\n", popul2);
    printf("Área da cidade: %.1f km²\n", area2);
    printf("PIB da cidade: %.1f\n", pib2);
    printf("Número de pontos turísticos da cidade: %i\n", pontoT2);
    printf("A densidade populacional da cidade é: %.2f\n", densiP2);
    printf("O PIB per capita da cidade é: %f\n", pibpc2);

    return 0;

}