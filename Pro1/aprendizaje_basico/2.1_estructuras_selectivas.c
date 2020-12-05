//Estructuras selectivas
/*"==": Igual que*/
/*"<": Menor que*/
/*">": Mayor que*/
/*"<=": Menor o igual que*/
/*">=": Mayor o igual que*/
/*"!=": Distinto que*/

#include <stdio.h>

int main(){
	int x,y;

	x = 5;

	if (x == 5){ 
		printf("El valor de x es 5 \n");
	}
	else printf("El valor de x no es 5 \n");

	if (x < 6){ 
		printf("El valor de x es menor que 6 \n");
	}
	else printf("El valor de x es mayor que 6 \n");

	if (x > 6){ 
		printf("El valor de x es mayor que 6 \n");
	}
	else printf("El valor de x es menor que 6 \n");

	if (x <= 6){ 
		printf("El valor de x es menor o igual que 6 \n");
	}
	else printf("El valor de x es mayor que 6 \n");

	if (x >= 6){ 
		printf("El valor de x es mayor o igual que 6 \n");
	}
	else printf("El valor de x es menor que 6 \n");

	if (x != 6){ 
		printf("El valor de x es distinto de 6 \n");
	}
	else printf("El valor de x es igual a 6 \n");

	/*Juego de acertijo de número*/

	printf("Acierta el número x!! \nIntroduce un valor: ");
	scanf("%i",&y);

	if (x == y){
		printf("Has acertado!!\n\n");
	}
	else {
		printf("Fallaste, inténtalo de nuevo \n\n");
	}

	return 0;
}