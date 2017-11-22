/*此程序将一个整数数组排列为递增或递减顺序
  设计一个函数可以传入三个参数分别为
  整数数组、数组元素个数和递增递减选择布尔变量
  布尔变量为0表示递减，反之为递增             
  使用全局变量                                */

#include <stdio.h>
#include <stdbool.h>

int gn = 16;
bool gchoice = 1;
int garray[16] = {34, -5, 6, 0, 12, 100, 56, 22,
	              44, -3, -9, 12, 17, 22, 6, 11};

void sort(void)
{
	int i, j, temp;
	
	if(gchoice){
		for(i = 0; i < gn - 1; ++i)
			for(j = i + 1; j < gn; ++j)
				if(garray[i] > garray[j]){
					temp = garray[i];
					garray[i] = garray[j];
					garray[j] = temp;
			    }
	}
	else{
		for(i = 0; i < gn - 1; ++i)
			for(j = i + 1; j < gn; ++j)
				if(garray[i] < garray[j]){
					temp = garray[i];
					garray[i] = garray[j];
					garray[j] = temp;
			    }
	}
}

void displayArray(void)
{
	int i;
	
	for(i = 0; i < gn; ++i)
		printf("%i ", garray[i]);
	printf("\n");
}

int main(void)
{
	int i;
	void sort(void), displayArray(void);
	
	printf("The array before the sort:\n");
	displayArray();	
	
	printf("\nThe array after the sort by choice %i: \n", gchoice);
	sort();
	displayArray();
	
	return 0;
}