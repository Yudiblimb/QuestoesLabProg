#include <stdio.h>

int main(){
  while(1){
    float v1,v2;
    puts("digite dois valores inteiros (o segundo nao deve ser nulo)\nvalor 1:");
    scanf("%f",&v1);
    puts("valor 2:");
    scanf("%f",&v2);

    if(v2 == 0){
        puts("voce digitou o segundo valor igual a zero,");
        puts(" --- Algoritmo reiniciado! ---");
        continue;
      }else{
          printf("a divisao do primeiro valor pelo segundo é: %.2f \n",v1/v2);
          break;
        }

}
    return 0;
  }
