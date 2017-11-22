//此程序生成整数1到10的阶乘表

#include <stdio.h>

int main(void)
{
	int n, factorialNumber;
	
	printf("TABLE OF FACTORIAL NUMBERS\n\n");
	printf(" n   Factorial from 1 to n\n");
	printf("---  ---------------------\n");
	
	factorialNumber = 1;
	
	for(n = 1; n <= 10; ++n){
		factorialNumber *= n;
		printf("%2i          %i\n", n, factorialNumber);
	}
	
	return 0;
}