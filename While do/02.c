#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    bool entrada_valida = false;
    int status_leitura; 

    do {
        printf("Digite um número inteiro POSITIVO: ");
        

        status_leitura = scanf("%d", &num);

        if (status_leitura != 1) {
            printf("Erro: Isso não é um número inteiro válido. Tente novamente.\n\n");
            
            while (getchar() != '\n');
            continue; 
        }

        if (num > 0) {
            printf("Ótimo! O número %d é positivo e foi aceito.\n", num);
            entrada_valida = true;
        } else {
            printf("Erro: O número %d não é positivo. Por favor, tente novamente.\n\n", num);
        }

    } while (entrada_valida == false);

    printf("\nPrograma finalizado com sucesso!\n");

    return 0;
}