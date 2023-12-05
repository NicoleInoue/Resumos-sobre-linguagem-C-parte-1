#include <stdio.h>
#include <stdlib.h>

float reais = 5.00, ingressos = 120, despesas = 200.00, lucro, lucro_maximo, lucro_max_esperado, preco_ingresso, num_ingressos;

int main(int argc, char *argv[]) {
	
		printf("\n Ingressos:%.2f", ingressos);
		printf("\n reais: R$ %.2f", reais);
	
	while(reais >= 1.00){
		
		lucro = reais * ingressos;
		
		printf("\n Lucro esperado: R$:\t%.2f        /  Valor do ingresso: R$: \t%.2f        / Numero de ingressos: \t%.2f", lucro, reais, ingressos);
		
		lucro_maximo = lucro - despesas;
		
		if(lucro_maximo > lucro_max_esperado){
			lucro_max_esperado = lucro_maximo;
			preco_ingresso = reais;
			num_ingressos = ingressos;
		}
		
		reais -= 0.50;
		ingressos += 26;
	}

	printf("\n\n Lucro maximo esperado: %.2f; Preco do ingresso: R$%.2f; Quantidade de ingressos: %.2f ", lucro_max_esperado, preco_ingresso, num_ingressos);
	
	return 0;
}