//测试<ctype.h>系统头文件中的isupper、isalpha与isdigit系统库函数

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int c = '0';
	
	if(isalpha(c))
		printf("%c is an alphabetic character.\n", c);
	if(isupper(c))
		printf("%c is an upper case character.\n", c);
	if(isdigit(c))
		printf("%c is a digit case character.\n", c);
	
	return 0;
}