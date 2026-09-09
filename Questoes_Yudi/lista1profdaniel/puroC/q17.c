#include <stdio.h>

int main(){
  
  float pi = 3.14159;
  float raio;

  printf("escreva o raio do circulo \n");
  scanf("%f",&raio);
  
  printf("o valor do diametro do circulo é: %.5f\n o valor de sua circunferencia é: %.5f\n o valor da sua area é: %.5f\n",raio*2,2*pi*raio,pi*raio*raio);
  return 0;
  }
