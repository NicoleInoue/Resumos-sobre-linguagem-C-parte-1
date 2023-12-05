#include <stdio.h>
#include <stdlib.h>

float fase1, fase2, fase3,desempenho1, desempenho2, desempenho3, diferenca1, diferenca2, diferenca3, etapa1, etapa2, etapa3, soma_pontos, equipe_vencedora;
int inscricao_equipe, inscricao;

int main(int argc, char *argv[]) {
	
	//fiquei na duvida se o tempos-padrões é só um para as três ou um para cada fase. 
	
	printf("\n Qual o tempo padrao para a primeira fase (em minutos decimais): ");
	scanf("%f", &fase1);
		
	printf("\n Qual o tempo padrao para a segunda fase (em minutos decimais): ");
	scanf("%f", &fase2);
		
	printf("\n Qual o tempo padrao para a terceira fase (em minutos decimais): ");
	scanf("%f", &fase3);
	
	printf("Informe o numero de inscricao da equipe (digitar 9999 para sair): ");
	scanf("%i", &inscricao_equipe);
	
	while(inscricao_equipe != 9999){
		
		printf("\n Qual o tempo que a equipe desempenhou na primeira fase (em minutos decimais): ");
		scanf("%f", &desempenho1);
		
		printf("\n Qual o tempo que a equipe desempenhou na segunda fase (em minutos decimais): ");
		scanf("%f", &desempenho2);
		
		printf("\n Qual o tempo que a equipe desempenhou na terceira fase (em minutos decimais): ");
		scanf("%f", &desempenho3);

		//Diferença da primeira fase
		
		diferenca1 = fase1 - desempenho1;
		printf("\n diferenca 1: %.2f", diferenca1);
		
		etapa1 = 0;
		
		if(diferenca1 < 3){
			etapa1 += 100;
		}
		
		else if(diferenca1 <= 5){
			etapa1 += 80;
		}
		
		else if(diferenca1 > 5){
			etapa1 = (80 - (diferenca1 - 5))/5;
		}
		
		// Diferença da segunda fase
		
		etapa2 = 0;
		
		diferenca2 = fase2 - desempenho2;
		printf("\n diferenca 2: %.2f", diferenca2);
		
		if(diferenca2 < 3){
			etapa2 += 100;
		}
		
		else if(diferenca2 <= 5){
			etapa2 += 80;
		}
		
		else{
			etapa2 = (80 - (diferenca2 - 5))/5;
		}
		
		// Diferença da terceira fase
		
		etapa3 = 0;
		
		diferenca3 = fase3 - desempenho3;
		printf("\n diferenca 3: %.2f", diferenca3);
		
		if(diferenca3 < 3){
			etapa3 += 100;
		}
		
		else if(diferenca3 <= 5){
			etapa3 += 80;
		}
			
		else{ 
			etapa3 = (80 - (diferenca3 - 5))/5;
		}
		
		soma_pontos = etapa1 + etapa2 + etapa3;
		
		if(soma_pontos > equipe_vencedora){
			equipe_vencedora = soma_pontos;
			inscricao = inscricao_equipe;
		}
		
		printf("\n Numero de inscricao: %i; Pontos da etapa 1: %.2f; Ponto da etapa 2: %.2f; Ponto da etapa 3: %.2f; Total de pontos obtidos: %.2f", inscricao_equipe, etapa1, etapa2, etapa3, soma_pontos);
		
		printf("\n Informe o numero de inscricao da equipe (digitar 9999 para sair): ");
		scanf("%i", &inscricao_equipe);
	}
	
	printf("\n Equipe vencedora: %i; Com o resultado: %.2f", inscricao, equipe_vencedora);
	
	return 0;
}