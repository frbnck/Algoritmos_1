// Leia um caractere da entrada padrão e imprima-o duas vezes na saída padrão separados por um espaço em branco.

#include <stdio.h>

int main(){
    char caractere;

    printf("Digite um caractere: \n");
    scanf("%c", &caractere);

    printf("O caractere que voce digitou, repetido duas vezes, e: \n");
    printf("%c %c", caractere, caractere);

    return 0;
}