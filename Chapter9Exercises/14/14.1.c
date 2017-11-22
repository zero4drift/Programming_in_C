//编写一个函数将整数值转换为字符串（包括负数）

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int intValue = 123456789;
	char result[81];
	void intToStr(int intValue, char result[]);
	
	intToStr(intValue, result);
	
	printf("%s\n", result);
}

void intToStr(int intValue, char result[])
{
	int i = 0, j = 0;
	char temp[81];
	bool isNegative = false;
	
	if(intValue < 0){
		intValue = -intValue;
		isNegative = true;
	}
	
	while(intValue % 10 != 0){
		temp[i] = ((intValue % 10 == 0)? '0': (intValue % 10 == 1)? '1': (intValue % 10 == 2)? '2': 
	       (intValue % 10 == 3)? '3': (intValue % 10 == 4)? '4':(intValue % 10 == 5)? '5': 
		   (intValue % 10 == 6)? '6': (intValue % 10 == 7)? '7': (intValue % 10 == 8)? '8': 
		   (intValue % 10 == 9)? '9': 'x');
		intValue /= 10;
		++i;
	}
	
	if(isNegative){
		temp[i] = '-';
		++i;
	}
	
	temp[i] = '\0';
	
	for(j = 0; j < i; ++j)
		result[j] = temp[i - j - 1];
	
	result[j] = '\0';
}	
