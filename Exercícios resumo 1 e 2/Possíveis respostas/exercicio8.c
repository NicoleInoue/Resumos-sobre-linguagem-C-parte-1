#include <stdio.h>
#include <stdlib.h>

float kg, g;

int main(int argc, char *argv[]) {
	
	printf("Informe seu peso em kg: ");
	scanf("%f", &kg);
	
	g = kg * 1000;
	
	printf("Seu peso em g: %.2f", g);
	
	return 0;
}