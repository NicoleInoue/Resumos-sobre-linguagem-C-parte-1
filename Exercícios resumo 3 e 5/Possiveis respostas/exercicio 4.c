#include <stdio.h>
#include <stdlib.h>

float num1, num2;

int main(int argc, char *argv[]) {
	
	printf("Informe um numero qualquer: ");
	scanf("%f", &num1);
	
	printf("Informe outro numero: ");
	scanf("%f", &num2);
	
	if(num1 > num2)
	printf("\n Esse e o numero maior: %.2f", num1);
	
	else
	printf("\n Esse e o numero maior: %.2f", num2);	

	return 0;
}