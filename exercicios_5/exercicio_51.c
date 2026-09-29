/* Implemente um programa em C que peça ao usuário para escolher um tipo de veículo:

   - Digite 1 para Carro
   - Digite 2 para Moto

   Se o usuário escolher Carro, o programa deve pedir quantas portas ele tem.
   Se o usuário escolher Moto, o programa deve pedir se ela é do tipo esportiva (1) ou comum (2).

   No final, o programa deve imprimir uma mensagem descrevendo a escolha.

   Caso entrada inválida, informar mensagem conforme exemplos abaixo. */

#include <stdio.h>

int main(){
    int tipov, portas, tipom;

    printf("Digite o tipo do veiculo:\n");
    printf("1- Carro\n2- Moto\n");
    scanf("%d", &tipov);

    if(tipov==1){
        printf("Digite o numero de portas: ");
        scanf("%d", &portas);
        printf("Voce escolheu um carro com %d portas.", portas);
    }
    else if(tipov==2){
        printf("Digite o tipo de moto:\n");
        printf("1- Esportiva\n2- Comum\n");
        scanf("%d", &tipom);
        if(tipom==1){
            printf("Voce escolheu uma moto esportiva.");
        }
        else if(tipom==2){
            printf("Voce escolheu uma moto comum.");
        }
        else{
            printf("Opcao invalida para o tipo de moto.");
        }
    }
    else{
        printf("Opcao invalida.");
    }
}