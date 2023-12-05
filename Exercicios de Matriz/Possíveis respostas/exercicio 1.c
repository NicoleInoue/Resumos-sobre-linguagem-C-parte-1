#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][5];
    
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            matriz[i][j] = rand() % 30 + 1; // Gera números entre 1 a 30
        }
    }

    
    printf("Matriz gerada:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    
    int contador = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (matriz[i][j] >= 15 && matriz[i][j] <= 20) {
                contador++;
            }
        }
    }

    printf("Quantidade de elementos entre 15 e 20: %d\n", contador);

    return 0;
}
