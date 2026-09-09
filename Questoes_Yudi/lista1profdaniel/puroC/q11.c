#include <stdio.h>

int main(){
  
  int n1,n2;

  puts("digite dois numeros: ");
  scanf("%d",&n1);
  scanf("%d",&n2);

  printf("soma: %d \n",n1+n2); 
  printf("produto: %d \n",n1*n2); 
  printf("diferenca: %d \n",n1-n2);
  printf("resto da divisao: %d \n",n1%n2);
  return 0;
}
