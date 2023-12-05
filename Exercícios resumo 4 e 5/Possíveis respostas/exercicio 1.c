#include <stdio.h>
#include <stdlib.h>

int idade = 1, i = 0;
float media;

int main(int argc, char *argv[]) {
	
	printf("OBS.: O numero 0 encerra o ciclo!");
	
	while (idade != 0){
		printf("\n\nInsira a idade: ");
		scanf("%d",&idade);
		
		media += idade;
		++i;
	}
	
	media /= --i;
	
	printf("A media das %d idades: %.2f", i, media);
	
	return 0;
}