#include <stdio.h> // Biblioteca para entrada e saída de dados (printf, scanf)
#include <stdlib.h> // Biblioteca padrão

int main() {
    // Carta 1
    // Dados de entrada
    char estado1;
    char codigoCarta1[4]; 
    char nomeCidade1[50]; 
    int populacao1;
    float area1;
    float pib1; // PIB em bilhões de reais
    int pontosTuristicos1;
    // Novos dados calculados
    float densidade1;
    float pibPerCapita1;

    // Carta 2
    // Dados de entrada
    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2; // PIB em bilhões de reais
    int pontosTuristicos2;
    // Novos dados calculados
    float densidade2;
    float pibPerCapita2;

    // COLETA DE DADOS DA CARTA 1
  
    printf("--- CADASTRO DA CARTA 1 ---\n");

    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // COLETA DE DADOS DA CARTA 2
  
    printf("\n--- CADASTRO DA CARTA 2 ---\n");

    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigoCarta2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // CÁLCULOS DAS NOVAS PROPRIEDADES
    
    // Cálculos para a Carta 1
    // Para garantir a divisão de ponto flutuante, convertemos a população para float.
    densidade1 = (float)populacao1 / area1;
    // Multiplicamos o PIB por 1 bilhão para calcular o valor per capita corretamente.
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    // Cálculos para a Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // =================================================================
    // EXIBIÇÃO DAS CARTAS CADASTRADAS
    // =================================================================
    printf("\n\n==============================\n");
    printf("  CARTAS DO SUPER TRUNFO\n");
    printf("==============================\n");

    // Exibindo informações da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    // Exibição dos novos dados calculados
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibindo informações da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    // Exibição dos novos dados calculados
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
