#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nome[50];
float pcompra, pvenda, lucro, tcompra = 0, tvenda = 0, tlucro = 0;
int l10 = 0, l1020 = 0, l20 = 0;

int main(int argc, char *argv[]) {
	
		printf("Insira o nome da mercadoria (para sair digite Sair): ");
		scanf(" %[^\n]", nome);
	
	while (strcmp(nome, "Sair")){
		
		printf("Insira o preco de compra: ");
		scanf("%f", &pcompra);
		
		printf("Insira o preco de venda: ");
		scanf("%f", &pvenda);
		
		lucro = pvenda - pcompra;
		
		if (lucro/pcompra < 0.1){
			l10++;
		}
		
		else if (lucro/pcompra <= 0.2){
			l1020++;
		}
		
		else{
			l20++;
		}
		
		tcompra += pcompra;
		tvenda += pvenda;
		tlucro += lucro;
		
		printf("\n A mercadoria %s teve R$:%.2f de lucro com %.1f%%. ", nome, lucro, lucro/pcompra*100);
		
		printf("\n\nInsira o nome da mercadoria (para sair digite Sair): ");
		scanf(" %[^\n]", nome);
	}
	
	printf("\n %d mercadorias proporcionaram lucro menor de 10%%!", l10);
	printf("\n %d mercadorias proporcionaram lucro entre 10%% a 20%%!", l1020);
	printf("\n %d mercadorias proporcionaram lucro maior de 20%%!", l20);
	printf("\n Total da compra: R$%.2f", tcompra);
	printf("\n Total da venda: R$%.2f", tvenda);
	printf("\n Total do lucro: R$%.2f", tlucro);
	
	
	return 0;
}