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
    printf("\n========== NOTAS INGRESADAS ==========\n");
 
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