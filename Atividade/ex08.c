#include <stdio.h>
#include <stdbool.h>

int main(){

    int idade = 18;
    bool escolaridade = false;  // T = ensino medio 


    if(idade >= 18 && escolaridade == true){
        printf("Voce esta apto para se inscrever no concurso");

    }else{
        printf("Voce NAO esta apto para se inscrever no concurso");
    }
}