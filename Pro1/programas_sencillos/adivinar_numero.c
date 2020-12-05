#include<stdio.h>


int main(){

    int pariedad, resto;

    printf("Piensa en un número del 1 al 10\n");
    printf("Si es impar(1), si es par (2)\n");
    scanf("%d",&pariedad);
    printf("Diga el resto de dividir su numero entre 5\n");
    scanf("%d",&resto);
    printf("El numero en el que está pensando es:\n");
    switch(resto){
        case 0: if (pariedad==1)
            printf("5");
            else printf("10");
            break;

        case 1: if (pariedad==1)
            printf("1");
            else printf("6");
            break;

        case 2: if (pariedad==1)
            printf("7");
            else printf("2");
            break;

        case 3: if (pariedad==1)
            printf ("3");
            else printf("8");
            break;

        case 4: if (pariedad==1)
            printf("9");
            else printf("4");
            break;

        default: printf("\n Error el resto debe estar entre 0 y 4\n");
        break;
    }


    return 0;
}
