//hecho por Diego Bartolomé 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int opcion;
	float n1, n2, raiz;
	printf("\nIntroduce dos n%cmeros para poder realizar operaciones\n",163);
	printf("Introduce el primer n%cmero:\n\n", 163);
	scanf_s("%f", &n1);
	printf("\nIntroduce el segundo n%cmero:\n\n", 163);
	scanf_s("%f", &n2);

	printf("\nMENU DE MI CALCULADORA\n\n");
	printf("elige 1 si quieres sumar los dos n%cmeros\n", 163);
	printf("elige 2 si quieres restar dos los n%cmeros\n", 163);
	printf("elige 3 si quieres mutiplicar los dos n%cmeros\n", 163);
	printf("elige 4 si quieres dividir dos los n%cmeros\n", 163);
	printf("elige 5 si quieres hacer la raiz de el primer n%cmero\n", 163);
	printf("elige 6 si quieres hacer la raiz de el segundo n%cmero\n", 163);

	scanf_s("%d", &opcion);

	switch (opcion) {
	case 1:
		printf("\nSuma de %.3f y %.3f = %.3f\n\n", n1, n2, n1 + n2);
		break;
	case 2:
		printf("\nResta de %.3f y %.3f = %.3f\n\n", n1, n2, n1 - n2);
		break;
	case 3:
		printf("\nMutiplicacion de %.3f y %.3f = %.3f\n\n", n1, n2, n1 * n2);
		break;
	case 4:
		printf("\nMutiplicacion de %.3f y %.3f = %.3f\n\n", n1, n2, n1 / n2);
		break;
	case 5:
		raiz = sqrt(n1);
		if (n1 >= 0) {
			printf("\nRaiz de %f es = %f\n\n", n1, raiz);
		}
		if (n1 <= 0) {
			printf("\nno existen la raiz cuadradada de un n%Cmero negativo\n\n");
		}
		break;
	case 6:
		raiz = sqrt(n2);
		if (n2 >= 0) {
			printf("\nRaiz de %f es = %f\n\n", n2, raiz);
		}
		if (n2 <= 0) {
			printf("\nno existe la raiz cuadradada de un n%Cmero negativo\n\n", 163);
		}
		break;
	default:
		printf("\nopcion no valida\n");
	}
	system("pause");
}
