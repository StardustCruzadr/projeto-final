#include <stdio.h>

int main() {
    int a, b, c, soma;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    if (a <= b && a <= c) {
        soma = b + c;
    } else if (b <= a && b <= c) {
        soma = a + c;
    } else {
        soma = a + b;
    }

    printf("A soma dos dois maiores valores e: %d\n", soma);

    return 0;
}