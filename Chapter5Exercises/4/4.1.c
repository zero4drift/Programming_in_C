//模拟简单计算器

#include <stdio.h>

int main(void)
{
	float value, temp;
	char operator;
	
	while(operator != 'E'){
		printf("Enter number and operator:\n");
		scanf("%f %c", &value, &operator);
		
		if(operator == 'S'){
			temp = value;
			printf("= %f\n", temp);
		}
		
		else if(operator == '+'){
			temp += value;
			printf("= %f\n", temp);
		}
		
		else if(operator == '-'){
			temp -= value;
			printf("= %f\n", temp);
		}
		
		else if(operator == '*'){
			temp *= value;
			printf("= %f\n", temp);
		}
		
		else if(operator == '/'){
			if(value == 0)
				printf("Division by zero.\n");
			else{
				temp /= value;
				printf("= %f\n", temp);
			}
		}
		
		else if(operator == 'E')
			printf("= %f\n", temp);
		
		else
			printf("Unknown operator.\n");
	}
	
	return 0;
}