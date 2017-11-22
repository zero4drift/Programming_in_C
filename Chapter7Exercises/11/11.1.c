 /*设计一个接受两个参数的函数
   传入一个整数数组和该数组中的元素个数
   返回该数组中个元素之和                */
   
#include <stdio.h>

int arraySum(int values[], int numberOfElements)
{
	int i, sum = 0;
	
	for(i = 0; i < numberOfElements; ++i)
		sum += values[i];
	
	return sum;
}

int main(void)
{
	int result;
	int array1[6] = {13, 12, 45, 67, 12, 34};
	int array2[5] = {98, -12, -76, 98, 23};
	int arraySum(int values[], int numberOfElements);
	
	result = arraySum(array1, 6);
	printf("The sum of ememetns of array1[6] is %i\n", result);
	
	result = arraySum(array2, 5);
	printf("The sum of ememetns of array1[5] is %i\n", result);
	
	return 0;
}