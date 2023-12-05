#include <stdio.h>
#include <stdlib.h>

int ano;

int main(int argc, char *argv[]) {
	
	printf("Informe um ano: ");
	scanf("%i", &ano);
	
	if(ano % 400 == 0)
		printf("\n E um ano bissexto!");
	
	else {
	
		if (ano % 4 == 0 && ano % 100 != 0)
		printf("\n E um ano bissexto!");
		
		else 
		printf("\n Nao e um ano bissexto!");
	}
	

	return 0;
}