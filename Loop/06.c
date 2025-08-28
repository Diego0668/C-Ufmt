#include <stdio.h>


int main (){

    int n, primeiro, segundo, i, proximo;
    primeiro = 0;
    segundo = 1;
    i = 1;
    printf("\nInsira o numero de termos que deseja: ");
    scanf("%d", &n);
    
    printf("Sequencia de Fibonacci:\n");
    while (i<=n)
    {

        printf("%d\t", primeiro);
        proximo = primeiro + segundo;
        primeiro=segundo;
        segundo = proximo;
        i++;
    }
 
return 0;

}