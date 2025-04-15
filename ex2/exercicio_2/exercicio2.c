#include <stdio.h>

int main() {
    float lado, area, perimetro;

    // Entrada do usuário
    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%f", &lado);

    // Cálculo da área e do perímetro
    area = lado * lado;
    perimetro = 4 * lado;

    // Saída dos resultados
    printf("Area do quadrado: %.2f\n", area);
    printf("Perimetro do quadrado: %.2f\n", perimetro);

    return 0;
}