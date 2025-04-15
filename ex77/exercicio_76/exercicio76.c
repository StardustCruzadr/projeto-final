#include <stdio.h>
#include <string.h>

int main() {
    char texto[1000], invertido[1000];
    int i, tamanho;

    // Lê a string
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    // Remove o \n do final, se existir
    texto[strcspn(texto, "\n")] = '\0';

    tamanho = strlen(texto);

    // Inverte a string
    for (i = 0; i < tamanho; i++) {
        invertido[i] = texto[tamanho - 1 - i];
    }

    invertido[tamanho] = '\0'; // Adiciona o caractere de fim de string

    // Imprime a string invertida
    printf("String invertida: %s\n", invertido);

    return 0;
}