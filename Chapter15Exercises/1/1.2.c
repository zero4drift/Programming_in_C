//取得单个数字，并输出几个计算结果

#include <stdio.h>

int main(void)
{
	float d = 6.5;
	float half, square, cube;
	
	half = d / 2;
	square = d * d;
	cube = d * d * d;
	
	printf("\nYour number is %.2f\n", d);
	printf("Half of it is %.2f\n", half);
	printf("Square it to get %.2f\n", square);
	printf("Cube it to get %.2f\n", cube);
	
	return 0;
}