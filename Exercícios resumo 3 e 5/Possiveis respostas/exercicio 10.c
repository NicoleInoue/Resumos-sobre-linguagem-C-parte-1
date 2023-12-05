#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float peso, altura, IMC;

int main(int argc, char *argv[]) {
	
	printf("Informe qual o seu peso: ");
	scanf("%f", &peso);
	
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	
	IMC = peso / (pow(altura, 2));
	
	if(IMC < 18.5)
		printf("\n Status: Abaixo do peso !");
		
	else if (IMC < 25)
		printf("\n Status: Peso Normal!");
		
	else if(IMC < 30)
		printf("\n Status: Acima do peso!");
		
	else
		printf("\n Status: Obeso!");			
	
	return 0;
}