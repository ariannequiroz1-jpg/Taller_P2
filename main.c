#include <stdio.h>
#include "funciones.h"

int main()
{
    int n;

    do
    {
        printf("Ingrese numero de estudiantes (1-100): ");
        scanf("%d", &n);

        if(n <= 0 || n > 100)
        {
            printf("ERROR -> Numero invalido\n");
        }

    }while(n <= 0 || n > 100);

    float notas[100][MATERIAS];

    ingresar(notas, n);

    mostrar(notas, n);

    return 0;
}