#include <stdio.h>

int main(){
    float conta;
    printf("digite a conta do restaurante: ");
    scanf("%f",&conta);
    printf("a conta do restaurante ficou: %.2f ",conta*1.1);

    return 0;
}