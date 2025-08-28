#include <stdio.h>

int main(){

    float invest_inicial,invest_final,saldo_atual;
    int ano =0;

    float juros_anual = 0.085; //8,5% taxa ao ano 

    printf("Digite o valor inicial do seu investimento:\n");
    scanf("%f" , &invest_inicial);

    printf("Digite o valor final que deseja o seu investimento:\n");
    scanf("%f" , &invest_final);

    saldo_atual = invest_inicial;


    while(saldo_atual < invest_final){
        
        saldo_atual = (saldo_atual * juros_anual)+ saldo_atual;
        ano ++; 
        printf("Ano %d: Saldo de R$ %1.f\n" , ano , saldo_atual);
       

    }
        printf("\nForam necessarios %d anos para atingir a meta.\n", ano);



}