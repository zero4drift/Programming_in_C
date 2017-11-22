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
	void dateUpdate(struct date *todayPtr);
	struct date *testDay;
	
	printf("Enter today's date(mm dd yyyy): ");
	scanf("%i%i%i", &(testDay->month), &(testDay->day), &(testDay->year));
	
    dateUpdate(testDay);
	
	printf("Tomorrow's date is %i/%i/%.2i.\n", testDay->month,
	       testDay->day, testDay->year % 100);
		   
	return 0;
}

void dateUpdate(struct date *dayPtr)
{
	int numberOfDays(struct date *d);
	
	if(dayPtr->day !=  numberOfDays(dayPtr)){
		dayPtr->day += 1;
	}
	else if(dayPtr->month == 12){   //年末
		dayPtr->day = 1;
		dayPtr->month = 1;
		dayPtr->year += 1;
	}
	else{                         //月末
		dayPtr->day = 1;
		dayPtr->month += 1;
	}
}

int numberOfDays(struct date *d)
{
	int days;
	bool isLeapYear(struct date *d);
	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30,
	                              31, 31, 30, 31, 30, 31};
	
	if(isLeapYear(d) == true && d->month == 2)
		days = 29;
	else
		days = daysPerMonth[d->month - 1];
	
	return days;
}

bool isLeapYear(struct date *d)
{
	bool leapYearFlag;
	
	if((d->year % 4 == 0 && d->year % 100 != 0) ||
	   d->year % 400 == 0)
	   leapYearFlag = true;     //是闰年
    else
	   leapYearFlag = false;    //不是闰年
   
    return leapYearFlag;
}