#include <stdio.h>
#include <math.h>

void main() {
	float a = 0;
	float b = 0;
	float error = 0;
	float P;
	float x = 0;
	float y = 0;
	float ya = 0;
	float yb = 0;

	int grado = 0;
	int contador = 0;

	printf("La funcion es:  x^3 -x^2 - x - 5\n");
	printf("Por favor, introduce dos valores\n");
	scanf_s("%f", &a);
	scanf_s("%f", &b);

	x = a;
	ya = x * x*x - x * x - x - 5;

	x = b;
	yb = x * x*x - x * x - x - 5;

	if (ya * yb > 0) {
		printf("Los valores introducidos no son adecuados, introduzca dos valores validos por favor:\n");
		scanf_s("%f", &a);
		scanf_s("%f", &b);
		x = a;
		ya = x * x*x - x * x - x - 5;
		x = b;
		yb = x * x*x - x * x - x - 5;
		}
	printf("Introduce un grado de error (2^n)\n");
	scanf_s("%d", &grado);

	for (contador = 0;  contador < grado; contador++) {

		printf("Los valores son: a = %f || b = %f\n", a, b);

		P = (a + b) / 2;
		//funcion
		y = x * x*x - x * x - x - 5;

		x = a;
		ya = x * x*x - x * x - x - 5;

		x = b;
		yb = x * x*x - x * x - x - 5;

		x = P;
		y = x * x*x - x * x - x - 5;

		error = (b - a) / pow(2,error);

		if (ya * y < 0) {
			b = P;
			}
		else {
			a = P;
			}
		}

	printf("El punto medio es %f\nLos nuevos valores son: %f y %f\nError aproximado de: |%f|\n", P, a, b, error);

	system("PAUSE");
	return 0;
}
