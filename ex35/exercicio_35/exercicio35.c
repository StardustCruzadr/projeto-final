#include <stdio.h>

int main() {
    int numero;

    // Entrada
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &numero);

    // Verifica e imprime o dia correspondente
    switch (numero) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Erro: numero invalido! Deve estar entre 1 e 7.\n");
            break;
    }

    return 0;
}