//测试是否支持变长数组

#include <stdio.h>

int main(void)
{
	int i, j;
	
	printf("How many numbers do you want in array_test? ");
	scanf("%i", &i);
	
	int array_test[i];
	
	for(j = 0; j < i; ++j)
		array_test[j] = 0;
	
	for(j = 0; j < i; ++j)
		printf("%i ", array_test[j]);
	
	printf("\n");
	
	return 0;
}