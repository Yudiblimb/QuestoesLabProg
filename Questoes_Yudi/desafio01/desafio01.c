#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    unsigned char armarios = 0;
    int opcao;
    
    srand(time(NULL));

    // loop principal sem usar nenhuma funcao extra nem vetor
    while (1) {
        
        printf("Estado atual dos armarios (0 a 7):\n");
        // impressao direta do estado dos bits
        for (int i = 7; i >= 0; i--) {
            if ((armarios >> i) & 1) {
                printf("[ Armario %d: OCUPADO ]\n", i);
            } else {
                printf("[ Armario %d: LIVRE   ]\n", i);
            }
        }
        
        printf("\nMENU:\n");
        printf("1. Ocupar armario\n");
        printf("2. Liberar armario\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (armarios == 255) {
                printf("\n-> Todos os armarios estao ocupados!\n");
            } else {
                int livre = 0;
                int pos;

                // sorteio direto ate achar um livre
                while (livre == 0) {
                    pos = rand() % 8;
                    if (!((armarios >> pos) & 1)) {
                        livre = 1;
                    }
                }

                // marca como ocupado
                armarios = armarios | (1 << pos);
                printf("\n-> Armario %d foi ocupado com sucesso!\n", pos);
            }
        } 
        else if (opcao == 2) {
            int pos;
            printf("Digite o numero do armario para liberar (0 a 7): ");
            scanf("%d", &pos);

            if (pos < 0 || pos > 7) {
                printf("\n-> Numero de armario invalido! Digite um valor entre 0 e 7.\n");
            } else if (!((armarios >> pos) & 1)) {
                printf("\n-> O armario %d ja esta livre!\n", pos);
            } else {
                // desmarca o bit
                armarios = armarios & ~(1 << pos);
                printf("\n-> Armario %d foi liberado com sucesso!\n", pos);
            }
        } 
        else if (opcao == 3) {
            printf("\nEncerrando o programa\n");
            break;
        } 
        else {
            printf("\nOpcao invalida, Tente novamente!\n");
        }
        
        printf("\n");
    }

    return 0;
}