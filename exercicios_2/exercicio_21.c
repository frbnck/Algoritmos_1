/* Escreva um algoritmo em linguagem C que leia um número inteiro e verifique se ele é par.

   Dependendo do número lido, o algoritmo deve imprimir na saída padrão Par! ou Impar! */

#include <stdio.h>

int main() {
    int numero, resto;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &numero);

    resto = numero % 2;

    if (resto == 0) {
        printf("Par!");
    }
    else {
        printf("Impar!");
    }

    return 0;
}