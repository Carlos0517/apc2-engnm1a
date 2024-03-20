//

#include <stdio.h>
int main() {

  float valor_da_hora_de_trabalho = 4; 
  float total_horas_trabalhadas = 100;
  const float IR = 0.25;
  const float INSS = 0.11;

  float salario_bruto = valor_da_hora_de_trabalho * total_horas_trabalhadas;
  float imposto_renda = salario_bruto * IR;
  float imposto_previ = salario_bruto * INSS;
  float total_de_impostos = imposto_renda + imposto_previ;
  float salario_liquido = salario_bruto - imposto_renda - imposto_previ;

  
    printf("--------------------\n");
    printf("    CONTRA CHEQUE   \n");
    printf("--------------------\n");
    printf("Salario Bruto......: R$ %0.2f\n", salario_bruto);
    printf("Total de impostos......: R$ %0.2f\n", total_de_impostos);
    printf("Imposto de renda......: R$ %0.2f\n", imposto_renda);
    printf("INSS......: R$ %0.2f\n", imposto_previ);
    printf("Salario Liquido......: R$ %0.2f\n", salario_liquido);

  
return 0;

}
