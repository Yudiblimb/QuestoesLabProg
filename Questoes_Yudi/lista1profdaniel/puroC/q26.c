
#include <stdio.h>
#include <math.h>

//caso o senhor precise compilar novamente,
// utilize -lm no final do comando do gcc ( por conta da biblioteca math.h).

int main() {
    float n1, n2, n3;
    float media_aritmetica, media_geometrica;

    puts("Digite o primeiro numero:");
    scanf("%f", &n1);

    puts("Digite o segundo numero:");
    scanf("%f", &n2);

    puts("Digite o terceiro numero:");
    scanf("%f", &n3);

    media_aritmetica = (n1 + n2 + n3) / 3;

    media_geometrica = pow(n1 * n2 * n3, 1.0 / 3.0);

    puts("A media aritmetica e:");
    printf("%.2f\n", media_aritmetica);

    puts("A media geometrica e:");
    printf("%.2f\n", media_geometrica);

    return 0;
}

