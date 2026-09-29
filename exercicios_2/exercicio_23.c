/* Leia um valor inteiro que represente o mês de uma data qualquer e apresente o trimestre.

   Em um ano tem-se:
   - 1º trimestre: de janeiro a março.
   - 2º trimestre: de abril a junho.
   - 3º trimestre: de julho a setembro.
   - 4º trimestre: de outubro a dezembro.

   Resolver usando switch-case. */

#include <stdio.h>

int main() {
    int mes;

    printf("Digite o numero do mes:\n");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
        case 2:
        case 3:
            printf("Primeiro trimestre");
            break;
        case 4:
        case 5:
        case 6:
            printf("Segundo trimestre");
            break;
        case 7:
        case 8:
        case 9:
            printf("Terceiro trimestre");
            break;
        case 10:
        case 11:
        case 12:
            printf("Quarto trimestre");
            break;
        default:
            printf("Mes invalido");
            break;
    }

    return 0;
}