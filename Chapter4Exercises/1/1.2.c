/*此程序计算第200个三角数
  介绍for语句            */

#include <stdio.h>

int main(void)
{
	int n, triangularNumber;
	
	triangularNumber = 0;
	
	for(n = 1; n <= 200; n = n + 1)
		triangularNumber = triangularNumber + n;
	
	printf("The 200th triangular number is %i\n", 
	        triangularNumber);
			
	return 0;
}