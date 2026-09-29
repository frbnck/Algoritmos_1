/* Escreva um programa que receba valores inteiros para as variáveis A, B, C e D.

   Depois, imprima no console as seguintes frases, de acordo com a expressão lógica correspondente:
   - "Valores aprovados", se A for maior que B e se C for menor que D.
   - "Valores reprovados", caso contrário. */

#include <stdio.h>

int main (){
    int A, B, C, D;

    printf("Digite 4 valores inteiros:\n");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    if(A>B && C<D){
        printf("Valores aprovados");
    }
    else {
        printf("Valores reprovados");
    }
    return 0;
}
