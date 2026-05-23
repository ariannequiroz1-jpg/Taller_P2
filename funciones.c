#include <stdio.h>
#include "funciones.h"

void ingresar(float notas[][MATERIAS], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\n===== ESTUDIANTE %d =====\n", i + 1);

        for(int j = 0; j < MATERIAS; j++)
        {
            do
            {
                printf("Ingrese nota %d: ", j + 1);
                scanf("%f", &notas[i][j]);

                if(notas[i][j] < 0 || notas[i][j] > 10)
                {
                    printf("ERROR -> La nota debe estar entre 0 y 10\n");
                }

            }while(notas[i][j] < 0 || notas[i][j] > 10);
        }
    }
}

void mostrar(float notas[][MATERIAS], int n)
{
    printf("\n========= NOTAS INGRESADAS =========\n");

    for(int i = 0; i < n; i++)
    {
        printf("Estudiante %d -> ", i + 1);

        for(int j = 0; j < MATERIAS; j++)
        {
            printf("%.1f ", notas[i][j]);
        }

        printf("\n");
    }
}

void promedioEstudiantes(float notas[][MATERIAS], int n)
{
    float suma, promedio;

    printf("\n====== PROMEDIO POR ESTUDIANTE ======\n");

    for(int i = 0; i < n; i++)
    {
        suma = 0;

        for(int j = 0; j < MATERIAS; j++)
        {
            suma += notas[i][j];
        }

        promedio = suma / MATERIAS;

        printf("Estudiante %d -> %.2f\n", i + 1, promedio);
    }
}

void promedioMaterias(float notas[][MATERIAS], int n)
{
    float suma, promedio;

    printf("\n====== PROMEDIO POR MATERIA ======\n");

    for(int j = 0; j < MATERIAS; j++)
    {
        suma = 0;

        for(int i = 0; i < n; i++)
        {
            suma += notas[i][j];
        }

        promedio = suma / n;

        printf("Materia %d -> %.2f\n", j + 1, promedio);
    }
}

void extremosEstudiantes(float notas[][MATERIAS], int n)
{
    float mayor, menor;

    printf("\n====== NOTA ALTA Y BAJA POR ESTUDIANTE ======\n");

    for(int i = 0; i < n; i++)
    {
        mayor = notas[i][0];
        menor = notas[i][0];

        for(int j = 1; j < MATERIAS; j++)
        {
            if(notas[i][j] > mayor)
            {
                mayor = notas[i][j];
            }

            if(notas[i][j] < menor)
            {
                menor = notas[i][j];
            }
        }

        printf("Estudiante %d -> Mayor: %.1f | Menor: %.1f\n",
               i + 1, mayor, menor);
    }
}

void extremosMaterias(float notas[][MATERIAS], int n)
{
    float mayor, menor;

    printf("\n====== NOTA ALTA Y BAJA POR MATERIA ======\n");

    for(int j = 0; j < MATERIAS; j++)
    {
        mayor = notas[0][j];
        menor = notas[0][j];

        for(int i = 1; i < n; i++)
        {
            if(notas[i][j] > mayor)
            {
                mayor = notas[i][j];
            }

            if(notas[i][j] < menor)
            {
                menor = notas[i][j];
            }
        }

        printf("Materia %d -> Mayor: %.1f | Menor: %.1f\n",
               j + 1, mayor, menor);
    }
}

void aprobadosReprobados(float notas[][MATERIAS], int n)
{
    int aprobados, reprobados;

    printf("\n====== APROBADOS Y REPROBADOS ======\n");

    for(int j = 0; j < MATERIAS; j++)
    {
        aprobados = 0;
        reprobados = 0;

        for(int i = 0; i < n; i++)
        {
            if(notas[i][j] >= 6)
            {
                aprobados++;
            }
            else
            {
                reprobados++;
            }
        }

        printf("Materia %d -> Aprobados: %d | Reprobados: %d\n",
               j + 1, aprobados, reprobados);
    }
}