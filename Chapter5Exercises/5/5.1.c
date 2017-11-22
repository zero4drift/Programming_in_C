/*此程序介绍while语句
  将整数的各个数位颠倒顺序
  对程序4.9进行修改
  使其输入负数时也能正常运行*/

#include <stdio.h>

int main(void)
{
	int number, right_dict;
	
	printf("Enter your number.\n");
	scanf("%i", &number);
	
	if(number >= 0){
		do{
		right_dict = number % 10;
		printf("%i", right_dict);
		number = number / 10;
		}
	while(number != 0);
	}
	
	else{
		number = -number;
		do{
		right_dict = number % 10;
		printf("%i", right_dict);
		number = number / 10;
		}
		while(number != 0);
		
		printf("-");
	}
	
	printf("\n");
	
	return 0;
}