#include <stdio.h>

int main (){

    int resto3,resto5,i;
    

    for(i = 1; i <= 100 ; i++){
        resto3 = i % 3;

        if(resto3 == 0){
            printf("Os numero divisiveis por 3 sao: %d\n" , i);
        }
       
    }
    
    for(i = 1; i <= 100 ; i++){
        resto5 = i % 5;

     if (resto5 == 0){
            printf("Os numero divisiveis por 5 sao: %d\n" , i);

        }
    }
}