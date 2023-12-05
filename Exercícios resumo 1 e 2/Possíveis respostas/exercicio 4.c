#include <stdio.h>


int main(int argc, char *argv[]) {
	float nota1, nota2, nota3;
	
	printf("Informe a primeira nota:");
	scanf("%f", &nota1);
	
	printf("Informe a segunda nota:");
	scanf("%f", &nota2);
	
	nota3 = ((2*nota1) + (3*nota2)) / 5;
	
	printf("%f", nota3);
	
	return 0;
}