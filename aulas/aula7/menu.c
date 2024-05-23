#include <stdio.h>
#include <stdlib.h>
int main() {

int opcao = 0; 

while (opcao!= 4){
  int deu_certo = system("clear"); 
  //"system" roda um comando no caso o clear. 
    printf("MEU JOGO\n");
    printf("1 - iniciar\n");
    printf("2 - Ver Ranking\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("Escolha uma opção->\n");
   deu_certo = scanf("%i", &opcao);
    while (getchar() != '\n'); // limpar buffer do teclado 
    if (!deu_certo){
      opcao = 0;
    }
    switch(opcao) {
      case 1: {
        char nome[31];
        printf("Qual o seu nome? \n");
        deu_certo = scanf("%[^\n]s", nome);
        while(getchar() != '\n');
        printf("Ola %s!\n", nome);
        printf("Precione ENTER p/ iniciar \n");
        getchar();
        break;
      }
      case 2: {
        deu_certo = system("clear");
        printf("Ranking - Top 5\n");
        printf("1° lugar: jose - 1000pts\n");
        printf("2° lugar: maria - 800pts\n");
        printf("3° lugar: Bia - 500pts\n");
        printf("Pressione ENTER p/ voltar \n");
        getchar();
        break;
      }
      case 3: break;
      case 4: printf("Até logo\n"); break;
      default: printf("Opção invalida! Pressione ENTER p/ prosseguir \n");
      getchar();
    }
}
  return 0; 
}