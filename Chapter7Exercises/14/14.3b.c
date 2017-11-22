/*设计一个函数使用全局变量
  将拥有i行、j列的矩阵
  转置为拥有j行、i列的矩阵*/
  
#include <stdio.h>

int nRows = 4, nCols = 5;
int matrix1[4][5] = 
{
	{1, 2, 3, 4, 5},
	{6, 7, 8, 9, 10},
    {10, 11, 12, 13, 14},
    {15, 16, 17, 18, 19}
};
int matrix2[5][4] = {};

void transposeMatrix(void)
{
	int i, j;
	
	for(i = 0; i < nRows; ++i)
		for(j = 0; j < nCols; ++j)
			matrix2[j][i] = matrix1[i][j];
}

void displayMatrix(void)
{
	int i, j;
	
	printf("matrix1[4][5] to be transposed: \n");
	for(i = 0; i < nRows; ++i){
		for(j = 0; j < nCols; ++j)
			printf("%5i", matrix1[i][j]);
		
		printf("\n");
	}
	
	printf("matrix2[5][4] after transpose: \n");
	for(i = 0; i < nCols; ++i){
		for(j = 0; j < nRows; ++j)
			printf("%5i", matrix2[i][j]);
		
		printf("\n");
	}
} 

int main(void)
{
	void transposeMatrix(void), displayMatrix(void);
	
	transposeMatrix();
	displayMatrix();
	
	return 0;
}