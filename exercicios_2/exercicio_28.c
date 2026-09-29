/* Você é responsável por criar um algoritmo em C que controle uma lâmpada de alta potência com
   dois interruptores de dois estados.

   - Cada interruptor possui o estado desligado (zero) e o estado ligado (um).
   - A lâmpada ligará somente se um dos interruptores estiver ligado.
   - No entanto, ela não ligará se os dois interruptores estiverem ligados ou desligados.

   Escreva o algoritmo que receba como entrada os estados dos interruptores na forma de números
   inteiros (zero ou um) e como saída padrão apresente o estado da lâmpada (Ligada ou Desligada). */

#include <stdio.h>

int main() {
    int interruptor1, interruptor2;

    printf("Digite o estado do interruptor 1:\n");
    printf("0 - Desligado\n1 - Ligado\n");
    scanf("%d", &interruptor1);
    printf("Digite o estado do interruptor 2:\n");
    printf("0 - Desligado\n1 - Ligado\n");
    scanf("%d", &interruptor2);

    printf("ESTADO DA LAMPADA: ");
    if (interruptor1 == interruptor2){
        printf("Desligada");
    }
    else {
        printf("Ligada");
    }

    return 0;
}