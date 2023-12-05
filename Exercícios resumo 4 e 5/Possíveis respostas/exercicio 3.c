#include <stdio.h>
#include <stdlib.h>

int i = 0; 
float F = 50, C;

int main() {
	
	while (i <= 100){
	
		C = (5 *(F - 32) / 9);
		
		i++;

		//system("pause");
	
		printf("\n [Linha %i] F(grau):\t%.2f  =  C(grau):\t%.2f", i, F, C);
		
		F++;
	}

	return 0;
}