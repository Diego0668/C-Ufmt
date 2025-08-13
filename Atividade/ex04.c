#include <stdio.h>


int main(){
    
int dinheiro;

printf("Digite o valor da sua conta bancaria \n");
scanf("%d" , &dinheiro);

if(dinheiro >= 500){
    printf("Dinheiro suficiente");
}else{
    printf("Dinheiro nao suficiente");
}

    
}