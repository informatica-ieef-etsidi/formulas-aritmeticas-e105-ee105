#include <stdio.h>

int main (){
	
	float r, a;
	const float pi= 3.141592;
	
	printf("Vamos a calcular la superficie de una esfera de radio r:\n");
	printf("Introduzca un radio r: ");
	scanf("%f",r);
	
	a=4*pi*r*r;
	printf("La superficie de esta esfera es %f",a);
	return 0;
	
}
