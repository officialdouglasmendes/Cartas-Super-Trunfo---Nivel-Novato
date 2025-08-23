#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char bufferDeEntrada[100];

    char estado1;
    char codigoCarta1[4];
    char nomeCidade1[50];
    int populacao1 = 0;
    float area1 = 0.0;
    float pib1 = 0.0;
    int pontosTuristicos1 = 0;
    float densidade1;
    float pibPerCapita1;

    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2 = 0;
    float area2 = 0.0;
    float pib2 = 0.0;
    int pontosTuristicos2 = 0;
    float densidade2;
    float pibPerCapita2;

    printf("--- CADASTRO DA CARTA 1 ---\n");

    printf("Digite o Estado (uma letra de A a H): ");
    fgets(bufferDeEntrada, sizeof(bufferDeEntrada), stdin);
    sscanf(bufferDeEntrada, " %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    fgets(bufferDeEntrada, sizeof(bufferDeEntrada), stdin);
    sscanf(bufferDeEntrada, "%s", codigoCarta1);

    printf("Digite o Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    printf("Digite a População: ");
    fgets(bufferDeEntrada, sizeof(bufferDeEntrada), stdin);
    sscanf(bufferDeEntrada, "%d", &populacao1);

    printf("Digite a Área (em km²): ");
    fgets(bufferDeEntrada, sizeof(bufferDeEntrada), stdin);
    sscanf(bufferDeEntrada, "%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    fgets(bufferDeEntrada, sizeof(bufferDeEntrada), stdin);
    sscanf(bufferDeEntrada, "%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    fgets(bufferDeEntrada, sizeof(bufferDeEntrada), stdin);
    sscanf(bufferDeEntrada, "%d", &pontosTuristicos1);

    printf("\n--- CADASTRO DA CARTA 2 ---\n");

    printf("Digite o Estado (uma letra de A a H): ");
    fgets(bufferDeEntrada, sizeof(bufferDeEntrada), stdin);
    sscanf(bufferDeEntrada, " %c", &estado2);

    printf("Digite o Código da Carta (ex: B02): ");
    fgets(bufferDeEntrada, sizeof(bufferDeEntrada), stdin);
    sscanf(bufferDeEntrada, "%s", codigoCarta2);

    printf("Digite o Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("Digite a População: ");
    fgets(bufferDeEntrada, sizeof(bufferDeEntrada), stdin);
    sscanf(bufferDeEntrada, "%d", &populacao2);

    printf("Digite a Área (em km²): ");
    fgets(bufferDeEntrada, sizeof(bufferDeEntrada), stdin);
    sscanf(bufferDeEntrada, "%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    fgets(bufferDeEntrada, sizeof(bufferDeEntrada), stdin);
    sscanf(bufferDeEntrada, "%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    fgets(bufferDeEntrada, sizeof(bufferDeEntrada), stdin);
    sscanf(bufferDeEntrada, "%d", &pontosTuristicos2);

    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    printf("\n\n==============================\n");
    printf("  CARTAS DO SUPER TRUNFO\n");
    printf("==============================\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
