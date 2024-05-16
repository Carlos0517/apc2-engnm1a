#include <stdio.h>
#include <math.h>

int main() {
  int numero;

  printf("Entre com um numero > 0 e < 101: ");
  int deu_certo = scanf("%i", &numero);
  int numero_valido = numero > 0 && numero < 101 ; 

  if (deu_certo && numero_valido) {
  for (int i=1; i<=100; i++){
    if (i % numero == 0) {
      printf("%i é multiplo de %i\n ", i, numero);
      
    }
  }
  printf("\n");  
  }else {
    printf("Numero invalido. Tente novamente!\n");
  }







  return 0; 
}