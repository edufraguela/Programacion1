#include <stdio.h>
#define N_MAX 5
#define A_MAX 10
#define FORMATOAPEL "%10[^\n]"
#define FORMATONOM "%5[\n]"

int main() {
    char nombre[N_MAX+1], apellidos[A_MAX+1], letra;
    printf("APELLIDOS:");
    scanf(FORMATOAPEL, apellidos);
    while(getchar() != "\n");

    printf("NOMBRE:");
    scanf(FORMATONOM, nombre);
    while(getchar() != "\n");

    printf("LETRA NIF:");
    scanf("%c",&letra);

    printf("APE: %s, NOM: %s, LETR: %c", apellidos, nombre, letra);

    return 0;
}