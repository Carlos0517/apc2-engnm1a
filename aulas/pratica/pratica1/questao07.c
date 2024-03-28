#include <stdio.h>
#include <math.h>

int main() {
  int angulo; 
  int distancia;
  double pi = 3.14;
  
  
  printf("entre com o ângulo de subida: \n");
  scanf("%f", &angulo); 

  double seno = sin( angulo * (pi/180));

  printf("entre com distancia já percorrida: \n");
  scanf("%f", &distancia);

  double altura = seno * distancia ;
  printf("A altura é igual a: %f\n", altura);










  return 0;
}