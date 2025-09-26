#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Declaração das variáveis para duas cartas
    char nome1[50], estado1[30], nome2[50], estado2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada de dados da Carta 1
    printf("Carta 1:\n");
    printf("Nome: "); scanf(" %[^\n]", nome1);
    printf("Estado: "); scanf(" %[^\n]", estado1);
    printf("Populacao: "); scanf("%lu", &populacao1);
    printf("Area (km^2): "); scanf("%f", &area1);
    printf("PIB (bilhoes): "); scanf("%f", &pib1);
    printf("Pontos Turisticos: "); scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Nome: "); scanf(" %[^\n]", nome2);
    printf("Estado: "); scanf(" %[^\n]", estado2);
    printf("Populacao: "); scanf("%lu", &populacao2);
    printf("Area (km^2): "); scanf("%f", &area2);
    printf("PIB (bilhoes): "); scanf("%f", &pib2);
    printf("Pontos Turisticos: "); scanf("%d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Cálculo do PIB per Capita
    float pibPerCapita1 = (pib1 * 1e9) / populacao1; // Convertendo PIB para reais
    float pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // Cálculo do Super Poder
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // Comparações (1 = Carta 1 vence, 0 = Carta 2 vence)
    int vPopulacao = (populacao1 > populacao2) ? 1 : 0;
    int vArea = (area1 > area2) ? 1 : 0;
    int vPib = (pib1 > pib2) ? 1 : 0;
    int vPontos = (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0;
    int vDensidade = (densidade1 < densidade2) ? 1 : 0; // menor densidade vence
    int vPibCapita = (pibPerCapita1 > pibPerCapita2) ? 1 : 0;
    int vSuperPoder = (superPoder1 > superPoder2) ? 1 : 0;

    // Exibição dos resultados
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", vPopulacao ? 1 : 2, vPopulacao);
    printf("Area: Carta %d venceu (%d)\n", vArea ? 1 : 2, vArea);
    printf("PIB: Carta %d venceu (%d)\n", vPib ? 1 : 2, vPib);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", vPontos ? 1 : 2, vPontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vDensidade ? 1 : 2, vDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vPibCapita ? 1 : 2, vPibCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", vSuperPoder ? 1 : 2, vSuperPoder);

    return 0;
}

