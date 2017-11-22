//此程序确定明天的日期

#include <stdio.h>
#include <stdbool.h>

struct data
{
	int month;
	int day;
	int year;
};

int main(void)
{
	
	struct data today, tomorrow;
	int numberOfDays(struct data d);
    
	printf("Enter today's date(mm dd yyyy): ");
	scanf("%i%i%i", &today.month, &today.day, &today.year);
	
	if(today.day !=  numberOfDays(today)){
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}
	else if(today.month == 12){   //年末
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}
	else{                         //月末
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}
	
	printf("Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month,
	       tomorrow.day, tomorrow.year % 100);
		   
	return 0;
}

//此函数计算一个月份中的天数

int numberOfDays(struct data d)
{
	int days;
	bool isLeapYear(struct data d);
	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30,
	                              31, 31, 30, 31, 30, 31};
	
	if(isLeapYear(d) == true && d.month == 2)
		days = 29;
	else
		days = daysPerMonth[d.month - 1];
	
	return days;
}

//此函数判断是否为闰年

bool isLeapYear(struct data d)
{
	bool leapYearFlag;
	
	if((d.year % 4 == 0 && d.year % 100 != 0) ||
	   d.year % 400 == 0)
	   leapYearFlag = true;     //是闰年
    else
	   leapYearFlag = false;    //不是闰年
   
    return leapYearFlag;
}