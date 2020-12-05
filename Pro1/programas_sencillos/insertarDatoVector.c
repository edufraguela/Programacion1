#include<stdio.h>
#define N 7

typedef int tVector[N];
typedef enum {LUN,MAR,MIE,JUE,VIE,SAB,DOM}tDia;
const char TEXTOdias[][10]={"lunes","martes","miercoles","jueves",
"viernes","sabado","domingo"};


void insertarDato_v(int V[]){
	int d;
	for(d = 0; d < N; d++){
		printf("V[%s]=",TEXTOdias[d]);
		scanf("%d",&V[d]);
	}
}

void mostrarDatos(const int V[]){
	int d;
	for(d = 0; d < N; d++){
		if(d == 0) printf("v=[%d]",V[d]);
		else printf("%d",V[d]);
	}
	puts("[]");
}
