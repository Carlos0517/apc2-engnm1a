#include <stdio.h>
#include <math.h>

int main() {
  int numero; 
  int i; 
  
  printf(" ENTRE COM O NÚMERO DE 1 A 10: \n");
  int deu_certo = scanf("%i", &numero);
   
  if (deu_certo && numero > 0 && numero < 11)  {
    printf("A tabuada de %i\n", numero);
    for (int i=1; i<=10; i++){
    printf("%i x %i = %i\n", i, numero, i * numero); 
    }

    printf("A tabuada invertida é: \n"); 
    for (int i=10; i>=1; i--);{
    printf("%i x %i = %i\n", i, numero, i * numero);
    }
    return 0;
  }
  else printf(" Entre com um valor entre 1 a 10 \n");

}