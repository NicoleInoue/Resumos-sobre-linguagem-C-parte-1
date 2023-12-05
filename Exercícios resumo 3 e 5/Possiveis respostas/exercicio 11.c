#include <stdio.h>
#include <stdlib.h>

int num1, num2, num3;
int main(int argc, char *argv[]) {
	
	printf("Insira primeiro numero:");
	scanf("%i", &num1);
	
	printf("Insira segundo numero:");
	scanf("%i", &num2);
	
	printf("Insira terceiro numero:");
	scanf("%i", &num3);
	
	if(num1 < num2 && num2 < num3)
		printf("\n Ordem crescente: \t%.2i, \t%.2i, \t%.2i", num1, num2, num3);
	
	else if(num2 < num1 && num1 < num3)
		printf("\n Ordem crescente: \t%.2i, \t%.2i, \t%.2i", num2, num1, num3);
	
	else if(num3 < num1 && num1 < num2)
		printf("\n Ordem crescente: \t%.2i, \t%.2i, \t%.2i", num3, num1, num2);
	
	else if(num3 < num2 && num2 < num1)
		printf("\n Ordem crescente: \t%.2i, \t%.2i, \t%.2i", num3, num2, num1);
	
	else if(num2 < num3 && num3 < num1)
		printf("\n Ordem crescente: \t%.2i, \t%.2i, \t%.2i", num2, num3, num1);
	
	else if(num1 < num3 && num3 < num2)
		printf("\n Ordem crescente: \t%.2i, \t%.2i, \t%.2i", num1, num3, num2);
	
	return 0;
}