#include <stdio.h>
#include <string.h>

int main() { // 012345678901234567890123456789
  
  char nome[31]; // um nome de uma pessoa qualquer\0

  printf("Entre com seu nome: ");
  int deu_certo = scanf("%s",nome);
  printf("Olá %s\n", nome);
  
  char primeiro_nome[21]; 
  char segundo_nome[21];
  strcpy(primeiro_nome, "Jose"); //primeiro nome = jose
  strcpy(segundo_nome, "Junior");
  strcpy(nome, primeiro_nome);
  strcat(nome, segundo_nome); // nome = primeiro nome + segundo nome
  printf("%s\n", nome);
  int tamanho = strlen(nome); // calcula o tamanho 
  printf(" Seu nome tem %i caracteres\n =", tamanho);
  printf("%s e %s sao iguais? %i\n", primeiro_nome, segundo_nome,
    strcmp(primeiro_nome, segundo_nome)); // primeiro nome == ultimo nome 
    


  return 0;
}