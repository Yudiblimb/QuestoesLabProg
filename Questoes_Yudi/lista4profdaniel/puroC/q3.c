#include <stdio.h>

int main(){
  //ler string com fgets
  //verificar se ja chegou no /0
  //imprimir o valor de contador
  int i = 0;
  char vetor[99];
 
  if(fgets(vetor,sizeof(vetor),stdin) != NULL){
    while (vetor[i] != '\0') {
      i++;
    }
  }

  printf("quatidade de caracteres na string: %d \n",i - 1);

}
