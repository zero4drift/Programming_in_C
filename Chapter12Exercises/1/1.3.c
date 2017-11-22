/* 此程序演示使用#include语句的用法
   注意：这个程序假定在一个名为metric.h
   的文件中给出了定义                   */
   
#include <stdio.h>
#include "metric.h"

int main(void)
{
	float liters, gallons;
	
	printf("*** Liters to Gallons ***\n\n");
	printf("Enter the number of liters: ");
	scanf("%f", &liters);
	
	gallons = liters * QUARTS_PER_LITER / 4.0;
	printf("%g liters = %g gallons\n", liters, gallons);
	
	return 0;
}
