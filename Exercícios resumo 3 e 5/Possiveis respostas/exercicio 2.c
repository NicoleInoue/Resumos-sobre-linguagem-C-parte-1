#include <stdio.h>
#include <stdlib.h>

float nota1, nota2, media;

int main(int argc, char *argv[]) {
	
	printf("Informe sua primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Informe sua segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2)/ 2;
	
	printf("\n Sua nota final e: %.2f", media);
	
	if (media >= 0 && media <3)
		printf("\n Voce foi REPROVADO!");
	else{
		if (media < 7)
    		printf("\n Voce esta de EXAME!");
		else 
			printf("\n  Foi APROVADO!");
}
	return 0;
}