#include <stdio.h>
#include <stdlib.h>

void cargarArray(int *, int);
void imprimirArray(int *, int);

int main()
{
    int vector[3];
    int *puntero;
    puntero = vector;

    cargarArray(vector, 3);
    imprimirArray(vector, 3);

    return 0;
}

void cargarArray(int *puntero, int i)
{
    for(i = 0; i < 3; i++)
    {
        printf("\nNumero: ");
        scanf("%d", puntero + i);
    }
}

void imprimirArray(int *puntero, int i)
{
    for(i = 0; i < 3; i++)
    {
        printf("%d\n", *(puntero + i));
    }
}
