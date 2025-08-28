#include <stdio.h>
#include <unistd.h>
//#include <iso646.h>

int main(){
    
    int i = 10;

    while(i <= 10 && i > 0){ // !=
        sleep(1);
        printf("%d\n" , i);
        i--;

    }
    
    printf("Contagem encerrada");
}