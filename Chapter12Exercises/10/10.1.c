#include <stdio.h>
#define printx(n) printf("%i\n", x ## n)

// ## 运算符取得的（前或后）参数是传入的实际参数

int main(void)
{
	int i, x0 = 0, x1 = 1, x2 = 2;
	
	for(i = 0; i < 3; ++i)
		printx(i);         //系统报错，只能得到xi，xi未声明
	
	return 0;
}