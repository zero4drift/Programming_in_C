//此程序生成5到50之间步进值为5的数值的三角数表

#include <stdio.h>

int main(void)
{
	int n, triangularNumber;
	
	printf("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf(" n   Sum from 1 to n\n");
	printf("---  ---------------\n");
	
	triangularNumber = 0;
	
	for(n = 5; n <= 50; n += 5){
		triangularNumber = (n * (n + 1)) / 2;
		printf("%2i          %i\n", n, triangularNumber);
	}
	
	return 0;
}