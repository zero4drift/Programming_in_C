/*此函数计算一个数值的绝对值
  将epsilon的值作为参数传送给函数*/

#include <stdio.h>

float absoluteValue(float x)
{
	if(x < 0)
		x = -x;
	
	return x;
}


//此函数计算一个数字的平方根

float squareRoot(float x, float epsilon)
{
	float guess = 1.0;
	float absoluteValue(float x);
	
	while(absoluteValue(guess * guess - x) >= epsilon)
		guess = (x / guess + guess) / 2.0;
	
	return guess;
}


int main(void)
{
	float squareRoot(float x, float epsilon);
	
	printf("squareRoot(2.0) = %f\n", squareRoot(2.0, 0.00001));
	printf("squareRoot(144.0) = %f\n", squareRoot(144.0, 0.0001));
	printf("squareRoot(17.5) = %f\n", squareRoot(17.5, 0.001));
	
	return 0;
}