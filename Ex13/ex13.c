#include <stdio.h>

int main() {
    int i, numero;
    int soma = 0;
    float media;

    for (i = 1; i <= 5; i++) {
        printf("Digite o %do nemero: ", i);
        scanf("%d", &numero);
        soma += numero;
    }

    media = soma / 5.0;

    printf("A media dos 5 numeros e: %.2f\n", media);

    return 0;
}