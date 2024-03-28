#include <stdio.h>
#include <math.h>

int main() {
  int numero1; 
  int numero2;

  printf("entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("entre com o segundo numero: "); 
  deu_certo = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("A soma é %i\n", soma);

  int subtracao = numero1 - numero2;
  printf("A subtração é %i\n", subtracao);
  
  int multiplicacao = numero1 * numero2;
  printf("A multiplicação é %i\n", multiplicacao);
  
  
  float divisao = 1.0f * numero1 / numero2;
  printf("A divisão é %.2f\n", divisao);

  int resto = numero1 % numero2; 
  printf("O resto da divisão é %i\n", resto);

  // incremento = numero1 + 1 --> ++numero1 
  
  printf("O incremento do primeiro número é %i\n ", numero1++);
  printf("O incremento do primeiro número é %i\n ", ++numero1);

  // decremento = numero1 - 1 --> --numero1 

  printf("O decremento do primeiro número é %i\n ", numero1--);
  printf("O incremento do primeiro número é %i\n ", --numero1);


  double raiz_quadrada = sqrt(numero1);
  printf("A raiz quadrada do primeiro numero é %.2f\n",raiz_quadrada);

  double potencia = pow(numero1, 3);
  printf("O cubo do primeiro numero é: %.2f\n",potencia);

  double logaritmo2 = log2(numero1);
  printf("O log2 do primeiro número é: %.2f\n",logaritmo2);

  const double PI = 3.1416;
  double seno = sin( numero1 * (PI/180));
  printf("O seno do primeiro numero é: %f\n", seno);

  //cosseno = cos 
  //tangente = tan




  
  return 0; 
}