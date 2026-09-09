#include <stdio.h>
// meu Deus que questao dificil
int main(){
    printf("\n");
    printf("retangulo:\n");
    for(int i=0;i<7;i++){
        for(int c=0;c<7;c++){
            printf("*");
          }
    printf("\n");
      }

    printf("\n");
    printf("elipse: \n");
    for (int i = 1; i <= 3; i++) {

        for (int j = 0; j < 3 - i; j++) {
            printf(" ");
        }

        for (int j = 0; j < 4 + (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    for (int i = 3; i >= 1; i--) {

        for (int j = 0; j < 3 - i; j++) {
            printf(" ");
        }

        for (int j = 0; j < 4 + (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    printf("\n");
    printf("seta:\n");

    for (int i = 1; i <= 4; i++) {

        for (int j = 0; j < 4 - i; j++) {
            printf(" ");
        }

        
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    
    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
            printf(" ");
        }

        printf("*\n");}

    

    printf("\n");
    printf("losango:\n");

    for (int i = 1; i <= 4; i++) {

        for (int j = 0; j < 4 - i; j++) {
            printf(" ");
        }

        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    for (int i = 3; i >= 1; i--) {

        for (int j = 0; j < 4 - i; j++) {
            printf(" ");
        }

        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }
    return 0;
  }
