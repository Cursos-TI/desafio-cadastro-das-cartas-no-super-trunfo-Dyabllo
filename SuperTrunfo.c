#include <stdio.h>

int main (){
    printf("Desafio Super Trunfo - Países \n");
    printf("Carta 1 \n");

    char Estado[15];
    char codigo[4];
    char cidade[10];
    int populacao, pontosturisticos;
    float area, pib;

    printf("Digite o nome do Estado: \n");
    scanf("%s", Estado);

    printf("Digite o código do Estado: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos);

    printf("Carta 2 \n");

    char Estado[20], codigo[4], cidade[10];
    int populacao, pontosturisticos;
    float area, pib;

    printf("Digite o nome do Estado: \n, Digite o código do Estado: \n, Digite o nome da cidade: \n");
    scanf("%s %s %s", Estado, codigo, cidade);

    printf("Digite a população da cidade: \n, Digite os Pontos Turísticos da cidade: \n");
    scanf("%d %d", &populacao, &pontosturisticos);

    printf("Digite a área da cidade: \n, Digite o PIB da cidade: \n");
    scanf("%f %f", &area, &pib);

    return 0;
}