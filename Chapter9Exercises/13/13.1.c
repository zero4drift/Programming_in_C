/*编写函数将一个字符串中
  所有小写字母转换为大写字母*/

#include <stdio.h> 
  
int main(void)
{
	char testStr[] = "Time is over!";
	void uppercase(char str[]);
	
	printf("Before convert: ");
	printf("%s\n", testStr);
	
	uppercase(testStr);
	
	printf("After converted to uppercase: ");
	printf("%s\n", testStr);
	
	return 0;
}

void uppercase(char str[])
{
	int i = 0;
	
	while(str[i] != '\0'){
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		++i;
	}
}