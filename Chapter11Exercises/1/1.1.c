//此程序演示按位与运算符i

#include <stdio.h>

int main(void)
{
	unsigned int word1 = 077u, word2 = 0150u, word3 = 0120u;
	
	printf("%o ", word1 & word2);
	printf("%o ", word1 & word1);
	printf("%o ", word1 & word1 & word3);
	printf("%o ", word1 & 1);
	
	return 0;
}