#include <stdio.h>

int main(){
    int valor_numerico_int;
    printf("digite um valor numerico inteiro: \n");
    scanf("%d",&valor_numerico_int);
    
    printf("sucessor: %d \n", ++valor_numerico_int);
    //voltando ao valor original
    --valor_numerico_int;
    printf("antecessor: %d \n", --valor_numerico_int);


}