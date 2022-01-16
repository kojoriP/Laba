#include "header.h"
using namespace std;

void initialization(double vec[], int vec_size, double** matrix, int matrix_size){
	for(int i = 0; i < matrix_size; i++)
		for(int j = 0; j < matrix_size; j++)
			matrix[i][j] = rand() % 255;
	for(int i = 0; i < vec_size; i++) 
		vec[i] = i + i*rand() % 255;
}
