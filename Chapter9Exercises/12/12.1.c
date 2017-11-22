//编写一个函数使一个字符串转换为浮点数（包括负数）

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	float result;
	char str[] = "987.255*12.3";
	float strToFloat(char string[]);
	
	printf("Before string transformed to int: \"%s\".\n", str);
	
	result = strToFloat(str);
	
	printf("After string transformed to int: %g\n", result);
	
	return 0;
}

float strToFloat(char string[])
{
	int i, j = 0, index, temp, length;
	float result, division = 1.0;
	int stringLength(char string[]);
	int findString(char str1[], char str2[]);
	void removeString(char str[], int start, int count);
	
	index = findString(string, ".");
	
	while(string[j] != '\0'){
		if(!((string[j] >= '0' && string[j] <= '9') || string[j] == '-'
		    || string[j] == '.' || string[j] == ',')){
			
			length = j;
			break;
		}
		++j;
	}
	
	removeString(string, index, 1);
	
	for(i = 0; i < (length - index - 1) && 
	    (string[i] >= '1' && string[i] <= '9'); ++i)
		division *= 10;
	
	temp = strToInt(string);
	
	return temp / division;
}

int strToInt(char string[])
{
	int i, intValue, result = 0;
	
	if(string[0] == '-'){
		for(i = 1; string[i] >= '0' && string[i] <= '9'; ++i){
			intValue = string[i] - '0';
			result = result * 10 + intValue;
		}
		return -result;
	}
	else{
		for(i = 0; string[i] >= '0' && string[i] <= '9'; ++i){
			intValue = string[i] - '0';
			result = result * 10 + intValue;
		}
		return result;
	}	
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