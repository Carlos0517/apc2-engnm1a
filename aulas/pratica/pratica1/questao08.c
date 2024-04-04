#include <stdio.h>
#include <math.h>

int main() {

  int segundos;

  printf("Entre com o tempo em segundos: ");
    int deu_certo = scanf("%i", &segundos);

  int horas = segundos / 3600;
  int minutos = (segundos % 3600) / 60;
  int segundo = (segundos % 3600) % 60;

  printf("Essa quantidade de segundos: %i\n", segundo);
  printf("É igual a essa quantidade em minutos: %i\n", minutos);
  printf("E esse tempo em horas e: %i\n", horas);









  return 0;
}