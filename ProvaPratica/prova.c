#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h> 


void limpartela(){
    sleep(4);
    getchar();
	system("cls");

}
int main(){

    char usuario_correto[10] = "admin"; 
    char senha_correta[10] = "123";

    char senha_digitada[20];
    char usuario_digitado[20];

    char telefone[15];
    char idade[5];
    

    float saldo = 1500; 
    float valor_deposito,valor_saque,emprestimo,valor_parcela,valor_juros;
    
    int consulta,cadastrar;

    do {
        printf("Digite seu usuario:\n");
        fgets(usuario_digitado, sizeof(usuario_digitado), stdin);
        usuario_digitado[strcspn(usuario_digitado, "\n")] = '\0';

        printf("Digite sua senha:\n");
        fgets(senha_digitada, sizeof(senha_digitada), stdin);
        senha_digitada[strcspn(senha_digitada, "\n")] = '\0';
        
        if (strcmp(usuario_correto, usuario_digitado) != 0 || strcmp(senha_correta, senha_digitada) != 0) {
            printf("\nUsuario ou senha incorretos. Tente novamente.\n\n");
        }

    } while (strcmp(usuario_correto, usuario_digitado) != 0 || strcmp(senha_correta, senha_digitada) != 0);

    printf("\nBem-vindo ao sistema %s.\n", usuario_digitado);

    
    do{

        printf("====================================\n");
        printf("Digite a consulta que deseja fazer \n[1] Saldo \n[2] Deposito\n[3] Saque\n[4] Dados cadastrais\n[5] Simulacao emprestimo\n[0] Sair\n");
        printf("====================================\n");

    scanf("%d" , &consulta);

    switch(consulta){
        case 1: //saldo
            printf("Seu saldo na conta eh R$ %2.f\n" , saldo);
            limpartela();
        
        break;

        case 2://deposito
        printf("Digite o valor que deseja depositar\n");
        scanf("%f" , &valor_deposito);

        saldo = saldo + valor_deposito ;
        printf("O saldo atual eh R$ %2.f \n" , saldo);
        limpartela();
        break;

        case 3: //sacar 
        printf("Digite o valor que deseja sacar\n");
        scanf("%f" , &valor_saque);
        saldo = saldo - valor_saque;

        if (valor_saque < saldo){
            printf("Saque realizado com sucesso\n");
            sleep(1);
            printf("Seu saldo atual eh de R$ %2.f\n" , saldo);
        }else{
            printf("Saldo insuficiente para realizar o saque\n");
        }
        limpartela();

        break;

        case 4:
        
        printf("Escolha o que voce deseja cadastrar:\n[1] Telefone\n[2] Idade\n[3] Mostrar dados cadastrados\n");
        scanf(" %d" , &cadastrar);
        
        switch (cadastrar){
        case 1:
            printf("Digite o numero de telefone que deseja cadastrar\n");
            scanf("%s" ,telefone );
            sleep(1);
            printf("Telefone cadastrado\n");
            break;

        case 2:
            printf("Digite a sua idade que deseja cadastrar\n");
            scanf("%s" , idade);
            sleep(1);
            printf("idade cadastrado\n");
            break;

        case 3:
            printf("Os dados cadastrados foram \n Telefone: %s \n Idade: %s \n" , telefone, idade);
        break;
        limpartela();
        
        }
        break;

        case 5:
        printf("Digite a quantia desejada pra solicitar o emprestimo\n");     //20% ao ano 
        scanf("%f" , &emprestimo);

        valor_juros = (emprestimo * 0.2) + emprestimo;

        valor_parcela = valor_juros/12;

        printf("As parcelas ficaram de R$ %.2f ao mes\n" , valor_parcela);
        limpartela();
        break;
    }

    }while (consulta != 0);{    
        sleep(1);
        printf("Deslogando...");
        limpartela();
       
    }
    
}