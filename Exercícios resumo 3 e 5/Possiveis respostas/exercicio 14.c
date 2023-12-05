#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n1, n2, resultado;
char operacao[20];

int main(int argc, char *argv[]) {
	
	printf("Insira um numero inteiro: ");
	scanf("%i", &n1);
	
	printf("Insira outro numero inteiro: ");
	scanf("%i", &n2);
	
	printf("\n OBS.: Escolher uma entre as letras maiuscula: A (soma), S (subtracao), M (multiplicacao), Q (divisao) e o E (opcao invalida)");
	
	printf("\n\n Informe qual operacao deseja: ");
	scanf("%s", operacao);
	
	if(strcmp(operacao, "A")==0){
		resultado = n1 + n2;
		printf("\n O resultado da soma: %.2i", resultado);
}
		
	else if(strcmp(operacao, "S")==0){
		resultado = n1 - n2;
		printf("\n O resultado da subtracao: %.2i", resultado);
}

	else if(strcmp(operacao, "M")==0){
		resultado = n1 * n2;
		printf("\n O resultado da multiplicacao: %.2i", resultado);
}

	else if(strcmp(operacao, "Q")==0){
		resultado = n1 / n2;
		printf("\n O resultado do quociente: %.2i", resultado);
		
}
	
	else if(strcmp(operacao, "E")==0){
		printf("\n Opcao invalida!");
}

	else
		printf("ERRO");
	
	return 0;
}