//利用函数和结构体计算一个日期是星期几

#include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};

int f(int year, int month)
{
	if(month <= 2)
		return year - 1;
	else
		return year;
}

int g(int month)
{
	if(month <= 2)
		return month + 13;
	else
		return month + 1;
}

int caculateN(struct date testDate)
{
	int f(int year, int month), g(int month);
	
	return (1461 * f(testDate.year, testDate.month) / 4 
	        + 153 * g(testDate.month) / 5 + testDate.day);
}

int main(void)
{
	int caculateN(struct date testDate);
	struct date weekDay;
	int weekNumber;
	
	printf("Enter a date to justify which week day it is(mm dd yyyy): ");
	scanf("%i%i%i", &weekDay.month, &weekDay.day, &weekDay.year);
	
	weekNumber = (caculateN(weekDay) - 621049) % 7;
	
	printf("The day %i/%i/%i is: ", weekDay.month, weekDay.day, weekDay.year % 100);
	
	switch(weekNumber)
	{
		case 0:
		printf("Sunday");
		break;
		case 1:
		printf("Monday");
		break;
		case 2:
		printf("Tuesday");
		break;
		case 3:
		printf("Wednesday");
		break;
		case 4:
		printf("Thursday");
		break;
		case 5:
		printf("Friday");
		break;
		case 6:
		printf("Satday");
		break;
		default:
		printf("Bug in this program, please check through.");
		break;
	}
	
	printf("\n");
	
	return 0;
}