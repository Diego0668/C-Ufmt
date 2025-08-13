#include <stdio.h>
#include <stdbool.h>

int main(){
   
    int idadeA;
    int idadeB;

    printf("Digite a idade do aluno A \n");
    scanf("%d" , &idadeA);

    printf("Digite a idade do aluno B \n");
    scanf("%d" , &idadeB);


    if(idadeA > idadeB){
        printf("O aluno A e mais velho que o Aluno B \n");
    
    } else if(idadeA == idadeB){
        printf("A idade do aluno A e igual ao do Aluno B \n");

    }else{
        printf("O aluno B e mais velho que o Aluno A \n");
    }





}