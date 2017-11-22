/* 编写一个宏，在一个字符为字母字符时，给出一个非零值 */

#include <stdio.h>
#define IS_LOWER_CASE(x) (((x) >= 'a') && ((x) <= 'z'))
#define IS_UPPER_CASE(x) (((x) >= 'A') && ((x) <= 'Z'))
#define IS_ALPHABETIC(x) (IS_LOWER_CASE(x) || IS_UPPER_CASE(x))

int main(void)
{
	char c = 'Z';
	
	if(IS_ALPHABETIC(c))
		printf("%c is an alphabetic character.\n", c);
	else
		printf("%c is not an alphabetic character.\n", c);
	
	return 0;
}