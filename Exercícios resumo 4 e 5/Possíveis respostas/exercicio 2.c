#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float altura, maior, menor, media;
int mulheres = 0, homens = 0, i = 0;
char sexo[10];

int main() {
	
	while (i < 50){
		
		printf("Insira uma altura:");
		scanf("%f", &altura);
		
		//printf("OBS.: sexo digitar M (para masculino) e F (para feminino)");
		
		printf("\nInsira o sexo [M/F]: ");
		scanf("%s", sexo);
		
		system("cls");
		
		i++;
		
		if (i == 1){
			maior = altura;
			menor = altura;
		}

		else if(altura > maior){
			maior = altura;	
		}
		
		else if(altura < menor){
			menor = altura;
		
		}
		
		if(strcmp(sexo, "M")==0){
			homens++;
		}
		
		else if(strcmp(sexo, "F")==0){
			media += altura;
			mulheres++;
		}
	}
	
	media /= mulheres;
	
	printf("\n A maior e menor altura, respectivamente: %.2f / %.2f ", maior, menor);
	printf("\n A media das alturas de %d mulheres: %.2f", mulheres, media);
	printf("\n Numero de homens: %d", homens);
	
	return 0;
}