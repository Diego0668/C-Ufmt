#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero para verificar \n");
    scanf("%d" , &numero);


    if(numero < 0){
        printf("Seu numero e o %d e ele e negativo" , numero);
    }else if(numero > 0){
        printf("Seu numero e o %d e ele e positivo" , numero);
    }else{
        printf("Seu numero e nulo");
    }
    return 0;

}