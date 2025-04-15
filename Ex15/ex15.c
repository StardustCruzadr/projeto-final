#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[100];
    char ultimoNome[50];
    char resultado[150] = "";
    char *palavra;
    int primeiro = 1;

    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = '\0';


    palavra = strtok(nome, " ");


    char iniciais[100] = "";

    while (palavra != NULL) {

        char *prox = strtok(NULL, " ");

        if (prox == NULL) {

            strcpy(ultimoNome, palavra);
            break;
        } else {

            char inicial = toupper(palavra[0]);
            char temp[5];
            sprintf(temp, "%c. ", inicial);
            strcat(iniciais, temp);
        }

        palavra = prox;
    }

    sprintf(resultado, "%s, %s", ultimoNome, iniciais);

    int len = strlen(resultado);
    if (len > 0 && resultado[len - 1] == ' ') {
        resultado[len - 1] = '\0';
    }

    printf("Resultado: %s\n", resultado);

    return 0;
}