#include <stdio.h>

int main(){

    int idade = 55;
    int renda = 2500;


    if(idade >= 65 || (idade >= 60 && renda >= 2000)) {
        printf("Sim");
    }else{
        printf("Nao");
    }


}