#include "functions.h"

///Умножение матрицы на вектор
void mult_matrix_vec( double** matrix, int matrix_size, double* vec, int vec_size, double* vecMult) {
	for (int i = 0; i < matrix_size; i++)
	{
		double temp = 0;
		for (int j = 0; j < matrix_size; j++)
		{
			temp += matrix[i][j] * vec[j];
		}
		vecMult[i] = temp;
	}
}

///Возведение матрицы в квадрат
void sqr_matrix(double** matrix, int matrix_size, double** matrixSqr){
	
	for (int i = 0; i < matrix_size; i++)
		for (int j = 0; j < matrix_size; j++)
		{
			matrixSqr[i][j] = 0;
			for (int k = 0; k < matrix_size; k++)
			{
				matrixSqr[i][j] += matrix[i][k] * matrix[k][j];
			}
		}
}


