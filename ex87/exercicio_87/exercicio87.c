#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para comparar duas strings ignorando maiúsculas/minúsculas
int compararStringsIgnoreCase(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (tolower((unsigned char)*str1) != tolower((unsigned char)*str2)) {
            return 0; // Diferentes
        }
        str1++;
        str2++;
    }
    return *str1 == *str2; // Verifica se ambas terminaram ao mesmo tempo
}

int main() {
    char string1[1000], string2[1000];

    // Lê as duas strings
    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = '\0'; // Remove o \n

    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = '\0';

    // Compara as strings
    if (compararStringsIgnoreCase(string1, string2)) {
        printf("As strings sao IGUAIS (ignorando caixa).\n");
    } else {
        printf("As strings sao DIFERENTES.\n");
    }

    return 0;
}