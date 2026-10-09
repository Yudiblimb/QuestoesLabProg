#include <stdio.h>
#include <string.h>

int main(){

  int n1,n2;
  char str1[99];
  char str2[99];
  unsigned char flag;

  puts("digite o numero de caracteres da primeira string");
  scanf("%d",&n1);

  puts("digite a primeira string");
  for(int i = 0; i<n1; i++){
    scanf(" %c",&str1[i]);
  }

  puts("digite o numero de caracteres da segunda string");
  scanf("%d",&n2);

 puts("digite a segunda string");
  for(int i = 0; i<n2; i++){
    scanf(" %c",&str2[i]);
  }

  puts(" --- versao com strcmp --- ");
  if(strcmp(str1,str2) == 0){
    printf("elas sao iguais\n");
  }else{
    printf("elas sao diferentes\n");
  }

  puts(" --- versao sem strcmp --- ");
  
  if(n1 != n2){
    flag = 0;
  }else{

    for(int i = 0; i<n1; i++){

      if(str1[i] == str2[i]){ 
        flag = 1;
        continue;
      }else{
        flag = 0;
        break;
      }
    }
  }
  if(flag == 0){
    puts("as strings nao sao iguais\n");
  }else{
    puts("as strings sao iguais\n");
    
  }

}
