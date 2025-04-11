/*
------------------------------------------------------------
Desafio Super Trunfo - Países
Nível: Novato
Tema: Cadastro de Cartas de Cidades
Autor: [Lucas Costa da Silva]
Data: [10/04/2025]
Descrição:
Este programa cadastra duas cartas com informações de cidades,
incluindo código, população, área, PIB e pontos turísticos.
------------------------------------------------------------
*/

#include <stdio.h>

//Desafio SuperTrunfo
//Tema 1 - Cadastro das Cartas


int main() {
   char codigo1[4], codigo2[4];
   int populacao1, populacao2;
   float area1, area2;
   float pib1, pib2;
   int pontos1, pontos2;

    
    // Cadastro das Cartas:

    printf("Cadastro da primeira carta:\n");
    printf("Código (ex: A01):");
    scanf("%s", codigo1);
    printf("População (milhares): ");
    scanf("%d", &populacao1);
    printf("Área (Km²):");
    scanf("%f", &area1);
    printf("PIB (Bilhões):");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos:");
    scanf("%d", &pontos1);

    printf("Cadastro da segunda carta:\n");
    printf("Código (ex: B02):");
    scanf("%s", codigo2);
    printf("População (milhares): ");
    scanf("%d", &populacao2);
    printf("Área (Km²):");
    scanf("%f", &area2);
    printf("PIB (Bilhões):");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos:");
    scanf("%d", &pontos2);


    
    // Exibição dos Dados das Cartas:
   
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d mil\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões\n",pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d mil\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões\n",pib2);
    printf("Pontos turísticos: %d\n", pontos2);


    return 0;
}
