//此程序将一个整数数组排列为递增顺序（函数仅使用指针）

#include <stdio.h>

void sort(int *arrayPtr, int n)
{
	int *i, *j;
	int temp;
	int const *arrayEnd = arrayPtr + n;
	
	for(i = arrayPtr; i < arrayEnd - 1; ++i)
		for(j = i + 1; j < arrayEnd; ++j)
			if(*i > *j){
				temp = *i;
				*i = *j;
				*j = temp;
			}
}

int main(void)
{
	int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
	                 44, -3, -9, 12, 17, 22, 6, 11};
	int const *arrayEnd = array + 16;
	int *i, *j;
	void sort(int *a, int n);
	
	printf("The array before the sort:\n");
	
	for(i = array; i < arrayEnd; ++i)
		printf("%i ", *i);
	
	sort(array, 16);
	
	printf("\n\nThe array after the sort:\n");
	
	for(j = array; j < arrayEnd; ++j)
		printf("%i ", *j);
	
	printf("\n");
	
	return 0;
}