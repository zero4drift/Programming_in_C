//设计函数一判断一个字符串是否存在于另一个字符串中

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int index;
	int findString(char str1[], char str2[]);
	char test1[] = "1234.5678", test2[] = ".";
	
	index = findString(test1, test2);
	
	printf("%i", index);
	
	return 0;
}

int findString(char str1[], char str2[])
{
	int i, length1, length2;
	int stringLength(char string[]);
	char subStr1[81];
	bool equalStrings(char s1[], char s2[]);
	void substring(char source[], int start, int count, char result[]);
	
	length1 = stringLength(str1);
	length2 = stringLength(str2);
	
	for(i = 0; str1[i] != '\0'; ++i){
		if(str2[0] == str1[i]){
			if(i + length2 > length1)
				return -1;
			else{
				substring(str1, i, length2, subStr1);
				if(equalStrings(subStr1, str2))
					return i;
			}
		}
	}	
	
	return -1;
}

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

bool equalStrings(char s1[], char s2[])
{
	int i = 0;
	bool areEqual;
	
	while(s1[i] == s2[i] &&
	      s1[i] != '\0' && s2[i] != '\0')
		++i;
	
	if(s1[i] == '\0' && s2[i] == '\0')
		areEqual = true;
	else
		areEqual = false;
	
	return areEqual;
}