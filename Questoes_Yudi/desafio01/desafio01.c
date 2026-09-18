#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exibirArmarios(unsigned char armarios) {
    printf("Estado atual dos armarios (0 a 7):\n");
    for (int i = 7; i >= 0; i--) {
    
        if ((armarios >> i) & 1) {
            printf("[ Armario %d: OCUPADO ]\n", i);
        } else {
            printf("[ Armario %d: LIVRE   ]\n", i);
        }
    }
}

int main() {
    unsigned char armarios = 0;
    int opcao;
    
        srand(time(NULL));

    do {
        exibirArmarios(armarios);
        
        printf("\nMENU:\n");
        printf("1. Ocupar armario\n");
        printf("2. Liberar armario\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                if (armarios == 255) {
                    printf("\n-> Todos os armarios estao ocupados!\n");
                } else {
                    int livreEncontrado = 0;
                    int pos;

                    // Sorteia posicoes ate encontrar um armario livre (bit == 0)
                    while (!livreEncontrado) {
                        pos = rand() % 8; // Sorteia de 0 a 7
                        
                        // Testa se o bit da posicao sorteada esta em 0
                        if (!((armarios >> pos) & 1)) {
                            livreEncontrado = 1;
                        }
                    }

                    // Define o bit na posicao 'pos' como 1 (ocupado)
                    armarios = armarios | (1 << pos);
                    printf("\n-> Armario %d foi ocupado com sucesso!\n", pos);
                }
                break;
            }
            case 2: {
                int pos;
                printf("Digite o numero do armario para liberar (0 a 7): ");
                scanf("%d", &pos);

                if (pos < 0 || pos > 7) {
                    printf("\n-> Numero de armario invalido! Digite um valor entre 0 e 7.\n");
                } else if (!((armarios >> pos) & 1)) {
                    printf("\n-> O armario %d ja esta livre!\n", pos);
                } else {
                    // Define o bit na posicao 'pos' como 0 (livre)
                    armarios = armarios & ~(1 << pos);
                    printf("\n-> Armario %d foi liberado com sucesso!\n", pos);
                }
                break;
            }
            case 3:
                printf("\nEncerrando o programa\n");
                break;

            default:
                printf("\nOpcao invalida, Tente novamente!\n");
        }
    } while (opcao != 3);

    return 0;
}