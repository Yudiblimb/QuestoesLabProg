#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int nvert1,nvert2,nvertx,nvertx_1,nvertx_2;
    float area1,area2,areax,perimetro1,perimetro2,perimetrox,areax_1,areax_2,perimetrox_1,perimetrox_2,distanciax_1,distanciax_2;
  while(1){
    puts("digite o valor da area da centroide 1");
    scanf("%f",&area1);
    if(area1 < 0){
        puts("area negativa nao e possivel");
        break;
      }
    puts("digite o perimetro do centroide 1");
    scanf("%f",&perimetro1);
    if(perimetro1 < 0){
        puts("perimetro negativo nao e possivel");
        break;
      }
    puts("digite o numero de vertices da centroide 1");
    scanf("%d",&nvert1);
    if(nvert1 < 0){
        puts("numero de vertices negativo nao e possivel");
        break;
      }

    puts("digite o valor da area da centroide 2");
    scanf("%f",&area2);
    if(area2 < 0){
        puts("area negativa nao e possivel");
        break;
      }

    puts("digite o perimetro da centroide 2");
    scanf("%f",&perimetro2);
     if(perimetro2 < 0){
        puts("perimetro negativo nao e possivel");
        break;
      }
    puts("digite o numero de vertices da centroide 2");
    scanf("%d",&nvert2);
     if(nvert2 < 0){
        puts("numero de vertices negativo nao e possivel");
        break;
      }

    puts("digite o valor da area do objeto x");
    scanf("%f",&areax);
    if(areax < 0){
        puts("area negativa nao e possivel");
        break;
      }

    puts("digite o perimetro da objeto x");
    scanf("%f",&perimetrox);
     if(perimetrox < 0){
        puts("perimetro negativo nao e possivel");
        break;
      }
    puts("digite o numero de vertices da centroide x");
    scanf("%d",&nvertx);
     if(nvertx < 0){
        puts("numero de vertices negativo nao e possivel");
        break;
      }

  //distancia de Chebyshev dos determinados centroides ate o objeto X
  areax_1 = fabs(areax - area1);
  perimetrox_1 = fabs(perimetrox - perimetro1);
  nvertx_1 = abs(nvertx - nvert1);
  areax_2 = fabs(areax - area2);
  perimetrox_2 = fabs(perimetrox - perimetro2);
  nvertx_2 = abs(nvertx - nvert2);

  distanciax_1 = fmax(areax_1,fmax(perimetrox_2,(float)nvertx_1));
  distanciax_2 = fmax(areax_2,fmax(perimetrox_2,(float)nvertx_2));

  //imprimir
  if(distanciax_1 < distanciax_2){
      puts("O objeto x pertence a mesma classe do centroide 1");
      break;
    }else{
        puts("O objeto x pertence a mesma classe do centroide 2");
        break;
      }

  }
}

