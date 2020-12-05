#include<stdio.h>

int Dia_semana(){

	char x;

	printf("Introduce la inicial de un dia de la semana:\n");
	scanf("%c",&x);

	if (x=='L'||'l'){
		printf("Lunes.\n");
	}
	if (x=='M'||'m'){
		printf("Martes.\n");
	}
	if (x=='X'||'x'){
		printf("Miercoles.\n");
	}
	if (x=='J'||'j'){
		printf("Jueves.\n");
	}
	if (x=='V'||'v'){
		printf("Viernes.\n");
	}
	if (x=='S'||'s'){
		printf("Sabado.\n");
	}
	if (x=='D'||'d'){
		printf("Domingo.\n");
	}

	return 0;
}

int main(){
	Dia_semana();
	return 0;
}