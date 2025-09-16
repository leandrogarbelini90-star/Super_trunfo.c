#include <stdio.h>

int main(){
     
    /*ESCREVENDO UM CODIGO PARA O JOGO SUPER TRUNFO*/
    /*ABAIXO COLOCAMOS NOMES DAS VARIAVEIS*/
    
    char codigo_carta[6];
    char estado[14];
    char nome_da_cidade[20];
    float populacao;
    float area_total;
    float PIB;
    int Pontos_turisticos_total;

    /*ABAIXO PEDIMOS AS INFORMAÇÕES AO USUARIO, ENTRADA DE DADOS*/

    printf("Digite o nome do estado: ");
    scanf("%s", &estado); 
   

    printf("Codigo da carta: ");
    scanf("%s", &codigo_carta);
  

    printf("DIgite o nome da cidade: ");
    scanf("%s", &nome_da_cidade);
  

    printf("Digite o Numero de habitantes: ");
    scanf("%f", &populacao);
  

    printf("DIgite a area total: ");
    scanf("%f", &area_total);
    

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);
   

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &Pontos_turisticos_total);
    
    /* APÓS O USUARIO DAR ENTRADA NOS DADOS IMPRIMIMOS NA TELA, PARA ISSO ESCREVEMOS AS INSTRUÇÕES ABAIXO */
   
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %15.f\n", populacao);
    printf("Area total em km: %f\n", area_total);
    printf("PIB: %f\n", PIB);
    printf("Numeros de pontos turisticos: %d\n", Pontos_turisticos_total);

    /*COLOCAMOS TODA AS INFORMAÇÕES PARA UMA CARTA DO JOGO*/
    /*PARA ISSO ECREVEMOS UM CODIGO DE INTERAÇÃO COM O USUARIO ENTRA E SAIDA DE DADOS
    */
    

    return(0);
}




    

