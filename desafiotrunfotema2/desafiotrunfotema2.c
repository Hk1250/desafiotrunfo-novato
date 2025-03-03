#include <stdio.h>
int main() {
//atributos das cartas//
    char estate[70];
     char estate2 [70];
    char codecard[70];
    char codecard2[70];
    char namecity[40];
    char namecity2[40];
    int population;
    int population2;
    float area;
    float area2;
    float pib; 
    float pib2;
    int touristspot;
    int touristspot2;

    // tutorial do jogo//
    printf("JOGO INICIADO\n");
    printf("GANHA O JOGADOR COM A CARTA COM MAIOR NUMERO DE POPULATION,AREA,PIB E TOURISTSPOT:\n");
    printf("BOA SORTE\n");

    // entrada e saida de dados da carta 01//
    printf("digite seu estado:\n");
    scanf("%s", &estate);

    printf("digite o codigo de sua carta:\n");
    scanf("%s", &codecard );

    printf("digite o nome da cidade de sua carta:\n");
    scanf("%s", &namecity);

  
    printf("digite o total de populão correlacionada a cidade de sua carta\n:");
        scanf("%i", &population);

    printf("digite a area correlacionada a cidade de sua carta:\n");
    scanf("%f", &area);

    printf("digite a pib correlacionada a cidade de sua carta:\n");
    scanf("%f", &pib);

    printf("digite a quantidade de pontos turisticos correlacionada a cidade de sua carta:\n");
     scanf("%d", &touristspot);

//saida de dados da carta 01//
     printf("carta 01:");
     printf("estate: %s\n", estate);
     printf("codecard:%s\n", codecard);
     printf("namecity:%s\n", namecity);
     printf("population:%i\n", population);
     printf("area:%f\n", area);
     printf("pib:%f\n", pib);
     printf("touristspot:%d\n", touristspot);

       //entrada e saida de dados da carta 02//

       printf("digite seu estado:\n");
       scanf("%s", &estate2);
   
       printf("digite o codigo de sua carta:\n");
       scanf("%s", &codecard2);
   
       printf("digite o nome da cidade de sua carta:\n");
       scanf("%s", &namecity2);
       
       printf("digite o total de populão correlacionada a cidade de sua carta\n:");
       scanf("%i", &population2);
   
       printf("digite a area correlacionada a cidade de sua carta:\n");
       scanf("%f", &area2);
   
       printf("digite a pib correlacionada a cidade de sua carta:\n");
       scanf("%f", &pib2);
   
        printf("digite a quantidade de pontos turisticos correlacionada a cidade de sua carta:\n");
        scanf("%d", &touristspot2);
  
  
  //saida de dados carta 02//
  
  printf("Carta 02:\n");
  printf("estate2: %s\n", estate2);
  printf("codecard2:%s\n", codecard2);
  printf("namecity2:%s\n", namecity2);
  printf("population2:%i\n", population2);
  printf("area2:%f\n", area2);
  printf("pib2:%f\n", pib2);
  printf("touristspot2:%d\n", touristspot2);

  //comparações das cartas 01 e 02//
  
  if(population > population2){
    printf("carta 1 venceu,por maior total de população correlacionada a carta!\n");}
  else{
    printf("carta 2 venceu,por maior total de população correlacionada a carta!\n");

  }
  if(area > area2){
    printf("carta 1 venceu,por maior quantidade de área correlacionada a carta!\n");
  }
else{
  printf("carta 2 venceu,por maior total de área correlacionada a cartaa\n!");
}
 
if (pib > pib2){
  printf("carta 1 venceu,por maior numero somado em pib correlacionado a carta!\n");
}
else{
  printf("carta 2 venceu,por maior numero somado em pib correlacionado a carta!\n");
}
if (touristspot > touristspot2){
  printf("carta 1 venceu,por maior números de pontos túristicos correlacionado a carta!\n");
}
else {
  printf("carta 2 venceu,por maior números de pontos túristicos correlacionado a carta!!\n");
}
return 0;
}