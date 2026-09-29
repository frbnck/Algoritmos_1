/* Leia um número inteiro que representa um código de DDD para discagem interurbana. Em seguida, informe à qual cidade o DDD pertence,
   considerando a tabela abaixo:

   Se a entrada for qualquer outro DDD que não esteja presente na tabela acima, o programa deverá informar: DDD nao cadastrado

   Resolver usando switch-case. */

#include <stdio.h>

int main (){
    int codigo;

    printf("Digite o codigo de DDD:\n");
    scanf("%d", &codigo);

    switch (codigo)
    {
        case 61:
            printf("Brasilia");
            break;
        case 71:
            printf("Salvador");
            break;
        case 11:
            printf("Sao Paulo");
            break;
        case 21:
            printf("Rio de Janeiro");
            break;
        case 32:
            printf("Juiz de Fora");
            break;
        case 19:
            printf("Campinas");
            break;
        case 27:
            printf("Vitoria");
            break;
        case 31:
            printf("Belo Hoorizonte");
            break;
        default:
            printf("DDD nao cadastrado");
            break;
    }

    return 0;
}