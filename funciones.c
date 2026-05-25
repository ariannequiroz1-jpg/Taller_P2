#include <stdio.h>
#include "funciones.h"

// Funcion que corrige una nota invalida usando punteros
void corregirNota(float *nota)
{
    // Solicita una nueva nota al usuario
    printf("Ingrese nueva nota (0-10): ");
    scanf("%f", nota);

    // Valida que la nota este en el rango permitido
    while(*nota < 0 || *nota > 10)
    {
        printf("ERROR: nota invalida. Intente nuevamente: ");
        scanf("%f", nota);
    }
}

// Funcion para ingresar las notas de los estudiantes
void ingresarNotas(float notas[][MATERIAS], int n)
{
    // Recorre cada estudiante
    for(int i = 0; i < n; i++)
    {
        printf("\nEstudiante %d\n", i + 1);

        // Recorre las materias
        for(int j = 0; j < MATERIAS; j++)
        {
            do
            {
                // Solicita la nota
                printf("Ingrese nota de la materia %d: ", j + 1);
                scanf("%f", &notas[i][j]);

                // Verifica si la nota es invalida
                if(notas[i][j] < 0 || notas[i][j] > 10)
                {
                    printf("\nERROR: Nota invalida.\n");
                    printf("Debe estar entre 0 y 10.\n");

                    // Uso de punteros para corregir la nota
                    corregirNota(&notas[i][j]);
                }

            } while(notas[i][j] < 0 || notas[i][j] > 10);
        }
    }
}