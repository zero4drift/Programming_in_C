//此程序计算一个整数的绝对值

#include <stdio.h>

int main(void)
{
	int number;
	
	printf("Type in your number: ");
	scanf("%i", &number);
	
	if(number < 0)
		number = -number;
	
	printf("The absolute value is %i\n", number);
	
	return 0;
}