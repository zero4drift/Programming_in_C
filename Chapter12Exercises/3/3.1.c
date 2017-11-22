//定义一个宏给出两个值中的较小值

#include <stdio.h>
#define MIN(x, y) ((x > y) ? (y) : (x))

int main(void)
{
	int a = 2, b = 3, minimum;
	
	minimum = MIN(a, b);
	
	printf("%i\n", minimum);
	
	return 0;
}