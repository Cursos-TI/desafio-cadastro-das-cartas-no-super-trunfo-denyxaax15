#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char nomeC1[50], nomeC2[50];
    int popul1, popul2;
    float area1, area2;
    float pib1, pib2;
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

    // Dados CARTA 1

    printf("\nDADOS DA CARTA 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeC1);
    printf("População da cidade: %d\n", popul1);
    printf("Área da cidade: %.1f km²\n", area1);
    printf("PIB da cidade: %.1f\n", pib1);
    printf("Número de pontos turísticos da cidade: %i\n", pontoT1);

    // Dados CARTA 2

    printf("\nDADOS DA CARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeC2);
    printf("População da cidade: %d\n", popul2);
    printf("Área da cidade: %.1f km²\n", area2);
    printf("PIB da cidade: %.1f\n", pib2);
    printf("Número de pontos turísticos da cidade: %i\n", pontoT2);
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
