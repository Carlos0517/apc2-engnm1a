#include <stdio.h>
#include <math.h>

int main() {

  int numero;
  int numero_valido = 0;

  while(numero_valido == 0) {
    printf("Entre com um numero entre 1 e 10: ");
    int deu_certo = scanf("%i", &numero);
    numero_valido = numero > 0 && numero < 11;
    if (deu_certo && numero_valido) {
      printf("segue o jogo\n");
    } else {
      printf("Numero invalido. Tente novamente!\n");
      getchar();
    }
  }
  do {
    printf("Entre com um numero entre 1 e 10: ");
    int deu_certo = scanf("%i", &numero);
    numero_valido = numero > 0 && numero < 11;
    if (deu_certo && numero_valido) {
      printf("segue o jogo\n");
    } else {
      printf("Numero invalido. Tente novamente!\n");
      getchar();
    }

  } while(numero_valido == 0);




  return 0; 
}