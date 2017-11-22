/*接受终端键入的一个整数
  提取该整数的各个数位
  转换并显示其英文            
  此程序转换的各数位英文与原数字颠倒*/

#include <stdio.h>

int firstDigit(int n)
{
	if(n / 10 != 0)
		firstDigit(n / 10)
	
	return (n % 10)
}

int main(void)
{
	int number, dict;
	
	printf("Enter your number.\n");
	scanf("%i", &number);
	
	if(number >= 0){
		do{
			dict = number % 10;
			
			switch(dict)
			{
				case 0:
				printf("zero ");
			    break;
			    case 1:
			    printf("one ");
			    break;
			    case 2:
			    printf("two ");
			    break;
			    case 3:
			    printf("three ");
			    break;
				case 4:
			    printf("four ");
			    break;
			    case 5:
			    printf("five ");
			    break;
			    case 6:
			    printf("six ");
			    break;
			    case 7:
			    printf("seven ");
			    break;
			    case 8:
			    printf("eight ");
			    break;
			    case 9:
			    printf("nine ");
			    break;
			    default:
			    printf("Unknown interger.\n");
			    break;
			}
		number = number / 10;
		}
	while(number != 0);
	}
	
	else{
		number = -number;
		printf("minus ");
		do{
			dict = number % 10;
			
			switch(dict)
			{
				case 0:
				printf("zero ");
			    break;
			    case 1:
			    printf("one ");
			    break;
			    case 2:
			    printf("two ");
			    break;
			    case 3:
			    printf("three ");
			    break;
				case 4:
			    printf("four ");
			    break;
			    case 5:
			    printf("five ");
			    break;
			    case 6:
			    printf("six ");
			    break;
			    case 7:
			    printf("seven ");
			    break;
			    case 8:
			    printf("eight ");
			    break;
			    case 9:
			    printf("nine ");
			    break;
			    default:
			    printf("Unknown interger.\n");
			    break;
			}
		number = number / 10;
		}
	while(number != 0);
	}
	
	printf("\n");
	
	return 0;
}