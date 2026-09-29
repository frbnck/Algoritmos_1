/* Com base na tabela abaixo, escreva um programa, que leia o código de um item e a quantidade deste item.
   A seguir, calcule e mostre o valor da conta a pagar. */

#include <stdio.h>

int main () {
   int codigo, quantidade;
   double valor;
   float const item1 = 4.00, item2 = 4.50, item3 = 5.00, item4 = 2.00, item5 = 1.50;

   printf("Digite o codigo do item:\n");
   scanf("%d", &codigo);

   printf("Digite a quantidade do item:\n");
   scanf("%d", &quantidade);

   switch (codigo)
   {
      case 1:
         valor = item1 * quantidade;
         break;
      case 2:
         valor = item2 * quantidade;
         printf("Total: R$ %.2f", valor);
         break;
      case 3:
         valor = item3 * quantidade;
         printf("Total: R$ %.2f", valor);
         break;
      case 4:
         valor = item4 * quantidade;
         printf("Total: R$ %.2f", valor);
         break;
      case 5:
         valor = item5 * quantidade;
         printf("Total: R$ %.2f", valor);
         break;
      default:
         printf("Codigo invalido");
         break;
   }

   return 0;
}