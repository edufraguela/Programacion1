/*OBJETIVOS: Mostrar por pantalla nombre, apellidos, ...
  ENTRADA: El nombre, los apellidos, ...
  SALIDA: Por panatalla muestra el nombre, apellidos, ...
  PRECONDICION: ...*/

#include <stdio.h>
#define LONG_NOMBRE 20
#define LONG_APEL 40

int main(){
	char nombre[LONG_NOMBRE+1], apellidos[LONG_APEL+1];
	float nota1,nota2,notaf, calificacion;

	printf("ESCRIBA SU NOMBRE: ");
	scanf("%[^\n]",nombre);
	getchar();
	printf("ESCRIBA SUS APELLIDOS: ");
	scanf("%[^\n]",apellidos);
	puts("NOTA PRIMER PARCIAL: ");
	scanf("%f",&nota1);
	puts("NOTA SEGUNDO PARCIAL: ");
	scanf("%f",&nota2);
	puts("NOTA FINAL EXAMEN: ");
	scanf("%f",&notaf);

	calificacion= 0.1*nota1+0.3*nota2+0.6*notaf;

	printf("%f",calificacion);

	return 0;
}