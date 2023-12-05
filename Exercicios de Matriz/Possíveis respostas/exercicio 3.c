#include <stdio.h>

int main() {
    
    int matriz[6][3];

    
    printf("Digite os elementos da matriz 6x3:\n");
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    int maior = matriz[0][0], menor = matriz[0][0];
    int linha_maior = 0, coluna_maior = 0, linha_menor = 0, coluna_menor = 0;

    
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                linha_menor = i;
                coluna_menor = j;
            }
        }
    }

    
    printf("\nMatriz 6x3:\n");
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

   
    printf("\nMaior elemento: %d\n", maior);
    printf("Posicao do maior elemento: [%d][%d]\n", linha_maior, coluna_maior);

    
    printf("\nMenor elemento: %d\n", menor);
    printf("Posicao do menor elemento: [%d][%d]\n", linha_menor, coluna_menor);

    return 0;
}
