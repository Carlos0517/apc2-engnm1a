#include <stdio.h> 
int main( ){
  
  float a1 ;
  float a2 ;
  //const float peso_1 = 0.4 ;
  //const float peso_2 = 0.6;

    printf("entre com o valor da a1: ");
    scanf ("%f", &a1);

    printf("entre com o valor da a2: ");
    scanf ("%f", &a2);

      float media_final = a1 * 0.4 + a2 * 0.6 ;
      if (media_final > 5){
      
        printf("\x1b[32m media final é: %f\n \x1b[00m", media_final);
      }
    else { 
      
      printf(" \033[0;31m media final é: %f\n \x1b[00m", media_final);
      
    }
    

  
    
  return 0; 
}