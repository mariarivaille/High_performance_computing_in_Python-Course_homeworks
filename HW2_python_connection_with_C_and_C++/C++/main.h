#ifndef MATRIX_H
#define MATRIX_H

#include <stdlib.h>
#include <stdio.h>

double** create_matrix(int n);
void free_matrix(double** matrix, int n);
void init_matrix(double** matrix, int n);
void print_matrix(double** matrix, int n);

double* create_vector(int n);
void free_vector(double* vector);
void init_vector(double* vector, int n);
void print_vector(double* vector, int n);

void matrix_mult(double** A, double** B, double** C, int n);
void matrix_vector_mult(double** A, double* x, double* y, int n);

#endif