#include <stdio.h>

int main(){
    
    int n1;
    int n2;
    int divisor = 2;

    printf("Digite um numero para verificar se e par ou impar\n");
    scanf("%d" , &n1);

    printf("Digite outro numero para verificar se e par ou impar\n ");
    scanf("%d" , &n2);

    int resto_n1 = n1 % divisor;

    if(resto_n1 == 0){
        printf("O numero %d e par\n", n1 );
    }else{
        printf("O numero %d e impar\n" , n1);
    }

   int resto_n2 = n2 % divisor;

    if(resto_n2 == 0){
        printf("O numero %d e par \n", n2 );

    }else{
       printf("O numero %d e impar \n" , n2);
    }
}