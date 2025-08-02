#include <stdio.h>

    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

int main() {
    
    printf("Preencha os dados da Carta Super Trunfo1:\n");

    printf("População:");
    scanf("%d\n", &populacao);

    printf("Área (em km²):");
    scanf("%.2f km²\n", &area);

    printf("PIB (Bilhões de reais):");
    scanf("%.2f bilhões\n", &pib);

    printf("Número de Pontos Turísticos:");
    scanf("%d\n", &pontosTuristicos);


    printf("Preencha os dados da Carta Super Trunfo2:\n");

    printf("População:");
    scanf("%d\n", &populacao2);

    printf("Área (em km²):");
    scanf("%.2f km²\n", &area2);

    printf("PIB (Bilhões de reais):");
    scanf("%.2f bilhões\n", &pib2);

    printf("Número de Pontos Turísticos:");
    scanf("%d\n", &pontosTuristicos2);


   return 0; 
};
