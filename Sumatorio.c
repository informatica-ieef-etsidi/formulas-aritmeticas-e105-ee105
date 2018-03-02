//Autor : Angel Molina
#include<stdio.h>
void main() {
	int i=1;
	int n;
	int suma = 0;
	printf("hasta que numero\n");
	scanf_s("%d",&n);
	if (n < 0)
		printf("pon un numero positivo\n");
	while (i <= n) {
		printf("%d\n", i);
		suma = suma + i ;
		if (i == n) {
			printf("Sumatorio= %d\n", suma);
		}
		
		i++;
	}
	system("PAUSE");

	
}
