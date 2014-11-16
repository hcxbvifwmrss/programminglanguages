#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int** init(int, int);
void show(int**, int, int);
void revertCols(int**, int, int);
void revertRows(int**, int, int);
void swap(int*, int*);

void main(){
	int** matrix;
	int rows = 6, cols = 6;

	matrix = init(rows, cols);
	printf("\nOriginal Matrix:\n");
	show(matrix, rows, cols);

	revertCols(matrix, rows, cols);
	printf("\n1)Matrix with reverted columns:\n");
	show(matrix, rows, cols);

	revertRows(matrix, rows, cols);
	printf("\n1)Matrix with reverted rows:\n");
	show(matrix, rows, cols);

	_getch();
}

int** init(int rows, int cols){
	int i, j;
	int** matrix = (int**)malloc(rows*sizeof(int*));

	for (i = 0; i < rows; i++){
		matrix[i] = (int*)malloc(cols*sizeof(int*));
	}

	for (i = 0; i < rows; i++){
		for (j = 0; j < cols; j++){
			printf("matrix[%d][%d] = ", i, j);
			scanf_s("%d", &matrix[i][j]);
		}
	}

	return matrix;
}

void show(int** matrix, int rows, int cols){
	int i, j;
	for (i = 0; i < rows; i++){
		for (j = 0; j < cols; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

void revertCols(int** matrix, int rows, int cols){
	int i, j;

	for (i = 0; i < rows; i++){
		for (j = 0; j < cols / 2; j++){
			int temp = matrix[i][j];
			matrix[i][j] = matrix[i][cols - j - 1];
			matrix[i][cols - j - 1] = temp;
		}
	}
}

void revertRows(int** matrix, int rows, int cols){
	int i, j;

	for (i = 0; i < rows / 2; i++){
		for (j = 0; j < cols; j++){
			int temp = matrix[i][j];
			matrix[i][j] = matrix[rows - i - 1][j];
			matrix[rows - i - 1][j] = temp;
		}
	}
}