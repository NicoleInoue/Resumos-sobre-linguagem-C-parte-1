#include <stdio.h>
#include <stdlib.h>

float quantidade_reais, dolares, marco_alemao, libra_esterlina;

int main(int argc, char *argv[]) {
	
	printf("Informe sua quantidade em reais: ");
	scanf("%f", &quantidade_reais);
	
	dolares = quantidade_reais / 1.80;
	
	marco_alemao = quantidade_reais / 2.00;
	
	libra_esterlina = quantidade_reais / 3.57;
	
	printf("\nDorales: %.2f", dolares);
	
	printf("\nMarco Alemao: %.2f", marco_alemao);
	
	printf("\nLibra Esterlina: %.2f", libra_esterlina);
	
	return 0;
}