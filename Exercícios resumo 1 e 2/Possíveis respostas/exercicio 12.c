#include <stdio.h>
#include <stdlib.h>

float salario, conta1, conta2, sobra;

int main(int argc, char *argv[]) {
	
	printf("Informe o seu salario: ");
	scanf("%f", &salario);
	
	printf("Informe o valor da conta 1: ");
	scanf("%f", &conta1);
	
	printf("Informe o valor da conta 2: ");
	scanf("%f", &conta2);
	
	sobra = salario - ((conta1 + conta2) + (0.02*(conta1 + conta2)));
	
	printf("\n Quanto que sobra do salario: %.2f", sobra);
	
	return 0;
}
