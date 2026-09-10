#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float areaA,perimetroA,areaB,perimetroB,areaS,perimetroS,resultado;
  int nvertA,nvertB,nvertS;
  while(1){
  
  puts("digite a area do objeto A");
  scanf("%f",&areaA);
  if(areaA<0){
    puts("nao pode ser area negativa");
    break;
  }

  puts("digite o perimetro de A");
  scanf("%f",&perimetroA);
  if(areaA<0){
    puts("nao pode ser perimetro negativo negativo");
    break;
  }

  puts("digite o numero de vertices do objeto A");
  scanf("%d",&nvertA);
  if(nvertA<0){
  puts("nao existe numero de vertices negativo");
    break;
  }
  
  puts("digite a area do objeto B");
  scanf("%f",&areaB);
  if(areaB<0){
    puts("nao pode ser area negativa");
    break;
  }

  puts("digite o perimetro de B");
  scanf("%f",&perimetroB);if(areaA<0){
    puts("nao existe area negativa");
    break;
  }

  puts("digite o numero de vertices do objeto B");
  scanf("%d",&nvertB);
  if(nvertB<0){
    puts("nao existe numero de vertices negativo");
    break;
  }

    areaS = fabs(areaB-areaA);
    perimetroS = fabs(perimetroB - perimetroA);
    nvertS = abs(nvertB - nvertA);
    resultado = fmax(nvertS,fmax(perimetroS,(float)areaS));
    printf("resultado: %.2f",resultado);
    break;
  }

  
 return 0;
}
