//利用函数求两个正整数的最小公倍数

#include <stdio.h>

//此函数求两个非负整数值的最大公约数

int gcd(int u, int v)
{
	int temp;
	
	while(v != 0){
		temp = u % v;
		u = v;
		v = temp;
	}
	
	return u;
}

int lcm(int u, int v)
{
	int result;
	int gcd(int u, int v);
	
	result = (u * v) / gcd(u, v);
	
	return result;
}

int main(void)
{
	int u, v, result;
	int lcm(int u, int v);
	
	printf("Enter two non-negative integers: \n");
	scanf("%i%i", &u, &v);
	
	result = lcm(u, v);
	printf("The lcm of %i and %i is %i\n", u, v, result);
	
	return 0;
}