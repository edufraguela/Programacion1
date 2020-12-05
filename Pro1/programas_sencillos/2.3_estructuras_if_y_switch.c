//Realiza un programa en C que lea un numero entre 1 y 4 
//y devuelva el dia de la semana correspondiente, 1 lunes,etc.

#include<stdio.h>

int main(){

	int x;

	printf("Introduce un numero del 1 al 4:\n");
	scanf("%i",&x);

	if (x==1){
		printf("Lunes.\n");
	}
	if (x==2){
		printf("Martes.\n");
	}
	if (x==3){
		printf("Miercoles.\n");
	}
	if (x==4){
		printf("Jueves.\n");
	}

	return 0;
}

