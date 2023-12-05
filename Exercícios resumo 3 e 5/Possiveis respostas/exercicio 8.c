#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

float altura, peso_ideal;
char sexo[11];

int main(int argc, char *argv[]) {
	
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	
	printf("Informe qual e o seu sexo: ");
	scanf("%s", sexo);
	
	if(strcmp(sexo, "masculino") == 0){
		peso_ideal = (72.7 * altura) - 58;
}

	else{
		peso_ideal = (62.1 * altura) - 44.7;
}	

	printf("\n Seu peso ideal e: %.3f", peso_ideal);
	
	return 0;
}