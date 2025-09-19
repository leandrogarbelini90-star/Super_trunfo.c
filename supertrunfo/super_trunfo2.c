#include <stdio.h>
  int main(){

    // Nomes das variaveis da carta 1
    char codigo_carta1[6];
    char estado1[20];
    char nome_da_cidade1[20];
    float populacao1;
    float area_total1;
    float PIB1;
    int Pontos_turisticos_total1;

    // Nomes das variaveis da carta 2
    char codigo_carta2[6];
    char estado2[20];
    char nome_da_cidade2[20];
    float populacao2;
    float area_total2;
    float PIB2;
    int Pontos_turisticos_total2;
    

    /*ABAIXO PEDIMOS AS INFORMAÇÕES AO USUARIO, ENTRADA DE DADOS*/

    printf("Digite o nome do estado: ");
    scanf("%s", &estado1); 
   

    printf("Codigo da carta 1: ");
    scanf("%s", &codigo_carta1);
  

    printf("DIgite o nome da cidade 1: ");
    scanf("%s", &nome_da_cidade1);
  

    printf("Digite o Numero de habitantes: ");
    scanf("%f", &populacao1);
  

    printf("DIgite a area total: ");
    scanf("%f", &area_total1);
    

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);
   

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &Pontos_turisticos_total1);

    // PEDINDO DADOS DAS CARTAS NUMERO 2

    printf("Digite o nome do estado: ");
    scanf("%s", &estado2); 
   

    printf("Codigo da carta: ");
    scanf("%s", &codigo_carta2);
  

    printf("DIgite o nome da cidade: ");
    scanf("%s", &nome_da_cidade2);
  

    printf("Digite o Numero de habitantes: ");
    scanf("%f", &populacao2);
  

    printf("DIite a area total: ");
    scanf("%f", &area_total2);
    

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);
   

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &Pontos_turisticos_total2);

    float densidade_populacional;
    float PIB_per_Capita1;

    float densidade_populaciona2;
    float PIB_per_Capita2;

    // Imprimos na tela os dados das cartas para o usuario

    printf("Estado: %s\n", &estado1);
    printf("Codigo da carta: %s\n", &codigo_carta1);
    printf("Nome da cidade: %s\n", &nome_da_cidade1);
    printf("População: %f\n", &populacao1);
    printf("Area total: %f\n", &area_total1);
    printf("PIB: %f\n", &PIB1);
    printf("Pontos turisticos: %d\n", &Pontos_turisticos_total1);
    printf("Densidade populacional: %.2f Hab/km\n",(populacao1 / area_total1), &densidade_populacional);
    printf("PIB per Capita: %.2f Reais\n", (PIB1 / area_total1), &PIB_per_Capita1);

    printf("Estado: %s\n", &estado2);
    printf("Codigo da carta: %s\n", &codigo_carta2);
    printf("Nome da cidade: %s\n", &nome_da_cidade2);
    printf("População: %f\n", &populacao2);
    printf("Area total: %f\n", &area_total2);
    printf("PIB: %f\n", &PIB2);
    printf("Pontos turisticos: %d\n", &Pontos_turisticos_total2);
    printf("Densidade populacional: %.2f Hab/km\n",(populacao2 / area_total2), &densidade_populaciona2);
    printf("PIB per Capita: %.2f Reais\n", (PIB2 / area_total2), &PIB_per_Capita2);
  }
