#include <stdio.h>

int main (){

    int x,resto;

   
    for(x=1; x < 100 ; x++){
        resto = x % 2;
        
        if(resto == 0){
        
            printf("%d\n" , x);

        }

        
    }


}