#include <stdio.h>

int main(int argc, char *argv[]) {
	float num1, num2, num3;
	
	printf("Informe um numero:");
	scanf("%f", &num1);
	
	printf("Informa outro numero:");
	scanf("%f", &num2);
	
	num3 = num1 - num2;
	
	printf("%2.f", num3);
	
	return 0;
}
