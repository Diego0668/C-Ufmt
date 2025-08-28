#include <stdio.h>
#include <string.h>

int main (){

    char senha [15];

    printf("Digite a sua nova senha\n");
    scanf("%s" , &senha);


    while( strlen(senha) <= 8  ){
        printf("senha curta, tente novamente");
        scanf("%s", &senha);
    }
    
    printf("Senha registrada");

    return 0;
    

}