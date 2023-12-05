#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int main(){

    float valor , pf;
    char estado_destino[3];

    printf("Informe qual e o valor do produto: ");
	scanf ("%f", &valor);
		
	printf("Informe para qual estado que o produto sera destinado: ");
	scanf("%s", &estado_destino);

     
    if(strcmp(estado_destino, "MG")==0){
         pf = 0.07;
         printf("\n Resultado: R$ %.2f", valor *(1+pf));
    }

    else if(strcmp(estado_destino, "SP") == 0){
    	pf = 0.12;
    	printf("\n Resultado: R$ %.2f", valor *(1+pf));
	}
	
	else if(strcmp(estado_destino, "RJ") == 0){
    	pf = 0.15;
    	printf("\n Resultado:R$ %.2f", valor *(1+pf));
	}
	
	else if(strcmp(estado_destino, "MS") == 0){
    	pf = 0.08;
		printf("\n Resultado:R$ %.2f", valor *(1+pf));
	}
    
    else {
    	printf("Houve um erro!");
}
    	
}
