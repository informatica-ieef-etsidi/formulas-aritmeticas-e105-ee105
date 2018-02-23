#include <stdio.h>
void main()
{
	int edad;
	printf("Introduzca su edad y tenga recomendaciones de peliculas estrenadas en el 2017: \n");
	scanf_s("%d", &edad);
	if (edad < 0 || edad>100)
		printf("No es una edad validad \n");
	else printf("La pelicula escogida es:\n"); {
		if (edad >= 0 && edad <= 5)
			printf("Mi villano favorito 3 \n");
		else if (edad > 5 && edad <= 12)
			printf(" La Bella y la Bestia\n");
		else if (edad > 13 && edad < 16)
			printf("Coco");
		else if (edad >= 16 && edad < 25)
			printf("Guardianes de la galaxia\n");
		else if (edad >= 25 && edad < 40)
			printf("Star Wars episodio viii\n");
		else ( printf("Toni Erdman\n "));
	}
	system("PAUSE"); 

}