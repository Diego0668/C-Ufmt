#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    
   
    char produto [20];
    int quantidade;
    float preco;
    int consulta;


    printf("================================================\n");
    printf("Bem vindo ao Sistema de emissao de notas fiscais\n");
    printf("================================================\n");
    printf("Digite a um valor que deseja fazer \n[1] Calcular o valor total \n[2] Sair do sistema \n");
    scanf("%d" , &consulta);
    printf("====================================\n");
    
   
    switch(consulta){
        
        case 1: 
       

        printf("Digite o nome do produto\n");
        scanf("%s" , &produto);

        printf("Digite a quantidade do seu produto\n");
        scanf("%d" , &quantidade);
    
        printf("Digite preco do produto (no formato de X.XX)\n");
        scanf("%f" , &preco);
        float preco_total = quantidade * preco;
        float desconto = preco_total * 0.2 ;   //desconto de 20%
        float preco_final = preco_total - desconto;
       
        system("cls"); //limpar o console


        printf("================================================\n");
        printf("Seu pedido ficou:\n");
        printf("Preco: R$ %.2f \n" , preco_total);
        printf("Descontos: R$ %.2f \n", desconto); 
        printf("Preco FINAL : R$ %.2f \n", preco_final);
        printf("================================================\n");
        break;
        
        case 2:
        printf("Saindo do sistema em...");
        sleep(1);
        printf("1..");
        sleep(1);
        printf("2..");
        sleep(1);
        printf("3");
        break;

        

        default:
        printf("Opcao invalida!\n");
        return 0;
    }




}