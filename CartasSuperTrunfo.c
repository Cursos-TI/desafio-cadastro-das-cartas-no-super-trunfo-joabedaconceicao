#include <stdio.h>

int main(){
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    double area1;
    double pib1;
    int pontosTuristicos1;
    double densidade1;
    double PIBperCapita1; 
    double superPoder1;
    float soma1;
    
       
       

    



     printf("cartas1: \n");
     
    
     printf("Digite o Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %49[^\n]", nomeCidade1);
    
    
    printf("Digite a população: \n");
    scanf("%lu", &populacao1);
     
    printf("Digite o pib: \n");
    scanf(" %lf", &pib1);

    printf("Digite a área: \n");
    scanf(" %lf", &area1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

   

    densidade1 = (double)(populacao1 / area1);
    printf("A densidade é: %.2lf hab/km²\n", densidade1);

    PIBperCapita1 = (double)(pib1 * 1000000000.0f) / populacao1;
    printf("PIB per Capita é: %.2lf reais\n", PIBperCapita1);

    superPoder1 = (double)populacao1 + area1 + pib1 + PIBperCapita1 + pontosTuristicos1 + (1.0 / densidade1);
    
    printf("Super Poder: %.2lf\n", superPoder1);


  
    

    


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
    double area2;
    double pib2;
    int pontosTuristicos2;
    double densidade2;
    double PIBperCapita2;
    double superPoder2;
   float soma2;

   int escolhaJogador, escolhaComputador;
    srand(time(0));



    printf("***Comparação das cartas***\n");
    printf("Escoha uma opção:\n");
    printf("1. Nome do país\n");
    printf("2. População\n");
    printf("3. Àrea\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográfica\n");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 6 + 1;

    switch (escolhaJogador)
    {
    case 1:
      printf("Jogador: Nome do país - ");
      break;
    
    case 2:
      printf("Jogador:  - População - ");
      break;
    
    case 3:
      printf("Jogador: Área - ");
      break;
    
    case 4:
      printf("Jogador: PIB - ");
      break;
    
    case 5:
      printf("Números de pontos turísticos - ");
      break;
    case 6:
      printf("Densidade demográfica - ");
      break;
    
    default:
      printf("Opção inválida\n");
    }

    switch (escolhaComputador)
    {
    case 1:
      printf("computador: Nome do país\n - ");
      break;
    case 2:
      printf("computador: População\n - ");
      break;
    case 3:
      printf("computador: Área\n - ");
      break;
    case 4:
      printf("computador: PIB\n - ");
      break;
    case 5:
      printf("computador: Número de pontos turísticos\n - ");
      break;
    case 6:
      printf("Densidade demográfica\n - ");
      break;
    
       }

       if (escolhaComputador == escolhaJogador) {
       printf(" ### Empate! ###\n");
       } else if ((escolhaJogador == populacao1) && (escolhaComputador == populacao2) ||
                  (escolhaJogador == area1 ) && (escolhaComputador == area2) ||
                   (escolhaJogador == pib1) && (escolhaComputador == pib2) ||
                   (escolhaJogador == pontosTuristicos1) && (escolhaComputador == pontosTuristicos2) ||
                   (escolhaJogador == densidade1) && (escolhaComputador == densidade2))
                 
       {
        printf("Carta 1 venceu!\n");
        
       } else {
        printf("Carta 2 venceu!\n");
       }
       
   
   
    
   

    
     

     printf("Digite o Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %49[^\n]", nomeCidade2);
    
    
    printf("Digite a população: \n");
    scanf("%lu", &populacao2);
     
    printf("Digite o pib: \n");
    scanf(" %lf", &pib2);

    printf("Digite a área: \n");
    scanf(" %lf", &area2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);


     densidade2 = (double)(populacao2 / area2);
    printf("A densidade é: %.2lf hab/km²\n", densidade2);

    PIBperCapita2 = (double)(pib2 * 1000000000.0f) / populacao2;
    printf("PIB per Capita é: %.2lf reais\n", PIBperCapita2);

      superPoder2 = (double)populacao2 + area2 + pib2 + PIBperCapita2 + pontosTuristicos2 + (1.0 / densidade2);
    
    printf("Super Poder: %.2lf\n", superPoder2);

    printf("Comparação de  população (1>2): %d\n", populacao1 > populacao2);
    printf("Comparação de área (1>2): %d\n", area1 > area2);
    printf("Comparação de pib (1>2): %d\n", pib1 > pib2);
    printf("Comparação de pontos turísticos (1>2): %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Comparação de densidade populacional (1>2): %d\n", densidade1 < densidade2);
    printf("Comparação de Pib Per Capita (1>2): %d\n", PIBperCapita1 > PIBperCapita2);
    printf("Comparação de Super Poder  (1>2): %d\n", superPoder1 > superPoder2);
       
          
        

       if(populacao1 > populacao2){
        printf("carta 1 venceu!\n");
       }
       else{
        printf("carta 2 venceu!\n");
       }
           



    
    


    printf("Estado: %c\n",estado2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %lu\n", populacao2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Área: %.2f km²\n", area2);
    printf("Números de pontos turísticos: %d\n", pontosTuristicos2); 
    
    

    
return 0;


}

