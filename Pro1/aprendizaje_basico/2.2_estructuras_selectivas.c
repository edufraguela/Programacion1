//Estructuras selectivas parte 2
/*Realizar un programa que lea de entrada estándar un número
entero positivo y escriba en la salida si es par o impar*/

#include <stdio.h>

int main(){
	int x, y;

	printf("Introduzca un numero: ");
	scanf ("%i",&x);

	y = x % 2;

	if(y == 0){
		printf ("El numero %i es par \n",x);
	}
	else {
		printf ("El numero %i es impar\n",x);
	}
	return 0;
}