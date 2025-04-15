#include <stdio.h>

int main() {
    int numero;

    char *unidades[] = {
        "", "um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove"
    };

    char *especiais[] = {
        "dez", "onze", "doze", "treze", "quatorze", "quinze",
        "dezesseis", "dezessete", "dezoito", "dezenove"
    };

    char *dezenas[] = {
        "", "", "vinte", "trinta", "quarenta", "cinquenta",
        "sessenta", "setenta", "oitenta", "noventa"
    };

    printf("Digite um numero entre 1 e 100: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 100) {
        printf("Numero fora do intervalo permitido (1 a 100).\n");
    } else if (numero == 100) {
        printf("cem\n");
    } else if (numero >= 10 && numero <= 19) {
        printf("%s\n", especiais[numero - 10]);
    } else {
        int dezena = numero / 10;
        int unidade = numero % 10;

        if (dezena == 0) {
            printf("%s\n", unidades[unidade]);
        } else if (unidade == 0) {
            printf("%s\n", dezenas[dezena]);
        } else {
            printf("%s e %s\n", dezenas[dezena], unidades[unidade]);
        }
    }

    return 0;
}