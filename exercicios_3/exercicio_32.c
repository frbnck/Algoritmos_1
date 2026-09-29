/* Crie um programa para ler da entrada padrão dados inteiros para as variáveis: X, Y, Z e W.

   Em seguida, o programa deve calcular uma expressão lógica, utilizando o operador lógico OU,
   para verificar se X é igual à Y ou se Z é diferente de W.

   Depois o programa deve exibir o resultado da operação caso seja verdadeira ou seja falsa.
   - Resultado = 0, imprimir: "Resultado: Todas as expressões são FALSAS"
   - Resultado = 1, imprimir: "Resultado: Ao menos uma expressão é VERDADEIRA" */

#include <stdio.h>

int main() {
    int X, Y, Z, W, resultado;

    printf("Digite 4 numeros inteiros:\n");
    scanf("%d %d %d %d", &X, &Y, &Z, &W);

    resultado = (X == Y) || (Z != W);

    if (resultado == 0){
        printf("Resultado: Todas as expressoes são FALSAS");
    }
    else {
        printf("Resultado: Ao menos uma expressao e VERDADEIRA");
    }

    return 0;
}