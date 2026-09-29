/* Escreva um programa em C que leia a renda mensal de um estudante e a nota média dele.

   O estudante tem direito à Bolsa se a renda for menor que 2000 OU a nota for maior ou igual a 80.
   Caso contrário, exibir Sem Bolsa. */

#include <stdio.h>

int main() {
    int nota;
    double renda;

    printf("Digite a renda (0-100):\n");
    scanf("%lf", &renda);
    printf("Digite a nota (0-100):\n");
    scanf("%d", &nota);

    if (renda < 2000 || nota >= 80) {
        printf("Bolsa");
    }
    else {
        printf("Sem bolsa");
    }

    return 0;
}