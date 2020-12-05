//Metodo burbuja
//Intercambiar dos numeros enteros introducidos por teclado

#include <stdio.h>

int main(){
	int x, y, aux; /*Se crea una auxiliar para guardar un valor*/

	printf("El valor x es: ");
	scanf("%i", &x);

	printf("El valor y es: ");
	scanf("%i", &y);

	aux = x; /*aux guarda el valor de x*/
	x = y; /*Se intercambia el valor de x con y*/
	y = aux; /*Como aux tiene el valor x, se intercambia y con aux*/

	printf("El valor de x es: %i \n",x);
	printf("El valor de y es: %i \n",y);
	return 0;
}