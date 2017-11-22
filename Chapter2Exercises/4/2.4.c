/*此程序将两个整数值相减
  并显示结果            */

#include <stdio.h>

int main(void)
{
	int value1, value2, sub;
	
	value1 = 87;
	value2 = 15;
	sub = value1 - value2;
	printf("The substraction of %i and %i is %i\n", value1, value2, sub);
	
	return 0;
}