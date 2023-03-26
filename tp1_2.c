#include <stdio.h>

int cuadradoNumero(int num);
void cuadradoVoid(int *num);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main(){

    int numero, cuadrado;
    int *pnum;

    pnum = &numero;

    printf("ingrese un numero: ");
    scanf("%d",&numero);

    cuadrado = cuadradoNumero(numero);

    printf("\ncuadrado del numero: %d", cuadrado);

    cuadradoVoid(pnum);

    int a, b;
    int *punteroa, *punterob;

    punteroa = &a;
    punterob = &b;
    
    printf("\ningrese otro numero: ");
    scanf("%d",&a);
    printf("\ningrese otro numero: ");
    scanf("%d",&b);

    printf("\na = %d, b = %d", a, b);
    
    invertir(punteroa, punterob);
    printf("\ninvertidos: ");
    printf("\na = %d",a);
    printf("\nb = %d", b);

    orden(punteroa, punterob);
    printf("\nvalor mas chico: %d", a);
    printf("\nvalor mas grande: %d", b);

    return 0;
}

int cuadradoNumero(int num)
{
    return num*num;
}

void cuadradoVoid(int *num)
{
    printf("\ncontenido de num: %d", num);
    printf("\ndireccion de memoria de num: %d", &num);
    printf("\ncuadrado del numero: %d", (*num)*(*num));
}

void invertir(int *a, int *b)
{
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b)
{
    int aux;

    if (*a > *b)
    {
        aux = *a;
        *a = *b;
        *b = aux;
    }
}