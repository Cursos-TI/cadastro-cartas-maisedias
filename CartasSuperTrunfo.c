#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Nível aventureiro
// Objetivo: ler duas cartas, calcular Densidade Populacional e PIB per capita,
// e exibir tudo formatado. Sem laços, sem if/else.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Carta 1
    char estado1;
    char codigo1[4];      // ex: A01 (3 chars + '\0')
    char cidade1[50];
    int  populacao1;
    float area1;          // km²
    float pib1;           // em bilhões de reais
    int  pontos1;
    float densidade1;     // hab/km²
    float pib_per_capita1;// reais por habitante

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int  populacao2;
    float area2;
    float pib2;           
    int  pontos2;
    float densidade2;
    float pib_per_capita2;

  // Área para entrada de dados

// Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // ================================
    // Cálculos (sem if, sem laço)
    // ================================
    // Densidade = população / área
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    // PIB per capita = (PIB em reais) / população
    // Obs.: entrada do PIB está em BILHÕES de reais, então multiplicamos por 1e9
    pib_per_capita1 = (pib1 * 1e9f) / (float)populacao1;
    pib_per_capita2 = (pib2 * 1e9f) / (float)populacao2;
  
  // Área para exibição dos dados da cidade

  printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);


return 0;
} 
