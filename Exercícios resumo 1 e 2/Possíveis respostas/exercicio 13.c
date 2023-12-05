#include <stdio.h>
#include <stdlib.h>

float ca, co, hip;

int main(int argc, char *argv[]) {
	
	printf("Informe o cateto adjacente: ");
	scanf("%f", &ca);
	
	printf("Informe o cateto oposto: ");
	scanf("%f", &co);
	
	hip = sqrt (pow(co, 2) + pow(ca,2));
	
	printf("\nValor da Hipotenusa: %.2f", hip);
	
	return 0;
}