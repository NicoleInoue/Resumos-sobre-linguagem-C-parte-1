#include <stdio.h>
#include <stdlib.h>

float salario_minimo, salario_funcionario, quantidade;

int main(int argc, char *argv[]) {
	
	printf("Informe quanto e o salario minimo: ");
	scanf("%f", &salario_minimo);
	
	printf("Informe o salario do funcionario: ");
	scanf("%f", &salario_funcionario);
	
	quantidade = salario_funcionario / salario_minimo;
	
	printf("\nQuantidade de salarios minimos que o funcionario ganha: %.2f", quantidade);
	
	return 0;
}