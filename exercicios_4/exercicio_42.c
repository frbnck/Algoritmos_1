/* Escreva um algoritmo em linguagem C que leia três valores de salário e imprima na saída padrão o maior valor dentre eles.
   Considere que o salário possui dois números decimais para representar os centavos. */

#include <stdio.h>

int main() {
    int comparacao;
    float salario1, salario2, salario3;

    printf("Digite os 3 salarios:\n");
    scanf("%f %f %f", &salario1, &salario2, &salario3);

    comparacao = salario1 > salario2;

    if (comparacao) {
        comparacao = salario1 > salario3;

        if (comparacao) {
            printf("Maior Salario: R$ %.2f", salario1);
        }
        else {
            printf("Maior Salario: R$ %.2f", salario3);
        }
    }
    else {
        comparacao = salario2 > salario3;

        if (comparacao) {
            printf("Maior Salario: R$ %.2f", salario2);
        }
        else {
            printf("Maior Salario: R$ %.2f", salario3);
        }
    }

    return 0;
}