#include <stdio.h>
#include <stdlib.h>

int hA = 9000000, hB = 20000000, nAnos = 0;

int main() {
	
	while(hA <= hB){
	
		hA += hA *0.03;
	
		hB += hB * 0.015;
	
		nAnos++;	
	
	}
	
	printf("\n O numero de anos necessarios para que o Pais A ultrapasse ou iguale ao Pais B, sendo o total de habitantes do pais A (%i) e o do pais B (%i), e de: %i anos", hA, hB, nAnos);
	
	return 0;
}