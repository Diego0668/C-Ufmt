#include <stdio.h>
#include <string.h>   
#include <stdbool.h>  

int main() {
    char senha_principal[100];
    char senha_confirmacao[100];

    bool cadastro_sucesso = false;



    do {
       
        printf("Crie sua senha: ");
        fgets(senha_principal, sizeof(senha_principal), stdin);
       
        senha_principal[strcspn(senha_principal, "\n")] = '\0';

  
        printf("Confirme sua senha: ");
        fgets(senha_confirmacao, sizeof(senha_confirmacao), stdin);
     
        senha_confirmacao[strcspn(senha_confirmacao, "\n")] = '\0';

       
        if (strcmp(senha_principal, senha_confirmacao) == 0) {
            printf("\nOK! As senhas sao iguais.\n");
            
            cadastro_sucesso = true;
        } else {
           
            printf("\nERRO: As senhas não são iguais e tente novamente.\n\n");
        }

    } while (cadastro_sucesso == false);

    printf("\n-------------------------------------\n");
    printf("Cadastro feito com sucesso!\n");
    printf("-------------------------------------\n");

    return 0;
}