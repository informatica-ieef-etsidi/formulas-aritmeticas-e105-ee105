// hacer un programa que entregue el resultado de la resolucion de ecuacion cuadrįtica

#include <stdio.h>
#include <math.h> // Es necesario la libreria matematica para la raiz cuadrada

 main()
  {
	int a,b,c;
	float raiz1=0,raiz2=0;

	printf("sea la ecuacion cuadratica: ax2+bx+c""\n");
	
	printf("Introduce a\n");
	scanf("%d", &a);
	
	printf("Introduce b\n");
	scanf("%d", &b);
	
	printf("Introduce c\n");
	scanf("%d", &c);

	raiz1 = (-b + sqrt(b*b-(4*a*c)))/(2*a);
	printf("Raiz1 de la ecuacion = %f",raiz1);
	
	
	raiz2 = (-b - sqrt(b*b-(4*a*c)))/(2*a);
	printf("\nRaiz2 de la ecuacion  es = %f", raiz2);
	
	printf("\nGracias por utilizar este programa");
	
	system ("pause");
	return 0;
}
