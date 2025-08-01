#include <stdio.h>

int main(){
    char estado1[50];
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;


    printf("Desafio das cartas: \n");
    
     printf("Digite o Estado: \n");
    scanf(" %s", estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", nomeCidade1);
    
    
    printf("Digite a população: \n");
    scanf("%d", &populacao1);
     
    printf("Digite o pib: \n");
    scanf(" %f", &pib1);

    printf("Digite a área: \n");
    scanf(" %f", &area1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("Estado: %s\n",estado1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Código: %s\n", codigo1);
    printf("População: %.2d Milhões\n", populacao1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Área: %.2f km²\n", area1);
    printf("Números de pontos turísticos: %d\n", pontosTuristicos1);  


}

