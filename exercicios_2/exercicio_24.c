/* Escreva um programa em C que leia a nota final de um aluno e a frequência (inteiros de 0 a 100).

   O aluno será considerado Aprovado se a nota for maior que 60 e a frequência maior que 75%.
   Caso contrário, está Reprovado. */
#include <stdio.h>

int main() {
    int nota, frequencia;

    printf("Digite a nota (0-100):\n");
    scanf("%d", &nota);
    printf("Digite a frequencia (0-100):\n");
    scanf("%d", &frequencia);

    if (nota >= 60 && frequencia >= 75){
        printf("Aprovado");
    }
    else {
        printf("Reprovado");
    }

    return 0;
}