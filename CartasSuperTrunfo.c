#include <stdio.h>

int main() {
 
    char estado[50];
    char codigo[3];
    char nome_cidade[50];
    float populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    
    printf("=== Carta 1 ===\n");

    printf("Informe o Estado:");
    scanf("%s", estado);

    printf("Informe o codigo:");
    scanf("%s", codigo);

    printf("Informe o Nome da cidade:");
    scanf("%s", nome_cidade);

    printf("Informe a população:");
    scanf("%f", &populacao);

    printf("Informe a área:");
    scanf("%f", &area);

    printf("Informe o pib:");
    scanf("%f", &pib);

    printf("Pontos Turísticos:");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("estado: %s\n", estado);
    printf("código: %s\n", codigo);
    printf("nome: %s\n", nome_cidade);
    printf("população: %f\n", populacao);
    printf("area: %.2f km²\n", area);
    printf("pib: %.1f\n", pib);
    printf("pontos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per capita: %.f Reais\n", pib_per_capita);


    printf("=== Carta 2 ===\n");

    char estado2[50];
    char codigo2[3];
    char nome_cidade2[50];
    float populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    printf("Informe o Estado:");
    scanf("%s", estado2);

    printf("Informe o codigo:");
    scanf("%s", codigo2);

    printf("Informe o Nome da cidade:");
    scanf("%s", nome_cidade2);

    printf("Informe a população:");
    scanf("%f", &populacao2);

    printf("Informe a área:");
    scanf("%f", &area2);

    printf("Informe o pib:");
    scanf("%f", &pib2);

    printf("Pontos Turísticos:");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    printf("estado: %s\n", estado2);
    printf("código: %s\n", codigo2);
    printf("nome: %s\n", nome_cidade2);
    printf("população: %f\n", populacao2);
    printf("area: %.2f km²\n", area2);
    printf("pib: %.1f\n", pib2);
    printf("pontos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.f Reais\n", pib_per_capita2);
   
    return 0;
}
