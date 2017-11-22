#include <stdio.h>

int main(void)
{
	unsigned number = 0xe1f4;
	int start = 0, demands = 3, result;
	unsigned int bitpat_get(unsigned int number, int start, int demands);
	
	result = bitpat_get(number, start, demands);
	
	if(result == -1)
		printf("False demands, please try another input!\n");
	else
		printf("From the index %i of %#x fetch %i elements is %i.\n", 
	           start, number, demands, result);
	
	return 0;
}

unsigned int bitpat_get(unsigned int number, int start, int demands)
{
	int length, amounts;
	int int_size(unsigned int number);
	
	length = int_size(number);
	amounts = int_size(~0);
	start %= length;
	
	if(start < 0)
		return -1;
	
	if(demands <= 0)
		return -1;
	else if(demands >= (length - start))
		demands = length - start;
	
	number = number << (length + start);
	number = number >> (amounts - demands);
	
	return number;
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