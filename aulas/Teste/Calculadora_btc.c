#include <stdio.h>
#include <math.h>

int main(){

  float dolar;
  float bitcoin;

  printf("entre com a quantidade de dolares convertidos na cripto: ");
  int deu_certo = scanf("%f", &dolar);

  
  int cotação_bit_dolar;
  
  
  printf("qual a atual cotação do bitcoin em dólar: ");
  deu_certo = scanf("%i", &cotação_bit_dolar); 

  // quantidade de bit = cotação / quatidade de dolares

  bitcoin = dolar / cotação_bit_dolar ; 
  printf("Você comprou a quantia de %f bitcoins\n", bitcoin);









  return 0;
}