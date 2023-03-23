#include <stdio.h>

int main(){

    printf("Hola mundo!");

    int *puntero;
    int x = 13;

    puntero = &x;

    printf("\ncontenido del puntero: %d", puntero);
    printf("\ndireccion de memoria almacenada por el puntero: %d", puntero);
    printf("\ndireccion de memoria de la variable: %d", &x);
    printf("\ndireccion de memoria del puntero: %d", &puntero);
    printf("\ntamaño de memoria utilizado por la variable: %d", sizeof(x));




    return 0;
}