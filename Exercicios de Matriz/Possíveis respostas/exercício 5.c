#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    float vendas[12][4], vendas_mes = 0, vendas_semana = 0, vendas_total = 0;
    int i, j;
    char mes_ext[12][10] = { "Janeiro", "Fevereiro", "Março", "Abril",
                             "Maio", "Junho", "Julho", "Agosto", "Setembro",
                             "Outubro", "Novembro", "Dezembro" };

    srand(time(NULL));
    // Preenchimento da matriz de vendas
    for (i = 0; i < 12; i++) {
        printf("--- Vendas em %s ---\n", mes_ext[i]);
        for (j = 0; j < 4; j++) {
            vendas[i][j] = rand() % 1000;
            vendas[i][j] /= 100;
            printf("Semana %d: %.2f\n", j+1,vendas[i][j]);
        }
    }
    
    // Total de vendas no mes
    printf("--------- Relatório de Vendas no Mês ------------\n");
    for (i = 0; i < 12; i++) {
        vendas_mes = 0;
        for (j = 0; j < 4; j++) 
            vendas_mes += vendas[i][j];
        printf("Total de Vendas em %s: R$ %.2f\n", mes_ext[i], vendas_mes);
    }

    // Total de vendas das semanas
    printf("--------- Relatório de Vendas na Semana ------------\n");
    for (i = 0; i < 4; i++) {
        vendas_semana = 0;
        for (j = 0; j < 12; j++) {
            vendas_semana += vendas[j][i];
            vendas_total += vendas[j][i];
        }
        printf("Total de Vendas na semana %d: R$ %.2f\n", i+1, vendas_semana);
    }

    printf("\n\nTotal de vendas no ano: R$ %.2f\n", vendas_total);
    return 0;
}

