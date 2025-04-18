/*
------------------------------------------------------------
Desafio Super Trunfo - Países
Nível: Mestre
Tema: Cadastro de Cartas de Cidades
Autor: [Lucas Costa da Silva]
Data: [15/04/2025]
Descrição:
V1- Este programa cadastra duas cartas com informações de cidades,
incluindo código, população, área, PIB e pontos turísticos.
V2 - Nessa nova versão temos novos atributos, sendo eles a Densidade popilacional e PIB per capta.
V2.1 - Correção de escritas.
V3 - Implementação das comparações entre as cartas, determinando a vencedora. 
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

   //Nivel Aventureiro - acrescimo de densidade e PIB per Capita

   float densidade1, densidade2;
   float pib_per_capita1, pib_per_capita2;
   float super_poder1, super_poder2;

    
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

    //Cálculo dos atributos derivados:
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    super_poder1 = (float)populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1.0 / densidade1);
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1.0 / densidade2);


    
    // Exibição dos Dados das Cartas:
   
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d mil\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões\n",pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %2.f hab/km²\n", densidade1);
    printf("PIB per Capita: %2.f bilhões por mil pessoas\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d mil\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões\n",pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %2.f hab/km²\n", densidade2);
    printf("PIB per Capita: %2.f bilhões por mil pessoas\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    //Comparações:
    printf("\nComparação de cartas:\n");
    printf("População: Carta 1 Venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);


    return 0;
}
