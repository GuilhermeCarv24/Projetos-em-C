#include <stdio.h> 



int main() { 

//Os códigos acima são usados para incluir a biblioteca, caso contrário, os códigos não serão legíveis para a máquina.

    printf("Bem vindo ao trunfo, o jogo!\n"); 



    char Estado1[50]; 

    char codigo1[4]; 

    char Cidade1[50]; 

    int populacao1; 

    float PIB1; 

    float area1; 

    int pontos_turisticos1; 



    char Estado2[50]; 

    char codigo2[4]; 

    char Cidade2[50]; 

    int populacao2; 

    float PIB2; 

    float area2; 

    int pontos_turisticos2; 

// Acima, separei as variáveis para entrada de dados de cada jogador, o jogador um e dois, usando variáveis específicas como int, float e char pra strings.

    printf("\nDigite os dados da carta do primeiro jogador:\n"); 

    printf("Estado:\n"); 

    scanf(" %49[^\n]", Estado1); 

    printf("Código:\n"); 

    scanf(" %3s", codigo1); 

    printf("Cidade:\n"); 

    scanf(" %49[^\n]", Cidade1); 

    printf("População:\n"); 

    scanf(" %d", &populacao1); 

    printf("PIB:\n"); 

    scanf(" %f", &PIB1); 

    printf("Área:\n"); 

    scanf(" %f", &area1); 

    printf("Pontos turísticos:\n"); 

    scanf(" %d", &pontos_turisticos1); 



    printf("\nDigite os dados da carta do segundo jogador:\n"); 

    printf("Estado:\n"); 

    scanf(" %49[^\n]", Estado2); 

    printf("Código:\n"); 

    scanf(" %3s", codigo2); 

    printf("Cidade:\n"); 

    scanf(" %49[^\n]", Cidade2); 

    printf("População:\n"); 

    scanf(" %d", &populacao2); 

    printf("PIB:\n"); 

    scanf(" %f", &PIB2); 

    printf("Área:\n"); 

    scanf(" %f", &area2); 

    printf("Pontos turísticos:\n"); 

    scanf(" %d", &pontos_turisticos2); 

// Printf e Scanf foram usadas para imprimir o que quero e recolher os dados, para logo após alocar eles corretamente usando especificadore como: %s e %f

    printf("\nDados do primeiro jogador:\n"); 

    printf("Estado: %s\n", Estado1); 

    printf("Código: %s\n", codigo1); 

    printf("Cidade: %s\n", Cidade1); 

    printf("População: %d\n", populacao1); 

    printf("PIB: %.2f bilhões de reais\n", PIB1); 

    printf("Área: %.2f km²\n", area1); 

    printf("Pontos turísticos: %d\n", pontos_turisticos1); 



    printf("\nDados do segundo jogador:\n"); 

    printf("Estado: %s\n", Estado2); 

    printf("Código: %s\n", codigo2); 

    printf("Cidade: %s\n", Cidade2); 

    printf("População: %d\n", populacao2); 

    printf("PIB: %.2f bilhões de reais\n", PIB2); 

    printf("Área: %.2f km²\n", area2); 

    printf("Pontos turísticos: %d\n", pontos_turisticos2); 

// Na linha 137 o "bilhões de reais" foi meramente ilustrativo para deixar o código mais bonito, sabemos que o PIB de alguns estados pode chegar em uma quantia maior, o return0 foi usado para indicar ao programa que está tudo funcionando da forma correta e finalizar o código.

    return 0; 

} 