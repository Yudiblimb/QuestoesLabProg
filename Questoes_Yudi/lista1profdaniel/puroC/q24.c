#include <stdio.h>

int main(){
  
  int segundos,horas_mod,minutos_mod;
  puts("Digite o tempo em segundos");
  scanf("%d",&segundos);

  printf("%d Horas ",segundos/3600);
  printf("%d Minutos ",(segundos%3600)/60);
  printf("%d Segundos. \n",segundos%60);

  return 0;
  }
