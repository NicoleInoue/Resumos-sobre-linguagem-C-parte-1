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
	
	if(dd == 31 || dd == 30 ){
		dd = 1;
		printf("\n O dia seguinte: %i / %i / %i", dd, ++mm, aaaa);

		if(mm == 13){
			mm = 1;
			system("cls");
			printf("\n O dia seguinte: %i / %i / %i", dd, mm, ++aaaa);
	}
}
	else
	printf("\n O dia seguinte: %i / %i / %i", ++dd, mm, aaaa);

	if(mm > 31 || mm > 12){
	system("cls");
	printf("\nHouve um erro!");
}
	
	
	return 0;
}