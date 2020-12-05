//Operaciones con variables

#include <stdio.h>
#define PI 3.141592654

int main(){
	float x;
	int y;
	x = PI;

	printf ("EL valor de x es: %f \n",x);
	printf ("Introduce un valor para y: ");
	scanf ("%i", &y);
	printf ("El valoor de y es: %i",y);

	x = x * y;

	printf("El nuevo valor de x es:%f \n\n", x);
	return 0;
}