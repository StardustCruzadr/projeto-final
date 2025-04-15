#include <stdio.h>

int main() {
    int N, i, ehPrimo = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    // Verifica se o número é menor que 2
    if (N < 2) {
        ehPrimo = 0;
    } else {
        // Verifica se N tem algum divisor além de 1 e ele mesmo
        for (i = 2; i <= N / 2; i++) {
            if (N % i == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }

    // Exibe o resultado
    if (ehPrimo) {
        printf("%d eh um numero PRIMO.\n", N);
    } else {
        printf("%d NAO eh um numero primo.\n", N);
    }

    return 0;
}