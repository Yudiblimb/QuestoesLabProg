#include <stdio.h>

int main(){
    short int valor_decimal;
    puts("digite um valor decimal");
    scanf("%hd",&valor_decimal);

    printf("valor octal: %ho \n", valor_decimal);
    printf("valor hexadecimal: %hx", valor_decimal);

    return 0;
}