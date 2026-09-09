#include <stdio.h>

int main(){

    float numero_real;
    printf("digite um numero real \n");
    scanf("%f",&numero_real);

    printf("aqui esta seu numero real com apenas uma casa decimal: %.1f \n",numero_real);

    return 0;
}