// Leia 2 valores inteiros A e B, imprima a soma destes números na saída padrão.

#include <stdio.h>

int main(){
    int A, B;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &A);
    printf("Digite outro numero inteiro: \n");
    scanf("%d", &B);

    printf("A soma dos numeros e: %d", A + B);

    return 0;
}