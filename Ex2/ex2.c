#include <stdio.h>

int main() {
    int numero, centena, dezena, unidade, invertido;

    printf("Digite um numero de tres algarismos: ");
    scanf("%d", &numero);

    centena = numero / 100;
    dezena = (numero / 10) % 10;
    unidade = numero % 10;

    invertido = unidade * 100 + dezena * 10 + centena;

    // Exibe o resultado
    printf("O numero invertido e: %d\n", invertido);

    return 0;
}