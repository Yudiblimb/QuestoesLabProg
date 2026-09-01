#include <stdio.h>
#include <math.h>

// por conta da biblioteca math.h caso o senhor precise compllar novamente
// utilize -lm no final do comando do gcc

int main() {
    float x1, y1, x2, y2, distancia;

    puts("digite o x do primeiro ponto:");
    scanf("%f", &x1);

    puts("digite o y do primeiro ponto:");
    scanf("%f", &y1);

    puts("digite o x do segundo ponto:");
    scanf("%f", &x2);

    puts("digite o y do segundo ponto:");
    scanf("%f", &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("a distancia entre os pontos ficou: %.2f\n", distancia);

    return 0;
}


