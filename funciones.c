#include <stdio.h>
#include "funciones.h"

void ingresarNotas(float notas[][MATERIAS], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nEstudiante %d\n", i + 1);

        for(int j = 0; j < MATERIAS; j++)
        {
            do
            {
                printf("Nota %d: ", j + 1);
                scanf("%f", &notas[i][j]);

                if(notas[i][j] < 0 || notas[i][j] > 10)
                {
                    printf("\nERROR: Nota invalida.\n");
                    printf("👉 Debe estar entre 0 y 10.\n");
                }

            } while(notas[i][j] < 0 || notas[i][j] > 10);
        }
    }
}

void mostrarNotas(float notas[][MATERIAS], int n)
{
    printf("\n--- NOTAS INGRESADAS ---\n");

    for(int i = 0; i < n; i++)
    {
        printf("Estudiante %d: ", i + 1);

        for(int j = 0; j < MATERIAS; j++)
        {
            printf("%.1f ", notas[i][j]);
        }

        printf("\n");
    }
}

void estadisticasEstudiantes(float notas[][MATERIAS], int n)
{
    float suma, mayor, menor;

    printf("\n--- ESTADISTICAS POR ESTUDIANTE ---\n");

    for(int i = 0; i < n; i++)
    {
        suma = 0;
        mayor = menor = notas[i][0];

        for(int j = 0; j < MATERIAS; j++)
        {
            suma += notas[i][j];

            if(notas[i][j] > mayor)
                mayor = notas[i][j];

            if(notas[i][j] < menor)
                menor = notas[i][j];
        }

        printf("Estudiante %d -> Promedio: %.2f | Mayor: %.1f | Menor: %.1f\n",
               i + 1, suma / MATERIAS, mayor, menor);
    }
}

void estadisticasMaterias(float notas[][MATERIAS], int n)
{
    float suma, mayor, menor;
    int aprobados, reprobados;

    printf("\n--- ESTADISTICAS POR MATERIA ---\n");

    for(int j = 0; j < MATERIAS; j++)
    {
        suma = 0;
        aprobados = 0;
        reprobados = 0;

        mayor = menor = notas[0][j];

        for(int i = 0; i < n; i++)
        {
            suma += notas[i][j];

            if(notas[i][j] > mayor)
                mayor = notas[i][j];

            if(notas[i][j] < menor)
                menor = notas[i][j];

            if(notas[i][j] >= 6)
                aprobados++;
            else
                reprobados++;
        }

        printf("Materia %d -> Promedio: %.2f | Mayor: %.1f | Menor: %.1f | Aprobados: %d | Reprobados: %d\n",
               j + 1, suma / n, mayor, menor, aprobados, reprobados);
    }
}