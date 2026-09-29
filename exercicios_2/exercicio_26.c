// Escreva um programa em C que leia um número inteiro e verifique se ele é positivo, negativo ou zero.

#include <stdio.h>

int main() {
    double numero;

    printf("Digite um numero:\n");
    scanf("%lf", &numero);

    if (numero < 0) {
        printf("Negativo");
    }
    else if (numero == 0) {
        printf("Zero");
    }
    else {
        printf("Positivo");
    }

    return 0;
}