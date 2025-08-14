#include <stdio.h>

int main(){

    int moeda,valor;
    float euroConv,dolarConv,libraConv,rubloConv;
   
   // valor da cotação no dia 14/08/2025 
    float euro = 6.31;
    float dolar = 5.41;
    float libra = 7.33;
    float rublo = 0.068;

    printf("Digite qual moeda voce quer converter para real \n[1] Euro \n[2] Dolar \n[3] Libra \n[4] Rublo Russo \n");
    scanf("%d" ,&moeda);


    switch(moeda){
        
        case 1://Euro
        
        printf("Digite a quantidade que voce possui em real (R$) \n");
        scanf("%d" , &valor);
        euroConv = (valor/euro);
        printf("A conversao em euro ficou %.2f €" , euroConv);
        break;
        
        case 2: //Dolar
        printf("Digite a quantidade que voce possui em real\n");
        scanf("%d" , &valor);
        dolarConv = (valor/dolar);
        printf("A conversao em dolar ficou %.2f $" , dolarConv);
        break;
        
        case 3://Libra
        
        printf("Digite a quantidade que voce possui em real\n");
        scanf("%d" , &valor);
        libraConv = (valor/libra);
        printf("A conversao em libras esterlinas ficou %.2f £ " , libraConv);
        break;

        case 4: //Rublo Russo

        printf("Digite a quantidade que voce possui em real\n");
        scanf("%d" , &valor);
        rubloConv = (valor*rublo);
        printf("A conversao em rublo russo ficou %.2f" , rubloConv);
        break;

        default:
        return 0;
    }


}