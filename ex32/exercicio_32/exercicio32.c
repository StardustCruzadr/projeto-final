#include <stdio.h>
#include <ctype.h>

int main() {
    char caractere;

    // Lê o caractere
    printf("Digite um caractere: ");
    scanf(" %c", &caractere); // espaço antes de %c ignora espaços em branco anteriores

    // Verifica se é uma letra
    if (isalpha(caractere)) {
        // Converte para minúsculo para facilitar a comparação
        char c = tolower(caractere);

        // Verifica se é vogal
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            printf("E uma VOGAL.\n");
        } else {
            printf("E uma CONSOANTE.\n");
        }
    }
    // Verifica se é um número
    else if (isdigit(caractere)) {
        printf("E um NUMERO.\n");
    }
    // Qualquer outra coisa é símbolo
    else {
        printf("E um SIMBOLO.\n");
    }

    return 0;
}