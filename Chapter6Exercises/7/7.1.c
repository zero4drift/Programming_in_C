/*应用埃拉托斯特尼筛选算法
  生成不大于150的所有质数 */

#include <stdio.h>

int main(void)
{
	int i, j, P[150];
	
	for(i = 2; i < 150; ++i)
		P[i] = 0;
	
	for(i = 2; i < 150; ++i){
		for(j = 2 * i; j < 150; j += i)
			P[j] = 1;	
	}
	
	for(i = 2; i < 150; ++i)
		if(!P[i])
			printf("%i ", i);
	
	printf("\n");
	
	return 0;
}