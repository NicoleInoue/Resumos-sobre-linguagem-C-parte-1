#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int ncrianca_nascida, crianca_morta = 0;
char repeticao [3] = "V", sexo_crianca_morta [3];
float meses_vida, porc_CM, porc_M, porc_meses, SCM, QCQVM;

int main() {
	
	printf("Insira o numero de crianca nascida no periodo: ");
	scanf("%i", &ncrianca_nascida);
	
	while(strcmp(repeticao, "V")==0){
		
		printf("\n Informe o sexo de uma crianca morta [M] masculino ou [F] feminino: ");
		scanf("%s", sexo_crianca_morta);
			
			if(strcmp(sexo_crianca_morta, "M")==0){
				SCM++; // SCM = sexo da criança é masculino;
				//printf("\n Numero de criancas do sexo masculino que veio a obito: %.1f", SCM);
			}
			
		printf("\n\n Informe o numero de meses de vida da crianca: ");
		scanf("%f", &meses_vida);
		
			if(meses_vida <= 24){
				QCQVM++; // QCQVM = quantidade de crianças que viveram menos;
				//printf("\n Quantidade de criancas que viveram 24 meses ou menos: %.1f", QCQVM);
			}
		
		crianca_morta++;
		printf("\n\n Se deseja continuar digite [V], caso nao deseje, digite [N]: ");
		scanf("%s", repeticao);
		
		}
		
		porc_CM = ((float)crianca_morta / (float)ncrianca_nascida)*100;
		porc_M = (SCM / (float)crianca_morta)* 100;
		porc_meses = (QCQVM / (float)crianca_morta) * 100;
		
		printf("\n A porcentagem de criancas mortas no periodo: %.2f%%", porc_CM);
		printf("\n A porcentagem de criancas do sexo masculino mortas no periodo: %.2f%%", porc_M);
		printf("\n A porcentagem de criancas que viveram 24 meses ou menos no periodo: %.2f%%", porc_meses);
		
	return 0;
}