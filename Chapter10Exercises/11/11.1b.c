//编写第8章例8.4的dateUpdate函数（使用指针）

#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};

int main(void)
{
	struct date *dateUpdate(struct date *todayPtr);
	struct date today, tomorrow, *thisDay, *nextDay;
	
	thisDay = &today;
	nextDay = &tomorrow;
	
	printf("Enter today's date(mm dd yyyy): ");
	scanf("%i%i%i", &(thisDay->month), &(thisDay->day), &(thisDay->year));
	
	nextDay = dateUpdate(thisDay);
	
	printf("Tomorrow's date is %i/%i/%.2i.\n", nextDay->month,
	       nextDay->day, nextDay->year % 100);
		   
	return 0;
}

struct date *dateUpdate(struct date *todayPtr)
{
	struct date tomorrow,  *tomorrowPtr;
	int numberOfDays(struct date d);
	
	tomorrowPtr = &tomorrow;                 //必须声明，不然程序崩溃
	
	if(todayPtr->day !=  numberOfDays(*todayPtr)){
		tomorrowPtr->day = todayPtr->day + 1;
		tomorrowPtr->month = todayPtr->month;
		tomorrowPtr->year = todayPtr->year;
	}
	else if(todayPtr->month == 12){   //年末
		tomorrowPtr->day = 1;
		tomorrowPtr->month = 1;
		tomorrowPtr->year = todayPtr->year + 1;
	}
	else{                         //月末
		tomorrowPtr->day = 1;
		tomorrowPtr->month = todayPtr->month + 1;
		tomorrowPtr->year = todayPtr->year;
	}
	
	return (tomorrowPtr);
}

int numberOfDays(struct date d)
{
	int days;
	bool isLeapYear(struct date d);
	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30,
	                              31, 31, 30, 31, 30, 31};
	
	if(isLeapYear(d) == true && d.month == 2)
		days = 29;
	else
		days = daysPerMonth[d.month - 1];
	
	return days;
}

bool isLeapYear(struct date d)
{
	bool leapYearFlag;
	
	if((d.year % 4 == 0 && d.year % 100 != 0) ||
	   d.year % 400 == 0)
	   leapYearFlag = true;     //是闰年
    else
	   leapYearFlag = false;    //不是闰年
   
    return leapYearFlag;
}