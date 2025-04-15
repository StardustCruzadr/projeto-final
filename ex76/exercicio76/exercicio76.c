#include <stdio.h>
#include <ctype.h>  // Para usar tolower()

int main() {
    char texto[1000];
    int i, contador = 0;

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin); // Lê a string com espaços

    for (i = 0; texto[i] != '\0'; i++) {
        char c = tolower(texto[i]); // Converte para minúsculo para facilitar a comparação
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }

    printf("Quantidade de vogais: %d\n", contador);

    return 0;
}