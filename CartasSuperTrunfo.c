#include <stdio.h>

int main() {
 
    char estado[50];
    char codigo[3];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Informe o Estado:");
    scanf("%s", estado);

    printf("Informe o codigo:");
    scanf("%s", codigo);

    printf("Informe o Nome da cidade:");
    scanf("%s", nome_cidade);

    printf("Informe a população:");
    scanf("%d", &populacao);

    printf("Informe a área:");
    scanf("%f", &area);

    printf("Informe o pib:");
    scanf("%f", &pib);

    printf("Pontos Turísticos:");
    scanf("%d", &pontos_turisticos);

    printf("=== Carta 1 ===\n");

    printf("estado: %s\n", estado);
    printf("código: %s\n", codigo);
    printf("nome: %s\n", nome_cidade);
    printf("população: %d\n", populacao);
    printf("area: %.2f km²\n", area);
    printf("pib: %.1f\n", pib);
    printf("pontos: %d\n", pontos_turisticos);

    char estado2[50];
    char codigo2[3];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("Informe o Estado:");
    scanf("%s", estado2);

    printf("Informe o codigo:");
    scanf("%s", codigo2);

    printf("Informe o Nome da cidade:");
    scanf("%s", nome_cidade2);

    printf("Informe a população:");
    scanf("%d", &populacao2);

    printf("Informe a área:");
    scanf("%f", &area2);

    printf("Informe o pib:");
    scanf("%f", &pib2);

    printf("Pontos Turísticos:");
    scanf("%d", &pontos_turisticos2);

    printf("=== Carta 2 ===\n");

    printf("estado: %s\n", estado2);
    printf("código: %s\n", codigo2);
    printf("nome: %s\n", nome_cidade2);
    printf("população: %d\n", populacao2);
    printf("area: %.2f km²\n", area2);
    printf("pib: %.1f\n", pib2);
    printf("pontos: %d\n", pontos_turisticos2);
   
    return 0;
}
