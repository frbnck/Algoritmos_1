/* Faça um programa que calcule o valor da conta de energia elétrica.
   Para isso, leia da entrada padrão o consumo em kWh (int), o valor da tarifa (double),
o valor de taxas e impostos (double) e o valor de serviços (double).

   Para calcular a conta, use a fórmula a seguir:
   total = (kWh * tarifa) + taxas_impostos + servicos
   Lembrando que o Valor consumo é definido por: (kWh * tarifa).

   Apresente as informações. */

#include <stdio.h>

int main(){
   int consumo;
   double tarifa, taxas_impostos, servicos, valor_consumo, total;

   printf("Digite o consumo em kWh:\n");
   scanf("%d", &consumo);
   printf("Digite o valor da tarifa:\n");
   scanf("%lf", &tarifa);
   printf("Digite a taxa de impostos:\n");
   scanf("%lf", &taxas_impostos);
   printf("Digite a taxa de servicos:\n");
   scanf("%lf", &servicos);

   valor_consumo = consumo * tarifa;

   total = valor_consumo + taxas_impostos + servicos;

   printf("DADOS DO FATURAMENTO:\n");
   printf("Consumo............:%d kWh\n", consumo);
   printf("Tarifa (R$)........:%.3f \n", tarifa);
   printf("Valor consumo (R$).:%.2f \n", valor_consumo);
   printf("Taxas e impostos...:%.2f \n", taxas_impostos);
   printf("Servicos...........:%.2f \n", servicos);
   printf("TOTAL (R$).........:%.2f \n", total);

   return 0;
}