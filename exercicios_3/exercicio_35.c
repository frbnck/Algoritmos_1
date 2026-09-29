/* Leia um valor do tipo caractere que representa a nota de um aluno seguindo o sistema americano de notas.
   Imprima uma mensagem dependendo da nota do aluno considerando a tabela abaixo:

   Para valores inválidos, o sistema deve mostra a mensagem: "Valor invalido". */

#include <stdio.h>
// Biblioteca de funções para testar e converter caracteres
#include <ctype.h>

int main (){
   char nota;

   printf("Digite a nota:\n");
   scanf("%c", &nota);

   nota = toupper((unsigned char)nota);

   switch (nota)
   {
      case 'A':
         printf("Excelente! Parabens!");
         break;
      case 'B':
      case 'C':
         printf("Voce foi bem.");
         break;
      case 'D':
         printf("Foi por muito pouco!");
         break;
      case 'F':
         printf("Estudar mais na proxima.");
         break;
      default:
         printf("Valor invalido.");
         break;
   }

   return 0;
}