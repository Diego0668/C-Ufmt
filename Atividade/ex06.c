#include <stdio.h>

int main(){

    int temperatura = 25;
    int umidade_ar = 50;


   // if(temperatura >= 22 && temperatura <= 26) printf("A temperatura esta dentro da faixa de conforto\n");
    //else printf("A temperatura nao esta dentro da faixa de conforto\n");


    if(umidade_ar >= 40 && umidade_ar <= 60)
        printf("A umidade esta dentro da faixa de conforto \n");
    else
        printf("A umidade nao esta dentro da faixa de conforto \n");
    
    return 0;


}

