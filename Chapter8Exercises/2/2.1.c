//利用函数和结构体计算两个日期之间的天数

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

int caculateN(struct date oneDate)
{
	int f(int year, int month), g(int month);
	
	return (1461 * f(oneDate.year, oneDate.month) / 4 
	        + 153 * g(oneDate.month) / 5 + oneDate.day);
}

int main(void)
{
	int caculateN(struct date oneDate);
	struct date firstDate, secondDate;
	int days;
	
	printf("Enter firdt date(mm dd yyyy): ");
	scanf("%i%i%i", &firstDate.month, &firstDate.day, &firstDate.year);
	
	printf("Enter second date(mm dd yyyy): ");
	scanf("%i%i%i", &secondDate.month, &secondDate.day, &secondDate.year);
	
	days = caculateN(secondDate) - caculateN(firstDate);
	
	printf("Days between %i/%i/%.2i and %i/%i/%.2i is %i.\n", 
	       firstDate.month, firstDate.day, firstDate.year % 100,
		   secondDate.month, secondDate.day, secondDate.year % 100,
		   days);
	
	return 0;
}




