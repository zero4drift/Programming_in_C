//此程序判断一个整数值能否被另一个整数值整除

#include <stdio.h>

int main(void)
{
	int value1, value2;
	
	printf("Enter tweo intergers to be tested: ");
	scanf("%i%i", &value1, &value2);
	
	if(value2 == 0)
		printf("Division by zero.\n");
	else if(value1 % value2 == 0)
		printf("%i can be fully divided by %i.\n", value1, value2);
	else
		printf("%i can't be fully divided by %i.\n", value1, value2);
	
	return 0;
}