//使用typedef定义一个类型表示一个指向函数的指针

#include <stdio.h>
typedef int (*FunctionPtr)(void);

int main(void)
{
	int returnValue;
	int sayHello();
	FunctionPtr helloPtr;
	
	helloPtr = sayHello;
	
	printf("%i\n", helloPtr());
	
	return 0;
}

int sayHello()
{
	return 1;
}