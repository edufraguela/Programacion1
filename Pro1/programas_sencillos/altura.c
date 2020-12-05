#include <stdio.h>


int main() {
    float peso, media, suma=0, max, min;
    int cont=0;

    printf("Introduce el peso:\n");
    scanf("%f",&peso);
    max = peso;
    min = peso;
    while(peso > 0){
        suma += peso;
        cont++;
        if(peso>max){
            max=peso;
        }
        if(peso<min){
            min=peso;
        }
        scanf("%f",&peso);
    }
    if (cont > 0){
    media = suma/cont;
    printf("media: %.2f \n",media);
    printf("peso maximo: %.2f \n", max);
    printf("peso minimo: %.2f \n", min);
    }
    return 0;
}
