#include <stdio.h>
#include <stdlib.h>

float nota, nota1, nota2, nota3, nota_final, num_matricula, frequencia, nota_maior, nota_menor, media_turma, porc_REP_infre;
int i = 0, num_pessoas, aprovado, reprovado, infrequencia, codigo ;

int main(int argc, char *argv[]) {
	
	while(i<100){
		
		// informações que a letra A do exercicio está pedindo
		
		printf("\n Insira o numero de matricula: ");
		scanf("%f", &num_matricula);
		
		printf("\n Insira a primeira nota: ");
		scanf("%f", &nota1);
		
		printf("\n Insira a segunda nota: ");
		scanf("%f", &nota2);
		
		printf("\n Insira a terceira nota: ");
		scanf("%f", &nota3);
		
		printf("\n Informe a frequencia nas aulas: ");
		scanf("%f", &frequencia);
		
		//media aritmética 
		
		nota_final = (nota1 + nota2 + nota3) / 3;
		
			
		//operações para saber se foi reprovado ou aprovado
		
		if(nota_final >= 60 && frequencia > 40){
			aprovado++;
			codigo = 0;
			printf("\n VOCE FOI APROVADO(A)!");
		}
		
		else{
			reprovado++;
			codigo = 1; 
			printf("\n VOCE FOI REPROVADO(A)!!");
		}
		
			//reprovação por infrequência
		
		if(frequencia < 40){
			infrequencia++;
		}
		
		// maior nota da turma
		
		nota = nota_final;
		
		if(nota > nota_maior){
			nota_maior = nota;
		}
		
		//menor nota da turma
		
		else {
			nota_menor = nota;
		}
		
		// calculos para descobrir a media da turma
		
		num_pessoas++;
		
		media_turma += nota_final;
	
		printf("\n Numero de matricula: %.0f; A frequencia: %.0f aulas; Nota final: %.2f; O codigo [APROVADO (0) OU REPROVADO(1)]: %i", num_matricula, frequencia, nota_final, codigo);
		
		i++;
	}
	
	media_turma /= (float)num_pessoas; // para descobrir a media da turma
	porc_REP_infre = ((float)infrequencia / (float)reprovado)*100;
	
	printf("\n Maior nota: %.2f", nota_maior);
	printf("\n Menor nota: %.2f", nota_menor);
	printf("\n Nota media da turma: %.2f", media_turma);
	printf("\n Numero de alunos reprovados: %i", reprovado);
	printf("\n A porcentagem de alunos reprovados por infrequencia: %.2f%%", porc_REP_infre);
	
	
	return 0;
}