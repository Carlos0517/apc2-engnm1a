// Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
#include <stdio.h>

int main() {
  
  float preco_inicial = 0.0;;
  const float ICMS = 0.17;
  const float COFINS = 0.076;
  const float PIS_PASEP = 0.0165;

  printf(" preco inicial: ");
  scanf("%f", & preco_inicial );
  
  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;
  float valor_icms = preco_inicial * ICMS;
  float valor_cofins = preco_inicial * COFINS;  
  float valor_pis = preco_inicial * PIS_PASEP;
  
  printf("O preço final é %.2f\n", preco_final);
  printf("O valor do ICMS é %.2f\n", valor_icms);
  printf("O valor do COFINS é %.2f\n", valor_cofins); 
  printf("O valor do PIS é %.2f\n", valor_pis); 
  
  
return 0;
}