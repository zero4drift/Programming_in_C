//科学计数法多项式求职

#include <stdio.h>

int main(void)
{
	float a = 3.31e-8, b = 2.01e-7, c = 7.16e-6, d = 2.01e-8, result;
	
	result = (a * b) / (c + d);
	printf("(%g * %g) / (%g + %g) = %g\n", a, b, c, d, result);
	
	return 0;
}