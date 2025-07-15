#include <stdio.h>

    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

int main() {
    
    printf("Preencha os dados da Carta Super Trunfo1:\n");

    printf("População:");
    scanf("%d\n", &populacao);

    printf("Área (em km²):");
    scanf("%f\n", &area);

    printf("PIB (Bilhões de reais):");
    scanf("%f\n", &pib);

    printf("Número de Pontos Turísticos:");
    scanf("%d\n", &pontosTuristicos);

   return 0; 
};
