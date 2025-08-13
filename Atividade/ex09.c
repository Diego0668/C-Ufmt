#include <stdio.h>


int main(){

    int hora;
    int dia;

    printf("Digite um hora: (em HH)\n");
    scanf("%d" , &hora);


    printf("Digite o dia da semana: \n[1] Segunda \n[2] Terca \n[3] Quarta \n[4] Quinta \n[5] Sexta \n[6] Sabado \n[7] Domingo \n ");
    scanf("%d" , &dia);

    if  (dia < 5 && (hora >= 8 && hora <= 18))  {
        printf("A loja esta aberta");
    }else{
        printf("A loja esta fechada");
    }

    return 0;
}