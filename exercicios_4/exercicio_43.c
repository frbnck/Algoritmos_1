/* Para doar sangue é necessário ter entre 18 e 72 anos.
   - Homens podem doar sangue até 3 vezes ao ano.
   - Mulheres podem doar apenas 4 vezes ano ano.
   - Apenas pessoas com 42 Kg ou mais podem ser doadoras de sangue.

   Faça um programa que solicite ao usuário as seguintes informações:
   Idade, peso, gênero (M ou F) e vezes que doou sangue este ano

   Com base nas regras definidas, responder se uma pessoa pode ou não ser doadora de sangue. */

#include <stdio.h>
#include <ctype.h>

int main() {
    int idade, frequencia;
    int idade_ok, frequencia_ok, peso_ok;
    float peso;
    char genero;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite o genero (M ou F): ");
    // O espaço antes do % descarta o Enter (\n) que ficou no buffer e compromete a leitura do caractere
    scanf(" %c", &genero);

    genero = toupper(genero);

    printf("Quantas vezes doou sangue este ano: ");
    scanf("%d", &frequencia);

    idade_ok = idade >= 18 && idade <= 72;

    peso_ok = peso >= 42;

    switch (genero)
    {
        case 'M':
            frequencia_ok = frequencia <= 3;
            break;
        case 'F':
            frequencia_ok = frequencia <= 4;
            break;
        default:
            printf("Genero invalido");
            return 0;
    }

    if (idade_ok && peso_ok && frequencia_ok) {
        printf("Pode ser doador");
    }
    else {
        printf("Nao pode ser doador");
    }

    return 0;
}
