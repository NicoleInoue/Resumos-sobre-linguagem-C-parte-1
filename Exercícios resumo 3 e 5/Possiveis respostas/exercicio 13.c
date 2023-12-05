#include <stdio.h>
#include <stdlib.h>

float valor_total, prestacoes, total;

int main(int argc, char *argv[]) {
	
	printf("Insira o valor total em reais: ");
	scanf("%f", &valor_total);
	
	printf("Informe o numero de prestacoes:");
	scanf("%f", &prestacoes);
	
	if(prestacoes >= 12 && prestacoes <= 23){
		total = valor_total / prestacoes;
		printf("\n Valor de cada parcela a ser paga: R$ %.2f", total);
}

	else if(prestacoes >= 24 && prestacoes <= 35){
		total = (valor_total + (valor_total * 0.10)) / prestacoes;
		printf("\n Valor de cada parcela a ser paga: R$ %.2f", total);
}

	else if(prestacoes >= 36){
		total = (valor_total + (valor_total * 0.15)) / prestacoes;
		printf("\n Valor de cada parcela a ser paga: R$ %.2f", total);
}

	else if(prestacoes <=11){
		printf("\nPor favor, escolher no minimo 12 prestacoes.");
	}

	return 0;
}