//此函数计算第n个三角数

#include <stdio.h>

void caculateTriangularNumber(n)
{
	int i, triAngularNumber = 0;
	
	for(i = 1; i <= n; ++i)
		triAngularNumber += i;
	
	printf("Triangular number %i is %i\n", n, triAngularNumber);
}

int main(void)
{
	caculateTriangularNumber(10);
	caculateTriangularNumber(20);
	caculateTriangularNumber(50);
	
	return 0;
}