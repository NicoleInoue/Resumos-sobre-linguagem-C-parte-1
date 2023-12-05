#include <stdio.h>
#include <stdlib.h>

float nota1, nota2, nota3, nota4, media;

int main(int argc, char *argv[]) {
	
	printf("Informe sua primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Informe sua segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Informe sua terceira nota: ");
	scanf("%f", &nota3);
	
	printf("Informe sua quarta nota: ");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	printf("\n Sua media final e: %.2f", media);
	
	if (media >= 7)
	    printf("\n Voce foi APROVADO!");
	else
	    printf("\n Voce foi REPROVADO!");

	return 0;
}