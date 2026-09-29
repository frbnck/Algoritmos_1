/* Faça um programa que leia da entrada padrão:
    - O número de eleitores da última eleição municipal de Hermoso do Sul;
    - A quantidade de votos brancos;
    - A quantidade de votos nulos.

   Em seguida, calcule:
    - O número de votos válidos;
    - O percentual de votos válidos em relação ao número de eleitores;
    - O percentual de votos brancos em relação ao número de eleitores;
    - O percentual de votos nulos em relação ao número de eleitores.

Apresente os resultados. */

#include <stdio.h>

int main(){
    float eleitores, brancos, nulos, validos;
    float pvalidos, pbrancos, pnulos;

    scanf("%f", &eleitores);
    scanf("%f", &brancos);
    scanf("%f", &nulos);

    validos = eleitores - brancos - nulos;

    pvalidos = (validos / eleitores)*100;
    pbrancos = (brancos / eleitores)*100;
    pnulos = (nulos / eleitores)*100;

    printf("Total de votos validos: %d \n", (int)validos);
    printf("----------------------------\n");
    printf("Votos validos: %.2f%% \n", pvalidos);
    printf("Votos brancos: %.2f%% \n", pbrancos);
    printf("Votos nulos: %.2f%% \n", pnulos);

    return 0;
}