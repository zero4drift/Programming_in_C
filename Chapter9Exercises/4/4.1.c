//编写一个函数可以提取字符串的一部分

#include <stdio.h>

void substring(char source[], int start, int count, char result[])
{
	int i, length;
	int stringLength(char string[]);
	
	length = stringLength(source);
	
	if(count <= length){
		for(i = start; i < start + count; ++i)
			result[i - start] = source[i];
		result[count] = '\0';
	}
	else{
		for(i = start; i < length; ++i)
			result[i - start] = source[i];
		result[length - start] = '\0';
	}
}

int stringLength(char string[])
{
	int count = 0;
	
	while(string[count] != '\0')
		++count;
	
	return count;
}

int main(void)
{
	char str1[] = "character";
	char str2[81];
	void substring(char source[], int start, int count, char result[]);
	
	substring(str1, 4, 20, str2);
	
	printf("%s", str2);
	
	return 0;
}