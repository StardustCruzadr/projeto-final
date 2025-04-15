#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000];

    // Lê a primeira string
    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove o \n do final

    // Lê a segunda string
    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove o \n do final

    // Verifica se a primeira contém a segunda
    if (strstr(str1, str2) != NULL) {
        printf("A primeira string CONTÉM a segunda.\n");
    } else {
        printf("A primeira string NÃO contém a segunda.\n");
    }

    return 0;
}