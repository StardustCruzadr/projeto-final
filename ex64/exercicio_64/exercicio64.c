#include <stdio.h>

int main() {
    int numeros[20];
    int i, menor, maior;

    // Leitura dos 20 números inteiros
    printf("Digite 20 numeros inteiros:\n");
    for (i = 0; i < 20; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializa menor e maior com o primeiro valor do array
    menor = maior = numeros[0];

    // Encontra o menor e o maior valor
    for (i = 1; i < 20; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    // Exibe os resultados
    printf("\nMenor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);

    return 0;
}