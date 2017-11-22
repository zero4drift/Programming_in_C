/*此程序计算第一个整数除以另一个整数的结果
  精确到三位小数                              */

#include <stdio.h>

int main(void)
{
	int value1, value2;
	float result;
	
	printf("Enter tweo intergers: ");
	scanf("%i%i", &value1, &value2);
	
	result = (float)value1 / value2;
	
	if(value2 == 0)
		printf("Division by zero.\n");
	else
		printf("The result of %i divides %i is %.3f.\n", value1, value2, result);
	
	return 0;
}