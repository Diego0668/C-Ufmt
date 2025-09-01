#include <stdio.h>
#include <string.h> 
#include <ctype.h>  

int main() {
    
    char texto[101];

    int contador_vogais = 0;

    printf("Digite uma frase ou palavra: ");


    fgets(texto, sizeof(texto), stdin);


    texto[strcspn(texto, "\n")] = '\0';

    
    while (texto[i] != '\0') {
        
      
        char letra_atual = tolower(texto[i]);

        if (letra_atual == 'a' || letra_atual == 'e' || letra_atual == 'i' || letra_atual == 'o' || letra_atual == 'u') {
            contador_vogais++;
        }

        i++;
    }

    printf("\nO numero de vogais eh %d\n", contador_vogais);

    return 0;
}