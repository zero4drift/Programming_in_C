//计算一个整数的各位数之和

#include <stdio.h>

int main(void)
{
	int number, sum;
	
	printf("Please enter a number: ");
	scanf("%i", &number);
	printf("The sum of all digits of %i is: ", number);
	
	sum = 0;
	
	do{
		sum += (number % 10);
		number /= 10;
	}
	while(number != 0);
	
	printf("%i\n", sum);
	
	return 0;
}