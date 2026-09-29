/* Faça um programa em C que leia um número inteiro e imprima 1 se ele estiver
   entre 10 e 50 (inclusive), e 0 caso contrário.

   - Use operadores relacionais e lógicos.
   - Não utilize if, switch ou laços de repetição. */

#include <stdio.h>

int main() {
    int numero, resultado;

    printf("Digite um numero:\n");
    scanf("%d", &numero);

    resultado = (numero >= 10) && (numero <= 50);

    printf("RESULTADO\n");
    printf("%d\n", resultado);
    printf("1 = Esta entre 10 e 50 (inclusive)\n0 = Nao esta");

    return 0;
}