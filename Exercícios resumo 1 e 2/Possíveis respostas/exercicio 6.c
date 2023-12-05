#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {
	float salario_fixo, venda, comissao, salario_final;
	
	printf("Informe o valor do seu salario:");
	scanf("%f", &salario_fixo);
	
	printf("Informe o valor de suas vendas:");
	scanf("%f", &venda);
	
	comissao = venda * 0.04;
	
	salario_final = salario_fixo + comissao;
	
	printf("\nValor da Comissao:%.2f", comissao);
	
	printf("\n Salario Final:%.2f", salario_final);
	
	return 0;
}