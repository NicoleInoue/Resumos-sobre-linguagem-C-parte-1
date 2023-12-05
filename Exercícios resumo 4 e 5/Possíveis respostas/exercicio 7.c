#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char identurma[2], aoup[2];
int quanturma, nmatricula, i = 0, maior5 = 0;
float perc_A, perc_P, totalmatriculado, P = 0, A = 0; 

int main(int argc, char *argv[]) {
	
	while(i < 14){
		printf("\n Identifique qual a turma (ex: A, B, ... ou N): ");
		scanf("%s", identurma);
		
		printf("\nNumero de alunos matriculados: ");
		scanf("%i", &quanturma);
		
		totalmatriculado = quanturma;
		
		i++;
		
		system("cls");
		
		while (quanturma > 0){
			
			printf("\n\n Numero da matricula: ");
			scanf("%i", &nmatricula);
			
			printf("\n Insira P (para presente) e A (para ausente): ");
			scanf("%s", aoup);
			
			printf("\n A ou P: %s", aoup);
			
			if(strcmp(aoup, "P")==0){
				P++;
			}
			else{
				A++;
			}
			
			quanturma--;
			
			system("cls");
		}
		
		perc_A = (A/totalmatriculado)*100;
		perc_P = (P/totalmatriculado)*100;
		
		printf("\n Porcentagem de alunos ausentes da Turma %s, foi de: %.2f%%", identurma, perc_A);
		printf("\n Porcentagem de alunos presentes da Turma %s, foi de: %.2f%%", identurma, perc_P);
		
		A = 0;
		P = 0;
		
		if (perc_A > 5.00){
		maior5++;
		}
	}
	
	printf("\n Tiveram %i turmas com mais de 5%% de ausencia", maior5);
	
	return 0;
}