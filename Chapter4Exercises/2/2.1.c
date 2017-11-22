//此程序生成变化范围为1到10的整数的平方值表

#include <stdio.h>

int main(void)
{
	int n, square;
	
	printf("TABLE OF SQUARE NUMBERS\n\n");
	printf(" n     Square from 1 to n\n");
	printf("---     ------------------\n");
	
	for(n = 1; n <= 10; ++n){
		square = n * n;
		printf("%2i             %i\n", n, square);
	}
	
	return 0;
}