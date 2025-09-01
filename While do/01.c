#include <stdio.h>
#include <unistd.h>
int main (){

    int seg;

    printf("Digite quantos segundos ate 60\n");
    scanf("%d" , &seg);

    do{
        seg --;
        printf("%d\n" , seg);
        sleep(1);
        

    }while (seg > 0);{
        printf("Fim");
    }
    
    

    
}