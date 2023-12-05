#include <stdio.h>
#include <stdlib.h>

float stan_reais, luxo_reais, lucro, lucro_total;
int i = 0, j = 0, operarios_stan = 24, operarios_luxo = 32, num_oper_stan = 0, num_oper_luxo = 0, operarios_totais = 40, num_radios_stan = 0, num_radios_luxo = 0;

//i = contador dos operarios Standard e o j = contador dos operarios Luxo

int main() {
	
	printf("Insira o lucro que a linha Standard adquire: ");
	scanf("%f", &stan_reais);
	
	printf("Insira o lucro que a linha Luxo adquire: ");
	scanf("%f", &luxo_reais);
	
	int i = 0, j = 0;
	
	while(i <= operarios_stan){
		
		j=0;
		
		while(j <= operarios_luxo){
			
			if(i + j <= operarios_totais){
				
				num_radios_stan = i;
				num_radios_luxo = j ;
				
				lucro = (num_radios_stan * stan_reais) + (num_radios_luxo * luxo_reais);
			
			if(lucro > lucro_total){
					
				lucro_total = lucro;
				num_oper_stan = i;
				num_oper_luxo = j;
					
			}
		}
			j++;
	}
	
		i++;
}

	//num_oper_luxo /= 2;
	
	printf("\n Numero de operarios na linha Standard: %d", num_oper_stan);
	printf("\n Numero de operarios na linha Luxo: %d", num_oper_luxo);
	printf("\n Numero de radios Standard: %d", num_oper_stan);
	printf("\n Numero de radios Luxo: %d", num_oper_luxo);
	printf("\n Lucro:R$%.2f", lucro_total);
	
	return 0;
}