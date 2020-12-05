#include <stdio.h>

int main(){
	int altura, cont, acu, max, min;

	do{
		printf("Introduce altura:\n");
		scanf("%d",&altura);
		cont++;
		acu+=altura;
		if(altura>max){
			max=altura;
		}
		if(altura<min){
			min=altura;
		}

	}while(altura!=0);
	printf("La media es %d\n", acu/(cont-1));
	printf("El mayor es %d\n", max);
	printf("El menor es %d\n",min);
	return 0;
}