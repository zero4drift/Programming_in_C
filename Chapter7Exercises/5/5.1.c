//此函数计算一个数值的绝对值

#include <stdio.h>

float absoluteValue(float x)
{
	if(x < 0)
		x = -x;
	
	return x;
}


//此函数计算一个数字的平方根

float squareRoot(float x)
{
	const float epsilon = .00001;
	float       guess = 1.0;
	float absoluteValue(float x);
	
	while(absoluteValue(x / (guess * guess) - 1) >= epsilon)
		guess = (x / guess + guess) / 2.0;
	
	return guess;
}


int main(void)
{
	float squareRoot(float x);
	
	printf("squareRoot(2.0) = %f\n", squareRoot(2.0));
	printf("squareRoot(144.0) = %f\n", squareRoot(144.0));
	printf("squareRoot(17.5) = %f\n", squareRoot(17.5));
	
	return 0;
}