/* O código abaixo representa um programa em C que lê dois inteiros da entrada padrão,
executa operações e imprime os resultados. */

#include <stdio.h>

int main() {
    int inteiro1;
    int inteiro2;

    // Lê dois inteiros da entrada padrão
    printf("Digite um numero inteiro: \n");
    scanf("%d", &inteiro1);
    printf("Digite outro numero inteiro: \n");
    scanf("%d", &inteiro2);

    // Imprime o resultado de 10 + 20
    printf("Resultado de 10 + 20 = %d \n", 10 + 20);

    // Imprime o resultado da soma dos valores presentes nas variáveis
    printf("Resultado de %d + %d = %d \n", inteiro1, inteiro2, inteiro1 + inteiro2);

    return 0;
}