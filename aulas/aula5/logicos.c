#include <stdio.h>
#include <math.h>

int main() {

  int numero; 

  printf("entre com o numero: ");
  int deu_certo = scanf("%i", &numero);
  
  // 0 < x < 10, 0 < x E x < 10 
  int maior_que_0_e_menor_que_10 = numero > 0 && numero < 10;
  printf("0 < numero < 10? %i\n", maior_que_0_e_menor_que_10);

  // x < 0, x > 10, x < 0 OU X > 10 
  int menorque0oumaiorque10 = numero < 0 || numero > 10 ;
  printf("numero < 0 ou numero > 10? %i\n",menorque0oumaiorque10);

  // x nao é < 0
  int naoemenorque0 = !(numero < 0);
  printf("numero nao < 0? %i\n", naoemenorque0);
  











  return 0;
}
