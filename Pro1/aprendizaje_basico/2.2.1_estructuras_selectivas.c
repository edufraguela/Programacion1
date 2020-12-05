//Estructuras selectivas 
/*Realiza un programa de tres numeros enteros positivos
distintos e imprima el mayor y el menor valor de los tres.
Intente que el programa realice el menor numero de comparaciones 
posibles entre los numeros*/

#include <stdio.h>

int main(){
	int a,b,c;
	int max,min;

	printf("Introduce el valor de a: \n");
	scanf("%i",&a);
	printf("Introduce el valor de b: \n");
	scanf("%i",&b);
	printf("Introduce el valor de c: \n");
	scanf("%i",&c);

	if(a > b){
		if(a > c){
			max = a;
		}
		else{
			max = c;
		}
	}
	else{
		if(b > c){
			max = b;
		}
		else{
			max = c;
		}
	}
	printf("El mayor de los 3 numeros es: %i \n",max);

	if(a < b){
		if(a < c){
			min = a;
		}
		else{
			min = c;
		}
	}
	else{
		if(b < c){
			min = b;
		}
		else{
			min = c;
		}
	}
	printf("El menor de los 3 numeros es: %i \n",min);
	
	return 0;
}