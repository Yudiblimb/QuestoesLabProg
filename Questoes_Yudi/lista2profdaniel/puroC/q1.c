#include <stdio.h>

int main()
{
  int n;

  while(1){
    puts("digite um dia da semana (1-7) ou 0 para parar a execucao");
    scanf("%d",&n);
    switch(n){
        case 1:
        puts("segunda-feira");
        continue;
        case 2:
        puts("terca-feira");
        continue;
        case 3:
        puts("quarta-feira");
        continue;
        case 4:
        puts("quinta-feira");
        continue;
        case 5:
        puts("sexta-feira");
        continue;
        case 6:
        puts("sabado");
        continue;
        case 7:
        puts("domingo");
        continue;
         
        default:
        puts("Numero de dia nao valido");
        continue;
        case 0:
        puts("parando a execucao do programa!");
        return 0;
    }

  }

  return 0;
}
