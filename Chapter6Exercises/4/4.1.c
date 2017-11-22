//计算一个数组中10个浮点数的平均值

#include <stdio.h>

int main(void)
{
	int i;
	float sum, average, array_numbers[10];
	
	sum = 0.0;
	
	printf("Enter float numbers:\n");
	
	for(i = 0; i < 10; ++i)
		scanf("%f", &array_numbers[i]);
	
	for(i = 0; i < 10; ++i)
		sum += array_numbers[i];
	
	average = sum / 10;
	
	printf("Average of array_numbers[10]'s 10 float numbers is %f", average);
}