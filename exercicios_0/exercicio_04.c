/* O código abaixo representa um programa em C que lê dados da entrada padrão.
   Ele lê:
   - Um caractere
   - Um número inteiro
   - Um número ponto flutuante
   Depois imprime na saída padrão os valores lidos. */

#include <stdio.h>

int main() {
    char caracter;
    int inteiro;
    double numero_ponto_flutuante;

    printf("Digite um caractere: \n");
    scanf("%c", &caracter);

    printf("Digite um numero inteiro: \n");
    scanf("%d", &inteiro);

    printf("Digite um numero ponto flutuante: \n");
    scanf("%lf", &numero_ponto_flutuante);

    printf("Caractere: %c \n", caracter);
    printf("Numero inteiro: %d \n", inteiro);
    printf("Numero ponto flutuante: %lf \n", numero_ponto_flutuante);

    return 0;
}
