#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float valor_saldo_minimo, taxa_servico, valor_transacoes, saldo;
int quantidade_transacoes, num_conta, i;
char codigo[20];

int main(int argc, char *argv[]) {
	
	printf("Qual o valor do saldo minimo: ");
	scanf("%f", &valor_saldo_minimo);
	
	printf("\n Informe a quantidade de transacao: ");
	scanf("%i", &quantidade_transacoes);
	
	printf("\n Insira a taxa de servico: ");
	scanf("%f", &taxa_servico);
	
	printf("\n Numero da conta (para sair digite 0): ");
	scanf("%d", &num_conta);
	
	while (num_conta != 0){
		
		if(num_conta > 0){
			i = 0;
			saldo = 0;
		}
			
			while(i < quantidade_transacoes){
				
				printf("\n Valor da transacao: ");
				scanf("%f", &valor_transacoes);
	
				printf("\n Codigo da transacao [deposito ou retirada]: ");
				scanf("%s", codigo);
				
				if(strcmp(codigo, "deposito")==0){
					saldo -= valor_transacoes;
				}
				
				else{
					saldo += valor_transacoes;
				}
				
				i++;
				
				}
				
			if(saldo < valor_saldo_minimo){
				saldo -= taxa_servico;
			}

			if(saldo < 0){
				printf("\n %d - NAO HA FUNDOS!! ", num_conta);
			}
				
			else{
				printf("\n %d - R$ %.2f", num_conta, saldo);
			}
			
		printf("\n Numero da conta (para sair digite 0): ");
		scanf("%d", &num_conta);	
	}	

	return 0;
}