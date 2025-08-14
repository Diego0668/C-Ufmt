#include <stdio.h>

int main(){
    

    float lado1;
    float lado2;
    float areaQR;
    float raio;
    int forma;

    float areaC = 3.14 * (raio*raio);

    printf("Escolha a forma geometrica \n[1] quadrado \n[2] retangulo \n[3] circulo \n ");
    scanf("%d" , &forma);


    switch (forma){
   case 1: //quadrado
     printf("Digite o valor da base\n");
     scanf("%f" , &lado1);
     printf("Digite o valor da altura\n");
     scanf("%f" , &lado2);

     areaQR = lado1 * lado2;

     printf("A area do quadrado e %.2f" , areaQR);

   break;
   case 2://retangulo
     printf("Digite o valor da base\n");
     scanf("%f" , &lado1);
     printf("Digite o valor da altura\n");
     scanf("%f" , &lado2);

     areaQR = lado1 * lado2;


     printf("A area do retangulo e %f" , areaQR);
   break;

    case 3://circulo
     printf("Digite o valor do raio \n");
     scanf("%f" , &raio);

     areaC = 3.14 * (raio*raio);

     printf("O valor da area %.2f" , areaC );
     

   break;

   default:
     return 0;
}




}