//Variables 

#include <stdio.h>

int main(){
	int x; //Entero 16bits -32768 hasta 32767
	float y; //Flotante 32bits 2^32
	double y2; //Flotante 64 bits 2^64
	char z; //Caracteres ASCII

	x = 5;
	y = 4.9;
	y2 = 20.9;
	z = 'a';

	printf("Valor de x: %i \n",x);
	printf("Valor de y: %f \n",y);
	printf("Valor de y2: %f \n",y2);
	printf("Valor de z: %c \n",z);
	
	return 0;
}