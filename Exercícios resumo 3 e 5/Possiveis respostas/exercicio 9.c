#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float valor_normal, T;
char forma_pagamento[50];

int main(int argc, char *argv[]) {
	
	printf("Informe o valor da compra: ");
	scanf("%f", &valor_normal);
	
	printf("\nOBS.: Na hora se insirir a forma de pagamento, escolher: vista_dinheiro, cheque, vista_cartao, 2x, 3x.");
	
	printf("\n\n Insira a forma de pagamento: ");
	scanf("%s", forma_pagamento);
	
	if(strcmp(forma_pagamento, "vista_dinheiro")==0){
		T = valor_normal - (valor_normal * 0.10);
		printf("\n Total do pedido: R$ %.2f", T);
}

	else if(strcmp(forma_pagamento, "cheque")==0){
		T = valor_normal - (valor_normal * 0.10);
		printf("\n Total do pedido: R$ %.2f", T);
}

	else if(strcmp(forma_pagamento, "vista_cartao")==0){
		T = valor_normal - (valor_normal * 0.15);
		printf("\n Total do pedido: R$ %.2f", T);	
}

	else if(strcmp(forma_pagamento, "2x")==0){
		T = valor_normal;
		printf("\n Total do pedido: R$ %.2f", T);
	}
	
	else {
		T = valor_normal + (valor_normal * 0.10);
		printf("\n Total do pedido: R$ %.2f", T);	
	}
	
	return 0;
}