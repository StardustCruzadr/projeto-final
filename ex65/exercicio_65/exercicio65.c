#include <stdio.h>

int main() {
    int numeros[20];
    int i, menor, maior;
    int posMenor, posMaior;

    // Leitura dos 20 números inteiros
    printf("Digite 20 numeros inteiros:\n");
    for (i = 0; i < 20; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializa menor, maior e suas posições
    menor = maior = numeros[0];
    posMenor = posMaior = 0;

    // Percorre o array para encontrar menor/maior e suas posições
    for (i = 1; i < 20; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
            posMenor = i;
        }
        if (numeros[i] > maior) {
            maior = numeros[i];
            posMaior = i;
        }
    }

    // Exibe os resultados
    printf("\nMenor valor: %d na posicao %d\n", menor, posMenor);
    printf("Maior valor: %d na posicao %d\n", maior, posMaior);

    return 0;
}