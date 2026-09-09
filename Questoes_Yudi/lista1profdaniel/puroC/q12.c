#include <stdio.h>

int main(){
  
  char a,b,i;
  printf("escreva o valor da variavel A: \n");
  scanf(" %c",&a);
  printf("escreva o valor da variavel B: \n");
  scanf(" %c",&b);
  i = a;
  a = b;
  b = i;

  printf("Troca realizada! \n");
  printf("valor atual de A: %c \n",a);
  printf("valor atual de B: %c \n",b);
}
