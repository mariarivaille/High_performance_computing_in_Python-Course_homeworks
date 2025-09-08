#include "main.h"

void do_matrix_operations(int N) {
    
    double** A = create_matrix(N);
    double** B = create_matrix(N);
    double** C = create_matrix(N);

    double* x = create_vector(N);
    double* y = create_vector(N);

    init_matrix(A, N);
    init_matrix(B, N);

    init_vector(x, N);

    matrix_mult(A, B, C, N);
    // print_matrix(C, N);
    printf("Matrices multiplication is done!\n");

    matrix_vector_mult(A, x, y, N);
    // print_vector(y, N);
    printf("Matrix and vector multiplication is done!\n");

    free_matrix(A, N);
    free_matrix(B, N);
    free_matrix(C, N);

    free_vector(x);
    free_vector(y);
}