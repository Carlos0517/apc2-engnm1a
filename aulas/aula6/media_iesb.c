#include <stdio.h>

int main(){
  float nota1;
  float nota2;

  printf("Entre com a nota 1: ");
  int deu_certo = scanf("%f", &nota1);

  int nota1_eh_valida = nota1 >= 0.0f && nota1<= 10.0f;
  if (nota1_eh_valida){

    printf("Entre com a nota 2: ");
    deu_certo = scanf("%f", &nota2);
    
    int nota2_eh_valida = nota1 >= 0.0f && nota2<= 10.0f;

    if (nota2_eh_valida) {
    float media = 0.4f * nota1 + 0.6f * nota2;
    printf("A sua media e: %.1f \n ", media);
    
    
    
    }
    else{
      printf("nota fora dos padrões IESB! Entre com um valor entre 0.0 e 10.0\n");
    }
   
  }
  else {
    
    printf("nota fora dos padrões IESB! Entre com um valor entre 0.0 e 10.0\n");
    
  }









  return 0; 
}