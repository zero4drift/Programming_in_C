/*利用一个函数以及全局变量
  将拥有i行、j列的矩阵
  转置为拥有j行、i列的矩阵*/
  
#include <stdio.h>

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
	
	for(i = 0; i < 4; ++i)
		for(j = 0; j < 5; ++j)
			matrix2[j][i] = matrix1[i][j];
}

void displayMatrix(void)
{
	int i, j;
	
	printf("matrix1[4][5] to be transposed: \n");
	for(i = 0; i < 4; ++i){
		for(j = 0; j < 5; ++j)
			printf("%5i", matrix1[i][j]);
		
		printf("\n");
	}
	
	printf("matrix2[5][4] after transpose: \n");
	for(i = 0; i < 5; ++i){
		for(j = 0; j < 4; ++j)
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