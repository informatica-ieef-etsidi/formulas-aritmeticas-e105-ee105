#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main() {

	float a, c;

	printf("introduzca los grados celsius que desea convertir\n");
	scanf_s("%f", &a);

	c = ((a*1.80) + 32); //formula de conversion

	printf("la conversion a Fahrenheit es: %f\n", c);

	system("pause");
}