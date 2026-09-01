#include <stdio.h>

int main() {
    int numero, centena, dezena, unidade;

    scanf("%d", &n);

    centena = numero/ 100;
    dezena = (n / 10) % 10;
    unidade = n % 10;

    printf(" %d%d%d\n", unidade, dezena, centena);

    return 0;
}
