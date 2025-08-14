

#include <stdio.h>  

int main() {  

printf("Bem vindo ao trunfo, o jogo!\n");   

//Variáveis do primeiro jogador:

char Estado1[50];   

char codigo1[4];   

char Cidade1[50]; 

unsigned long int populacao1; 

float PIB1;   

float area1;   

int pontos_turisticos1;   

float densidade_populacional1;  

float PIBpercapita1;  

float super_poder1;  

  //Variáveis do segundo jogador:
  
char Estado2[50];   

char codigo2[4];   

char Cidade2[50];   

unsigned long int populacao2;   

float PIB2;   

float area2;   

int pontos_turisticos2;   

float densidade_populacional2;  

float PIBpercapita2;  

float super_poder2; 

  //Entrada de dados do primeiro jogador:

printf("\nDigite os dados da carta do primeiro jogador:\n");   

printf("Estado:\n");   

scanf(" %[^\n]", Estado1); // Alterado para permitir espaços no nome do estado  

printf("Código:\n");   

scanf("%s", codigo1);   

printf("Cidade:\n");   

scanf(" %[^\n]", Cidade1);   

printf("População:\n");   

scanf("%lu", &populacao1);   

printf("PIB:\n");   

scanf("%f", &PIB1);   

printf("Área:\n");   

scanf("%f", &area1);   

printf("Pontos turísticos:\n");   

scanf("%d", &pontos_turisticos1);   

  //Entrada de dados do segundo jogador:
  
printf("\nDigite os dados da carta do segundo jogador:\n");   

printf("Estado:\n");   

scanf(" %[^\n]", Estado2); // Alterado para permitir espaços no nome do estado  

printf("Código:\n");   

scanf("%s", codigo2);   

printf("Cidade:\n");   

scanf(" %[^\n]", Cidade2);   

printf("População:\n");   

scanf("%lu", &populacao2);   

printf("PIB:\n");   

scanf("%f", &PIB2);   

printf("Área:\n");   

scanf("%f", &area2);   

printf("Pontos turísticos:\n");   

scanf("%d", &pontos_turisticos2);  

  //Cálculos
  
densidade_populacional1 = (float) populacao1 / area1;  

 PIBpercapita1 = PIB1 / (float) populacao1;  

super_poder1 = (float) populacao1 + PIB1 + area1 + pontos_turisticos1 + PIBpercapita1 + (1.0/densidade_populacional1); 

  //Saída de dados do primeiro jogador:
  
printf("\nDados do primeiro jogador:\n");   

printf("Estado: %s\n", Estado1);   

printf("Código: %s\n", codigo1);   

printf("Cidade: %s\n", Cidade1);   

printf("População: %lu\n", populacao1);   

printf("PIB: %.2f bilhões de reais\n", PIB1);   

printf("Área: %.2f km²\n", area1);   

printf("Pontos turísticos: %d\n", pontos_turisticos1);   

printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);  

printf("PIB per capita: %.2f reais\n", PIBpercapita1);  
  

densidade_populacional2 = (float) populacao2 / area2;  

PIBpercapita2 = PIB2 / (float) populacao2; 

super_poder2 = (float) populacao2 + PIB2 + area2 + pontos_turisticos2 + PIBpercapita2 + (1.0/densidade_populacional2); 

//Saída de dados do segundo jogador:

printf("\nDados do segundo jogador:\n");   

printf("Estado: %s\n", Estado2);   

printf("Código: %s\n", codigo2);   

printf("Cidade: %s\n", Cidade2);   

printf("População: %lu\n", populacao2);   

printf("PIB: %.2f bilhões de reais\n", PIB2);   

printf("Área: %.2f km²\n", area2);   

printf("Pontos turísticos: %d\n", pontos_turisticos2);  

printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);  

printf("PIB per capita: %.2f reais\n", PIBpercapita2);  

//Comparação das cartas:

printf("\nComparação das cartas:\n"); 

printf("População: carta 1 venceu (%d)\n", populacao1 > populacao2); 

printf("PIB: carta 1 venceu (%d)\n", PIB1 > PIB2); 

printf("Área: carta 1 venceu (%d)\n", area1 > area2); 

printf("Pontos turísticos: carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2); 

printf("Densidade populacional: carta 1 venceu (%d)\n", densidade_populacional1 < densidade_populacional2); 

printf("PIB per capita: carta 1 venceu (%d)\n", PIBpercapita1 > PIBpercapita2); 

printf("Super poder: carta 1 venceu (%d)\n", super_poder1 > super_poder2); 

return 0;   


}   //Fim do programa
