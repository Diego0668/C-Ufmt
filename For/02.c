#include <stdio.h>

int main (){
    int n1,i;
    int media = 0;

    for(i = 1; i <= 5; i++){
        printf("Digite um numero\n" , n1);
        scanf("%d" , &n1);
        media += n1;

    }
    
    printf("%d" , media);


}