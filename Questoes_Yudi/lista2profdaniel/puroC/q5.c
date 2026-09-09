#include <stdio.h>

int main(int argc, char *argv[])
{
  int menor,maior;
  int n = 1;
  for(int i = 0;n!=0;i++){
    puts("escreva um numero");
    scanf("%d",&n);
  
    if(i == 0){
      menor = n;
      maior = n;
    }else{
      if(maior < n){
        maior = n;
      }
      if(menor>n){
        menor = n;
      }
    }
  }
  printf("maior: %d\nmenor: %d\n",maior,menor);
  return 0;
}
