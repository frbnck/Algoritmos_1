/* Crie um programa que peça ao usuário para inserir os comprimentos de três lados
   de um triângulo (A, B e C) sendo do tipo double.

   O programa deve determinar caso os comprimentos formam um triângulo válido usando as seguintes expressões logicas:
   - A soma das variáveis A e B seja maior do que a variável C;
   - A soma das variáveis A e C seja maior do que a variável B;
   - A soma das variáveis B e C seja maior do que a variável A.

   O programa deve calcular o resultado da expressão lógica juntando os valores lógicos dessas expressões
   através do operador lógico AND e imprimir na saída padrão.

   Se o resultado apresentado for verdadeiro (1), significa que é possível formar um triângulo com esses lados;
   caso contrário, indica que não é possível formar um triângulo. */

#include <stdio.h>

int main(){
    double A, B, C;
    int valido;

    printf("-----ESTE TRIANGULO E VALIDO?------\n");
    printf("Digite os valores dos lados: \n");
    scanf("%lf %lf %lf", &A, &B, &C);

    valido = A + B > C && A + C > B && B + C > A;

    if (valido == 1) {
        printf("E possivel formar um triangulo!");
    }
    else {
        printf("Nao e possivel formar um triangulo!");
    }

    return 0;
}