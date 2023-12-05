#include <stdio.h>
#include <stdlib.h>

int ncanal, canal4, canal5, canal7, canal12, npessoa_casa, tpessoas;
float porc_4, porc_5, porc_7, porc_12;

int main(int argc, char *argv[]) {
	
	printf("Insira o numero do canal entre [4, 5, 7 ou 12] e para sair digite [0]:");
	scanf("%i", &ncanal);
	
	while(ncanal != 0){	
	
		printf("\n Informe o numero de pessoas que estavam assistindo: ");
		scanf("%i", &npessoa_casa);
		
			if(ncanal == 4){
				ncanal = npessoa_casa;
				canal4 = ncanal;
			}
	
			else if(ncanal == 5){
				ncanal = npessoa_casa;
				canal5 = ncanal;
			}
		
			else if(ncanal == 7){
				ncanal = npessoa_casa;
				canal7 = ncanal;
			}
		
			else if(ncanal == 12){
				ncanal = npessoa_casa;
				canal12 = ncanal;
			}
			
		tpessoas += npessoa_casa;
		
		printf("\n Insira o numero do canal entre [4, 5, 7 ou 12] e para sair digite [0]:");
		scanf("%i", &ncanal);	
		
	}
	
	porc_4 = ((float)canal4 / (float)tpessoas) *100;
	porc_5 = ((float)canal5 / (float)tpessoas) *100;
	porc_7 = ((float)canal7 / (float)tpessoas) *100;
	porc_12 = ((float)canal12 / (float)tpessoas) *100;
	
	printf("\n Total de pessoas: %i", tpessoas);
	
	printf("\n A porcentagem do Canal 4: %.2f%%", porc_4);
	printf("\n A porcentagem do Canal 5: %.2f%%", porc_5);
	printf("\n A porcentagem do Canal 7: %.2f%%", porc_7);
	printf("\n A porcentagem do Canal 12: %.2f%%", porc_12);
	
	return 0;
}