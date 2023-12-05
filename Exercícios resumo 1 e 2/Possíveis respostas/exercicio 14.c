#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float r, comprimento, area, pi, volume;

int main(int argc, char *argv[]) {
	
//	pi=3.1415926535897932384626433832795;
	
	pi = 3.14;
	
	printf("Informe o valor do raio: ");
	scanf("%f", &r);
	
	comprimento = 2 * pi * r;
	
	area = pi * (pow(r,2));
	
	volume = 0.75 * pi * (pow(r,3));
	
	printf("\nComprimento: %f", comprimento);
	
	printf("\nArea: %f", area);
	
	printf("\nVolume: %f", volume);
	
	return 0;
}