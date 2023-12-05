#include <stdio.h>

#define NUM_ALUNOS 15
#define NUM_PROVAS 5

int main() {
    
    float notas[NUM_ALUNOS][NUM_PROVAS];

    
    char nomes[NUM_ALUNOS][50]; 

    
    printf("Digite as notas das cinco provas para cada um dos 15 alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        printf("Nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Notas do aluno %d:\n", i + 1);
        for (int j = 0; j < NUM_PROVAS; ++j) {
            printf("Prova %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    
    printf("\nResultados dos alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        float soma = 0;
        for (int j = 0; j < NUM_PROVAS; ++j) {
            soma += notas[i][j];
        }

        float media = soma / NUM_PROVAS;

        printf("Aluno: %s\tMédia: %.2f\tSituação: ", nomes[i], media);

        if (media >= 6.0) {
            printf("Aprovado\n");
        } else if (media >= 4.0) {
            printf("Exame\n");
        } else {
            printf("Reprovado\n");
        }
    }

    
    float soma_classe = 0;
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        for (int j = 0; j < NUM_PROVAS; ++j) {
            soma_classe += notas[i][j];
        }
    }

    float media_classe = soma_classe / (NUM_ALUNOS * NUM_PROVAS);
    printf("\nMédia da classe: %.2f\n", media_classe);

    return 0;
}
