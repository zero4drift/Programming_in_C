/*接受终端键入的一个整数
  利用递归函数与条件运算符
  顺序提取该整数的各个数位
  转换并显示其英文        */

#include <stdio.h>

void firstDigitToEnglish(int n)
{
	if(n / 10 != 0)
		firstDigitToEnglish(n / 10);
	
	printf((n % 10 == 0)? "zero ": (n % 10 == 1)? "one ": (n % 10 == 2)? "two ": 
	       (n % 10 == 3)? "three ": (n % 10 == 4)? "four ":(n % 10 == 5)? "five ": 
		   (n % 10 == 6)? "six ": (n % 10 == 7)? "seven ": (n % 10 == 8)? "eight ": 
		   (n % 10 == 9)? "nine ": "Unknown digit.");
}

int main(void)
{
	int number, dict;
	
	printf("Enter your number.\n");
	scanf("%i", &number);
	
	if(number >= 0)
		firstDigitToEnglish(number);
	else{
		printf("minus ");
		firstDigitToEnglish(-number);
	}
	
	return 0;
}