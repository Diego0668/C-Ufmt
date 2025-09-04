#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h> 

int main (){

    char usuario[30] = "admin";
    char usuario_digitado[30];
    
    char senha[30] = "123";
    char senha_digitado[30];

    int decisao;

    do{
        printf("Digite o usuario");
        fgets(usuario_digitado , sizeof(usuario_digitado) , stdin);
        usuario_digitado[strcspn(usuario_digitado , "\n")] = '\0'; 

        printf("Digite a senha");
        fgets(senha_digitado , sizeof(senha_digitado) , stdin);
        senha_digitado[strcspn(senha_digitado , "\n")] = '\0'; 

        if (strcmp(usuario , usuario_digitado) != 0 || strcmp(senha , senha_digitado) != 0){

            printf("Erro");
        }
        
    
    } while (strcmp(usuario , usuario_digitado) != 0 || strcmp(senha , senha_digitado) != 0);

    do
    {
        printf("1 ou 2");
        scanf("%d" , &decisao);

        switch (decisao)
    {
        case 1:
           printf("OPAAA");
            break;
        
        default:
            break;
        }
    } while (decisao != 0);{
        printf("SAINDO");
    }
    

    
    


    
    
    
    

    


}