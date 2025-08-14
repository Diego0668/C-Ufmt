#include <stdio.h>
#include <unistd.h>

int main(){

    float saldo = 1000;
    float valor_saque;
    int consulta;

    printf("====================================\n");
    printf("Digite a consulta que deseja fazer \n[1] Saque \n[2] Verificar saldo\n");
    printf("====================================\n");

    scanf("%d" , &consulta);

    switch(consulta){

        case 1:
        printf("Digite o valor que deseja sacar\n");
        scanf("%f" , &valor_saque);
        

        
        if(valor_saque > saldo){
            printf("Saldo insuficiente para o saque desejado");
        }else{
            printf("Saque efetuado com sucesso \n");
            saldo = saldo - valor_saque;
            sleep(1); //função para ser um temporizador
            printf("O seu saldo agora eh R$ %.2f" , saldo);
        }

        break;

        case 2:

        printf("Seu saldo atual eh R$ %2.f" , saldo);
        break;

        default:
        return 0;

    }




    
}