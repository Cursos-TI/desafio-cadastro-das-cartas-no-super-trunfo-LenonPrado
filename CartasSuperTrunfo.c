#include <stdio.h>

int main(){

        //Carta Super Trunfo1

    char estado [3];
    char codigo [10];
    char nomeCidade [100];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

        //Carta Super Trunfo2

    char estado2 [3];
    char codigo2 [10];
    char nomeCidade2 [100];
    int populacao2 ;
    float area2 ;
    float pib2 ;
    int pontosTuristicos2 ;

            //Carta Super Trunfo1

    printf("Carta Super Trunfo: 1\n");

    printf("Informe o Estado:");
    scanf("%2s", estado);

    printf("Informe o Código:");
    scanf("%9s",codigo);

    printf("Informe o nome da cidade:");
    scanf("%[^\n]", nomeCidade);

    printf("Informe a população:");
    scanf("%d", &populacao);

    printf("Informe a área:");
    scanf("%f", &area);

    printf("Informe o PIB:");
    scanf("%f", &pib);

    printf("Informe o número de pontos turísticos:");
    scanf("%d", &pontosTuristicos);

        printf("=================================\n");
            //Carta Super Trunfo2

    printf("Carta Super Trunfo: 2\n");

    printf("Informe o Estado:");
    scanf("%2s", estado2);

    printf("Informe o Código:");
    scanf("%9s", codigo2);

    printf("Informe o nome da cidade:");
    scanf("%[^\n]", nomeCidade2);

    printf("Informe a população:");
    scanf("%d", &populacao2);

    printf("Informe a área:");
    scanf("%f", &area2);

    printf("Informe o PIB:");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos:");
    scanf("%d", &pontosTuristicos2);

    return 0;
}
