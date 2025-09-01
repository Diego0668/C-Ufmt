#include <stdio.h>

int main() {

    int n;
    int soma_pares = 0;
    int contador = 1;
    int status_leitura;

  
    while (1) {
        printf("Digite um numero: ");
        
        status_leitura = scanf("%d", &n);

        while (getchar() != '\n');

        if (status_leitura == 1 && n > 0) {
            break; 
        } else {
            printf("Entrada inválida\n");
        }
    }

    while (contador <= n) {
        if (contador % 2 == 0) {
            soma_pares += contador;
        }
        contador++;
    }

    printf("\nA soma de todos os números pares entre 1 e %d é: %d\n", n, soma_pares);

    return 0;
}