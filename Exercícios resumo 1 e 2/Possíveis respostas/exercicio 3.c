#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float num1, num2, num3;
	
	printf("Informe o primeiro numero:");
	scanf("%f", &num1);
	
	printf("Informe um numero diferente de 0:");
	scanf("%f", &num2);
	
	num3 = num1 / num2;
	
	printf("%2.f", num3);
	
	return 0;
}
