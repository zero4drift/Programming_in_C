/*此程序生成前15个斐波那契数
  不使用数组（第二版）      */

#include <stdio.h>

int main(void)
{
	int i, Fibonacci0, Fibonacci1, Fibonacci;
	
	Fibonacci0 = 0;
	Fibonacci1 = 1;
	
	printf("%i ", Fibonacci0);
	printf("%i ", Fibonacci1);
	
	for(i = 2; i < 15; ++i){
		Fibonacci = Fibonacci0 + Fibonacci1;
		Fibonacci0 = Fibonacci1;
		Fibonacci1 = Fibonacci;
		printf("%i ", Fibonacci);
	}
	
	printf("\n");
	
	return 0;
}