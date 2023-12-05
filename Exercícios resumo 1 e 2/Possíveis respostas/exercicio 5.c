#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float valor1, valor2;
	
	printf("Informe o valor do produto sem desconto:");
	scanf("%f", &valor1);
	
	valor2 = valor1 - ((valor1 / 100)*10);
	
	printf("%2.f", valor2);
	
	return 0;
}