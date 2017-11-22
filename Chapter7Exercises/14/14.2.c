 /*设计一个接受两个参数的函数
   传入一个整数数组和该数组中的元素个数
   返回该数组中个元素之和                */
   
#include <stdio.h>

int gsum = 0, gnumberOfElements = 6;
int garray1[6] = {13, 12, 45, 67, 12, 34};

void arraySum(void)
{
	int i;
	
	for(i = 0; i < gnumberOfElements; ++i)
		gsum += garray1[i];
}

int main(void)
{
	void arraySum(void);
	
	arraySum();
	
	printf("The sum of ememetns of array1[6] is %i\n", gsum);
	
	return 0;
}