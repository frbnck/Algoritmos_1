/* Desenvolva um programa que solicite ao usuário um ano e determine se ele é um ano bissexto
   com base nas seguintes condições:

   - O ano é divisível por 4, mas não é divisível por 100.
   - Se o ano for divisível por 100, ele deve ser divisível por 400.

   O programa deve imprimir "Ano bissexto" quando verdadeiro. Caso contrário, deve imprimir "Ano regular". */

#include <stdio.h>

int main (){
    int ano, cond1, cond2;

    printf("Informe o ano:\n");
    scanf("%d", &ano);

    cond1 = (ano % 4) == 0 && (ano % 100) != 0;

    cond2 = (ano % 100) == 0 && (ano % 400) == 0;

    if (cond1 || cond2) {
        printf("Ano bissexto");
    }
    else {
        printf("Ano regular");
    }

    return 0;
}