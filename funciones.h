#ifndef FUNCIONES_H
#define FUNCIONES_H

// Constante con el numero de materias
#define MATERIAS 3

// Funcion para ingresar notas
void ingresarNotas(float notas[][MATERIAS], int n);

// Funcion para mostrar notas
void mostrarNotas(float notas[][MATERIAS], int n);

// Funcion para estadisticas por estudiante
void estadisticasEstudiantes(float notas[][MATERIAS], int n);

// Funcion para estadisticas por materia
void estadisticasMaterias(float notas[][MATERIAS], int n);

// Funcion para corregir notas invalidas usando punteros
void corregirNota(float *nota);

#endif