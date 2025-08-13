#include <stdio.h>

int main(){

    int n_par; // numerador
    int divisor = 2;

    printf("Digite um numero: \n");
    scanf("%d" , &n_par);

    int resto = n_par % divisor;
    
    if(resto > 0 ){
        printf("O numero e impar");
    }else{
        printf("O numero e par");
    }

}