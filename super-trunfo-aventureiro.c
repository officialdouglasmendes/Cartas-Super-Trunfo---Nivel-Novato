#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Bloco 1: Código da Batalha Completa e Interativa
    char bufferDeEntrada[100];

    char estado1;
    char codigoCarta1[4];
    char nomeCidade1[50];
    unsigned long int populacao1 = 0;
    float area1 = 0.0;
    float pib1 = 0.0;
    int pontosTuristicos1 = 0;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    unsigned long int populacao2 = 0;
    float area2 = 0.0;
    float pib2 = 0.0;
    int pontosTuristicos2 = 0;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

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
    sscanf(bufferDeEntrada, "%lu", &populacao1);

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
    sscanf(bufferDeEntrada, "%lu", &populacao2);

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
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    printf("\n\n==============================\n");
    printf("  RESULTADO DA BATALHA\n");
    printf("==============================\n");

    printf("\nComparação de Cartas:\n");

    int vitoria_pop = populacao1 > populacao2;
    int vitoria_area = area1 > area2;
    int vitoria_pib = pib1 > pib2;
    int vitoria_pontos = pontosTuristicos1 > pontosTuristicos2;
    int vitoria_dens = densidade1 < densidade2;
    int vitoria_pib_pc = pibPerCapita1 > pibPerCapita2;
    int vitoria_poder = superPoder1 > superPoder2;

    printf("População: Carta %d venceu (%d)\n", vitoria_pop ? 1 : 2, vitoria_pop);
    printf("Área: Carta %d venceu (%d)\n", vitoria_area ? 1 : 2, vitoria_area);
    printf("PIB: Carta %d venceu (%d)\n", vitoria_pib ? 1 : 2, vitoria_pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", vitoria_pontos ? 1 : 2, vitoria_pontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vitoria_dens ? 1 : 2, vitoria_dens);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vitoria_pib_pc ? 1 : 2, vitoria_pib_pc);
    printf("Super Poder: Carta %d venceu (%d)\n", vitoria_poder ? 1 : 2, vitoria_poder);


    // Bloco 2: Código da Batalha Simples com Cartas Pré-Definidas (Acrescentado)
    printf("\n\n\n========================================\n");
    printf("  DEMONSTRAÇÃO COM CARTAS PRÉ-DEFINIDAS   \n");
    printf("========================================\n\n");

    char hc_estado1[] = "SP";
    char hc_codigoCarta1[] = "A01";
    char hc_nomeCidade1[] = "São Paulo";
    int hc_populacao1 = 12396372;
    float hc_area1 = 1521.11;
    float hc_pib1 = 763.8;
    int hc_pontosTuristicos1 = 150;

    char hc_estado2[] = "RJ";
    char hc_codigoCarta2[] = "B01";
    char hc_nomeCidade2[] = "Rio de Janeiro";
    int hc_populacao2 = 6775561;
    float hc_area2 = 1200.32;
    float hc_pib2 = 358.5;
    int hc_pontosTuristicos2 = 200;

    float hc_densidade1, hc_pibPerCapita1;
    float hc_densidade2, hc_pibPerCapita2;

    hc_densidade1 = (float)hc_populacao1 / hc_area1;
    hc_pibPerCapita1 = (hc_pib1 * 1000000000) / hc_populacao1;

    hc_densidade2 = (float)hc_populacao2 / hc_area2;
    hc_pibPerCapita2 = (hc_pib2 * 1000000000) / hc_populacao2;
    
    printf("Comparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", hc_nomeCidade1, hc_estado1, hc_populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", hc_nomeCidade2, hc_estado2, hc_populacao2);
    printf("----------------------------------------\n");

    if (hc_populacao1 > hc_populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", hc_nomeCidade1);
    } else if (hc_populacao2 > hc_populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", hc_nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
