#include <stdio.h>
#include <stdlib.h>

float angulo1, angulo2, angulo3;

int main(int argc, char *argv[]) {
	
	printf("Informe o primeiro angulo: ");
	scanf("%f", &angulo1);
	
	printf("Informe o segundo angulo: ");
	scanf("%f", &angulo2);
	
	angulo3 = abs(angulo1 + angulo2 - 180);
	
	printf("\nEste e o terceiro angulo: %.2f", angulo3);
	
	return 0;
}