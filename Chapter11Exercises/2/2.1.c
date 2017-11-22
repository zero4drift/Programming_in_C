//判断该计算机是执行逻辑右移还是算术右移

#include <stdio.h>

int main(void)
{
	int word = 036735767042;
	printf("%o\n", word >> 1);
	
	return 0;
}