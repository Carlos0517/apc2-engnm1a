#include <stdio.h>
#include <math.h>

int main() {
  int numero1;
  int numero2;

  printf("entre com o numero 1: ");
  int deu_certo = scanf("%i", &numero1);

  printf("entre com o numero 2: ");
  deu_certo = scanf("%i", &numero2);

  int sao_iguais = numero1 == numero2;
  printf("Os numeros sao iguais? %i\n", sao_iguais);

  int sao_diferentes = numero1 != numero2; 
  printf("Os numeros sao diferentes? %i\n", sao_diferentes);

  int e_maior = numero1 > numero2;
  printf("O primeiro numero e maior? %i\n", e_maior);

  int e_menor = numero1 < numero2;
  printf("O primeiro numero e menor? %i\n", e_menor);

  int maior_ou_igual = numero1 >= numero2;
  printf("O primeiro numero e maior ou igual? %i\n", maior_ou_igual);

  int menor_ou_igual = numero1 <= numero2;
  printf("O primeiro numero e menor ou igual? %i\n", menor_ou_igual);
  




  return 0;
}