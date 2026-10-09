#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMX 3
#define TAMY 5


int main(){

  int matriz[TAMX][TAMY];
  int x,count;

  srand(time(NULL));
  puts("Digite o valor de x");
  scanf("%d",&x);
  //gerar matriz bidimensional
  for(int i = 0; i<TAMX; i++){
    for(int j = 0; j<TAMY; j++){
      matriz[i][j] = rand() % 10 + 1;
    }
  }
  //imprimir matriz 
  for(int i = 0; i<TAMX; i++){
    for(int j = 0; j<TAMY; j++){
      printf("[%d]",matriz[i][j]);
    }
  puts("");
  }
  
  //verificar quantas vezes x aparece
   for(int i = 0; i<TAMX; i++){
    for(int j = 0; j<TAMY; j++){
      if(x == matriz[i][j]){
        count++;
      }else{
        continue;
      }
    }
  }
  printf("O numero %d aparece %dx na matriz\n",x,count);
}
