//利用函数在参数为质数时返回1，否则返回0

#include <stdio.h>

int prim(int x)
{
	int i;
	
	if(x == 0 || x == 1)
		return 0;
	else if(x == 2)
		return 1;
	
	for(i = 2; i < x; ++i){
		if(x % i == 0)
			return 0;
	}
	
	return 1;
}

int main(void)
{
	int number, result;
	
	printf("Enter a interger: \n");
	scanf("%i", &number);
	
	result = prim(number);
	printf("%i", result);
	
	return 0;
}