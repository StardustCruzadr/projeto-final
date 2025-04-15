#include <stdio.h>

int main() {
    
    int numero, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    sucessor = numero + 1;

    printf("O numero dado e: %d e seu sucessor e: %d\n", numero, sucessor);

    return 0;
}