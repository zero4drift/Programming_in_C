// 此程序介绍while语句

#include <stdio.h>

int main(void)
{
	int number, right_dict;
	
	printf("Enter your number.\n");
	scanf("%i", &number);
	
	do{
		right_dict = number % 10;
		printf("%i", right_dict);
		number = number / 10;
	}
	while(number != 0);
	
	printf("\n");
	
	return 0;
}