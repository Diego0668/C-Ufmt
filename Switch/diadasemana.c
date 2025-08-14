#include <stdio.h>
// esse era pra enviar junto com a lista dos 15, so que nao tinha visto, entao estou encaminhando pela lista dos switch
int main(){


    int semana;
        
    printf("========================================================\n");
    printf("Digite um numero que ira representar um dia da semana\n");
    printf("========================================================\n");
    scanf("%d" , &semana);


    switch(semana){

        case 1:
        printf("Segunda\n");
        break;
        
        case 2:
        printf("Terca-feira \n");
        break;
        
        case 3:
        printf("Quarta-feira\n");
        break;
        
        case 4:
        printf("Quinta-feira");
        break;
        
        case 5:
        printf("Sexta-feira");
        break;
        
        case 6:
        printf("Sabado");
        break;
        
        case 7:
        printf("Domingo");
        break;

        default:
        printf("Opcao invalida!\n");
        break;

    }
}