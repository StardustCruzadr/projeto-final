#include <stdio.h>

int main() {
    float velocidade_ms, velocidade_kmh;

    // Lê a velocidade em m/s
    printf("Digite a velocidade em m/s: ");
    scanf("%f", &velocidade_ms);

    // Converte para km/h
    velocidade_kmh = velocidade_ms * 3.6;

    // Exibe o resultado
    printf("Velocidade em km/h: %.2f\n", velocidade_kmh);

    return 0;
}