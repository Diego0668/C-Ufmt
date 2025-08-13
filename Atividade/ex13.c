#include <stdio.h>

int main(){

    int idade;

    printf("Insira sua idade\n");
    scanf("%d" , &idade);

    if(idade >= 0 && idade < 12){
        printf("Sua idade e %d e voce se enquadra como uma crianca" , idade);
    }else if(idade >=12 && idade < 18){
        printf("Sua idade e %d e voce se enquadra como uma adolescente" , idade);
    }else if(idade >= 18 && idade < 60){
        printf("Sua idade e %d e voce se enquadra como um adulto", idade);
    }else if(idade >= 60){
        printf("Sua idade e %d e voce se enquadra como um idoso", idade);
    }
}