#include <stdio.h>

int main(){

	float radio, perimetro, area;
	const float pi=3.141592;
	
	printf("Vamos a calcular el Perimetro y el Area de una circunferencia de radio r.\n");
	printf("Inserte radio r en metros:");
	scanf("%f", &radio);
	
	area=pi*radio*radio;
	perimetro=2*pi*radio;

	printf("Perimetro: %f \n", perimetro);
	printf("Area: %f m^2", area);
	
	return 0;
	
	
}
