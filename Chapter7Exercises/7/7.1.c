//利用函数计算一个整数的正整数次幂

#include <stdio.h>

long int x_to_the_n(int x, int n)
{
	int i;
	long int result = 1;
	
	if(n == 0)
		return 1;
	
	for(i = 0; i < n; ++i)
		result *= x;
	
	return result;
}

int main(void)
{
	long int x_to_the_n(int x, int n);
	int x1 = 2, n1 = 3;
	
	printf("The result of %i to the %i is: %li\n", 
           x1, n1, x_to_the_n(x1, n1));
	
	return 0;
}