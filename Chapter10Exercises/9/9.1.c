//重写第9章的readline函数（使用字符指针）

#include <stdio.h>

int main(void)
{
	char *buffer;
	void readLine(char *buffer);
	
	readLine(buffer);
	
	printf("%s", buffer);
	
	return 0;
}

void readLine(char *buffer)
{
	char character;
	
	do
	{
		character = getchar();
		*buffer = character;
		++buffer;
	}
	while(character != '\n');
	
	*buffer = '\0';
}