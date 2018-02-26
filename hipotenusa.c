#include <math.h>
#include <stdio.h>
//Teorema de pitagoras: calculo de la hipotenusa
void main()
{
	float a, b;
	printf("Cual es el lado contiguo del triangulo?\n");
	scanf_s("%f", &a);
	printf("Cual es el lado opuesto del triangulo?\n");
	scanf_s("%f", &b);

	float hipotenusa;
	hipotenusa = sqrt(a*a + b * b);
	printf("hipotenusa: %f\n", hipotenusa);
}
