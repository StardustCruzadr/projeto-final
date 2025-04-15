#include <stdio.h>
#include <string.h>

int main() {
    char texto[1000];
    char maiorPalavra[100];
    int maxTamanho = 0;

    printf("Digite uma string normalizada: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0'; // Remove o \n do final

    // Divide a string em palavras usando espaço como separador
    char *palavra = strtok(texto, " ");

    while (palavra != NULL) {
        int tamanho = strlen(palavra);
        if (tamanho > maxTamanho) {
            maxTamanho = tamanho;
            strcpy(maiorPalavra, palavra);
        }
        palavra = strtok(NULL, " ");
    }

    // Exibe o resultado
    printf("A maior palavra eh: %s\n", maiorPalavra);
    printf("Tamanho: %d caracteres\n", maxTamanho);

    return 0;
}