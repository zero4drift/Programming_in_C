//用while语句代替示例的for语句

#include <stdio.h>

int main(void)
{
	int n, number, counter, triangularNumber;
	
	counter = 1;
	
	while(counter <= 5){
		printf("What triangular number do you want? ");
		scanf("%i", &number);
		
		n = 1, triangularNumber = 0;
		
		while(n <= number){
			triangularNumber += n;
			++n;
		}
		
		printf("Triangular number %i is %i\n\n", 
	       number, triangularNumber);
		++counter;
	}
	
	return 0;
}