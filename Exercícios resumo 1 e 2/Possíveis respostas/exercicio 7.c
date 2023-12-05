#include <stdio.h>
#include <stdlib.h>

float peso_atual, engorda, emagrece;

int main(int argc, char *argv[]) {
	
	printf("Informe o seu peso: ");
	scanf("%f", &peso_atual);
	
	engorda = ((peso_atual/100) * 15) + peso_atual;
	
	emagrece = peso_atual - ((peso_atual / 100) * 20);
	
	printf("\nEngorda: %.2f", engorda);
	
	printf("\nEmagrece: %.2f", emagrece);
	
	return 0;
}
