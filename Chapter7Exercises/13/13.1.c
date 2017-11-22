/*此程序将一个整数数组排列为递增或递减顺序
  设计一个函数可以传入三个参数分别为
  整数数组、数组元素个数和递增递减选择布尔变量
  布尔变量为0表示递减，反之为递增             */

#include <stdio.h>
#include <stdbool.h>

void sort(int a[], int n, bool choice)
{
	int i, j, temp;
	
	if(choice){
		for(i = 0; i < n - 1; ++i)
			for(j = i + 1; j < n; ++j)
				if(a[i] > a[j]){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
			    }
	}
	else{
		for(i = 0; i < n - 1; ++i)
			for(j = i + 1; j < n; ++j)
				if(a[i] < a[j]){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
			    }
	}
}

int main(void)
{
	int i;
	int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
	                 44, -3, -9, 12, 17, 22, 6, 11};
	void sort(int a[], int n, bool choice);
	
	printf("The array before the sort:\n");
	
	for(i = 0; i < 16; ++i)
		printf("%i ", array[i]);
	
	sort(array, 16, 0);
	
	printf("\n\nThe array after the sort by decreasing:\n");
	
	for(i = 0; i < 16; ++i)
		printf("%i ", array[i]);
	
	sort(array, 16, 1);
	
	printf("\n\nThe array after the sort by increasing:\n");
	
	for(i = 0; i < 16; ++i)
		printf("%i ", array[i]);
	
	printf("\n");
	
	
	return 0;
}