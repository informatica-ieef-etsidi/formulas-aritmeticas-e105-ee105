//Paula Arellano
// Programa que permite saber si un cuerpo va a flotar o no, introduciendo la densidad del líquido y la masa y el volumen del cuerpo. 
//También te indica la el peso del cuerpo y la fuerza de empuje que ejerce el líquido sobre el cuerpo.
#include<stdio.h>
void main() {
	//ZONA DE DECLARACIÓN DE VARIABLES
	float densidad_liquido;
	float masa_cuerpo;
	float volumen_cuerpo;
	float gravedad= 9.80665;
	float peso;
	float empuje;
	char fuerza;
	
	//Pedir por teclado los datos
	printf("Indroduce la densidad del liquido (kg/L): \n");
	scanf_s("%f", &densidad_liquido);
	printf("Indroduce la masa del cuerpo (kg): \n");
	scanf_s("%f", &masa_cuerpo);
	printf("Indroduce el volumen del cuerpo (dm^3=L): \n");
	scanf_s("%f", &volumen_cuerpo);

	//Cálculo del peso y del empuje
	peso = masa_cuerpo * gravedad;
	empuje = densidad_liquido * volumen_cuerpo * gravedad;

	printf("Peso cuerpo: %.2f\n", peso);
	printf("Empuje: %2.f\n", empuje);

	//Comparación
	fuerza = empuje > peso ? printf("El cuerpo va a flotar \n") : printf("El cuerpo se va a sumergir \n");
	system("PAUSE");	
}
