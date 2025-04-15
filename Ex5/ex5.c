#include <stdio.h>

int main() {
    int numero, modulo;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        modulo = -numero;
    } else {
        modulo = numero;
    }

    printf("O modulo de %d e: %d\n", numero, modulo);

    return 0;
}