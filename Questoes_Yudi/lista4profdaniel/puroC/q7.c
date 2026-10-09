#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

#define TAM 3

int main(){
  srand(time(NULL));

  int vetor[TAM];
  int ma;
  float mg = 1;

  //gerar TAM numeros aleatorios (3)
  for(int i = 0; i<TAM;i++){
    vetor[i] = rand() % 20;
  }
   
  //media aritmetica
  for(int i = 0; i < TAM; i++){
    ma = ma + vetor[i];
  }
  ma = ma/TAM;

  //media geometrica
  for(int i = 0; i<TAM;i++){
    mg = mg*vetor[i];
  }
  mg = cbrt(mg);
  
  //imprimir vetor
  puts("Vetor gerado:");
  for(int i = 0; i<TAM;i++){
    printf("[%d] --- %d\n",i,vetor[i]);
  }
  //imprimir medias
  printf("media aritmetica: %d\n",ma);
  printf("media geometrica: %f\n",mg);

}
