#include <stdio.h>


int main (){
    printf("Desafio Super Trunfo - Países\n");
    
    char Estado [20];
    char codigo [10];
    char cidade [15];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("Digite o nome do Estado: \n");
    scanf(" %19s", Estado);
    
    printf("Digite o código do Estado: \n");
    scanf(" %9s", codigo);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %14s", cidade);
    
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade: \n");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos);

    return 0;
}