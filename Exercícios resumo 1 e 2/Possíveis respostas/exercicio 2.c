#include <stdio.h>


int main(int argc, char *argv[]) {
	float num1, num2, num3, num4;
	
	printf("Informe um numero:");
	scanf("%f", &num1);
	
	printf("Informe o segundo numero:");
	scanf("%f", &num2);
	
	printf("Por fim, informe o terceiro numero:");
	scanf("%f", &num3);
	
	num4 = num1 * num2 * num3;
	
	printf("%2.f", num4);
	
	return 0;
}
