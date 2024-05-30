#include <stdio.h>
#include <math.h>

int main(){
  // IR = ALUGUEL BRUTO X ALÍQUOTA - PARCELA A DEDUZIR 

  int valor_aluguel;

  printf("entre com o valor bruto do aluguel: \n");
  int deu_certo = scanf("%i", &valor_aluguel);

  float aliquota;
  int parcela_a_deduzir; 

  if(deu_certo && valor_aluguel < 2112.00){
    printf("O valor do seu rendimento é isento de impostos");
    else if(deu_certo && 2112 < valor_aluguel < 2826.65){
    
    aliquota = valor_aluguel * 7.5 / 100; 
    parcela_a_deduzir = 158.40;
    
    float ir = aliquota - parcela_a_deduzir;

    printf("O valor que deve ser retido é de: %f \n", ir);}
    
    
    }
  
  }
  



  return 0; 
}