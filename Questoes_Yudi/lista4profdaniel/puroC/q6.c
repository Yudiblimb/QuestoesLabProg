#include <stdio.h>
#include <string.h>
#define TAM 6

int main(){

  char str[TAM];
  int i = 0;

  printf("Digite uma string de ate (%d) caracteres:\n",TAM);
  scanf("%s",str);

  for(int i = strlen(str); i>=0;i--){
    printf("%c",str[i]);
  }
  puts("");

}
