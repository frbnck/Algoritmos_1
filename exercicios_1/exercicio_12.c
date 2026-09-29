/* Faça um programa que leia da entrada padrão:
    - O valor de um produto;
    - O percentual de reajuste.

   Em seguida, calcule:
    - O valor do reajuste;
    - O valor do produto reajustado.

Apresente na saída padrão as informações. */

#include <stdio.h>

int main(){
    float valor, percentual, reajuste, produto;

    scanf("%f", &valor);
    scanf("%f", &percentual);

    reajuste = (valor * percentual) / 100;

    produto = valor + reajuste;

    printf("Valor do reajuste: %.2f \n", reajuste);
    printf("Valor do produto reajustado: %.2f \n", produto);

    return 0;
}