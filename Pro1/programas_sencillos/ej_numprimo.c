/*programa que pida al usuario un numero mayor que uno y decirle si es primo o si no es primo, funcion que reciba el numero y devuelva si es cierto o es falso , si el numeor recibido es falso. */

#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int n);
void PedirDato(int *d);

bool esPrimo(int n){
	bool aux = true;
	for(int divisor = 2; divisor*divisor <= n&&aux; divisor++){
		if(n%divisor == 0){
			aux = false;
		}
	}
	return aux;
}

void PedirDato(int *d){
	do{
		printf("Escriba un numero > 1\n");
		scanf("%d",d);

	}while(*d<=1);	
}

int main(){
	int numero;
	//pedir numero
	PedirDato(&numero);
	if (esPrimo(numero)){
		printf("Es Primo\n");
	}
	else printf("No es Primo\n");
	return 0;
}