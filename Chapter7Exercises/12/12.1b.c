/*利用一个函数
  将拥有i行、j列的矩阵
  转置为拥有j行、i列的矩阵*/
  
#include <stdio.h>

void transposeMatrix(int nRows, int nCols, 
                     int matrix1[nRows][nCols\], int matrix2[nCols][nRows])
{
	int i, j;
	
	for(i = 0; i < nRows; ++i)
		for(j = 0; j < nCols; ++j)
			matrix2[j][i] = matrix1[i][j];
}

void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols])
{
	int i, j;
	
	for(i = 0; i < nRows; ++i){
		for(j = 0; j < nCols; ++j)
			printf("%5i", matrix[i][j]);
		
		printf("\n");
	}
} 

int main(void)
{
	int matrix1[4][5] = 
	{
		{1, 2, 3, 4, 5},
	    {6, 7, 8, 9, 10},
		{10, 11, 12, 13, 14},
		{15, 16, 17, 18, 19}
	};
	int matrix2[5][4] = {};
	int i, j;
	void transposeMatrix(int nRows, int nCols, 
                         int matrix1[nRows][nRows], int matrix2[nCols][nRows]);
	void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);
	
	printf("matrix1[4][5] to be transposed: \n");
	displayMatrix(4, 5, matrix1);
	
	transposeMatrix(4, 5, matrix1, matrix2);
	
	printf("matrix2[5][4] after transpose: \n");
	displayMatrix(5, 4, matrix2);
	
	return 0;
}