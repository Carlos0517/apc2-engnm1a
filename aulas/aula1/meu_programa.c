#include <stdio.h>

int main() {
  
    float nota1 = 0.0;
    float nota2 = 0.0; 
    int tamanho = 0;
  
    printf(" entre com a nota1:");
    tamanho = scanf("%f", &nota1 );
    
    printf(" entre com a nota2: ");
    tamanho = scanf("%f", &nota2 );

   
    float media = 0.4*nota1 + 0.6*nota2;
    printf(" a media final é %.1f", media);
    
    if(media >= 6.0 ) {
        printf("Passei!\n" );
    }
    else {
        printf("Não passei!\n");
    }  
    
  return 0;
  
}
