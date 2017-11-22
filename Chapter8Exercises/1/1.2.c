//此程序确定明天的日期

#include <stdio.h>

int main(void)
{
	struct data
	{
		int month;
		int day;
		int year;
	};
	
	struct data today, tomorrow;
	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30,
	                              31, 31, 30, 31, 30, 31};
    
	printf("Enter today's date(mm dd yyyy): ");
	scanf("%i%i%i", &today.month, &today.day, &today.year);
	
	if(today.day != daysPerMonth[today.month - 1]){
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