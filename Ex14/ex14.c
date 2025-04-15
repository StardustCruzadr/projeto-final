#include <stdio.h>

int main() {
    int numeros[10];
    int i, qtdPares = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            qtdPares++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", qtdPares);

    return 0;
}