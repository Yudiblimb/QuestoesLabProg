#include <stdio.h>

int main(){
    float F,C;
    puts("escreva a temperatura em Celsius");
    scanf(" %f",&C);
    // conversao
    F = (9*C + 160)/5;
  
    printf("temperatura convertida em Fahreinheit: %.1f\n",F);
  
  }
