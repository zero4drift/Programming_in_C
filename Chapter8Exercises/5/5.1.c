/*利用函数和结构体
  当时间达到午夜时
  切换到下一天    */
  
#include <stdio.h>
#include <stdbool.h>

bool isMidnight = false;

struct date
{
	int month;
	int day;
	int year;
};

struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct dateAndTime
{
	struct date sdate;
	struct time stime;
};

//此函数计算明天的日期

struct date dateUpdate(struct date today)
{
	struct date tomorrow;
	int numberOfDays(struct date d);
	
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
	
	return tomorrow;
}

//此函数计算一个月份中的天数

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

//此函数判断是否为闰年

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

//此函数每秒更新一次时间

struct time timeUpdate(struct time now)
{
	++now.seconds;
	
	if(now.seconds == 60){      //下一分钟
		now.seconds = 0;
		++now.minutes;
		
		if(now.minutes == 60){  //下一小时
			now.minutes = 0;
			++now.hour;
			
			if(now.hour == 24)  //午夜
				now.hour = 0;
				isMidnight = true;
		}
	}
	
	return now;
}

struct dateAndTime clockKeeper(struct dateAndTime dateTime)
{
	struct time timeUpdate(struct time now);
	struct date dateUpdate(struct date today);
	
	
	dateTime.stime = timeUpdate(dateTime.stime);
	
	if(isMidnight)
		dateTime.sdate = dateUpdate(dateTime.sdate);
	
	return dateTime;
}

int main(void)
{
	struct dateAndTime event = 
	{{2, 1, 2015}, {23, 59, 59}};
	
	printf("Date is %i/%i/%i and time is %.2i:%.2i:%.2i.\n",
	       event.sdate.month, event.sdate.day, event.sdate.year,
		   event.stime.hour, event.stime.minutes, event.stime.seconds);
	
	event = clockKeeper(event);
	
	printf("One second later...\n");
	printf("Date is %i/%i/%i and time is %.2i:%.2i:%.2i.\n",
	       event.sdate.month, event.sdate.day, event.sdate.year,
		   event.stime.hour, event.stime.minutes, event.stime.seconds);
	
	return 0;
}