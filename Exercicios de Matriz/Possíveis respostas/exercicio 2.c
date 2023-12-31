#include <stdio.h>

int main() {
    
    int matriz[2][4];

    
    printf("Digite os elementos da matriz 2x4:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    printf("\nQuantidade de elementos entre 12 e 20 em cada linha:\n");
    for (int i = 0; i < 2; ++i) {
        int contador = 0;
        for (int j = 0; j < 4; ++j) {
            if (matriz[i][j] >= 12 && matriz[i][j] <= 20) {
                contador++;
            }
        }
        printf("Linha %d: %d elementos\n", i + 1, contador);
    }

    
    int soma_pares = 0, quantidade_pares = 0;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (matriz[i][j] % 2 == 0) {
                soma_pares += matriz[i][j];
                quantidade_pares++;
            }
        }
    }

    float media_pares = 0.0;
    if (quantidade_pares > 0) {
        media_pares = (float)soma_pares / quantidade_pares;
    }

    printf("\nMédia dos elementos pares da matriz: %.2f\n", media_pares);

    return 0;
}
