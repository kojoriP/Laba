#include "pch.h"
#include "../Funcs/functions.h"

// matrix + vec2
TEST(TestFunc, Test_mult_matrix_vec) {
	double* vec = new double[2];
	double* func_res = new double[2];
	double* result = new double[2];

	double** matrix = new double* [2];
	for (int i = 0; i < 2; i++) {
		matrix[i] = new double[2];
	}
	vec[0] = 3;
	vec[1] = 4;

	matrix[0][0] = 1;
	matrix[0][1] = 1;
	matrix[1][0] = 1;
	matrix[1][1] = 1;

	result[0] = 7;
	result[1] = 7;

	mult_matrix_vec(matrix, 2, vec, 2, func_res);
	EXPECT_EQ(*result, *func_res);

	for (int i = 0; i < 2; ++i) {
		delete[] matrix[i];
	}
	delete[] matrix;
	delete[] vec;
	delete[] func_res;
	delete[] result;
}

// matrix^2
TEST(TestFunc, Test_sqr_matrix) {
	double** matrix = new double* [2];
	double** result = new double* [2];
	double** func_res = new double* [2];
	for (int i = 0; i < 2; i++) {
		matrix[i] = new double[2];
		result[i] = new double[2];
		func_res[i] = new double[2];
	}
	matrix[0][0] = 1;
	matrix[0][1] = 1;
	matrix[1][0] = 1;
	matrix[1][1] = 1;

	result[0][0] = 2;
	result[0][1] = 2;
	result[1][0] = 2;
	result[1][1] = 2;

	sqr_matrix(matrix, 2, func_res);
	EXPECT_EQ(**result, **func_res);

	for (int i = 0; i < 2; ++i){
		delete[] matrix[i];
		delete[] result[i];
		delete[] func_res[i];
	}
	delete[] matrix;
	delete[] result;
	delete[] func_res;
}
