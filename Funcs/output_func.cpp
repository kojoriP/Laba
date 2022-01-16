#include "functions.h"


void output_vec(double* vec, int vec_size) {
	for (int i = 0; i < vec_size; i++) {
		if (i % 10 == 0) printf("\n");
		printf("%g  ", vec[i]);
	}
	printf("\n");
}

void output_matrix(double** matrix, int matrix_size) {
	for (int i = 0; i < matrix_size; i++) {
		for (int j = 0; j < matrix_size; j++) {
			printf(" %g ", matrix[i][j]);
		}
		printf("\n");
	}
}
