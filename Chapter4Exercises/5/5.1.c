//修改程序

#include <stdio.h>

int main(void)
{
	int n, two_to_the_n;
	
	printf("TABLE OF POWERS OF TWO\n\n");
	printf(" n      2 to the n\n");
	printf("---     ----------\n");
	
	two_to_the_n = 1;
	
	for(n = 1; n <= 10; ++n){
		two_to_the_n *= 2;;
		printf("%2i          %i\n", n, two_to_the_n);
	}
	
	return 0;
}