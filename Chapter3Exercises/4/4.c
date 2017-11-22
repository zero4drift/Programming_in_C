//将华氏度（F）转换为摄氏度（C）

#include <stdio.h>

int main(void)
{
	int temF = 27;
	float tempC;
	
	tempC = (temF - 32) / 1.8;
	printf("Temperature transformed is %f\n", tempC);
	
	return 0;
}