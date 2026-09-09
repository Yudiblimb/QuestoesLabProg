#include <stdio.h>

int main(){

    float comprimento,largura,altura,volume;

    printf("digite o comprimento: \n");
    scanf("%f",&comprimento);

    printf("digite a largura: \n");
    scanf("%f",&largura);

    printf("digite a altura: \n");
    scanf("%f",&altura);

    volume = comprimento*largura*altura;

    printf("o volume dessa caixa retangular é: %.2f",volume);
    
}