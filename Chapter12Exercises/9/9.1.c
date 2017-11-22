//编写一个宏计算其参数的绝对值

#include <stdio.h>
#define ABSOLUTE_VALUE(x) (((x) >= 0) ? (x) : (-x))

int main(void)
{
	int value = -87, delta = 98, absoluteValue;
	
	absoluteValue = ABSOLUTE_VALUE(value + delta);
	
	printf("The absolute value of %i is %i.\n", value + delta, absoluteValue);
	
	return 0;
}