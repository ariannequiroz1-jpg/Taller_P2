#include <stdio.h>
#include "funciones.h"

int main()
{
    int n;

    do
    {
        printf("Numero de estudiantes: ");
        scanf("%d", &n);

    } while(n <= 0 || n > 100);

    float notas[100][MATERIAS];

    ingresarNotas(notas, n);

    mostrarNotas(notas, n);

    estadisticasEstudiantes(notas, n);

    estadisticasMaterias(notas, n);

    return 0;
}