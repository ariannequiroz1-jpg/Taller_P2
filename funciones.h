#ifndef FUNCIONES_H
#define FUNCIONES_H

#define MATERIAS 3

void ingresar(float notas[][MATERIAS], int n);

void mostrar(float notas[][MATERIAS], int n);

void promedioEstudiantes(float notas[][MATERIAS], int n);

void promedioMaterias(float notas[][MATERIAS], int n);

void extremosEstudiantes(float notas[][MATERIAS], int n);

void extremosMaterias(float notas[][MATERIAS], int n);

void aprobadosReprobados(float notas[][MATERIAS], int n);

#endif