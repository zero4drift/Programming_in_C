//利用函数求解二次方程的根

#include <stdio.h>

//此函数计算一个数值的绝对值

float absoluteValue(float x)
{
	if(x < 0)
		x = -x;
	
	return x;
}

//此函数计算一个数值的平方根

float squareRoot(float x)
{
	const float epsilon = .00001;
	float       guess = 1.0;
	float       absoluteValue(float x);
	
	if(x < 0){
		printf("Roots to the quadratic equation are _Imaginary\n");
		return -1.0;
	}
	
	while(absoluteValue(guess * guess - x) >= epsilon)
		guess = (x / guess + guess) / 2.0;
	
	return guess;
}

int main(void)
{
	float a, b, c;
	float discriminantSquareRoot, x1, x2;
	float squareRoot(float x);
	
	printf("Enter a, b, c: \n");
	scanf("%f%f%f", &a, &b, &c);
	
	discriminantSquareRoot = squareRoot(b * b - 4 * a * c);
	
	if(discriminantSquareRoot != -1.0){
		x1 = (-b + discriminantSquareRoot) / (2 * a);
		x2 = (-b - discriminantSquareRoot) / (2 * a);
		
		printf("Roots to the quadratic equation are: %f, %f", x1, x2);	
	}
	
	return 0;
}