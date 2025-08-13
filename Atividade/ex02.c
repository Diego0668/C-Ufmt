#include <stdio.h>
#include <stdbool.h>

int main(){

    float atleta_alturaA;
    float atleta_alturaB;

    printf("Digite a altura do atleta A em cm \n");
    scanf("%f" , &atleta_alturaA);

    printf("Digite a altura do atleta B em cm \n");
    scanf("%f" , &atleta_alturaB);

    float metros_AlturaA = atleta_alturaA/100;
    float metros_AlturaB = atleta_alturaB/100;


    printf("A altura em metros e: %.2f m \n" , metros_AlturaA);
    printf("A altura em metros e: %.2f m \n" , metros_AlturaB);

    if(metros_AlturaA > metros_AlturaB){
        printf("A altura do atleta A e maior");
    }else if(metros_AlturaA == metros_AlturaB){
        printf("Ambas alturas sao iguais");
    }else{
        printf("A altura do atleta B e maior");
    }

}