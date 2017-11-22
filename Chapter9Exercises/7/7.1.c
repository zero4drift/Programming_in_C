//设计一个函数将一个字符串插入另一个字符串中

#include <stdio.h>

int main(void)
{
	int start = 12;
	char testStr1[81] = "The wrong son";
	char testStr2[81] = "persss";
	void insertString(char str1[], char str2[], int start);
	
	printf("Before inserted: %s\n", testStr1);
	
	insertString(testStr1, testStr2, start);
	
	printf("After \"%s\" inserted from index %i: %s\n", testStr2, start, testStr1);
	
	return 0;
}

void insertString(char str1[], char str2[], int start)
{
	int i = start, j = 0, k = 0, count;
	char temp[81];
	int stringLength(char string[]);
	void removeString(char str[], int start, int count);
	
	while(str1[i] != '\0'){             //拆分，留下插入之前的
		temp[i - start] = str1[i];
		++i;
	}
	temp[i - start] = '\0';
	
	count = stringLength(temp);
	
	removeString(str1, start, count);
	
	while(str2[j] != '\0'){              //插入
		str1[j + start] = str2[j];
		++j;
	}
	
	while(temp[k] != '\0'){              //补全上次拆分的部分
		str1[j + start + k] = temp[k];
		++k;
	}
	
	str1[j + start +k] = '\0';
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