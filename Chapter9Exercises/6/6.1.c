//编写函数以从字符串中删除指定数目的字符

#include <stdio.h>

int main(void)
{
	int start = 4, count = 1;
	char testStr[] = "1234.1234";
	void removeString(char str[], int start, int count);
	
	printf("Before removed: %s\n", testStr);
	
	//testStr必须是声明为字符串类型的变量
	//因为该函数对testStr进行修改
	//如果直接使用字符串传入
	//程序会崩溃
	
	removeString(testStr, start, count); 
	
	printf("After %i elements removed from index %i: %s\n", count, start, testStr);
	
	return 0;
}

void removeString(char str[], int start, int count)
{
	int i = start, length;
	int stringLength(char string[]);
	
	length = stringLength(str);
	
	if(start + count <= length)
		while(str[i + count] != '\0'){
			str[i] = str[i + count];
			++i;
		}
		
	str[i] = '\0';
}

int stringLength(char string[])
{
	int count = 0;
	
	while(string[count] != '\0')
		++count;
	
	return count;
}