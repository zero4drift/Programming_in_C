// 此程序介绍while语句

#include <stdio.h>

int main(void)
{
	int u, v, temp;
	
	printf("Please type in two nonnegative intergers.\n");
	scanf("%i%i", &u, &v);
	
	while(v != 0){
		temp = u % v;
		u = v;
		v = temp;
	}
	
	printf("Their greatest common divisor is %i\n", u);
	
	return 0;
}