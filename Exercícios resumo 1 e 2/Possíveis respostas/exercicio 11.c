#include <stdio.h>
#include <stdlib.h>

float nascimento, atual, anos, meses, semanas, dias, idade_ano, idade_meses, idade_dias, idade_semanas;

int main(int argc, char *argv[]) {
	
printf("Informe o ano que nasceu: ");
scanf("%f", &nascimento);

printf("Informe o ano que esta: ");
scanf("%f", &atual);
	
idade_ano = atual - nascimento;

idade_meses = (atual - nascimento) * 12;

idade_dias = (atual - nascimento) * 365;

idade_semanas = (atual - nascimento) * 48;

printf("\nIdade em anos: %.2f", idade_ano);

printf("\nIdade em meses: %.2f", idade_meses);

printf("\nIdade em dias: %.2f", idade_dias);

printf("\nIdade em semanas: %.2f", idade_semanas);

	return 0;
}