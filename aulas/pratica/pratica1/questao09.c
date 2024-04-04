#include <stdio.h>
#include <math.h>

int main() {

  int idade_dias; 
  int idade_meses; 
  int idade_anos;

  printf("Entre com sua idade em dias: ");
  int deu_certo = scanf("%i", &idade_dias);

  printf("Entre com sua idade em meses: ");
  scanf("%i", &idade_meses);

  printf("Entre com sua idade em anos: ");
  scanf("%i", &idade_anos);

  int quantidade_de_dias_de_vida = idade_dias + (idade_meses * 30) + (idade_anos * 365);
   printf("Essa quantidade de dias de vida: %i\n", quantidade_de_dias_de_vida );
  










  return 0;
}