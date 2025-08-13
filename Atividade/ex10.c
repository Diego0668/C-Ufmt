#include <stdio.h>

int main(){
    int idade = 20;
    char convite [5]= "Diego";
    char convidado [20];

    printf("Digite seu nome para ver se esta na lista ou se sua idade permite voce entrar\n");
    scanf("%s" , &convidado);

   if(idade >= 21 || convidado == convite ){
    printf("Voce pode entrar na festa e seja bem vindo %s" , convidado);
   }else{
    printf("Voce nao pode entrar na festa");
   }

   return 0;
}
