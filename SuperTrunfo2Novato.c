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


    // Contadores de vitórias
    int vitoriasCarta1 = 0;
    int vitoriasCarta2 = 0;

    // Comparações e contagem de vitórias
    if (populacao > populacao2) {
        printf("(Carta 1 Vence) A Carta 1 tem mais população que a Carta 2\n");
        vitoriasCarta1++;
    } else if (populacao < populacao2) {
        printf("(Carta 2 Vence) A Carta 2 tem mais população que a Carta 1\n");
        vitoriasCarta2++;
    } else {
        printf("(EMPATE) As Cartas têm a mesma população\n");
    }

    if (area > area2) {
        printf("(Carta 1 Vence) A Carta 1 tem mais área que a Carta 2\n");
        vitoriasCarta1++;
    } else if (area < area2) {
        printf("(Carta 2 Vence) A Carta 2 tem mais área que a Carta 1\n");
        vitoriasCarta2++;
    } else {
        printf("(EMPATE) As Cartas têm a mesma área\n");
    }

    if (pib > pib2) {
        printf("(Carta 1 Vence) A Carta 1 tem mais PIB que a Carta 2\n");
        vitoriasCarta1++;
    } else if (pib < pib2) {
        printf("(Carta 2 Vence) A Carta 2 tem mais PIB que a Carta 1\n");
        vitoriasCarta2++;
    } else {
        printf("(EMPATE) As Cartas têm o mesmo PIB\n");
    }

    if (pibpercapita > pibpercapita2) {
        printf("(Carta 1 Vence) A Carta 1 tem mais PIB per capita que a Carta 2\n");
        vitoriasCarta1++;
    } else if (pibpercapita < pibpercapita2) {
        printf("(Carta 2 Vence) A Carta 2 tem mais PIB per capita que a Carta 1\n");
        vitoriasCarta2++;
    } else {
        printf("(EMPATE) As Cartas têm o mesmo PIB per capita\n");
    }

    if (pontosturisticos > pontosturisticos2) {
        printf("(Carta 1 Vence) A Carta 1 tem mais pontos turísticos que a Carta 2\n");
        vitoriasCarta1++;
    } else if (pontosturisticos < pontosturisticos2) {
        printf("(Carta 2 Vence) A Carta 2 tem mais pontos turísticos que a Carta 1\n");
        vitoriasCarta2++;
    } else {
        printf("(EMPATE) As Cartas têm o mesmo número de pontos turísticos\n");
    }

    if (densidade > densidade2) {
        printf("(Carta 1 Vence) A Carta 1 tem mais densidade populacional que a Carta 2\n");
        vitoriasCarta1++;
    } else if (densidade < densidade2) {
        printf("(Carta 2 Vence) A Carta 2 tem mais densidade populacional que a Carta 1\n");
        vitoriasCarta2++;
    } else {
        printf("(EMPATE) As Cartas têm a mesma densidade populacional\n");
    }

    if (superpoder > superpoder2) {
        printf("(Carta 1 Vence) A Carta 1 tem mais super poder que a Carta 2\n");
        vitoriasCarta1++;
    } else if (superpoder < superpoder2) {
        printf("(Carta 2 Vence) A Carta 2 tem mais super poder que a Carta 1\n");
        vitoriasCarta2++;
    } else {
        printf("(EMPATE) As Cartas têm o mesmo super poder\n");
    }

    // Comparação final
    printf("\n==================== Resultado Final ====================\n");
    if (vitoriasCarta1 > vitoriasCarta2) {
        printf("O vencedor é a Carta 1 com %d vitórias!\n", vitoriasCarta1);
    } else if (vitoriasCarta2 > vitoriasCarta1) {
        printf("O vencedor é a Carta 2 com %d vitórias!\n", vitoriasCarta2);
    } else {
        printf("As cartas empataram com %d vitórias cada!\n", vitoriasCarta1);
    }

    return 0;
}
