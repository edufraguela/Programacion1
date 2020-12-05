#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void generarSemilla();

int main(){

	generarSemilla();
	printf("\nNumeros pSSSaleatorios entre 0 y 9:\n");
	for (int j = 0; j < 5; ++j){
		for (int i = 0; i < 10; i++)
			printf("%d",rand() % 10);
		puts("");
	}
	return 0;
}

void generarSemilla(){
	int stime;
	long ltime;

	ltime = (long) time(NULL);
	stime = (unsigned) ltime / 2;
	srand(stime);
}
