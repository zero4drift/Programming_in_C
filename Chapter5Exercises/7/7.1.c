/*此程序生成质数表
  直接忽略所有偶数
  在for循环内检测isPrime值
  提高效率                */

#include <stdio.h>

int main(void)
{
	int p, d;
	_Bool isPrime;
	
	printf("2 ");
	
	for(p = 2; p <= 50; ++p){
		isPrime = 1;
		
		if( p > 2 && p % 2 != 0){
			for(d = 2; isPrime == 1 && d < p; ++d)
				if(p % d == 0)
					isPrime = 0;
			
            if(isPrime != 0)
				printf("%i ", p);
		}
	}
	
	printf("\n");
	return 0;
}