//此函数计算第n个三角数（第二版）

#include <stdio.h>

int caculateTriangularNumber(int n)
{
	int i, triAngularNumber = 0;
	
	for(i = 1; i <= n; ++i)
		triAngularNumber += i;
	
	return triAngularNumber;
}

int main(void)
{
	int result, x1 = 10, x2 = 20, x3 = 50;
	int caculateTriangularNumber(int n);
	
	result = caculateTriangularNumber(x1);
	printf("Triangular number %i is %i\n", x1, result);
	
	result = caculateTriangularNumber(x2);
	printf("Triangular number %i is %i\n", x2, result);
	
	result = caculateTriangularNumber(x3);
	printf("Triangular number %i is %i\n", x3, result);
	
	return 0;
}