#include <stdio.h>
#include <stdlib.h>

float base_maior, base_menor, altura, area;

int main(int argc, char *argv[]) {
	
	printf("Informe a base maior: ");
	scanf("%f", &base_maior);
	
	printf("\nInforme a base menor: ");
	scanf("%f", &base_menor);
	
	printf("\nInforme a altura: ");
	scanf("%f", &altura);
	
	area = ((base_maior + base_menor) * altura ) / 2;
	
	printf("\nA area do trapezio e: %.2f", area);
	
	return 0;
}