/* 编写一个宏，当一个字符是数字时，给出一个非零值 */

#include <stdio.h>
#define IS_DIGIT(x) ((x) >= '0' && (x) <= '9')

int main(void)
{
	char c = '0';
	
	if(IS_DIGIT(c))
		printf("%c is a digit character.\n", c);
	else
		printf("%c is not a digit character.\n", c);
	
	return 0;
}