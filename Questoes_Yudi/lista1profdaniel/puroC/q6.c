#include <stdio.h>

int main(){

    int horas,minutos,segundos,qtd_segundos;

    printf("escreva a quantidade de horas \n");
    scanf("%d",&horas);
    printf("escreva a quantidade de minutos \n");
    scanf("%d",&minutos);
    printf("escreva a quantidade de segundos \n");
    scanf("%d",&segundos);

    qtd_segundos = horas*3600 + minutos*60 + segundos;

    printf("quantidade total de segundos: %d \n",qtd_segundos);

    return 0;
}