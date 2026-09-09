#include <stdio.h>

int main() {
    int x, n;

    puts("Digite o primeiro numero: ");
    scanf("%d", &x);
    puts("Digite o segundo numero: ");
    scanf("%d", &n);


    printf("%d\n", x << n);

    return 0;
}
