/*将整数i舍入为另一个整数j的下一个整倍数
  i + j - i % j                         */

#include <stdio.h>

int main(void)
{
	int i, j;
	
	i = 365, j = 7;
	printf("%i's next multiple of %i is %i\n", 
	       j, i, i + j - i % j);
	
	i = 12258, j = 23;
	printf("%i's next multiple of %i is %i\n", 
	       j, i, i + j - i % j);
	
	i = 996, j = 4;
	printf("%i's next multiple of %i is %i\n", 
	       j, i, i + j - i % j);
	
	return 0;
}
  