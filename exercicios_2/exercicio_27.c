/* Desenvolva um programa que solicite ao usuário sua idade e, com base nessa idade,
   determine se a pessoa está na faixa etária entre 18 e 65 anos.

   O programa deve calcular a expressão: "se idade for maior ou igual a 18 e se idade for menor ou igual a 65",
   então imprima "Idade valida", caso contrário imprima "Idade invalida". */

#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade:\n");
    scanf("%d", &idade);

    if (idade >= 18 && idade <= 65) {
        printf("Idade valida");
    }
    else {
        printf("Idade invalida");
    }

    return 0;
}