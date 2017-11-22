/*利用5.1、6.1、7.1编写的函数
  编写一个名为replaceString()
  的函数可以将字符串中的一部分
  用另外一部分字符串代替      */
  
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool stillFound = true;
	char testStr[81] = "the wrong son the";
	char testSubStr[] = "the";
	char testReplaceStr[] = "is";
	bool replaceString(char str[], char subStr[], char replaceStr[]);
	
	printf("Before replaced: %s\n", testStr);
	
	do{
		stillFound = replaceString(testStr, testSubStr, testReplaceStr);
	}
	while(stillFound);
	
	printf("After \"%s\" replaced with \"%s\": %s\n", testSubStr, testReplaceStr, testStr);
	
	return 0;
}

bool replaceString(char str[], char subStr[], char replaceStr[])
{
	int replaceIndex, count;
	int stringLength(char string[]);
	int findString(char str1[], char str2[]);
	void removeString(char str[], int start, int count);
	void insertString(char str1[], char str2[], int start);
	
	replaceIndex = findString(str, subStr);
	count = stringLength(subStr);
	
	if(replaceIndex != -1){
		removeString(str, replaceIndex, count);
		insertString(str, replaceStr, replaceIndex);
	}
	else
		return false;
	
	return true;
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

void removeString(char str[], int start, int count)
{
	int i = start, length;
	int stringLength(char string[]);
	
	length = stringLength(str);
	
	if(i + count <= length)
		while(str[i + count] != '\0'){
			str[i] = str[i + count];
			++i;
		}
	
	str[i] = '\0';
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