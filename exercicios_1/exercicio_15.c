/* Faça um programa em C que leia a idade de uma pessoa e imprima 1
   se ela for maior ou igual a 18 anos e 0 caso contrário.

   - Use apenas operadores relacionais e lógicos.
   - Não use if, switch ou laços de repetição. */

#include <stdio.h>

int main(){
    int idade, maior;

    printf("Qual e a sua idade:\n");
    scanf("%d", &idade);

    maior = (idade >= 18);

    printf("RESULTADO\n");
    printf("%d\n", maior);
    printf("1 = Maior de idade\n0 = Menor de idade");
}