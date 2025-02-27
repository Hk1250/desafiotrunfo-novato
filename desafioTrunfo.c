#include <stdio.h>
int main() {
                    //exemplo//
    char estate[70] = "MatoGrosso";
    char codecard[70] = "M01";
    char namecity[40] = "Cuiabá";
    int population = 650877 ;
    float area = 3538;
    float pib = 4770088;
    int touristspot = 30;

    //entrada e saida de dados da carta do jogador/usuario//

    printf("digite seu estado:\n");
    scanf("%s", &estate);

    printf("digite o codigo de sua carta:\n");
    scanf("%s", &codecard);

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


     //saida de dados carta 01//
printf("carta 01:");
     printf("estate: %s\n", estate);
     printf("codecard:%s\n", codecard);
     printf("namecity:%s\n", namecity);
     printf("population:%i\n", population);
     printf("area:%f\n", area);
     printf("pib:%f\n", pib);
     printf("touristspot:%d\n", touristspot);

     //entrada e saida de dados da carta 2 do jogador/usuario//

     printf("digite seu estado:\n");
     scanf("%s", &estate);
 
     printf("digite o codigo de sua carta:\n");
     scanf("%s", &codecard);
 
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


//saida de dados carta 02//

printf("Carta 02:\n");
printf("estate: %s\n", estate);
printf("codecard:%s\n", codecard);
printf("namecity:%s\n", namecity);
printf("population:%i\n", population);
printf("area:%f\n", area);
printf("pib:%f\n", pib);
printf("touristspot:%d\n", touristspot);

     return 0;

}