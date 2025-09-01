#include <stdio.h>

int main() {
    int numero_inserido;
    int soma_total = 0;
    int status_leitura;

    printf("--- Soma de Números Positivos ---\n");
    printf("Digite números inteiros para somar.\n");

  
    while (1) {
        printf("Digite um número (negativo para sair): ");
        status_leitura = scanf("%d", &numero_inserido);

   
        if (status_leitura != 1) {
            printf("Erro. digite apenas números inteiros.\n");
          
            while (getchar() != '\n');
            continue; 
        }

  
        if (numero_inserido < 0) {
            break; 
        }

        
        soma_total += numero_inserido; 
    }

    printf("\n----------------------------------------\n");
    printf("O total da soma foi: %d\n", soma_total);
    printf("----------------------------------------\n");

    return 0;
}