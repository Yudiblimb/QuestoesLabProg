#include <stdio.h>
//ler string 
//ler caractere
//verificar se caractere esta em algum indice da string

int main(){
  char string[99];
  char caractere;
  int tam;
  puts("digite o tamanho da string");
  scanf("%d",&tam);
  puts("digite qual caractere deve ser conferido");
  scanf(" %c",&caractere);
  
  puts("digite sua string: ");
  
  for(int i = 0;i<tam; i++){
    scanf(" %c",&string[i]);
  }
  
  for(int i = 0; i<tam; i++){
    if(caractere == string[i]){
      puts("o caractere esta sim na string!");
      return 0;
    }
  }
  puts(" o caractere nao esta na string");
}
