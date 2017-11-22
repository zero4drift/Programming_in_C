/* 编写一个宏，当一个字符是特殊字符时，给出一个非零值 */

#include <stdio.h>
#define IS_DIGIT(x) ((x) >= '0' && (x) <= '9')
#define IS_LOWER_CASE(x) (((x) >= 'a') && ((x) <= 'z'))
#define IS_UPPER_CASE(x) (((x) >= 'A') && ((x) <= 'Z'))
#define IS_ALPHABETIC(x) (IS_LOWER_CASE(x) || IS_UPPER_CASE(x))
#define IS_SPECIAL(x) (!(IS_DIGIT(x) || IS_ALPHABETIC(x)))

int main(void)
{
	char c = '+';
	
	if(IS_SPECIAL(c))
		printf("%c is a special character.\n", c);
	else
		printf("%c is not a special character.\n", c);
	
	return 0;
}

