//此函数演示整数的循环位移

#include <stdio.h>

int main(void)
{
	unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
	unsigned int rotate(unsigned int value, int n);
	
	printf("%x\n", rotate(w1, 8));
	printf("%x\n", rotate(w1, -16));
	printf("%x\n", rotate(w2, 4));
	printf("%x\n", rotate(w2, -2));
	printf("%x\n", rotate(w1, 0));
	printf("%x\n", rotate(w1,44));
	
	return 0;
}

unsigned int rotate(unsigned int value, int n)
{
	unsigned result, bits;
	
	//将位移量缩小到指定范围
	
	if(n > 0)
	    n = n % 32;
	else
	    n = -(-n % 32);
	
	if(n == 0)
		result = value;
	else if(n > 0){      //左循环位移
		bits = value >> (32 - n);
		result = value << n | bits;
	}
	else{                //右循环位移
	    n = -n;
		bits = value << (32 - n);
		result = value >> n | bits;
	}
	
	return result;
}