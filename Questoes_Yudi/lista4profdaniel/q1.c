#include <stdio.h>
#define TAM 15

int main(){

  float vetor[TAM];
  float maior,menor;

  for(int i = 0; i<TAM; i++){
    puts("digite o valor de um elemento: ");
    scanf("%f",&vetor[i]);


    if(i==0){
      menor = vetor[i];
    }

    if(vetor[i] < menor){
      menor < vetor[i];
    }
    if(vetor[i] > maior){
      maior = vetor[i];
    }
  }
  
  printf("maior: %f \nmenor:%f \n",maior,menor);
  return 0;
}
