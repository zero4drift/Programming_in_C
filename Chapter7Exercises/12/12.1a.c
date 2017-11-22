/*利用一个函数
  将拥有i行、j列的矩阵
  转置为拥有j行、i列的矩阵*/
  
#include <stdio.h>

void transposeMatrix(int matrix1[4][5], int matrix2[5][4])
{
	int i, j;
	
	for(i = 0; i < 4; ++i)
		for(j = 0; j < 5; ++j)
			matrix2[j][i] = matrix1[i][j];
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
	void transposeMatrix(int matrix1[4][5], int matrix[5][4]);
	
	printf("matrix1[4][5] to be transposed: \n");
	for(i = 0; i < 4; ++i){
		for(j = 0; j < 5; ++j)
			printf("%5i", matrix1[i][j]);
		
		printf("\n");
	}
	
	transposeMatrix(matrix1, matrix2);
	
	printf("matrix2[5][4] after transpose: \n");
	for(i = 0; i < 5; ++i){
		for(j = 0; j < 4; ++j)
			printf("%5i", matrix2[i][j]);
		
		printf("\n");
	}
	
	return 0;
}