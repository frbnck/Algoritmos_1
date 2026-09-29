// Leia 2 valores inteiros A e B, imprima a subtração destes números na saída padrão.

#include <stdio.h>

int main(){
    int A, B;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &A);
    printf("Digite outro numero inteiro: \n");
    scanf("%d", &B);

    printf("A subtracao entre A e B e: %d", A - B);

    return 0;
}