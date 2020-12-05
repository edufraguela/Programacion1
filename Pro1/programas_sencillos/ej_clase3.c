/*programa que pida al usuario un numero mayor que uno y decirle si es primo o si no es primo, funcion que reciba el numero y devuelva si es cierto o es falso , si el numeor recibido es falso. */

#include <stdio.h>
#include <stdbool.h>

int main(){
 int a=0,i,n;
         printf("Ingrese numero\n");
         scanf("%d",&n);
         for(i=1;i<(n+1);i++){
         if(n%i==0){
             a++;
            }
         }
         if(a!=2){
            printf("No es Primo\n");
            }else{
             printf("Si es Primo\n");
         }
return 0;
}

int EsPrimo{
	if 
}