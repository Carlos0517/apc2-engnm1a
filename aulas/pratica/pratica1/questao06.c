#include <stdio.h>
#include <math.h>

int main()  {

  int a;
  int b; 
  int c;

  printf("entre com o valor de a: \n");
  int deu_certo = scanf("%i", &a);

  printf("entre com o valor de b: \n");
  scanf("%i", &b);

  printf("entre com o valor de c: \n");
  scanf("%i", &c);

  double delta = b * b - 4*a*c;
  double raiz_quadrada = sqrt (delta);
  double raiz_1 = -b + raiz_quadrada / 2*a;
  double raiz_2 = -b - raiz_quadrada / 2*a;

  printf ("As raizes são: %f\n", raiz_1);
  printf ("E: %f\n", raiz_2);
 
  
  







 return 0; 
}


