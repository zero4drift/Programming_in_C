#include <stdio.h>

int main(void)
{
	unsigned int test = 4u;
	int n = 28;
	int bit_test(unsigned int number, int n);
	unsigned int bit_set(unsigned int number, int n);
	
	printf("%i\n", bit_test(test, n));
	
	printf("%u\n", bit_set(test, n));
	
	return 0;
}

int bit_test(unsigned int number, int n)
{
	n %= 32;
	n = 31 - n;
	
	number = number >> n;
	number = number << 31;
	
	if(number)
		return 1;
	else
		return 0;
}

unsigned int bit_set(unsigned int number, int n)
{
	unsigned int add_one = 1;
	int bit_test(unsigned int number, int n);
	
	n %= 32;
	
	if(bit_test(number, n))
		return number;
	
	n = 31 - n;
	
	while(n > 0){
		add_one *= 2;
		--n;
	}
	
	number += add_one;
	
	return number;
}