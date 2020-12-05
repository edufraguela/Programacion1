#include<stdio.h>
#include <unistd.h> 


int main(){

	for ( int h=0; h<24;h++)
		for (int m=0;m<60;m++)
			for (int s=0;s<60;s++){
				printf("%02d:%02d:%02d\n",h,m,s);
				sleep(1000);
			}
return 0;
}