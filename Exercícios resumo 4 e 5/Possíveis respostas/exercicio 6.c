#include <stdio.h>
#include <stdlib.h>

float massaI, massaF, seg;
int horas, min=60, s, i, tmin, minutos;

int main() {
	
	printf("Informe a massa do material radioativo em gramas: ");
	scanf("%f", &massaI);
	
	massaF = massaI;
	
	while (massaF >= 0.5){
		
		massaF /= 2;
		
		i++;
		
	}
	
	s = i * 50;
	
	tmin = s / min;
	
	if(tmin > 59){
		horas = tmin / 60;
		minutos = tmin % 60;
	}
	
	seg = s % min;
	
	printf("\n Quantidade de lacos: %i", i);
	printf("\n A massa inicial:%.2f ", massaI);
	printf("\n A massa final: %.2f ", massaF);
	
	if(tmin >= 60){
		printf("\n Tempo calculado %ihoras %iminutos %.2fsegundos", horas, minutos, seg);
	}
	
	else{
	printf("\n Tempo calculado %ihoras %iminutos %.2fsegundos", horas, tmin, seg);
}
	
	return 0;
}