#include <stdio.h>
#include <math.h>

int main(){

  int numero1;

    printf("entre com um número inteiro:");
    int deu_certo = scanf("%i", &numero1);

if (deu_certo){
  
  int resto = numero1 % 2; 
  
  if (resto == 0) {
     printf("O numero é par \n");
  }
  else {
    printf("O numero é impar");
  } }

else {
  printf("Entre com um número valido!");
}  






  return 0;
}