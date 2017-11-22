//用户键入选择要计算多少个三角数

#include <stdio.h>

int main(void)
{
	int n, number, amount, triangularNumber, counter;
	
	printf("How many triangular number do you want? ");
	scanf("%i", &amount);
	
	for(counter = 1; counter <= amount; ++counter){
		printf("What triangular number do you want? ");
		scanf("%i", &number);
		
		triangularNumber = 0;
		
		for(n = 1; n <= number; ++n)
			triangularNumber += n;
		
		printf("Triangular number %i is %i\n\n", 
	       number, triangularNumber);
	}
	
	return 0;
}