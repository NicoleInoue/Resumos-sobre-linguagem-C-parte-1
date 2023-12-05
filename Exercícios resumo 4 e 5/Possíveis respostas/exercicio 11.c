#include <stdio.h>
#include <stdlib.h>

int codigo_curso, num_vagas, num_candidatos_M, num_candidatas_F, num_candidatos_vagas, tcandidatos, t2candidatos, maior_num_candidatos_vaga, curso;
float porc_F_vaga;

int main(int argc, char *argv[]) {
	
	printf("Informe o codigo do curso [para encerrar digite 0]: ");
	scanf("%i", &codigo_curso);
	
	while(codigo_curso != 0){
			
		printf("\n Informe o numero de vagas: ");
		scanf("%i", &num_vagas);
		
		printf("\n Numero de candidatos do sexo masculino: ");
		scanf("%i", &num_candidatos_M);
		
		printf("\n Numero de candidatos do sexo feminino: ");
		scanf("%i", &num_candidatas_F);
		
		num_candidatos_vagas = (num_candidatos_M + num_candidatas_F) / num_vagas;
		
			if(num_candidatos_vagas > maior_num_candidatos_vaga){
				maior_num_candidatos_vaga = num_candidatos_vagas;
				curso = codigo_curso;
			}
			
		
		tcandidatos = num_candidatos_M + num_candidatas_F;
		porc_F_vaga = ((float)num_candidatas_F / (float)tcandidatos) * 100;
		
		printf("\n Codigo do curso: %i; Numero de candidatos por vaga: %i; Porcentagem de canditados do sexo feminino: %.2f%% ", codigo_curso, num_candidatos_vagas, porc_F_vaga);
		
		t2candidatos += tcandidatos;
		
		printf("\nInforme o codigo do curso [para encerrar digite 0]: ");
		scanf("%i", &codigo_curso);
		
	}
	
	printf("\n O maior numero de candidatos por vaga: %i que corresponde ao codigo do curso %i", maior_num_candidatos_vaga, curso);
	
	printf("\n O total de candidatos: %i", t2candidatos);
	
	return 0;
}