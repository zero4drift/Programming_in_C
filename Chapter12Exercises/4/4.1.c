//定义一个宏给出三个值中的最大值

#include <stdio.h>
#define MAX(x, y, z) ((x >= y) ? ((x >= z) ? (x) : ((y >= z) ? (y) : z)) : \
                      ((x >= z) ? (y) : ((y >= z) ? (y) : (z))))

int main(void)
{
	int a = 2, b = 4, c = 4, maxium;
	
	maxium = MAX(a, b, c);
	
	printf("%i\n", maxium);
	
	return 0;
}