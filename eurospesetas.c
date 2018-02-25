#include<stdio.h>

void main() {

	float pesetas, dolares, euros;
	printf("introduce las pesetas que quieres convertir \n");
	scanf_s("%f", &pesetas);
	pesetas = pesetas;
	euros = pesetas / 166.83;
	dolares = euros * 1.41;
	printf("en euros son: %f  y en dolares son: %f", euros, dolares);
	system("PAUSE");




}