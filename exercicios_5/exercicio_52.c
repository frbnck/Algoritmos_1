/* Implemente um programa em C que receba três níveis de entradas:

   Primeiro, o usuário informa o tipo de alimento:

   - 1 para Fruta
   - 2 para Legume

   Se a escolha for Fruta (1), o usuário deve informar:

   - 1 para Cítrica
   - 2 para Doce

   Se for Legume (2), o usuário deve informar:

   - 1 para Raiz
   - 2 para Folha

Caso a entrada seja inválida, informar mensagens conforme exemplos abaixo.
O programa deve imprimir uma frase no formato:

Voce escolheu: <categoria> - <subcategoria> */

#include <stdio.h>

int main(){
   int alimento, tipo;

   printf("Informe o tipo do alimento:\n");
   printf("1- Fruta\n2- Legume\n");
   scanf("%d", &alimento);

   if(alimento==1) {
      printf("Informe o subtipo do alimento:\n");
      printf("1- Citrica\n2- Doce\n");
      scanf("%d", &tipo);
   }
   else if(alimento==2) {
      printf("Informe o subtipo do alimento:\n");
      printf("1- Raiz\n2- Folha\n");
      scanf("%d", &tipo);
   }
   else {

   }

   switch(alimento){
      case 1:
         if(tipo==1){
            printf("Voce escolheu: Fruta - Citrica");
         }
         else if(tipo==2){
            printf("Voce escolheu: Fruta - Doce");
         }
         else{
            printf("Subtipo invalido");
         }
         break;
      case 2:
         if(tipo==1){
            printf("Voce escolheu: Legume - Raiz");
         }
         else if(tipo==2){
            printf("Voce escolheu: Legume - Folha");
         }
         else{
            printf("Subtipo invalido");
         }
         break;
      default:
         printf("Tipo invalido");
         break;
   }
   return 0;
}