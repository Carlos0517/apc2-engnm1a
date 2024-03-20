#include <stdio.h> 
int main() {

    printf("\x1b[32m----------------------\n");
    printf("      Nota Legal      \n");
    printf("----------------------\x1b[00m\n");
    printf("Item      Qtd     Valor\n");
    printf("%-9s %1i %10.2f\n", "Banana", 1, 15.00);
    printf("%-9s %1i %10.2f\n", "maca",10 ,45.00);
    //printf("banana     1       15\n");
    //printf("maca      10       45\n");
    printf("----------------------\n");
    printf("\x1b[35m total:R$ %8.2f\x1b[00m \n",55.00 ); 
  return 0;
}