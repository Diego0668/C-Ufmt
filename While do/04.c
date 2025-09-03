#include <stdio.h>
#include <string.h> 

int main() {
  
    char senha_correta[] = "diego123";
    char senha_digitada[50];


    do {
       
    
        printf("Por favor, digite a senha: \n");
        fgets(senha_digitada, sizeof(senha_digitada), stdin);
        senha_digitada[strcspn(senha_digitada, "\n")] = '\0';

        
    } while (strcmp(senha_digitada, senha_correta) != 0);

   
    printf("Senha correta!\n");

    return 0;
}