#include <stdio.h>


int main(){


    float valor_compra;
    float valor_descontado;
    float desconto;

    printf("Digite o valor total da sua compra\n");
    scanf("%f" , &valor_compra);

    desconto = (valor_compra * 0.1);

    valor_descontado = valor_compra - desconto;

    if(valor_compra > 100){
        printf("Parabens, voce ganhou um desconto de 10%%, e o total da sua compra ficou R$ %2.f" , valor_descontado);

    }else{
        printf("Sem desconto, o total da sua compra deu R$ %2.f  ", valor_compra);
    }
   

    //if(valor_compra > 10){
        
    
}