#include <stdio.h>
#include <string.h>

int main(){

    char usuario[15] = "admin";
    char senha[15] = "1234";

    char usuario_digitado[15];
    char senha_digitada[15];



    printf("Digite o seu usuario\n");
    scanf("%s" , &usuario_digitado);

    printf("Digite sua senha\n");
    scanf("%s" , &senha_digitada);

    if(strcmp(usuario_digitado, usuario) == 0 && strcmp(senha_digitada, senha) == 0){
        printf("Acesso permitido, bem vindo ao sistema");
    }else{
        printf("Acesso negado, usuario ou senha incorreta");
    }
   


   return 0;
}
    