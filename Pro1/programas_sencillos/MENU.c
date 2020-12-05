#include<stdio.h>
#include<stdbool.h>

char opcion();
void mostrarMenu();
void abreviarMenu();
void gestionar();

int main (){
	gestionar();
	return 0;
}

void gestionar(){
	bool seguir = true;
		mostrarMenu();
	do{
		abreviarMenu();
		switch(opcion()){
			case '1': printf("Hacer 1\n");
				break;
			case '2': printf("Hacer 2\n");
				break;
			case 't': seguir = false;
				break;
			default: printf("NO VALIDA");
		}
	}while(seguir);

}

char opcion(){
	char op;
	do{
		printf("Opcion:\n");
		scanf(" %c",&op);

	}while(op != ('1'||'2'||'t'));
	return op;
}

void mostrarMenu(){

}
void abreviarMenu(){
	
}