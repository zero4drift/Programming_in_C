//利用函数与全局变量在参数为质数时返回1，否则返回0

#include <stdio.h>

int gx = 5;

int prim(void)
{
	int i;
	
	if(gx == 0 || gx == 1)
		return 0;
	else if(gx == 2)
		return 1;
	
	for(i = 2; i < gx; ++i){
		if(gx % i == 0)
			return 0;
	}
	
	return 1;
}

int main(void)
{
	printf("%i\n", prim());
	
	return 0;
}