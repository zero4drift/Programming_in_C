/*此程序介绍while语句
  并尝试使用负数输入测试输出*/

#include <stdio.h>

int main(void)
{
	int number, right_dict;
	
	printf("Enter your number.\n");
	scanf("%i", &number);
	
	while(number != 0){
		right_dict = number % 10;
		printf("%i", right_dict);
		number = number / 10;
	}
	
	printf("\n");
	
	return 0;
}