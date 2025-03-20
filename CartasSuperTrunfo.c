#include <stdio.h>

int main() {
    //dados da carta 1
    char Estado;
    char Codigo[50];
    char NomeC[50];
    int Populacao;
    float AreaemKm;
    float PIB;
    int PontosTuristicos;

     //dados da carta 2
     char Estado2;
     char Codigo2[50];
     char NomeC2[50];
     int Populacao2;
     float AreaemKm2;
     float PIB2;
     int PontosTuristicos2;

     //usuario inserir os dados da carta1
     printf("Dados da Carta1:\n");
     printf("escreva um letra de A a H:\n");
     scanf(" %c",&Estado);

     printf("escreva o código da carta(ex:A01):\n");
     scanf("%s",&Codigo);

     printf("escreva o nome do estado:\n");
     scanf(" %[^\n]",&NomeC);

     printf("insira a populaçao do estado:\n");
     scanf("%d",&Populacao);

     printf("insira a are em km²:\n");
     scanf("%f",&AreaemKm);

     printf("insira o PIB:\n");
     scanf("%f",&PIB);

     printf("Quantos Pontos Turisticos Possui:\n");
     scanf("%d",&PontosTuristicos);

     //inserir dados da carta2
     printf("Dados da Carta2:\n");
     printf("escreva um letra de A a H:\n");
     scanf(" %c",&Estado2);

     printf("escreva o código da carta(ex:H02):\n");
     scanf("%s",&Codigo2);

     printf("escreva o nome do estado:\n");
     scanf(" %[^\n]",&NomeC2);

     printf("insira a populaçao do estado:\n");
     scanf("%d",&Populacao2);

     printf("insira a are em km²:\n");
     scanf("%f",&AreaemKm2);

     printf("insira o PIB:\n");
     scanf("%f",&PIB2);

     printf("Quantos Pontos Turisticos Possui:\n");
     scanf("%d",&PontosTuristicos2);


     //aparecer na tela carta 1
     printf("Carta1\n");
     printf("Estado: %c\n",Estado);
     printf("Código: %s\n",Codigo);
     printf("Nome do Estado: %s\n", NomeC);
     printf("Populaçao: %d\n",Populacao);
     printf("Area: %f km²\n",AreaemKm);
     printf("PIB: %f Bilhoes de reias\n",PIB);
     printf("Pontos Turisticos: %d\n",PontosTuristicos);


     //aparecer na tela carta 2
     printf("\nCarta2\n");
     printf("Estado: %c\n",Estado2);
     printf("Código: %s\n",Codigo2);
     printf("Nome do Estado: %s\n", NomeC2);
     printf("Populaçao: %d\n",Populacao2);
     printf("Area: %f km²\n",AreaemKm2);
     printf("PIB: %f Bilhoes de reias\n",PIB2);
     printf("Pontos Turisticos: %d\n",PontosTuristicos2);

    return 0;
}
