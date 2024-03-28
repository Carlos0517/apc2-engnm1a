#include <stdio.h> 
int main(  ){
  
  char nome[31];
  int quantidade;
  float valor;

  
  printf("entre com o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", nome);

  printf("Entre com a qtd do produto: ");
  deu_certo = scanf("%i", &quantidade);

  printf("entre com o valor do produto: ");  
  deu_certo = scanf("%f", &valor);

  printf("\x1b[32m----------------------\n");
  printf("      Nota Legal      \n");
  printf("----------------------\x1b[00m\n");
  printf("Item      Qtd     Valor\n");
  printf("%-9s %1i %10.2f\n", nome, quantidade, valor );

    
  return 0;
}