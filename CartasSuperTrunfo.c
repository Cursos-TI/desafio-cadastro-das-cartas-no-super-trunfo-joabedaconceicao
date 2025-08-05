#include <stdio.h>

int main(){
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float PIBperCapita1;


     printf("Desafio das cartas1: \n");
    
     printf("Digite o Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %49[^\n]", nomeCidade1);
    
    
    printf("Digite a população: \n");
    scanf("%lu", &populacao1);
     
    printf("Digite o pib: \n");
    scanf(" %f", &pib1);

    printf("Digite a área: \n");
    scanf(" %f", &area1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

   

    densidade1 = (float)(populacao1 / area1);
    printf("A densidade é: %.2f hab/km²\n", densidade1);

    PIBperCapita1 = (float)(pib1 * 1000000000.0f) / populacao1;
    printf("PIB per Capita é: %.2f reais\n", PIBperCapita1);



  
     
     
    printf("Estado: %c\n",estado1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Código: %s\n", codigo1);
    printf("População: %lu\n", populacao1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Área: %.2f km²\n", area1);
    printf("Números de pontos turísticos: %d\n", pontosTuristicos1);  
    

    printf("Cartas2: \n");
     

    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
   unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float PIBperCapita2;
   

     printf("Digite o Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %49[^\n]", nomeCidade2);
    
    
    printf("Digite a população: \n");
    scanf("%lu", &populacao2);
     
    printf("Digite o pib: \n");
    scanf(" %f", &pib2);

    printf("Digite a área: \n");
    scanf(" %f", &area2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);


     densidade2 = (float)(populacao2 / area2);
    printf("A densidade é: %.2f hab/km²\n", densidade2);

    PIBperCapita2 = (float)(pib2 * 1000000000.0f) / populacao2;
    printf("PIB per Capita é: %.2f reais\n", PIBperCapita2);

      


    printf("Estado: %c\n",estado2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %lu\n", populacao2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Área: %.2f km²\n", area2);
    printf("Números de pontos turísticos: %d\n", pontosTuristicos2);  
    
    

    return 0;



}

