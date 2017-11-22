/* 编写一个宏，当一个字符为大写字母时，给出一个非零值 */

#include <stdio.h>
#define IS_UPPER_CASE(x) (((x) >= 'A') && ((x) <= 'Z'))

int main(void)
{
	char c = 'Z';
	
	if(IS_UPPER_CASE(c))
		printf("%c is an upper case character.\n", c);
	else
		printf("%c is not an upper case character.\n", c);
	
	return 0;
}