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
    
    // Cálculo da Densidade Populacional e PIB per capita da Carta 1
    float densidade = (float) populacao / area;
    float pibpercapita = (float) pib / populacao;

    // Cálculo do Inverso da densidade populacional da Carta 1
    float inverso_densidade = 1 / densidade;

    //Cálculo do Super Poder da Carta 1
    float superpoder = (float) populacao + area + pib + pibpercapita + pontosturisticos + inverso_densidade;



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
    
    // Cálculo da Densidade Populacional e PIB per capita da Carta 2
    float densidade2 = (float) populacao2 / area2;
    float pibpercapita2 = (float) pib2 / populacao2;

    // Cálculo do Inverso da densidade populacional da Carta 2
    float inverso_densidade2 = 1 / densidade2;

    //Cálculo do Super Poder da Carta 2
    float superpoder2 = (float) populacao2 + area2 + pib2 + pibpercapita2 + pontosturisticos2 + inverso_densidade2;

    //Exibição dos Dados das Cartas
    printf("Carta 1 \n");
    printf("Estado: %s \n", Estado);
    printf("Código: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km2 \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Pontos Turísticos: %d \n", pontosturisticos);
    printf("A densidade populacional é de %.2f\n", densidade);
    printf("O PIB per capita é de %.2f\n", pibpercapita);
    printf("Carta 1 tem o super poder de %.2f\n", superpoder);


    printf("Carta 2 \n");
    printf("Estado: %s \n", Estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km2 \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos Turísticos: %d \n", pontosturisticos2);
    printf("A densidade populacional é de %.2f\n", densidade2);
    printf("O PIB per capita é de %.2f\n", pibpercapita2);
    printf("Carta 2 tem o super poder de %.2f\n", superpoder2);

     // Comparação das Cartas
    printf("\nComparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n", populacao > populacao2 ? 1 : 2, populacao > populacao2 ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", area > area2 ? 1 : 2, area > area2 ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", pib > pib2 ? 1 : 2, pib > pib2 ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosturisticos > pontosturisticos2 ? 1 : 2, pontosturisticos > pontosturisticos2 ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade > densidade2 ? 1 : 2, densidade > densidade2 ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibpercapita > pibpercapita2 ? 1 : 2, pibpercapita > pibpercapita2 ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", superpoder > superpoder2 ? 1 : 2, superpoder > superpoder2 ? 1 : 0);


    return 0;
}