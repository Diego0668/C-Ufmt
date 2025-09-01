#include <stdio.h>

int main(){
    int n_inserido , n_multiplicado,i= 0;

    printf("Digite um numero que queira ver a tabuada dele\n");
    scanf("%d" , &n_inserido);
    
    while(i < 10){
        i++;
        n_multiplicado = n_inserido * i;
        printf(" %d vezes %d eh %d\n" , i, n_inserido, n_multiplicado);
    }


}