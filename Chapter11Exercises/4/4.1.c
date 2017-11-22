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
	unsigned result, bits, amounts;
	int int_size(unsigned int number);
	
	amounts = int_size(~0u);
	
	//将位移量缩小到指定范围
	
	if(n > 0)
	    n = n % amounts;
	else
	    n = -(-n % amounts);
	
	if(n == 0)
		result = value;
	else if(n > 0){      //左循环位移
		bits = value >> (amounts - n);
		result = value << n | bits;
	}
	else{                //右循环位移
	    n = -n;
		bits = value << (amounts - n);
		result = value >> n | bits;
	}
	
	return result;
}

//此函数返回该计算机上一个int类型包含的位数

int int_size(unsigned int number)
{
	int count = 0;
	
	while(number != 0){
		number /= 2;
		++count;
	}
	
	return count;
}