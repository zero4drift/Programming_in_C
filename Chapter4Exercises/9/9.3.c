//用while语句代替示例的for语句

#include <stdio.h>

int main(void)
{
	int n = 1, number, triangularNumber = 0;
	
	printf("What triangular number do you want? ");
	scanf("%i", &number);
	
	while(n <= number){
		triangularNumber += n;
		++n;
	}
	
	printf("Triangular number %i is %i\n", 
	       number, triangularNumber);
	
	return 0;
}