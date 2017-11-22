//编写函数将三个整数排列为递增顺序

#include <stdio.h>

int main(void)
{
	int a = 8, b = 9, c = 4;
	void sort3(int *intPtr1, int *intPtr2, int *intPtr3);
	
    sort3(&a, &b, &c);
	
	return 0;
}

void sort3(int *intPtr1, int *intPtr2, int *intPtr3)
{
	int n1, n2, n3;
	
	if(*intPtr1 > *intPtr2){
		if(*intPtr2 > *intPtr3)
			printf("In increasing order: %i %i %i\n", *intPtr3, *intPtr2, *intPtr1);
		else{
			if(*intPtr1 > *intPtr3)
				printf("In increasing order: %i %i %i\n", *intPtr2, *intPtr3, *intPtr1);
			else
				printf("In increasing order: %i %i %i\n", *intPtr2, *intPtr1, *intPtr3);
		}
	}
	else if(*intPtr1 < *intPtr2){
		if(*intPtr1 > *intPtr3)
			printf("In increasing order: %i %i %i\n", *intPtr3, *intPtr1, *intPtr2);
		else{
			if(*intPtr2 > *intPtr3)
				printf("In increasing order: %i %i %i\n", *intPtr1, *intPtr3, *intPtr2);
			else
				printf("In increasing order: %i %i %i\n", *intPtr1, *intPtr2, *intPtr3);
		}
	}
	
}