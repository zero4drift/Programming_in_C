#include <stdio.h>

int main(void)
{
	int bitpat_search(unsigned int source, unsigned int pattern, int n);
	unsigned int test = 0xe1f4, target = 0x5;
	int n, index;
	
	n = 3;
	
	index = bitpat_search(test, target, n);
	
	if(index == -1)
		printf("Not found!");
	else
		printf("From the index %i of %#x matched with target %#x.\n", 
	       index, test, target);
	
	return 0;
}

int bitpat_search(unsigned int source, unsigned int pattern, int n)
{
	int int_size(unsigned int number);
	unsigned int temp;
	int i, amounts, length;
	
	amounts = int_size(~0u);
	length = int_size(source);
	n %= amounts;
	i = length - n;
	
	const int j = amounts - n;
	
	pattern = pattern << j;         //将需要被检测的位数全部置于最左端，之后的数字为零
	
	while(i > 0){                   //将原参数中的位数分为一截一截，每截有n个位数
		temp = source;
		temp = temp >> i;           //每次截取的位数段置于最左边，余下位数为零
		temp = temp << j;
		
		if(!(temp ^ pattern))        //将截取的位数段与被检测的位数段做比较
			return (length - n - i); //如果两则相等，返回其在原整数中的位号，最左序号为零
		
		--i;
	}
	
	return -1;
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