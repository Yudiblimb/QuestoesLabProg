#include <stdio.h>

int main(){

    float cotacao,real,dolar;

    printf("digite o valor da cotacao do dolar");
        scanf("%f",&cotacao);
    
    printf("digite a quantidade de reais que deseja converter:");
        scanf("%f",&real);
    
    dolar = real/cotacao;

    printf("o valor de reais para dolares ficou: %.2f",dolar);

    return 0;
}