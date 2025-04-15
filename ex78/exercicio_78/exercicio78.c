#include <stdio.h>
#include <string.h>

int main() {
    char texto[1000];
    char caractere;
    int i, contador = 0;

    // Lê a string
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    // Remove o \n do final, se existir
    texto[strcspn(texto, "\n")] = '\0';

    // Lê o caractere
    printf("Digite um caractere para contar: ");
    scanf(" %c", &caractere);  // espaço antes de %c para ignorar '\n' pendente

    // Conta as ocorrências do caractere na string
    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == caractere) {
            contador++;
        }
    }

    // Exibe o resultado
    printf("O caractere '%c' aparece %d vez(es) na string.\n", caractere, contador);

    return 0;
}