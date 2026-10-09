#include <stdio.h>
#include <string.h>   
int main(){
  char str1[99];
  char str2[99];
  char cat[99];
  unsigned int n1,n2;
   
  // input
  puts("digite o numero de caracteres da primeira string:");
  scanf("%u",&n1);

  puts("digite a string 1");
  for(int i = 0; i<n1; i++){
    scanf(" %c",&str1[i]);
  }
  
  puts("digite o numero de caracteres da segunda string:");
  scanf("%u",&n2);

  puts("digite a string 2");
  for(int i = 0; i<n2; i++){
    scanf(" %c",&str2[i]);
  }
  
  // output   
  puts(" --- versao com strcat() ---");
  printf("%s\n",strcat(str1,str2));
  puts(" --- versao sem strcat() ---");
  for(int i = 0; i<n1; i++){
    cat[i] = str1[i];
  }
  for(int i = 0; i<n2; i++){
    cat[n1 + i] = str2[i];
  }
  

  for(int i = 0; i < n1+n2; i++){
    printf("%c",cat[i]);
  }
}
