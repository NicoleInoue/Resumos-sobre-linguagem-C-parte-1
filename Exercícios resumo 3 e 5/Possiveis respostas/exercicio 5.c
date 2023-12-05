#include <stdio.h>
#include <stdlib.h>

float numA, numB, variavelC;

int main(int argc, char *argv[]) {
	
	printf("Informe um valor inteiro: ");
	scanf("%f", &numA);
	
	printf("Informe outro valor inteiro: ");
	scanf("%f", &numB);
	
	if(numA == numB){
		
		variavelC = numA + numB;
		printf("\n Sua variavel: %.2f", variavelC);
	}	
		
	else{

		variavelC = numA * numB;
		printf("\n Sua variavel: %.2f", variavelC);
	}
	
	
	return 0;
}
