#include <stdio.h>

int main (){
    printf("Desafio Super Trunfo - Países \n");
    
    //Cadastro da Carta 1
    printf("Carta 1 \n");

    char Estado[40];
    char codigo[20];
    char cidade[30];
    int populacao, pontosturisticos;
    float area, pib;

    printf("Digite o nome do Estado: \n");
    scanf(" %39s", Estado);

    printf("Digite o código do Estado: \n");
    scanf(" %19s",codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %29s", cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km2 da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos);

    //Cadastro da Carta 2
    printf("Carta 2 \n");

    char Estado2[35], codigo2[15], cidade2[25];
    int populacao2, pontosturisticos2;
    float area2, pib2;

    printf("Digite o nome do Estado: \n");
    scanf(" %34s", Estado2);

    printf("Digite o código do Estado: \n");
    scanf(" %14s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %24s", cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km2 da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos2);


    //Exibição dos Dados das Cartas
    printf("Carta 1 \n");
    printf("Estado: %s \n", Estado);
    printf("Código: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km2 \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Pontos Turísticos: %d \n", pontosturisticos);

    printf("Carta 2 \n");
    printf("Estado: %s \n", Estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km2 \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos Turísticos: %d \n", pontosturisticos2);

    return 0;
}