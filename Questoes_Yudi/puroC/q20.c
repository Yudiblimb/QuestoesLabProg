#include <stdio.h>


int main(){
    int n1,n2;
    puts("Escreva o primeiro numero:");
    scanf("%d",&n1);
    puts("Escreva o segundo numero:");
    scanf("%d",&n2);

    printf("%s\n",(n1%n2 == 0) ? "E multiplo" : "Nao e multiplo");
    return 0;

  }
