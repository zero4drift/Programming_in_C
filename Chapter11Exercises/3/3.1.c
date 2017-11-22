//返回该计算机上一个int类型包含的位数

#include <stdio.h>

int main(void)
{
	unsigned int testNumber;
	int int_size(unsigned int number);
	
	testNumber = 0u;
	
	printf("%i\n", int_size(~testNumber));
	
	return 0;	
}

int int_size(unsigned int number)
{
	int count = 0;
	
	while(number != 0){
		number /= 2;
		++count;
	}
	
	return count;
}