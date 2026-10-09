#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main() {
    int original[TAM], vetorSelecao[TAM], vetorBolha[TAM];
    int min, max, i, j, min_idx, temp, trocou, escolha;

    printf("=== gerador e ordenador de vetores ===\n");
    printf("digite o valor minimo do intervalo: ");
    scanf("%d", &min);
    printf("digite o valor maximo do intervalo: ");
    scanf("%d", &max);

    if (min > max) {
        printf("intervalo invalido! o minimo deve ser menor ou igual ao maximo.\n");
        return 1;
    }

    srand(time(NULL));

    for (i = 0; i < TAM; i++) {
        original[i] = min + rand() % (max - min + 1);
        vetorSelecao[i] = original[i];
        vetorBolha[i] = original[i];
    }

    for (i = 0; i < TAM - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < TAM; j++) {
            if (vetorSelecao[j] < vetorSelecao[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            temp = vetorSelecao[i];
            vetorSelecao[i] = vetorSelecao[min_idx];
            vetorSelecao[min_idx] = temp;
        }
    }

    for (i = 0; i < TAM - 1; i++) {
        trocou = 0;
        for (j = 0; j < TAM - 1 - i; j++) {
            if (vetorBolha[j] > vetorBolha[j + 1]) {
                temp = vetorBolha[j];
                vetorBolha[j] = vetorBolha[j + 1];
                vetorBolha[j + 1] = temp;
                trocou = 1;
            }
        }
        if (!trocou) {
            break;
        }
    }

    printf("\nescolha qual vetor ordenado deseja visualizar:\n");
    printf("[1] metodo por selecao (selection sort)\n");
    printf("[2] metodo bolha (bubble sort)\n");
    printf("[3] ambos os metodos\n");
    printf("digite sua opcao (1, 2 ou 3): ");
    scanf("%d", &escolha);

    if (escolha == 1 || escolha == 3) {
        printf("\n--- vetor ordenado por selecao ---\n");
        for (i = 0; i < TAM; i++) {
            printf("%d ", vetorSelecao[i]);
        }
        printf("\n");
    }

    if (escolha == 2 || escolha == 3) {
        printf("\n--- vetor ordenado por metodo bolha ---\n");
        for (i = 0; i < TAM; i++) {
            printf("%d ", vetorBolha[i]);
        }
        printf("\n");
    }

    if (escolha < 1 || escolha > 3) {
        printf("opcao invalida!\n");
    }

    return 0;
}
