//Realiza un programa en C que lea un numero entre 1 y 4 
//y devuelva el dia de la semana correspondiente, 1 lunes,etc.

#include<stdio.h>

int main(){

	int x;

	printf("Introduce un numero del 1 al 4:\n");
	scanf("%i",&x);

	switch (x){
		case 1; 
		printf("L\n");
		break;
		case 2; 
		printf("M\n");
		break;
		case 3; 
		printf("X\n");
		break;
		case 4; 
		printf("J\n");
		break;
		default: printf ("EL numero no es correcto \n");

	}

	return 0;
}