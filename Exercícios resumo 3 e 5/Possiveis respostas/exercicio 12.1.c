#include <stdio.h>
#include <stdlib.h>

int dd, mm, aaaa;

int main(int argc, char *argv[]) {
	
	printf("Informe um dia: ");
	scanf("%i", &dd);
	
	printf("Informe um mes: ");
	scanf("%i", &mm);
	
	printf("Informe um ano: ");
	scanf("%i", &aaaa);
	
	if(mm == 4 || mm == 6 || mm == 9 || mm == 11 ){
		if(dd == 30){
			dd == 1;
			mm++;
			printf("\n Dia seguinte: %i/ %i/ %i", dd, mm, aaaa);
			}
		else{
			dd++;
			printf("\n Dia seguinte: %i/ %i/ %i", dd, mm, aaaa);
		}
}
	
	if (mm == 2){
		if((aaaa % 400 == 0) || (aaaa % 4 == 0 && aaaa % 100 != 0)){
			if(dd == 29){
				dd = 1;
				mm++;
				printf("\n Dia seguinte: %i/ %i/ %i", dd, mm, aaaa);
	}
		
		else {
			dd++;
	}
		
		if (dd == 28){
			dd = 1;
			mm++;
			printf("\n Dia seguinte: %i/ %i/ %i", dd, mm, aaaa);
	}
		else{
			dd++;
			printf("\n Dia seguinte: %i/ %i/ %i", dd, mm, aaaa);
	}
		if (dd == 31){
			dd = 1;
			if(mm == 12){
				mm = 1;
				aaaa++;
				printf("\n Dia seguinte: %i/ %i/ %i", dd, mm, aaaa);
				
			if(mm==12){
				mm++;
				printf("\n Dia seguinte: %i/ %i/ %i", dd, mm, aaaa);
			}	
			}
			else{
				dd++;
				printf("\n Dia seguinte: %i/ %i/ %i", dd, mm, aaaa);
			}
		}
	}
}

	
		if(dd < 1 || mm < 1 || aaaa < 1 ){
		printf("Data invalida!!");
		exit(0);
}
	
		//printf("\n Dia seguinte: %i/ %i/ %i", dd, mm, aaaa);
	
	return 0;
}