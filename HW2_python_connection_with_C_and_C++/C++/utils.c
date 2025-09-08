#include "main.h"

double** create_matrix(int n) {
    double** matrix = (double**)malloc(n * sizeof(double*));
    for (int i = 0; i < n; i++) {
        matrix[i] = (double*)malloc(n * sizeof(double));
    }
    return matrix;
}

void free_matrix(double** matrix, int n) {
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

void init_matrix(double** matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = (double)rand() / RAND_MAX * 10.0;
        }
    }
}

void print_matrix(double** matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%6.2f ", matrix[i][j]);
        }
        printf("\n");
    }
}

double* create_vector(int n) {
    double* vector = (double*)malloc(n * sizeof(double));
    return vector;
}

void free_vector(double* vector) {
    free(vector);
}

void init_vector(double* vector, int n) {
    for (int i = 0; i < n; i++) {
      vector[i] = (double)rand() / RAND_MAX * 10.0;
    }
}

void print_vector(double* vector, int n) {
    for (int i = 0; i < n; i++) {
        printf("%6.2f ", vector[i]);
    }
    printf("\n");
}