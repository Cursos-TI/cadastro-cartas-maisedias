#include <stdio.h>

// Super Trunfo - Países
// Nível Mestre: comparação de cartas + "Super Poder"
// Regras:
// - População agora é unsigned long int
// - Densidade = população / área
// - PIB per capita = (PIB_em_bilhoes * 1e9) / população
// - Super Poder = população + área + PIB_em_bilhoes + pontos + PIB_per_capita + (1 / densidade)
//   Obs.: soma envolve tipos diferentes; converta para float quando fizer sentido
// - Vence por atributo: MAIOR valor, exceto densidade (MENOR vence)

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // ---------- Carta 1 ----------
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1; // em bilhões de reais
    int pontos1;

    // ---------- Carta 2 ----------
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2; // em bilhões de reais
    int pontos2;
  
  // Área para entrada de dados

// Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // ---------- Cálculos ----------
    // Densidade
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    // PIB per capita (PIB vem em bilhões)
    float pib_per_capita1 = (pib1 * 1e9f) / (float)populacao1;
    float pib_per_capita2 = (pib2 * 1e9f) / (float)populacao2;

    // Super Poder (atenção às conversões)
    float super1 = (float)populacao1
                 + area1
                 + pib1               // continua em "bilhões" para manter coerência interna
                 + (float)pontos1
                 + pib_per_capita1
                 + (1.0f / densidade1);

    float super2 = (float)populacao2
                 + area2
                 + pib2
                 + (float)pontos2
                 + pib_per_capita2
                 + (1.0f / densidade2);

    // ---------- Exibição das cartas ----------
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super2);

    // ---------- Comparações ----------
    // As expressões relacionais já produzem 1 (verdadeiro) ou 0 (falso).
    int v_pop       = (populacao1 > populacao2);
    int v_area      = (area1 > area2);
    int v_pib       = (pib1 > pib2);
    int v_pontos    = (pontos1 > pontos2);
    int v_densidade = (densidade1 < densidade2); // menor vence
    int v_pc        = (pib_per_capita1 > pib_per_capita2);
    int v_super     = (super1 > super2);
  
  // Área para exibição dos dados da cidade

 printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", v_pop ? 1 : 2, v_pop);
    printf("Area: Carta %d venceu (%d)\n",       v_area ? 1 : 2, v_area);
    printf("PIB: Carta %d venceu (%d)\n",        v_pib ? 1 : 2, v_pib);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", v_pontos ? 1 : 2, v_pontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", v_densidade ? 1 : 2, v_densidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", v_pc ? 1 : 2, v_pc);
    printf("Super Poder: Carta %d venceu (%d)\n", v_super ? 1 : 2, v_super);


return 0;
} 
