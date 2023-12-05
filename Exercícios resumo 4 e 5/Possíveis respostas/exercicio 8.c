#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char sexo[3], soun[3];
int i = 0, S, N; 
float porc_F, porc_M, SF, NM, F, M;

int main() {
	
	while(i < 2000){
		
		printf("Insira o sexo da pessoa entrevistada [F] feminino ou [M] masculino: ");
		scanf(" %s", sexo);
		
		printf("Informe se a resposta e [S] sim ou [N] nao: ");
		scanf(" %s", soun);
		
		if (strcmp(sexo, "F")==0){
			F++;
			
			if (strcmp(soun, "S")==0){
				SF++;
			}
		}
		
		else if(strcmp(sexo, "M")==0){
			M++;
			
			if (strcmp(soun, "N")==0){
				NM++;
			}
		}
		
		if (strcmp(soun, "S")==0){
			S++;
		}
		
		else{
			N++;
		}
		
		i++;
		
	}
	
	porc_F = (SF / F) * 100;
	porc_M = (NM / M) * 100;
	
	printf("\n O numero de pessoas que responderam 'Sim': %i ", S);
	printf("\n O numero de pessoas que responderam 'Nao': %i ", N);
	printf("\n A porcentagem de pessoas do sexo feminino (%.0f) que responderam 'Sim' (%.0f) : %.2f%% ", F, SF, porc_F);
	printf("\n A porcentagem de pessoas do sexo masculino (%.0f) que responderam 'Nao' (%.0f) : %.2f%% ", M, NM, porc_M);
	
	return 0;
}