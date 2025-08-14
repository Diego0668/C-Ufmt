#include <stdio.h>

int main(){

    float n1,n2,soma,subtrair,multipicacao,divisao;

    int calcular;

    printf("Digite a operacao que deseja fazer \n[1] Somar \n[2] Subtrair \n[3] Multipicacao \n[4] Divisao \n");
    scanf("%d" ,&calcular);


    switch(calcular){
    
    case 1 :
    printf ("Digite um numero\n");
    scanf("%f" , &n1);

    printf ("Digite outro numero\n");
    scanf("%f" , &n2);

    soma = n1 + n2;
    printf("A soma eh %.2f" , soma);
    break;
    
    case 2 :
    printf ("Digite um numero\n");
    scanf("%f" , &n1);

    printf ("Digite outro numero\n");
    scanf("%f" , &n2);

    subtrair = n1 - n2;
    printf("A subtracao eh %.2f" , subtrair);
    break;
    
    case 3 :
    printf ("Digite um numero\n");
    scanf("%f" , &n1);

    printf ("Digite outro numero\n");
    scanf("%f" , &n2);

    multipicacao = n1 * n2;
    printf("A multiplicacao eh %.2f" , multipicacao);
    break;
    
    case 4 :
    printf ("Digite um numero\n");
    scanf("%f" , &n1);

    printf ("Digite outro numero\n");
    scanf("%f" , &n2);

    divisao = n1/n2;
    printf("A divisao eh %.2f" , divisao);
    break;

    default :
    return 0;
    }

}