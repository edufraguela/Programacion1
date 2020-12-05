#include<stdio.h>
#include<stdlib.h>

int main(){
	float sumatorio, producto, num;
	producto = 1;
	sumatorio =1;
	for (num=1;num<=100;num++){
		producto=producto*num;
		sumatorio=sumatorio+(1/producto);
	}
	printf("El numero e es:%.10f\n",sumatorio);
	system("pause");
	return 0;
}