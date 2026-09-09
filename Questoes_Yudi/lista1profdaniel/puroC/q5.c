#include <stdio.h>
#include <string.h>

int main(){

    float altura,peso_ideal;
    char sexo;

    printf("digite seu sexo (m ou f): \n");
    scanf("%c",&sexo);

    printf("digite sua altura (em metros): \n");
    scanf("%f",&altura);

    switch(sexo){
        case 'm':
            peso_ideal = (72.7*altura - 58);
            printf("seu peso ideal é: %.2f",peso_ideal);
        break;

        case 'f':
            peso_ideal = (62.1*altura - 44.7);
            printf("seu peso ideal é: %.2f",peso_ideal);
        break;
    }

    return 0;
}