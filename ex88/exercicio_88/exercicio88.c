#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[1000];
    int i;

    // Lê a string
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0'; // Remove o \n do final

    // Converte cada caractere para maiúsculo
    for (i = 0; texto[i] != '\0'; i++) {
        texto[i] = toupper((unsigned char)texto[i]);
    }

    // Exibe a string em caixa alta
    printf("String em caixa alta: %s\n", texto);

    return 0;
}