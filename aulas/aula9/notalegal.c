#include <stdio.h>

int main(){

  struct produto_t { // agrupa variaveis
  char nome[31];
  int quantidade;
  int unidade; // 0 - unid, 1 - caixa, 2 - peso, 3 - lata 
  float preco;
  float valor; 

  
  };

   struct produto_t produto;

  printf("Entre com o nome do produto: \n");
  int deu_certo = scanf("%s", produto.nome);
  
  printf("Entre com a quantidade do produto: \n");
  deu_certo = scanf("%i", &produto.quantidade);

  printf("Entre com a unidade do produto: \n");
  printf("0-unidade 1-caixa 2-peso 3-lata: ");
  deu_certo = scanf ("%i", &produto.unidade);

  printf("Entre com o preço do produto \n");
  deu_certo = scanf("%f", &produto.preco);

  produto.valor = produto.preco * produto.quantidade;

    printf("--------------------------\n");
    printf("\n       Nota Legal       \n");
    printf("Item Qtd Und  Preco  Valor\n");
    printf("%-3s %03i",  produto.nome, produto.quantidade);
    switch (produto.unidade) {
      case 0: printf(" UN "); break;
      case 1: printf(" CX "); break;
      case 2: printf(" KG "); break;
      case 3: printf(" LT "); break;
    }
  printf("%3.2f%3.2f\n", produto.preco, produto.valor);

  return 0; 
}