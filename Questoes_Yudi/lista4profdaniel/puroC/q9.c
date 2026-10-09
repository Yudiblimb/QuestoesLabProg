#include <stdio.h>
#define TAMX 3
#define TAMY 3

int main(){

  int vetor[TAMX][TAMY];

  for(int i = 0; i<3 ; i++){
    printf("Digite os 3 elementos da linha [%d]\n",i);
    scanf(" %d %d %d",&vetor[i][0],&vetor[i][1],&vetor[i][2]);
  }
  puts("");

  //exibir matriz
  for(int i = 0; i<3;i++){
    for(int j = 0;j<3; j++){
      printf("[%d]",vetor[i][j]);
    }
    puts("");
  }

  //elementos da diagonal principal
  puts("Elementos da diagonal principal:");
  for(int i = 0; i < 3; i++){
    printf("posicao[%d][%d] --- %d\n",i,i,vetor[i][i]);
  }
}
