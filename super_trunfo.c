#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo\n");
    // Declaracao dos dados para as duas cartas
    char codigo1 [4], codigo2 [4];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

// Atributos calculados
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;

//Entrada de dados para a primeira carta

    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em Km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

//Entrada de dados para a segunda carta

    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em Km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

// Cálculos dos atributos adicionais
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

// Saída dos dados da primeira carta

    printf("\n---- Carta 1: %s ----\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.6f bilhões/habitante\n", pib_per_capita1);

// Saída dos dados da primeira carta

    printf("\n---- Carta 2: %s ----\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.6f bilhões/habitante\n", pib_per_capita2);

    return 0;

}