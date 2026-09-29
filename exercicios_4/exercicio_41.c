/* Escreva um programa em linguagem C que solicite ao usuário o tipo de passageiro:

   - Digite 1 para Estudante
   - Digite 2 para Idoso
   - Digite 3 para Trabalhador comum

   Solicite a distância a ser percorrida (em km), e o valor da passagem seja calculado da seguinte forma:

   - Tarifa base: R$ 5,00 até 10 km, mais R$ 0,50 por km adicional.
   - Estudantes pagam 50% do valor final.
   - Idosos pagam 30% do valor final.
   - Trabalhadores comuns pagam o valor integral.

   O programa deve exibir o valor da passagem formatado com duas casas decimais. */

#include <stdio.h>

int main (){
    int tipo, distancia, adicional;
    float valor_final;


    printf("Digite o tipo da passagem:\n");
    printf("- Digite 1 para Estudante\n");
    printf("- Digite 2 para Idoso\n");
    printf("- Digite 3 para Trabalhador comum\n");
    scanf("%d", &tipo);

    printf("Digite a distancia a ser percorrida:\n");
    scanf("%d", &distancia);

    if (distancia <= 10) {
        valor_final = 5.00;
    }
    else {
        adicional = distancia - 10;
        valor_final = 5.00 + 0.50 * adicional;
    }

    switch (tipo)
    {
        case 1:
            valor_final = 0.5 * valor_final;
            printf("Valor da passagem: R$ %.2f", valor_final);
            break;
        case 2:
            valor_final = 0.3 * valor_final;
            printf("Valor da passagem: R$ %.2f", valor_final);
            break;
        case 3:
            printf("Valor da passagem: R$ %.2f", valor_final);
            break;
        default:
            break;
    }

    return 0;
}